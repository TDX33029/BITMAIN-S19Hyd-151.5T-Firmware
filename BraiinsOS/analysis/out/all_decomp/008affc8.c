// FUN_008affc8 @ 008affc8 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_008affc8(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_100 [232];
  undefined4 local_18;
  undefined1 local_14;
  
  local_14 = 0;
  local_18 = param_1;
  iVar1 = thunk_FUN_016d4a50(0xf0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xf0);
  }
  FUN_016dd1aa(iVar1,auStack_100,0xf0);
  return CONCAT44(&UNK_01863c0c,iVar1);
}

