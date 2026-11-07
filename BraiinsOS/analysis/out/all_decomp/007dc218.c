// FUN_007dc218 @ 007dc218 size=88 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_007dc218(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 auStack_130 [276];
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_14;
  
  local_14 = 0;
  local_1c = param_1;
  local_18 = param_2;
  iVar1 = thunk_FUN_016d4a50(0x120);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x120);
  }
  FUN_016dd1aa(iVar1,auStack_130,0x120);
  return CONCAT44(&UNK_0185e574,iVar1);
}

