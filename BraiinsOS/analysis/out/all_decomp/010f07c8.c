// FUN_010f07c8 @ 010f07c8 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_010f07c8(undefined4 param_1)

{
  int iVar1;
  undefined4 local_68 [22];
  undefined1 local_10;
  
  local_10 = 0;
  local_68[0] = param_1;
  iVar1 = thunk_FUN_016d4a50(0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x5c);
  }
  FUN_016dd1aa(iVar1,local_68,0x5c);
  return CONCAT44(&UNK_018860bc,iVar1);
}

