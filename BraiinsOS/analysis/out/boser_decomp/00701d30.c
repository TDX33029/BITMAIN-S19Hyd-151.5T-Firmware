// FUN_00701d30 @ 00701d30 size=144 calls_out=3 calls_in=1
// strings: 

void FUN_00701d30(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(uint *)(param_1 + 0x24) < param_2) {
    FUN_00702fc4(param_1 + 0x1c,param_2,*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 0x18));
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (param_2 <= (uint)(*(int *)(param_1 + 0x10) - iVar2)) {
    return;
  }
  uVar1 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x28);
  uVar3 = 0x1ffffff;
  if (uVar1 < 0x1ffffff) {
    uVar3 = uVar1;
  }
  if (param_2 < uVar3 - iVar2) {
    iVar2 = FUN_00702534(param_1 + 0x10);
    if (iVar2 == -0x7fffffff) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x18);
  }
  FUN_00702520(param_1 + 0x10,iVar2,param_2);
  return;
}

