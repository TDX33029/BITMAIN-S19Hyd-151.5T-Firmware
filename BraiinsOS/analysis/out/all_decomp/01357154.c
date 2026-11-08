// FUN_01357154 @ 01357154 size=1048 calls_out=10 calls_in=2
// strings: 

void FUN_01357154(int *param_1,int *param_2,char *param_3,uint param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 auStack_134 [28];
  uint local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 local_f8;
  undefined1 local_f6;
  char *local_f4;
  uint local_f0;
  int local_ec;
  uint local_e8;
  undefined1 local_e4;
  undefined2 local_e3;
  undefined1 local_e1;
  undefined1 local_e0;
  undefined4 local_df;
  undefined3 local_db;
  undefined1 uStack_d8;
  undefined3 uStack_d7;
  undefined1 local_d4;
  undefined2 local_d3;
  undefined1 local_d1;
  undefined2 local_d0;
  undefined1 local_ce;
  int local_cc;
  uint local_c8;
  undefined1 local_c4;
  undefined2 uStack_c3;
  undefined1 uStack_c1;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 local_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int local_94;
  int iStack_90;
  int *piStack_8c;
  char *local_88;
  undefined4 local_84;
  int *local_80;
  undefined4 uStack_78;
  undefined3 uStack_74;
  uint local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  int iStack_44;
  int local_40;
  uint local_3c;
  int iStack_38;
  int iStack_34;
  undefined4 local_30;
  
  if (((param_4 != 0) && (*param_3 == '#')) && (uVar6 = param_2[1], param_4 <= uVar6)) {
    iVar3 = *param_2;
    iVar2 = thunk_FUN_016dd50a(param_3,iVar3 + (uVar6 - param_4),param_4);
    if (iVar2 == 0) {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,uVar6);
      }
      iVar2 = thunk_FUN_016d4a50(uVar6);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar6);
      }
      FUN_016dd1aa(iVar2,iVar3,uVar6);
      iVar3 = param_2[3];
      iVar4 = param_2[4];
      param_1[4] = param_2[2];
      param_1[5] = iVar3;
      param_1[6] = iVar4;
      iVar3 = param_2[6];
      iVar4 = param_2[7];
      iVar5 = param_2[8];
      param_1[7] = param_2[5];
      param_1[8] = iVar3;
      param_1[9] = iVar4;
      param_1[10] = iVar5;
      *param_1 = -0x7ffffff6;
      param_1[1] = uVar6;
      param_1[2] = iVar2;
      param_1[3] = uVar6;
      return;
    }
  }
  FUN_0100c078(&local_cc,param_3,param_4,1,0);
  if ((local_b4 & 0xff) == 5) {
    if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,param_4);
    }
    if (param_4 == 0) {
      uVar6 = 0;
      iVar2 = 1;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(param_4);
      uVar6 = param_4;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,param_4);
      }
    }
    FUN_016dd1aa(iVar2,param_3,param_4);
    *(undefined1 *)(param_1 + 6) = 1;
    *param_1 = -0x80000000;
    param_1[1] = uVar6;
    *(undefined1 *)(param_1 + 5) = (undefined1)local_c8;
    param_1[2] = iVar2;
    param_1[3] = param_4;
    param_1[4] = local_cc;
    return;
  }
  local_84._0_3_ = (undefined3)((uint)iStack_bc >> 8);
  local_84._3_1_ = (undefined1)iStack_b8;
  uStack_d7 = (undefined3)((uint)iStack_b8 >> 8);
  local_d0 = local_b4._1_2_;
  local_ce = local_b4._3_1_;
  local_d4 = (undefined1)local_b4;
  local_e3 = uStack_c3;
  local_d3 = local_b4._1_2_;
  local_d1 = local_b4._3_1_;
  local_94 = *param_2;
  iStack_90 = param_2[1];
  local_e0 = (undefined1)local_c0;
  local_df = CONCAT13((undefined1)iStack_bc,local_c0._1_3_);
  local_e4 = local_c4;
  piStack_8c = param_2 + 2;
  local_80 = &local_ec;
  local_e8 = local_c8;
  local_e1 = uStack_c1;
  _local_db = CONCAT13(local_84._3_1_,(undefined3)local_84);
  local_ec = local_cc;
  local_f4 = param_3;
  local_f0 = param_4;
  local_88 = param_3;
  local_84 = param_4;
  FUN_01008c48(&local_cc,&local_94,&local_88);
  iVar2 = local_cc;
  uVar1 = (undefined1)local_c8;
  if (local_cc == -0x80000000) {
    FUN_0135bb1c(&local_cc,param_3,param_4,param_2,local_c8 & 0xff);
    FUN_016dd1aa(&local_50,&uStack_c3,0x23);
    param_1[0xb] = local_a0;
    param_1[0xc] = iStack_9c;
    param_1[0xd] = iStack_98;
    local_118 = local_50;
    uStack_114 = local_4c;
    uStack_110 = local_48;
    uStack_10c = iStack_44;
    local_108 = local_40;
    uStack_104 = local_3c;
    uStack_100 = iStack_38;
    uStack_fc = iStack_34;
    local_f8 = (undefined2)local_30;
    local_f6 = local_30._2_1_;
    *(undefined1 *)(param_1 + 2) = local_c4;
    param_1[1] = local_c8;
    FUN_016dd1aa((int)param_1 + 9,&local_118,0x23);
    *param_1 = local_cc;
    return;
  }
  uStack_78 = CONCAT13(local_c4,local_c8._1_3_);
  uStack_74 = (undefined3)(CONCAT13(uStack_c1,CONCAT21(uStack_c3,local_c4)) >> 8);
  FUN_016dd1aa((uint)&uStack_78 | 7,&local_c0,0x1c);
  local_13c = CONCAT31(local_13c._1_3_,uVar1);
  FUN_016dd1aa((int)&local_13c + 1,&uStack_78,0x23);
  local_48 = auStack_134;
  local_50 = local_13c;
  local_4c = local_138;
  FUN_01009fa4(&local_cc,&local_50,&DAT_0100d474);
  if (local_cc == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_cc,&DAT_01892124,&DAT_01892104);
  }
  local_48 = (undefined1 *)local_c0;
  iStack_44 = iStack_bc;
  local_40 = iStack_b8;
  local_3c = local_b4;
  iStack_38 = iStack_b0;
  iStack_34 = iStack_ac;
  local_30 = iStack_a8;
  local_50 = local_c8;
  param_1[1] = local_cc;
  param_1[2] = local_c8;
  param_1[3] = CONCAT13(uStack_c1,CONCAT21(uStack_c3,local_c4));
  param_1[4] = local_c0;
  param_1[5] = iStack_bc;
  param_1[6] = iStack_b8;
  param_1[7] = local_b4;
  param_1[8] = iStack_b0;
  param_1[9] = iStack_ac;
  param_1[10] = iStack_a8;
  *param_1 = -0x7ffffff6;
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(local_13c);
  }
  return;
}

