// FUN_00f26d88 @ 00f26d88 size=52 calls_out=1 calls_in=2
// strings: 

void FUN_00f26d88(undefined4 *param_1)

{
  switch(*param_1) {
  case 0:
  case 1:
  case 2:
  case 4:
    return;
  case 3:
    FUN_019bb7e0(param_1[1],param_1[2]);
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x00f26dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)param_1[1])();
    return;
  }
}

