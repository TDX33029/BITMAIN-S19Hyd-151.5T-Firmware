// FUN_01266b34 @ 01266b34 size=500 calls_out=9 calls_in=4
// strings: 

void FUN_01266b34(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_38;
  uint local_34;
  uint local_30;
  undefined1 uStack_21;
  
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  switch(uVar1) {
  case 0xc:
    uVar1 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = param_2[1];
    param_1[1] = uVar1;
    param_1[2] = uVar3;
    break;
  case 0xd:
    FUN_012c1060(param_1,param_2[1],param_2[2]);
    goto LAB_01266cd4;
  case 0xe:
    local_48 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    local_44 = uVar2;
    local_40 = uVar3;
    FUN_012fbd94(&local_38,uVar2,uVar3);
    uVar1 = local_48;
    if (local_38 == 0) {
      local_40 = local_44;
      local_44 = local_48;
    }
    else {
      if (local_48 != 0x80000000) {
        local_34 = local_44;
        local_38 = CONCAT31(local_38._1_3_,6);
        local_30 = local_40;
        uVar3 = FUN_01967740(&local_38,&uStack_21,&DAT_01d064c8);
        *param_1 = 0x80000000;
        param_1[1] = uVar3;
        FUN_019bb7e0(uVar1,uVar2);
        return;
      }
      uVar3 = local_34;
    }
    *param_1 = local_44;
    param_1[1] = local_40;
    param_1[2] = uVar3;
    break;
  case 0xf:
    uVar1 = param_2[1];
    uVar3 = param_2[2];
    FUN_012fbd94(&local_48,uVar1,uVar3);
    if (local_48 == 1) {
      local_38 = CONCAT31(local_38._1_3_,6);
      local_34 = uVar1;
      local_30 = uVar3;
      uVar1 = FUN_01967740(&local_38,&uStack_21,&DAT_01d064c8);
      *param_1 = 0x80000000;
      param_1[1] = uVar1;
    }
    else {
      uVar4 = 0;
      if ((int)local_40 < 0) {
LAB_01266c08:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar4,local_40);
      }
      if (local_40 == 0) {
        uVar3 = 1;
        uVar1 = 0;
      }
      else {
        uVar4 = 1;
        uVar3 = FUN_01298504(local_40,1);
        uVar1 = local_40;
        if (uVar3 == 0) goto LAB_01266c08;
      }
      FUN_01bed4e2(uVar3,local_44,local_40);
      *param_1 = uVar1;
      param_1[1] = uVar3;
      param_1[2] = local_40;
    }
LAB_01266cd4:
    FUN_012663cc(param_2);
    break;
  default:
    uVar1 = FUN_012664e4(param_2,&uStack_21,&DAT_01d064c8);
    *param_1 = 0x80000000;
    param_1[1] = uVar1;
  }
  return;
}

