// FUN_008c8890 @ 008c8890 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_008c8890(int *param_1)

{
  undefined4 *puVar1;
  
  if ((char)param_1[0x20] != '\x03') {
    return;
  }
  FUN_00a07b4c(param_1 + 6);
  if (param_1[0x1c] != 0) {
    thunk_FUN_016d3fb4(param_1[0x1d]);
  }
  puVar1 = (undefined4 *)0x0;
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)param_1[1];
  }
  if (*param_1 != 0 && puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008c88e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}

