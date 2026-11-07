// FUN_01436e54 @ 01436e54 size=144 calls_out=4 calls_in=0
// strings: 

void FUN_01436e54(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) != 3 || *(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x20));
    }
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    FUN_01410ec8(uVar1,*(undefined4 *)(param_1 + 0x30));
    FUN_0134aee0(*(undefined4 *)(param_1 + 0x28),uVar1,4,0x34);
    FUN_008e0ddc(param_1 + 0x34);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(*(undefined4 *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01436edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x5c) + 0xc))(*(undefined4 *)(param_1 + 0x60));
  return;
}

