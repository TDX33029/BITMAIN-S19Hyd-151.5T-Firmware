// FUN_008734fc @ 008734fc size=108 calls_out=3 calls_in=0
// strings: 

undefined8
FUN_008734fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_e;
  
  local_c0 = *param_4;
  uStack_bc = param_4[1];
  local_b8 = param_4[2];
  local_e = 0;
  local_b4 = param_1;
  local_b0 = param_2;
  local_ac = param_3;
  iVar1 = thunk_FUN_016d4a50(0xb4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xb4);
  }
  FUN_016dd1aa(iVar1,&local_c0,0xb4);
  return CONCAT44(&UNK_018616a4,iVar1);
}

