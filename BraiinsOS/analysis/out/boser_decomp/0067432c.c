// FUN_0067432c @ 0067432c size=120 calls_out=3 calls_in=0
// strings: 

undefined8
FUN_0067432c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_b;
  
  local_e0 = *param_5;
  uStack_dc = param_5[1];
  uStack_d8 = param_5[2];
  uStack_d4 = param_5[3];
  local_d0 = param_5[4];
  uStack_cc = param_5[5];
  uStack_c8 = param_5[6];
  uStack_c4 = param_5[7];
  local_b = 0;
  local_c0 = param_3;
  local_bc = param_4;
  local_14 = param_1;
  local_10 = param_2;
  iVar1 = thunk_FUN_01be5118(0xd8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xd8);
  }
  FUN_01bed4e2(iVar1,&local_e0,0xd8);
  return CONCAT44(&UNK_01c045a8,iVar1);
}

