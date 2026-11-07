// FUN_017f068c @ 017f068c size=168 calls_out=7 calls_in=1
// strings: 

void FUN_017f068c(int param_1)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  FUN_00f9604c();
  if (*(int *)(param_1 + 0x48) == 0) {
    FUN_017c30a4();
    return;
  }
  if (*(int *)(param_1 + 0x48) == 1) {
    iVar1 = *(int *)(param_1 + 0x4c);
    FUN_017f0108(iVar1);
    if (*(int *)(iVar1 + 0x28) != 0) {
      (**(code **)(*(int *)(iVar1 + 0x28) + 0x10))
                (iVar1 + 0x34,*(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x30),
                 *(undefined4 *)(iVar1 + 0x30),unaff_r4,unaff_r5,unaff_r11,unaff_lr);
    }
    thunk_FUN_01be4678(*(undefined4 *)(iVar1 + 0x48));
    if (*(byte *)(iVar1 + 0x90) < 4) {
      FUN_017ea70c(*(byte *)(iVar1 + 0x90),*(undefined4 *)(iVar1 + 0x94));
    }
    FUN_012840cc(iVar1 + 0xa0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c);
    FUN_017f0108(iVar1);
  }
  thunk_FUN_01be4678(iVar1);
  return;
}

