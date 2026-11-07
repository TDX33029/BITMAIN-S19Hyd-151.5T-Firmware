// FUN_008a80f8 @ 008a80f8 size=88 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_008a80f8(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 auStack_d0 [16];
  undefined4 local_c0;
  undefined1 local_bb;
  undefined1 local_ba;
  
  local_bb = 0;
  local_c0 = param_1;
  local_ba = param_2;
  iVar1 = thunk_FUN_016d4a50(200);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,200);
  }
  FUN_016dd1aa(iVar1,auStack_d0,200);
  return CONCAT44(&UNK_01863804,iVar1);
}

