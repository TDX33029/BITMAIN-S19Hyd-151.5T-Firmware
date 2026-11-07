// FUN_008e947c @ 008e947c size=48 calls_out=1 calls_in=0
// strings: 

void FUN_008e947c(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x008e94a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)param_1[3])();
  return;
}

