// FUN_00a52678 @ 00a52678 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00a52678(undefined4 param_1)

{
  int iVar1;
  undefined4 local_1e8 [2];
  undefined1 local_1e0;
  
  local_1e0 = 0;
  local_1e8[0] = param_1;
  iVar1 = thunk_FUN_016d4a50(0x1d8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x1d8);
  }
  FUN_016dd1aa(iVar1,local_1e8,0x1d8);
  return CONCAT44(&UNK_0186d0f8,iVar1);
}

