// FUN_017cd750 @ 017cd750 size=80 calls_out=0 calls_in=0
// strings: 

void FUN_017cd750(int *param_1)

{
  if (*(char *)((int)param_1 + 0x39) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x017cd79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[8] + 0x10))(param_1 + 0xb,param_1[9],param_1[10]);
    return;
  }
  if (*(char *)((int)param_1 + 0x39) == '\x03') {
    (**(code **)(*param_1 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
    *(undefined1 *)(param_1 + 0xe) = 0;
    return;
  }
  return;
}

