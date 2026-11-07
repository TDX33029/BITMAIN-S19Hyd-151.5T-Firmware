// FUN_00010e1c @ 00010e1c  size=316  callers=1
// program: monitor-ipsig


bool FUN_00010e1c(void)

{
  int iVar1;
  FILE *pFVar2;
  size_t sVar3;
  int local_4c;
  char acStack_48 [64];
  
  memset(acStack_48,0,0x40);
  sprintf(acStack_48,"/sys/class/gpio/gpio%d",0x3af);
  iVar1 = access(acStack_48,0);
  if (iVar1 != 0) {
    pFVar2 = fopen64("/sys/class/gpio/export","w");
    if (pFVar2 == (FILE *)0x0) {
      puts("Open read gpio/export");
      return true;
    }
    sprintf(acStack_48,"%d",0x3af);
    sVar3 = strlen(acStack_48);
    sVar3 = fwrite(acStack_48,sVar3,1,pFVar2);
    if (sVar3 == 1) {
      fclose(pFVar2);
    }
    else {
      puts("File Write Error!");
      fclose(pFVar2);
    }
  }
  sprintf(acStack_48,"/sys/class/gpio/gpio%d/value",0x3af);
  pFVar2 = fopen64(acStack_48,"r");
  if (pFVar2 == (FILE *)0x0) {
    puts("Open read recovery button failure");
    return true;
  }
  __isoc99_fscanf(pFVar2,"%d",&local_4c);
  fclose(pFVar2);
  return local_4c != 0;
}

