// FUN_00876988 @ 00876988 size=88 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00876988(undefined4 param_1)

{
  int iVar1;
  undefined1 local_c0 [16];
  undefined4 local_b0;
  undefined1 local_a8;
  
  local_a8 = 0;
  local_b0 = param_1;
  iVar1 = thunk_FUN_016d4a50(0xb8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xb8);
  }
  FUN_016dd1aa(iVar1,local_c0,0xb8);
  return CONCAT44(&UNK_01861850,iVar1);
}

