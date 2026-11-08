// FUN_01726824 @ 01726824 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_01726824(int *param_1)

{
  if (*param_1 == 2) {
switchD_01726848_caseD_2:
    return;
  }
  switch((char)param_1[2]) {
  case '\0':
    FUN_01a6322c(param_1 + 4);
    return;
  case '\x01':
  case '\x03':
    FUN_0187a650(param_1 + 4);
    return;
  case '\x02':
  case '\x04':
  case '\x05':
    goto switchD_01726848_caseD_2;
  case '\x06':
                    /* WARNING: Could not recover jumptable at 0x0172688c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[3] + 0x10))(param_1 + 6,param_1[4],param_1[5]);
    return;
  default:
    return;
  }
}

