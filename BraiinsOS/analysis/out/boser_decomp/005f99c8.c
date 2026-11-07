// FUN_005f99c8 @ 005f99c8 size=56 calls_out=1 calls_in=1
// strings: 

void FUN_005f99c8(int *param_1)

{
  if (*param_1 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x005f99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)param_1[1])((undefined4 *)param_1[1]);
    return;
  }
  FUN_019bb7e0();
  FUN_019bb7e0(param_1[3],param_1[4]);
  return;
}

