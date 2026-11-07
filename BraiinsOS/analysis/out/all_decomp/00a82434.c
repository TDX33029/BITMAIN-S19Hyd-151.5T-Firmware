// FUN_00a82434 @ 00a82434 size=88 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_00a82434(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return param_1;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  return param_1;
}

