// FUN_0003a53c @ 0003a53c  size=104  callers=1
// program: bmminer


undefined4 * FUN_0003a53c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)((int)param_2 + 0x15) == '\x0e') {
    uVar1 = 6;
    *(undefined1 *)((int)param_2 + 0x15) = 0x10;
  }
  else if (*(char *)((int)param_2 + 0x15) == '\x10') {
    uVar1 = 9;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
  }
  else {
    uVar1 = 0;
  }
  param_1[2] = uVar1;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

