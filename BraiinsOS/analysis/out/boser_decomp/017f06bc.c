// FUN_017f06bc @ 017f06bc size=132 calls_out=4 calls_in=4
// strings: 

void FUN_017f06bc(undefined4 param_1)

{
  int *piVar1;
  undefined4 local_68 [18];
  undefined2 local_20;
  undefined4 local_1c;
  undefined *local_18;
  
  local_1c = 1;
  local_18 = &DAT_01d1c1e4;
  local_20 = 0;
  local_68[0] = 2;
  piVar1 = (int *)thunk_FUN_01be5118(0x54);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x54);
  }
  FUN_01bed4e2(piVar1,local_68,0x54);
  if (*piVar1 != 2) {
    FUN_019bb7e0(piVar1[4],piVar1[5]);
  }
  FUN_01bed4e2(piVar1,param_1,0x48);
  return;
}

