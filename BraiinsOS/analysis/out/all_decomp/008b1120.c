// FUN_008b1120 @ 008b1120 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_008b1120(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_1b0 [24];
  undefined4 local_198;
  undefined1 local_190;
  
  local_190 = 0;
  local_198 = param_1;
  iVar1 = thunk_FUN_016d4a50(0x1a0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x1a0);
  }
  FUN_016dd1aa(iVar1,auStack_1b0,0x1a0);
  return CONCAT44(&UNK_01863c4c,iVar1);
}

