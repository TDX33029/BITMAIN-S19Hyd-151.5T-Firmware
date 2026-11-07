// FUN_008d0548 @ 008d0548 size=112 calls_out=3 calls_in=0
// strings: 

undefined8
FUN_008d0548(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  
  local_a7 = 0;
  local_bc = param_7;
  uStack_c4 = param_5;
  uStack_c0 = param_6;
  local_c8 = param_4;
  local_b4 = param_1;
  local_a6 = param_2;
  local_a5 = param_3;
  iVar1 = thunk_FUN_016d4a50(0xc0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xc0);
  }
  FUN_016dd1aa(iVar1,&local_c8,0xc0);
  return CONCAT44(&UNK_01864f30,iVar1);
}

