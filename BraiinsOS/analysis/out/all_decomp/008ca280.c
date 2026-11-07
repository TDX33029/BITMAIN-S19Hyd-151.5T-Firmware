// FUN_008ca280 @ 008ca280 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_008ca280(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_190 [4];
  undefined4 local_18c;
  undefined1 local_17b;
  
  local_17b = 0;
  local_18c = param_1;
  iVar1 = thunk_FUN_016d4a50(0x180);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x180);
  }
  FUN_016dd1aa(iVar1,auStack_190,0x180);
  return CONCAT44(&UNK_018646b8,iVar1);
}

