// FUN_012ceb48 @ 012ceb48 size=100 calls_out=5 calls_in=1
// strings: 

void FUN_012ceb48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != -0x80000000) {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    FUN_0165539c(uVar2,*(undefined4 *)(param_1 + 0x10));
    FUN_0134aee0(iVar1,uVar2,4,0x18);
    FUN_012cebd8(param_1 + 0x20);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
    FUN_01bf01d6(*(undefined4 *)(param_1 + 0x38));
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  return;
}

