// FUN_008718a4 @ 008718a4 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_008718a4(undefined4 param_1)

{
  int iVar1;
  undefined4 local_a8 [2];
  undefined1 local_a0;
  
  local_a0 = 0;
  local_a8[0] = param_1;
  iVar1 = thunk_FUN_016d4a50(0xa0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xa0);
  }
  FUN_016dd1aa(iVar1,local_a8,0xa0);
  return CONCAT44(&UNK_01861408,iVar1);
}

