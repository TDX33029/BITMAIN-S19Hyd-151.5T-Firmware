// FUN_00869c8c @ 00869c8c size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00869c8c(undefined4 param_1)

{
  int iVar1;
  undefined4 local_88 [2];
  undefined1 local_80;
  
  local_80 = 0;
  local_88[0] = param_1;
  iVar1 = thunk_FUN_016d4a50(0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar1,local_88,0x80);
  return CONCAT44(&UNK_018611e8,iVar1);
}

