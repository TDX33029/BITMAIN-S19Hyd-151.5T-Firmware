// FUN_010bea48 @ 010bea48 size=80 calls_out=3 calls_in=3
// strings: 

void FUN_010bea48(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  local_18 = *param_1;
  uStack_14 = param_1[1];
  *(undefined1 *)(puVar1 + 2) = 10;
  *puVar1 = 0;
  FUN_010beab8(puVar1,&local_18);
  return;
}

