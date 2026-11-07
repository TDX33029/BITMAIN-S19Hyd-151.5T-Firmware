// FUN_0168d0fc @ 0168d0fc size=184 calls_out=1 calls_in=1
// strings: 

void FUN_0168d0fc(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  if ((param_1[3] != -0x7ffffffd) && (0 < param_1[3])) {
    thunk_FUN_016d3fb4(param_1[4]);
  }
  if ((param_1[6] != -0x7ffffffd) && (0 < param_1[6])) {
    thunk_FUN_016d3fb4(param_1[7]);
  }
  if ((param_1[9] != -0x7ffffffd) && (0 < param_1[9])) {
    thunk_FUN_016d3fb4(param_1[10]);
  }
  if ((param_1[0xc] != -0x7ffffffd) && (0 < param_1[0xc])) {
    thunk_FUN_016d3fb4(param_1[0xd]);
  }
  if ((param_1[0xf] != -0x7ffffffd) && (0 < param_1[0xf])) {
    thunk_FUN_016d3fb4(param_1[0x10]);
  }
                    /* WARNING: Could not recover jumptable at 0x0168d1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0168d1b4 + *(int *)(&DAT_0168d1b4 + param_1[0x12] * 4)))();
  return;
}

