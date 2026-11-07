// FUN_007dc290 @ 007dc290 size=92 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_007dc290(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_138 [3];
  undefined4 local_12c;
  undefined1 local_128;
  undefined1 local_124;
  
  local_124 = 0;
  local_138[0] = param_3;
  local_12c = param_1;
  local_128 = param_2;
  iVar1 = thunk_FUN_016d4a50(0x128);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x128);
  }
  FUN_016dd1aa(iVar1,local_138,0x128);
  return CONCAT44(&UNK_0185e594,iVar1);
}

