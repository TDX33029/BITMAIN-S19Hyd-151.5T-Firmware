// FUN_000109c0 @ 000109c0  size=312  callers=1
// program: monitor-recobtn


undefined4 FUN_000109c0(void)

{
  int iVar1;
  FILE *pFVar2;
  size_t sVar3;
  undefined4 uVar4;
  int local_4c;
  char acStack_48 [64];
  
  memset(acStack_48,0,0x40);
  sprintf(acStack_48,"/sys/class/gpio/gpio%d",0x399);
  iVar1 = access(acStack_48,0);
  if (iVar1 == 0) {
    sprintf(acStack_48,"/sys/class/gpio/gpio%d/value",0x399);
    pFVar2 = fopen64(acStack_48,"r");
    if (pFVar2 == (FILE *)0x0) {
      puts("Open read recovery button failure");
      uVar4 = 0xffffffff;
    }
    else {
      __isoc99_fscanf(pFVar2,"%d",&local_4c);
      fclose(pFVar2);
      uVar4 = 0;
      if (local_4c != 0) {
        uVar4 = 1;
      }
    }
    return uVar4;
  }
  pFVar2 = fopen64("/sys/class/gpio/export","w");
  if (pFVar2 == (FILE *)0x0) {
    puts("Open read gpio/export");
    return 0xffffffff;
  }
  sprintf(acStack_48,"%d",0x399);
  sVar3 = strlen(acStack_48);
  sVar3 = fwrite(acStack_48,sVar3,1,pFVar2);
  if (sVar3 != 1) {
    puts("File Write Error!");
  }
  fclose(pFVar2);
  return 0xffffffff;
}

