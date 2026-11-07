// FUN_00818fa8 @ 00818fa8 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00818fa8(undefined4 param_1)

{
  int iVar1;
  undefined4 local_a8 [2];
  undefined1 local_a0;
  
  local_a0 = 0;
  local_a8[0] = param_1;
  iVar1 = thunk_FUN_016d4a50(0x9c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x9c);
  }
  FUN_016dd1aa(iVar1,local_a8,0x9c);
  return CONCAT44(&UNK_0185fac0,iVar1);
}

