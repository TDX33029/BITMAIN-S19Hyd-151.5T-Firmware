// FUN_008c72ec @ 008c72ec size=104 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_008c72ec(undefined4 param_1,undefined1 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_88;
  undefined1 local_87;
  
  local_b0 = *param_3;
  uStack_ac = param_3[1];
  local_a8 = param_3[2];
  local_88 = 0;
  local_a4 = param_1;
  local_87 = param_2;
  iVar1 = thunk_FUN_016d4a50(0xa8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xa8);
  }
  FUN_016dd1aa(iVar1,&local_b0,0xa8);
  return CONCAT44(&UNK_018645b8,iVar1);
}

