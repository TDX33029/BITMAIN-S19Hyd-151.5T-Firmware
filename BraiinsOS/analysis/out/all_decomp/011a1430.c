// FUN_011a1430 @ 011a1430 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_011a1430(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *param_1 = (int)puVar1;
  param_1[1] = (int)&DAT_018896a8;
  return;
}

