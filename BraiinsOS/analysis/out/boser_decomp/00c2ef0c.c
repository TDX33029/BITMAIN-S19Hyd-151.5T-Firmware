// FUN_00c2ef0c @ 00c2ef0c size=184 calls_out=5 calls_in=0
// strings: 

void FUN_00c2ef0c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  bool bVar3;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x34) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x30);
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x2c);
      }
      if (bVar3 && cVar1 == '\x03') {
        FUN_01139b38(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
        return;
      }
    }
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  FUN_00c2eed8(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0xd0);
  if (iVar2 == -0x7ffffffe) {
    return;
  }
  if (iVar2 == -0x7fffffff) {
    FUN_00a1ed90(param_1 + 0xd4);
    return;
  }
  if (iVar2 == -0x80000000) {
    return;
  }
  FUN_019bb7e0(iVar2,*(undefined4 *)(param_1 + 0xd4),extraout_r2,extraout_r3,unaff_r4,unaff_lr);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec));
  FUN_006a41c0(param_1 + 0xf4);
  return;
}

