// FUN_00847e18 @ 00847e18 size=80 calls_out=2 calls_in=0
// strings: 

void FUN_00847e18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x68);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x68);
  }
  *(undefined1 *)(puVar1 + 0x19) = 0;
  puVar1[0x18] = param_1;
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  return;
}

