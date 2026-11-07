// FUN_0155c9ac @ 0155c9ac size=80 calls_out=3 calls_in=1
// strings: 

void FUN_0155c9ac(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  FUN_0155ca1c(param_1,param_2,puVar1,&DAT_018a8c40);
  return;
}

