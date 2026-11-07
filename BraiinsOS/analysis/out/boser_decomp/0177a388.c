// FUN_0177a388 @ 0177a388 size=128 calls_out=3 calls_in=1
// strings: 

void FUN_0177a388(int *param_1)

{
  if (*param_1 != 2) {
    switch((char)param_1[2]) {
    case '\0':
      if (param_1[4] == 1) {
        if (param_1[7] == 0) {
          return;
        }
        thunk_FUN_01be4678(param_1[6]);
        return;
      }
      break;
    case '\x01':
    case '\x03':
      FUN_017793c0();
      FUN_008e1044(param_1 + 0x14);
      return;
    case '\x06':
                    /* WARNING: Could not recover jumptable at 0x0177a408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[3] + 0x10))(param_1 + 6,param_1[4],param_1[5]);
      return;
    }
  }
  return;
}

