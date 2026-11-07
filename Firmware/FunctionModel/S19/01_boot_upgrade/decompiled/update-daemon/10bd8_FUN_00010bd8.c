// FUN_00010bd8 @ 00010bd8  size=76  callers=2
// program: update-daemon


int FUN_00010bd8(char *param_1)

{
  size_t sVar1;
  int iVar2;
  byte *pbVar3;
  
  sVar1 = strlen(param_1);
  pbVar3 = (byte *)(param_1 + -1);
  iVar2 = 0;
  while (pbVar3 != (byte *)(param_1 + (sVar1 - 2))) {
    pbVar3 = pbVar3 + 1;
    iVar2 = ((uint)*pbVar3 + iVar2 + -0x30) * 10;
  }
  return (uint)(byte)param_1[sVar1 - 1] + iVar2 + -0x30;
}

