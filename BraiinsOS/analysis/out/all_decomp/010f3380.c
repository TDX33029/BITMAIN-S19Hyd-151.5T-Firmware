// FUN_010f3380 @ 010f3380 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_010f3380(undefined4 param_1)

{
  int iVar1;
  undefined4 local_58 [4];
  undefined1 local_48;
  
  local_48 = 0;
  local_58[0] = param_1;
  iVar1 = thunk_FUN_016d4a50(0x50);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x50);
  }
  FUN_016dd1aa(iVar1,local_58,0x50);
  return CONCAT44(&UNK_01886298,iVar1);
}

