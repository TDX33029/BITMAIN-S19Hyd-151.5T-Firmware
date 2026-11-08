// FUN_00facfc4 @ 00facfc4 size=56 calls_out=2 calls_in=3
// strings: 

void FUN_00facfc4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}

