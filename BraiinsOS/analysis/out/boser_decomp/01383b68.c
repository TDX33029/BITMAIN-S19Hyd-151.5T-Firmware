// FUN_01383b68 @ 01383b68 size=116 calls_out=1 calls_in=1
// strings: 

void FUN_01383b68(int param_1)

{
  if ((5 < *(byte *)(param_1 + 0x20) - 6) && (*(byte *)(param_1 + 0x20) < 3)) {
    FUN_01381bd4();
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(*(undefined4 *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01383bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x58) + 0xc))(*(undefined4 *)(param_1 + 0x5c));
  return;
}

