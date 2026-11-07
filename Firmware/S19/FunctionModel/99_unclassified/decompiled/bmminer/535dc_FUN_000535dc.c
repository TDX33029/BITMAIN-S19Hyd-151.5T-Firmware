// FUN_000535dc @ 000535dc  size=96  callers=0
// program: bmminer


int FUN_000535dc(int param_1,char *param_2)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  
  sVar1 = strlen(param_2);
  uVar2 = FUN_00052a98(param_2,sVar1,DAT_0050fc7c);
  iVar3 = FUN_00052fdc(param_1,*(int *)(param_1 + 4) +
                               (uVar2 & ~(-1 << (*(uint *)(param_1 + 8) & 0xff))) * 8,param_2,uVar2)
  ;
  if (iVar3 != 0) {
    iVar3 = iVar3 + 8;
  }
  return iVar3;
}

