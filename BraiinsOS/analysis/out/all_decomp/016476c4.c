// FUN_016476c4 @ 016476c4 size=164 calls_out=6 calls_in=2
// strings: A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_016476c4(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  if (*param_1 == 0) {
    FUN_0165b5bc();
    return;
  }
  if (*piVar1 == -0x80000000) {
    FUN_016399a4(param_1[2],param_2,0,0,param_3);
    return;
  }
  if (*(int *)(param_2 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_018ad344);
  }
  FUN_0165af70(piVar1,(int *)(param_2 + 0x30),0,0,param_3);
  FUN_0163edcc(piVar1);
  FUN_01644d00(param_1 + 8);
  return;
}

