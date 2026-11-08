// FUN_016f88c8 @ 016f88c8 size=128 calls_out=5 calls_in=1
// strings: 

void FUN_016f88c8(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_78 [18];
  undefined2 local_30;
  undefined4 local_1c;
  undefined *local_18;
  
  local_1c = FUN_01754244();
  local_30 = 2;
  local_78[0] = 2;
  local_18 = &DAT_01d19c54;
  piVar1 = (int *)thunk_FUN_01be5118(100);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,100);
  }
  FUN_01bed4e2(piVar1,local_78,100);
  if (*piVar1 != 2) {
    FUN_019bb7e0(piVar1[4],piVar1[5]);
  }
  FUN_01bed4e2(piVar1,param_2,0x48);
  return;
}

