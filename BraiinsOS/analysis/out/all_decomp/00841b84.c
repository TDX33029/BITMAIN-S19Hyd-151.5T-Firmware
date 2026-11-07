// FUN_00841b84 @ 00841b84 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_00841b84(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint local_c;
  
  local_c = local_c & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar1 = param_1;
  puVar1[1] = uStack_14;
  puVar1[2] = uStack_10;
  puVar1[3] = local_c;
  return;
}

