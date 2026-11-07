// FUN_00022cdc @ 00022cdc  size=208  callers=0
// program: cgminer


char * FUN_00022cdc(char *param_1,char *param_2)

{
  size_t sVar1;
  char *pcVar2;
  uint uVar3;
  
  sVar1 = strlen(param_2);
  if (sVar1 == 0) {
    pcVar2 = param_1;
  }
  else {
    uVar3 = sVar1 + 1;
    if (param_1 == (char *)0x0) {
      if ((uVar3 & 3) != 0) {
        uVar3 = (uVar3 & 0xfffffffc) + 4;
      }
      pcVar2 = (char *)FUN_0001f860(uVar3,"util.c","realloc_strcat",0xe3b);
      strcpy(pcVar2,param_2);
      return pcVar2;
    }
    sVar1 = strlen(param_1);
    uVar3 = sVar1 + uVar3;
    if ((uVar3 & 3) != 0) {
      uVar3 = (uVar3 & 0xfffffffc) + 4;
    }
    pcVar2 = (char *)FUN_0001f860(uVar3,"util.c","realloc_strcat",0xe3b);
    sprintf(pcVar2,"%s%s",param_1,param_2);
    free(param_1);
  }
  return pcVar2;
}

