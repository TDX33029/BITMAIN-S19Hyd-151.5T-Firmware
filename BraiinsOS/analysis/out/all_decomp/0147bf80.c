// FUN_0147bf80 @ 0147bf80 size=236 calls_out=4 calls_in=1
// strings: 

void FUN_0147bf80(byte *param_1)

{
  int *piVar1;
  
  switch(param_1[0x1b0]) {
  case 0:
    if (1 < *param_1) {
      piVar1 = *(int **)(param_1 + 4);
      (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
      thunk_FUN_016d3fb4(piVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0147bff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 0x10))
              (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    return;
  default:
    goto switchD_0147bf9c_caseD_1;
  case 3:
    FUN_0147b8c4(param_1 + 0x1b8);
    goto LAB_0147c07c;
  case 4:
    if (*(int *)(param_1 + 0x1d8) != 9) {
      FUN_0147af54(param_1 + 0x1b8);
      FUN_0147b8c4(param_1 + 0x1d8);
    }
    goto LAB_0147c070;
  case 5:
    FUN_0147b8c4(param_1 + 0x1c0);
    param_1[0x1b2] = 0;
    break;
  case 6:
    FUN_0147af54(param_1 + 0x1d4);
    param_1[0x1b3] = 0;
    FUN_0147beec(param_1 + 0x1b8);
    param_1[0x1b4] = 0;
  }
  if (*(int *)(param_1 + 0x70) == 9) {
    param_1[0x1b6] = 0;
  }
  else {
    param_1[0x1b5] = 0;
  }
LAB_0147c070:
  param_1[0x1b5] = 0;
  param_1[0x1b6] = 0;
LAB_0147c07c:
  param_1[0x1b7] = 0;
switchD_0147bf9c_caseD_1:
  return;
}

