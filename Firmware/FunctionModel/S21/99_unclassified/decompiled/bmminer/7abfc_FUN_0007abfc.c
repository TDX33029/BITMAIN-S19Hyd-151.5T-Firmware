// FUN_0007abfc @ 0007abfc  size=172  callers=2
// program: bmminer


undefined4 FUN_0007abfc(int param_1,char *param_2)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  sVar1 = strlen(param_2);
  uVar2 = FUN_000793c8(param_2,sVar1,DAT_00945394);
  iVar3 = FUN_0007a4b0(param_1,*(int *)(param_1 + 4) +
                               (uVar2 & (1 << (*(uint *)(param_1 + 8) & 0xff)) - 1U) * 8,param_2,
                       uVar2);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar3 + 0x14);
  }
  return uVar4;
}

