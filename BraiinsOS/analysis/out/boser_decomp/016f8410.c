// FUN_016f8410 @ 016f8410 size=252 calls_out=5 calls_in=4
// strings: 

int FUN_016f8410(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_a0 [18];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 *local_44;
  undefined *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  uStack_28 = param_1[4];
  if (param_2 == 0) {
    local_44 = (undefined4 *)0x0;
  }
  else {
    iVar1 = FUN_01298504(param_3,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_3);
    }
    FUN_01bed4e2(iVar1,param_2,param_3);
    local_44 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (local_44 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *local_44 = param_3;
    local_44[1] = iVar1;
    local_44[2] = param_3;
  }
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
  uStack_48 = param_1[4];
  local_a0[0] = 2;
  local_40 = &DAT_01d18928;
  iVar1 = thunk_FUN_01be5118(100);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,100);
  }
  FUN_01bed4e2(iVar1,local_a0,100);
  return iVar1;
}

