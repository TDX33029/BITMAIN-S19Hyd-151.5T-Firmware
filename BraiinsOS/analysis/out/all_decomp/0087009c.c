// FUN_0087009c @ 0087009c size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0087009c(undefined4 param_1)

{
  int iVar1;
  undefined4 local_b0 [8];
  undefined1 local_8e;
  
  local_8e = 0;
  local_b0[0] = param_1;
  iVar1 = thunk_FUN_016d4a50(0xa8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xa8);
  }
  FUN_016dd1aa(iVar1,local_b0,0xa8);
  return CONCAT44(&UNK_018613c8,iVar1);
}

