// FUN_01881908 @ 01881908 size=84 calls_out=1 calls_in=0
// strings: 

void FUN_01881908(int param_1)

{
  if (*(char *)(param_1 + 0x21) != '\x02') {
    FUN_01880dd4(param_1 + 8);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*(int *)(param_1 + 0x28) + 0xc))(*(undefined4 *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01881954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x34) + 0xc))(*(undefined4 *)(param_1 + 0x38));
  return;
}

