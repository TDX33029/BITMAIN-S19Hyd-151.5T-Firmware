// FUN_007d7248 @ 007d7248 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_007d7248(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_160 [4];
  undefined4 local_15c;
  undefined1 local_155;
  
  local_155 = 0;
  local_15c = param_1;
  iVar1 = thunk_FUN_016d4a50(0x150);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x150);
  }
  FUN_016dd1aa(iVar1,auStack_160,0x150);
  return CONCAT44(&UNK_0185e44c,iVar1);
}

