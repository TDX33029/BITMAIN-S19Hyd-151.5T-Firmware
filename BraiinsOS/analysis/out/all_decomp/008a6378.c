// FUN_008a6378 @ 008a6378 size=92 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_008a6378(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_84;
  
  local_84 = 0;
  local_c0 = param_2;
  uStack_bc = param_3;
  local_b8 = param_1;
  local_b4 = param_4;
  iVar1 = thunk_FUN_016d4a50(0xb8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xb8);
  }
  FUN_016dd1aa(iVar1,&local_c0,0xb8);
  return CONCAT44(&PTR_LAB_018636f4,iVar1);
}

