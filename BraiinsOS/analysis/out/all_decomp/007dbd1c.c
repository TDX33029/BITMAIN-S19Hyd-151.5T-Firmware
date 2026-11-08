// FUN_007dbd1c @ 007dbd1c size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_007dbd1c(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_130 [280];
  undefined4 local_18;
  undefined1 local_14;
  
  local_14 = 0;
  local_18 = param_1;
  iVar1 = thunk_FUN_016d4a50(0x120);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x120);
  }
  FUN_016dd1aa(iVar1,auStack_130,0x120);
  return CONCAT44(&DAT_0185e4ac,iVar1);
}

