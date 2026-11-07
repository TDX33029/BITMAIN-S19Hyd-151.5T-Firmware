// FUN_008370a4 @ 008370a4 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_008370a4(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_b0 [12];
  undefined4 local_a4;
  undefined1 local_8d;
  
  local_8d = 0;
  local_a4 = param_1;
  iVar1 = thunk_FUN_016d4a50(0xa8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xa8);
  }
  FUN_016dd1aa(iVar1,auStack_b0,0xa8);
  return CONCAT44(&UNK_018604c4,iVar1);
}

