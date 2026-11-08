// FUN_0154e678 @ 0154e678 size=1360 calls_out=9 calls_in=2
// strings: 

void FUN_0154e678(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5
                 )

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_128 [68];
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  undefined1 local_e1;
  undefined1 local_e0;
  undefined1 local_df;
  undefined1 local_de;
  undefined1 local_dd;
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined1 local_d2;
  undefined1 local_d1;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  int local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  uint local_60;
  ushort local_58;
  undefined1 local_56;
  undefined1 local_55;
  ushort *local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  int *local_2c;
  uint local_28;
  
  iVar3 = *(int *)(param_2 + 0x38);
  uVar11 = *(undefined4 *)(iVar3 + 0x18);
  iVar8 = *(int *)(iVar3 + 0x1c);
  local_98 = 0;
  local_9c = 1;
  local_a0 = 0;
  FUN_0150e524(param_5,&local_a0,0x80000000);
  uVar7 = local_98;
  uVar2 = local_9c;
  iVar1 = local_a0;
  iVar4 = *param_5;
  if (((-1 < iVar4) && (param_5[8] != 0)) &&
     (iVar5 = param_5[7] + param_5[8] * 0x24, *(int *)(iVar5 + -0x24) == -0x7ffffff6)) {
    local_98 = 0;
    local_9c = 1;
    local_a0 = 0;
    FUN_0150a2d4(*(undefined4 *)(iVar5 + -0x10),*(undefined4 *)(iVar5 + -0xc),&local_a0);
    uVar6 = local_98;
    if (local_a0 != 0) {
      thunk_FUN_016d3fb4(local_9c);
    }
    if (uVar6 <= uVar7) {
      uVar7 = uVar7 - uVar6;
    }
  }
  uVar12 = (**(code **)(iVar8 + 0xc))(uVar11);
  iVar8 = (int)((ulonglong)uVar12 >> 0x20);
  uVar11 = (undefined4)uVar12;
  pcVar10 = *(code **)(iVar8 + 0x18);
  (*pcVar10)(uVar11,param_3,param_4);
  (*pcVar10)(uVar11,uVar2,uVar7);
  (**(code **)(iVar8 + 0x14))(auStack_128,uVar11);
  uVar12 = (**(code **)(*(int *)(iVar3 + 0xc) + 0x10))
                     (*(undefined4 *)(iVar3 + 8),0,*(undefined4 *)(param_2 + 0x28),
                      *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  iVar8 = (int)((ulonglong)uVar12 >> 0x20);
  uVar13 = (**(code **)(*(int *)(iVar3 + 0x1c) + 0xc))(*(undefined4 *)(iVar3 + 0x18));
  (**(code **)((int)((ulonglong)uVar13 >> 0x20) + 0x14))(&local_a0,(int)uVar13);
  uVar7 = local_60;
  if (0x40 < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_60,0x40,&DAT_018a7f14);
  }
  uVar6 = (**(code **)(iVar8 + 0x14))((int)uVar12);
  local_58 = (ushort)((uVar6 & 0xff) << 8) | (ushort)(uVar6 >> 8) & 0xff;
  local_34 = &local_55;
  local_56 = 0x10;
  local_30 = 1;
  local_48 = 1;
  local_4c = &local_56;
  local_50 = 2;
  local_54 = &local_58;
  local_3c = &DAT_0040c472;
  local_55 = (undefined1)uVar7;
  local_28 = uVar7;
  local_38 = 10;
  local_40 = 6;
  local_44 = &DAT_0040c506;
  local_2c = &local_a0;
  (**(code **)(iVar8 + 0x10))(&local_e4,(int)uVar12,&local_54,6);
  FUN_01558538(&local_a0,iVar3,&local_e4,auStack_128);
  local_e4 = 0;
  local_e3 = 0;
  local_e2 = 0;
  local_e1 = 0;
  local_e0 = 0;
  local_df = 0;
  local_de = 0;
  local_dd = 0;
  local_dc = 0;
  local_db = 0;
  local_da = 0;
  local_d9 = 0;
  local_d8 = 0;
  local_d7 = 0;
  local_d6 = 0;
  local_d5 = 0;
  local_d4 = 0;
  local_d3 = 0;
  local_d2 = 0;
  local_d1 = 0;
  local_d0 = 0;
  local_cf = 0;
  local_ce = 0;
  local_cd = 0;
  local_cc = 0;
  local_cb = 0;
  local_ca = 0;
  local_c9 = 0;
  local_c8 = 0;
  local_c7 = 0;
  local_c6 = 0;
  local_c5 = 0;
  local_c4 = 0;
  local_c3 = 0;
  local_c2 = 0;
  local_c1 = 0;
  local_c0 = 0;
  local_bf = 0;
  local_be = 0;
  local_bd = 0;
  local_bc = 0;
  local_bb = 0;
  local_ba = 0;
  local_b9 = 0;
  local_b8 = 0;
  local_b7 = 0;
  local_b6 = 0;
  local_b5 = 0;
  local_b4 = 0;
  local_b3 = 0;
  local_b2 = 0;
  local_b1 = 0;
  local_b0 = 0;
  local_af = 0;
  local_ae = 0;
  local_ad = 0;
  local_ac = 0;
  local_ab = 0;
  local_aa = 0;
  local_a9 = 0;
  local_a8 = 0;
  local_a7 = 0;
  local_a6 = 0;
  local_a5 = 0;
  if (-1 < iVar4) {
    if (0x40 < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,local_60,0x40,&DAT_018a7f04);
    }
    if ((param_5[8] != 0) &&
       (iVar4 = param_5[7] + param_5[8] * 0x24, *(int *)(iVar4 + -0x24) == -0x7ffffff6)) {
      if (local_60 == 0) {
        uVar6 = 1;
        uVar7 = 0;
      }
      else {
        uVar6 = thunk_FUN_016d4a50(local_60);
        uVar7 = local_60;
        if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_60);
        }
      }
      FUN_016dd1aa(uVar6,&local_a0,local_60);
      if (*(int *)(iVar4 + -0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0,0,&DAT_018a7700);
      }
      puVar9 = *(uint **)(iVar4 + -0x10);
      if (*puVar9 != 0) {
        thunk_FUN_016d3fb4(puVar9[1]);
      }
      *puVar9 = uVar7;
      puVar9[1] = uVar6;
      puVar9[2] = local_60;
    }
  }
  *param_1 = uVar12;
  *(int *)(param_1 + 1) = iVar3;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_93 = 0;
  local_92 = 0;
  local_91 = 0;
  local_90 = 0;
  local_8f = 0;
  local_8e = 0;
  local_8d = 0;
  local_8c = 0;
  local_8b = 0;
  local_8a = 0;
  local_89 = 0;
  local_88 = 0;
  local_87 = 0;
  local_86 = 0;
  local_85 = 0;
  local_84 = 0;
  local_83 = 0;
  local_82 = 0;
  local_81 = 0;
  local_80 = 0;
  local_7f = 0;
  local_7e = 0;
  local_7d = 0;
  local_7c = 0;
  local_7b = 0;
  local_7a = 0;
  local_79 = 0;
  local_78 = 0;
  local_77 = 0;
  local_76 = 0;
  local_75 = 0;
  local_74 = 0;
  local_73 = 0;
  local_72 = 0;
  local_71 = 0;
  local_70 = 0;
  local_6f = 0;
  local_6e = 0;
  local_6d = 0;
  local_6c = 0;
  local_6b = 0;
  local_6a = 0;
  local_69 = 0;
  local_68 = 0;
  local_67 = 0;
  local_66 = 0;
  local_65 = 0;
  local_64 = 0;
  local_63 = 0;
  local_62 = 0;
  local_61 = 0;
  if (iVar1 != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
  return;
}

