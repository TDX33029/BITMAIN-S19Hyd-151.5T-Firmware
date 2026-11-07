// FUN_0062f060 @ 0062f060 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_0062f060(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar1 = 0x80000000;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  return;
}

