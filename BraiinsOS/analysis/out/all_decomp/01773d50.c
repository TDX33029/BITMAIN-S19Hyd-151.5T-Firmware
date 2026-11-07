// FUN_01773d50 @ 01773d50 size=10540 calls_out=9 calls_in=1
// strings: fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

undefined8
FUN_01773d50(int param_1,byte *param_2,byte *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,int param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  int iVar56;
  int iVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  int iVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  int iVar81;
  int iVar82;
  uint uVar83;
  uint uVar84;
  int iVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  int iVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  uint uVar102;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  uint uVar106;
  int iVar107;
  uint uVar108;
  uint uVar109;
  int iVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  int iVar117;
  uint uVar118;
  int iVar119;
  uint uVar120;
  uint uVar121;
  int iVar122;
  uint uVar123;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  int iVar127;
  int iVar128;
  uint uVar129;
  uint uVar130;
  uint uVar131;
  uint uVar132;
  uint uVar133;
  uint uVar134;
  uint uVar135;
  uint uVar136;
  uint uVar137;
  undefined1 auStack_184 [40];
  undefined1 auStack_15c [40];
  undefined1 auStack_134 [40];
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  undefined1 auStack_bc [80];
  byte local_6c;
  byte local_6b;
  uint local_6a;
  byte local_66;
  byte local_65;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined2 uStack_61;
  byte local_5f;
  byte local_5e;
  uint local_5d;
  byte local_59;
  byte local_58;
  byte local_57;
  byte local_56;
  uint local_55;
  byte local_51;
  uint local_50;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_01727168(param_2,param_7,&PTR_018bc3f4,0);
  FUN_01726ef8(&local_10c,param_2);
  FUN_016dd52c(auStack_134,auStack_bc,0x28);
  FUN_01710e00(auStack_184,auStack_134);
  if (((((((0xd333332 < local_10c) || (0x6999999 < local_108)) || (0xd333332 < local_104)) ||
        ((0x6999999 < local_100 || (0xd333332 < local_fc)))) ||
       (((0x6999999 < local_f8 || ((0xd333332 < local_f4 || (0x6999999 < local_f0)))) ||
        (0xd333332 < local_ec)))) ||
      ((((0x6999999 < local_e8 ||
         (FUN_01705480(auStack_15c,&local_10c,auStack_184), 0xd333332 < local_e4)) ||
        (0x6999999 < local_e0)) ||
       (((0xd333332 < local_dc || (0x6999999 < local_d8)) ||
        ((0xd333332 < local_d4 || ((0x6999999 < local_d0 || (0xd333332 < local_cc)))))))))) ||
     ((0x6999999 < local_c8 || ((0xd333332 < local_c4 || (0x6999999 < local_c0)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                 ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xca,"fe_mul_impl");
  }
  FUN_01705480(auStack_134,&local_e4,auStack_184);
  FUN_01706384(param_1,auStack_134);
  FUN_01706384(&local_6c,auStack_15c);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_6c << 7;
  if (param_8 == 0) {
    FUN_01773c38(&local_6c,param_1,0x20,param_4,0x20,param_5,param_6,0,0);
  }
  else {
    FUN_01773c38(&local_6c,param_7,param_8,param_1,0x20,param_4,0x20,param_5,param_6);
  }
  FUN_01727168(&local_6c);
  uVar27 = (local_6a & 0x1f) << 0x10 | (uint)local_6b << 8 | (uint)local_6c;
  uVar60 = (local_6a & 0x3ffffff) >> 5;
  uVar28 = ((local_5d & 0x3f) << 0x10 | (uint)local_5e << 8 | (uint)local_5f) >> 1;
  uVar104 = ((local_65 & 0x7f) << 0x10 | (uint)local_66 << 8 | local_6a >> 0x18) >> 2;
  uVar20 = (CONCAT13(uStack_62,CONCAT21(uStack_64,local_65)) & 0xfffffff) >> 7;
  uVar71 = (CONCAT13(local_5f,CONCAT21(uStack_61,uStack_62)) & 0x1ffffff) >> 4;
  uVar37 = (local_5d & 0x7ffffff) >> 6;
  uVar31 = ((uint)local_58 << 0x10 | (uint)local_59 << 8 | local_5d >> 0x18) >> 3;
  uVar116 = (local_55 & 0x1f) << 0x10 | (uint)local_56 << 8 | (uint)local_57;
  uVar53 = (local_55 & 0x3ffffff) >> 5;
  uVar83 = ((local_50 & 0x7f) << 0x10 | (uint)local_51 << 8 | local_55 >> 0x18) >> 2;
  local_50 = local_50 >> 7;
  uVar38 = (param_3[2] & 0x1f) << 0x10 | (uint)param_3[1] << 8 | (uint)*param_3;
  uVar32 = (*(uint *)(param_3 + 2) & 0x3ffffff) >> 5;
  uVar54 = ((param_3[7] & 0x7f) << 0x10 | (uint)param_3[6] << 8 | (uint)param_3[5]) >> 2;
  uVar84 = (*(uint *)(param_3 + 7) & 0xfffffff) >> 7;
  uVar39 = (*(uint *)(param_3 + 10) & 0x1ffffff) >> 4;
  uVar33 = (*(uint *)(param_3 + 0xf) & 0x7ffffff) >> 6;
  uVar105 = (*(uint *)(param_3 + 0x17) & 0x3ffffff) >> 5;
  uVar58 = *(uint *)(param_3 + 0x1c) >> 7;
  uVar109 = ((uint)param_3[0x14] << 0x10 | (uint)param_3[0x13] << 8 | (uint)param_3[0x12]) >> 3;
  uVar40 = (param_3[0x17] & 0x1f) << 0x10 | (uint)param_3[0x16] << 8 | (uint)param_3[0x15];
  uVar47 = ((param_3[0xf] & 0x3f) << 0x10 | (uint)param_3[0xe] << 8 | (uint)param_3[0xd]) >> 1;
  uVar72 = ((param_3[0x1c] & 0x7f) << 0x10 | (uint)param_3[0x1b] << 8 | (uint)param_3[0x1a]) >> 2;
  uVar106 = (*(uint *)(param_2 + 7) & 0xfffffff) >> 7;
  uVar34 = ((param_2[0xf] & 0x3f) << 0x10 | (uint)param_2[0xe] << 8 | (uint)param_2[0xd]) >> 1;
  uVar52 = ((uint)param_2[0x14] << 0x10 | (uint)param_2[0x13] << 8 | (uint)param_2[0x12]) >> 3;
  lVar1 = (longlong)(int)uVar38 * (longlong)(int)uVar27 +
          (ulonglong)((param_2[2] & 0x1f) << 0x10 | (uint)param_2[1] << 8 | (uint)*param_2);
  lVar2 = (longlong)(int)uVar54 * (longlong)(int)uVar28 +
          (longlong)(int)uVar47 * (longlong)(int)uVar104 +
          (longlong)(int)uVar38 * (longlong)(int)uVar31 +
          (longlong)(int)uVar109 * (longlong)(int)uVar27 +
          (longlong)(int)uVar32 * (longlong)(int)uVar37 +
          (longlong)(int)uVar84 * (longlong)(int)uVar71 +
          (longlong)(int)uVar33 * (longlong)(int)uVar60 +
          (longlong)(int)uVar20 * (longlong)(int)uVar39;
  uVar55 = (uint)lVar2;
  lVar3 = (longlong)(int)uVar54 * (longlong)(int)uVar20 +
          (longlong)(int)uVar47 * (longlong)(int)uVar27 +
          (longlong)(int)uVar38 * (longlong)(int)uVar28 +
          (longlong)(int)uVar32 * (longlong)(int)uVar71 +
          (longlong)(int)uVar39 * (longlong)(int)uVar60 +
          (longlong)(int)uVar104 * (longlong)(int)uVar84;
  uVar21 = (uint)lVar3;
  lVar4 = (longlong)(int)uVar54 * (longlong)(int)uVar60 +
          (longlong)(int)uVar38 * (longlong)(int)uVar20 +
          (longlong)(int)uVar84 * (longlong)(int)uVar27 +
          (longlong)(int)uVar104 * (longlong)(int)uVar32;
  uVar22 = (uint)lVar4;
  lVar14 = (longlong)(int)uVar54 * (longlong)(int)uVar27 +
           (longlong)(int)uVar32 * (longlong)(int)uVar60 +
           (longlong)(int)uVar104 * (longlong)(int)uVar38 +
           (ulonglong)
           (((param_2[7] & 0x7f) << 0x10 | (uint)param_2[6] << 8 | (uint)param_2[5]) >> 2);
  uVar23 = uVar22 + uVar106;
  lVar9 = (longlong)(int)uVar54 * (longlong)(int)uVar104 +
          (longlong)(int)uVar38 * (longlong)(int)uVar71 +
          (longlong)(int)uVar32 * (longlong)(int)uVar20 +
          (longlong)(int)uVar39 * (longlong)(int)uVar27 +
          (longlong)(int)uVar60 * (longlong)(int)uVar84 +
          (ulonglong)((*(uint *)(param_2 + 10) & 0x1ffffff) >> 4);
  uVar79 = uVar34 + uVar21;
  lVar13 = (longlong)(int)uVar54 * (longlong)(int)uVar71 +
           (longlong)(int)uVar47 * (longlong)(int)uVar60 +
           (longlong)(int)uVar38 * (longlong)(int)uVar37 +
           (longlong)(int)uVar32 * (longlong)(int)uVar28 +
           (longlong)(int)uVar39 * (longlong)(int)uVar104 +
           (longlong)(int)uVar33 * (longlong)(int)uVar27 +
           (longlong)(int)uVar20 * (longlong)(int)uVar84 +
           (ulonglong)((*(uint *)(param_2 + 0xf) & 0x7ffffff) >> 6);
  uVar73 = uVar52 + uVar55;
  lVar12 = (longlong)(int)uVar54 * (longlong)(int)uVar37 +
           (longlong)(int)uVar47 * (longlong)(int)uVar20 +
           (longlong)(int)uVar38 * (longlong)(int)uVar116 +
           (longlong)(int)uVar109 * (longlong)(int)uVar60 +
           (longlong)(int)uVar40 * (longlong)(int)uVar27 +
           (longlong)(int)uVar32 * (longlong)(int)uVar31 +
           (longlong)(int)uVar39 * (longlong)(int)uVar71 +
           (longlong)(int)uVar33 * (longlong)(int)uVar104 +
           (longlong)(int)uVar28 * (longlong)(int)uVar84 +
           (ulonglong)
           ((param_2[0x17] & 0x1f) << 0x10 | (uint)param_2[0x16] << 8 | (uint)param_2[0x15]);
  lVar11 = (longlong)(int)uVar54 * (longlong)(int)uVar116 +
           (longlong)(int)uVar47 * (longlong)(int)uVar28 +
           (longlong)(int)uVar72 * (longlong)(int)uVar27 +
           (longlong)(int)uVar38 * (longlong)(int)uVar83 +
           (longlong)(int)uVar40 * (longlong)(int)uVar104 +
           (longlong)(int)uVar109 * (longlong)(int)uVar20 +
           (longlong)(int)uVar32 * (longlong)(int)uVar53 +
           (longlong)(int)uVar39 * (longlong)(int)uVar37 +
           (longlong)(int)uVar84 * (longlong)(int)uVar31 +
           (longlong)(int)uVar105 * (longlong)(int)uVar60 +
           (longlong)(int)uVar71 * (longlong)(int)uVar33 +
           (ulonglong)
           (((param_2[0x1c] & 0x7f) << 0x10 | (uint)param_2[0x1b] << 8 | (uint)param_2[0x1a]) >> 2);
  lVar7 = (longlong)(int)uVar54 * (longlong)(int)uVar53 +
          (longlong)(int)uVar47 * (longlong)(int)uVar37 +
          (longlong)(int)uVar72 * (longlong)(int)uVar60 +
          (longlong)(int)uVar38 * (longlong)(int)local_50 +
          (longlong)(int)uVar109 * (longlong)(int)uVar71 +
          (longlong)(int)uVar40 * (longlong)(int)uVar20 +
          (longlong)(int)uVar32 * (longlong)(int)uVar83 +
          (longlong)(int)uVar84 * (longlong)(int)uVar116 +
          (longlong)(int)uVar39 * (longlong)(int)uVar31 +
          (longlong)(int)uVar58 * (longlong)(int)uVar27 +
          (longlong)(int)uVar105 * (longlong)(int)uVar104 +
          (longlong)(int)uVar28 * (longlong)(int)uVar33 +
          (ulonglong)(*(uint *)(param_2 + 0x1c) >> 7);
  uVar61 = (uint)lVar7;
  uVar48 = (uint)(lVar1 + 0x100000);
  iVar62 = (int)((ulonglong)(lVar1 + 0x100000) >> 0x20);
  uVar78 = uVar48 & 0xffe00000;
  lVar15 = (longlong)(int)uVar32 * (longlong)(int)uVar27 +
           (longlong)(int)uVar60 * (longlong)(int)uVar38 +
           (ulonglong)((*(uint *)(param_2 + 2) & 0x3ffffff) >> 5) +
           (ulonglong)(uVar48 >> 0x15 | iVar62 * 0x800);
  uVar41 = (uint)lVar1 - uVar78;
  uVar48 = (uint)(lVar14 + 0x100000);
  iVar56 = (int)((ulonglong)(lVar14 + 0x100000) >> 0x20);
  uVar42 = uVar48 >> 0x15 | iVar56 * 0x800;
  uVar24 = uVar42 + uVar23;
  iVar25 = (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar22,uVar106) +
           (uint)CARRY4(uVar42,uVar23);
  uVar22 = (uint)(lVar9 + 0x100000);
  uVar48 = uVar48 & 0xffe00000;
  iVar117 = (int)((ulonglong)(lVar9 + 0x100000) >> 0x20);
  uVar23 = uVar22 >> 0x15 | iVar117 * 0x800;
  uVar22 = uVar22 & 0xffe00000;
  uVar80 = uVar23 + uVar79;
  iVar81 = (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4(uVar34,uVar21) +
           (uint)CARRY4(uVar23,uVar79);
  lVar3 = lVar13 + 0x100000;
  uVar23 = (uint)lVar3;
  iVar107 = (int)((ulonglong)lVar3 >> 0x20);
  uVar21 = uVar23 & 0xffe00000;
  uVar23 = uVar23 >> 0x15 | iVar107 * 0x800;
  uVar74 = uVar23 + uVar73;
  iVar26 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar52,uVar55) +
           (uint)CARRY4(uVar23,uVar73);
  lVar2 = lVar12 + 0x100000;
  uVar23 = (uint)lVar2;
  iVar75 = (int)((ulonglong)lVar2 >> 0x20);
  uVar52 = uVar23 & 0xffe00000;
  lVar16 = (longlong)(int)uVar54 * (longlong)(int)uVar31 +
           (longlong)(int)uVar47 * (longlong)(int)uVar71 +
           (longlong)(int)uVar38 * (longlong)(int)uVar53 +
           (longlong)(int)uVar109 * (longlong)(int)uVar104 +
           (longlong)(int)uVar40 * (longlong)(int)uVar60 +
           (longlong)(int)uVar32 * (longlong)(int)uVar116 +
           (longlong)(int)uVar84 * (longlong)(int)uVar37 +
           (longlong)(int)uVar39 * (longlong)(int)uVar28 +
           (longlong)(int)uVar105 * (longlong)(int)uVar27 +
           (longlong)(int)uVar20 * (longlong)(int)uVar33 +
           (ulonglong)((*(uint *)(param_2 + 0x17) & 0x3ffffff) >> 5) +
           (ulonglong)(uVar23 >> 0x15 | iVar75 * 0x800);
  lVar2 = lVar11 + 0x100000;
  uVar27 = (uint)lVar2;
  uVar73 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar23 = uVar27 & 0xffe00000;
  uVar27 = uVar27 >> 0x15 | uVar73 * 0x800;
  uVar38 = uVar27 + uVar61;
  iVar35 = (int)((ulonglong)lVar7 >> 0x20) + (uVar73 >> 0x15) + (uint)CARRY4(uVar27,uVar61);
  lVar2 = (longlong)(int)uVar54 * (longlong)(int)uVar83 +
          (longlong)(int)uVar47 * (longlong)(int)uVar31 +
          (longlong)(int)uVar72 * (longlong)(int)uVar104 +
          (longlong)(int)uVar109 * (longlong)(int)uVar28 +
          (longlong)(int)uVar40 * (longlong)(int)uVar71 +
          (longlong)(int)uVar32 * (longlong)(int)local_50 +
          (longlong)(int)uVar84 * (longlong)(int)uVar53 +
          (longlong)(int)uVar39 * (longlong)(int)uVar116 +
          (longlong)(int)uVar58 * (longlong)(int)uVar60 +
          (longlong)(int)uVar105 * (longlong)(int)uVar20 +
          (longlong)(int)uVar37 * (longlong)(int)uVar33;
  lVar3 = lVar2 + 0x100000;
  uVar27 = (uint)lVar3;
  uVar118 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar32 = uVar27 >> 0x15 | uVar118 * 0x800;
  uVar27 = uVar27 & 0xffe00000;
  lVar3 = (longlong)(int)uVar54 * (longlong)(int)local_50 +
          (longlong)(int)uVar47 * (longlong)(int)uVar116 +
          (longlong)(int)uVar72 * (longlong)(int)uVar20 +
          (longlong)(int)uVar109 * (longlong)(int)uVar37 +
          (longlong)(int)uVar40 * (longlong)(int)uVar28 +
          (longlong)(int)uVar84 * (longlong)(int)uVar83 +
          (longlong)(int)uVar39 * (longlong)(int)uVar53 +
          (longlong)(int)uVar33 * (longlong)(int)uVar31 +
          (longlong)(int)uVar58 * (longlong)(int)uVar104 +
          (longlong)(int)uVar71 * (longlong)(int)uVar105;
  uVar34 = (uint)lVar3;
  uVar79 = uVar32 + uVar34;
  iVar29 = (int)((ulonglong)lVar3 >> 0x20) + (uVar118 >> 0x15) + (uint)CARRY4(uVar32,uVar34);
  lVar5 = (longlong)(int)uVar47 * (longlong)(int)uVar53 +
          (longlong)(int)uVar72 * (longlong)(int)uVar71 +
          (longlong)(int)uVar109 * (longlong)(int)uVar31 +
          (longlong)(int)uVar40 * (longlong)(int)uVar37 +
          (longlong)(int)uVar84 * (longlong)(int)local_50 +
          (longlong)(int)uVar39 * (longlong)(int)uVar83 +
          (longlong)(int)uVar58 * (longlong)(int)uVar20 +
          (longlong)(int)uVar105 * (longlong)(int)uVar28 +
          (longlong)(int)uVar116 * (longlong)(int)uVar33;
  lVar3 = lVar5 + 0x100000;
  uVar20 = (uint)lVar3;
  uVar108 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar42 = uVar20 >> 0x15 | uVar108 * 0x800;
  uVar20 = uVar20 & 0xffe00000;
  lVar3 = (longlong)(int)uVar47 * (longlong)(int)uVar83 +
          (longlong)(int)uVar72 * (longlong)(int)uVar28 +
          (longlong)(int)uVar109 * (longlong)(int)uVar116 +
          (longlong)(int)uVar40 * (longlong)(int)uVar31 +
          (longlong)(int)uVar39 * (longlong)(int)local_50 +
          (longlong)(int)uVar58 * (longlong)(int)uVar71 +
          (longlong)(int)uVar105 * (longlong)(int)uVar37 +
          (longlong)(int)uVar53 * (longlong)(int)uVar33;
  uVar34 = uVar42 + (uint)lVar3;
  lVar6 = (longlong)(int)uVar47 * (longlong)(int)local_50 +
          (longlong)(int)uVar72 * (longlong)(int)uVar37 +
          (longlong)(int)uVar109 * (longlong)(int)uVar53 +
          (longlong)(int)uVar40 * (longlong)(int)uVar116 +
          (longlong)(int)uVar33 * (longlong)(int)uVar83 +
          (longlong)(int)uVar58 * (longlong)(int)uVar28 +
          (longlong)(int)uVar31 * (longlong)(int)uVar105;
  lVar4 = lVar6 + 0x100000;
  uVar28 = (uint)lVar4;
  iVar82 = (int)((ulonglong)lVar4 >> 0x20);
  lVar18 = (longlong)(int)uVar72 * (longlong)(int)uVar31 +
           (longlong)(int)uVar109 * (longlong)(int)uVar83 +
           (longlong)(int)uVar40 * (longlong)(int)uVar53 +
           (longlong)(int)uVar58 * (longlong)(int)uVar37 +
           (longlong)(int)uVar105 * (longlong)(int)uVar116 +
           (longlong)(int)local_50 * (longlong)(int)uVar33 +
           (ulonglong)(uVar28 >> 0x15 | iVar82 * 0x800);
  uVar28 = uVar28 & 0xffe00000;
  lVar4 = (longlong)(int)uVar72 * (longlong)(int)uVar116 +
          (longlong)(int)uVar109 * (longlong)(int)local_50 +
          (longlong)(int)uVar40 * (longlong)(int)uVar83 +
          (longlong)(int)uVar58 * (longlong)(int)uVar31 +
          (longlong)(int)uVar53 * (longlong)(int)uVar105;
  uVar109 = (uint)(lVar4 + 0x100000);
  iVar119 = (int)((ulonglong)(lVar4 + 0x100000) >> 0x20);
  uVar31 = uVar109 & 0xffe00000;
  lVar19 = (longlong)(int)uVar72 * (longlong)(int)uVar53 +
           (longlong)(int)uVar40 * (longlong)(int)local_50 +
           (longlong)(int)uVar58 * (longlong)(int)uVar116 +
           (longlong)(int)uVar83 * (longlong)(int)uVar105 +
           (ulonglong)(uVar109 >> 0x15 | iVar119 * 0x800);
  uVar37 = (uint)lVar4 - uVar31;
  lVar7 = (longlong)(int)uVar72 * (longlong)(int)uVar83 +
          (longlong)(int)uVar58 * (longlong)(int)uVar53 +
          (longlong)(int)local_50 * (longlong)(int)uVar105;
  uVar109 = (uint)(lVar7 + 0x100000);
  lVar8 = (longlong)(int)local_50 * (longlong)(int)uVar58;
  iVar85 = (int)((ulonglong)(lVar7 + 0x100000) >> 0x20);
  lVar10 = (longlong)(int)uVar58 * (longlong)(int)uVar83 +
           (longlong)(int)local_50 * (longlong)(int)uVar72 +
           (ulonglong)(uVar109 >> 0x15 | iVar85 * 0x800);
  uVar109 = uVar109 & 0xffe00000;
  uVar53 = (uint)lVar7 - uVar109;
  uVar32 = (uint)(lVar8 + 0x100000);
  iVar43 = (int)((ulonglong)(lVar8 + 0x100000) >> 0x20);
  uVar58 = uVar32 & 0xffe00000;
  uVar71 = (uint)lVar8 - uVar58;
  uVar49 = uVar32 >> 0x15 | iVar43 * 0x800;
  lVar6 = (longlong)(int)uVar49 * -0xa6f7d + lVar6;
  uVar40 = (uint)lVar6;
  lVar5 = (longlong)(int)uVar49 * -0xf39ad + lVar5;
  uVar47 = (uint)lVar5;
  uVar72 = (uint)(lVar15 + 0x100000);
  iVar63 = (int)((ulonglong)(lVar15 + 0x100000) >> 0x20);
  uVar116 = (uint)lVar14 - uVar48;
  uVar54 = uVar72 >> 0x15 | iVar63 * 0x800;
  uVar72 = uVar72 & 0xffe00000;
  uVar86 = uVar54 + uVar116;
  uVar87 = (uint)lVar15 - uVar72;
  iVar64 = iVar25 + (uint)(0xffefffff < uVar24);
  uVar44 = (uint)lVar9 - uVar22;
  uVar55 = uVar24 + 0x100000 >> 0x15 | iVar64 * 0x800;
  uVar83 = uVar24 + 0x100000 & 0xffe00000;
  uVar88 = uVar55 + uVar44;
  uVar95 = uVar24 - uVar83;
  iVar45 = iVar81 + (uint)(0xffefffff < uVar80);
  uVar32 = uVar80 + 0x100000 & 0xffe00000;
  uVar89 = uVar80 - uVar32;
  uVar90 = uVar80 + 0x100000 >> 0x15 | iVar45 * 0x800;
  iVar91 = iVar26 + (uint)(0xffefffff < uVar74);
  lVar17 = lVar16 + 0x100000;
  uVar39 = (uint)lVar17;
  uVar96 = (uint)((ulonglong)lVar17 >> 0x20);
  uVar97 = iVar35 + (uint)(0xffefffff < uVar38);
  uVar60 = iVar29 + (uint)(0xffefffff < uVar79);
  uVar50 = uVar34 + 0x100000;
  uVar84 = (int)((ulonglong)lVar3 >> 0x20) + (uVar108 >> 0x15) + (uint)CARRY4(uVar42,(uint)lVar3) +
           (uint)(0xffefffff < uVar34);
  uVar34 = (uint)(lVar18 + 0x100000);
  iVar46 = (int)((ulonglong)(lVar18 + 0x100000) >> 0x20);
  uVar33 = uVar34 >> 0x15 | iVar46 * 0x800;
  uVar34 = uVar34 & 0xffe00000;
  uVar65 = uVar33 + uVar37;
  iVar30 = ((int)((ulonglong)lVar4 >> 0x20) - (iVar119 + (uint)((uint)lVar4 < uVar31))) +
           (uint)CARRY4(uVar33,uVar37);
  uVar104 = (uint)lVar18 - uVar34;
  uVar31 = (uint)(lVar19 + 0x100000);
  iVar119 = (int)((ulonglong)(lVar19 + 0x100000) >> 0x20);
  uVar33 = uVar31 >> 0x15 | iVar119 * 0x800;
  uVar66 = uVar33 + uVar53;
  uVar31 = uVar31 & 0xffe00000;
  iVar85 = ((int)((ulonglong)lVar7 >> 0x20) - (iVar85 + (uint)((uint)lVar7 < uVar109))) +
           (uint)CARRY4(uVar33,uVar53);
  uVar61 = (uint)lVar19 - uVar31;
  iVar57 = (int)((ulonglong)lVar19 >> 0x20) - (iVar119 + (uint)((uint)lVar19 < uVar31));
  uVar31 = (uint)(lVar10 + 0x100000);
  iVar119 = (int)((ulonglong)(lVar10 + 0x100000) >> 0x20);
  uVar109 = uVar31 >> 0x15 | iVar119 * 0x800;
  uVar106 = uVar109 + uVar71;
  uVar31 = uVar31 & 0xffe00000;
  iVar110 = ((int)((ulonglong)lVar8 >> 0x20) - (iVar43 + (uint)((uint)lVar8 < uVar58))) +
            (uint)CARRY4(uVar109,uVar71);
  uVar71 = (uint)lVar10 - uVar31;
  iVar36 = (int)((ulonglong)lVar10 >> 0x20) - (iVar119 + (uint)((uint)lVar10 < uVar31));
  uVar58 = uVar40 - uVar28;
  uVar92 = uVar38 + 0x100000 & 0xffe00000;
  uVar31 = uVar50 >> 0x15 | uVar84 * 0x800;
  uVar50 = uVar50 & 0xffe00000;
  uVar109 = uVar31 + uVar58;
  iVar119 = ((int)((ulonglong)lVar6 >> 0x20) - (iVar82 + (uint)(uVar40 < uVar28))) +
            (uVar84 >> 0x15) + (uint)CARRY4(uVar31,uVar58);
  uVar98 = uVar79 + 0x100000 & 0xffe00000;
  uVar40 = uVar79 + 0x100000 >> 0x15 | uVar60 * 0x800;
  uVar105 = uVar38 + 0x100000 >> 0x15 | uVar97 * 0x800;
  uVar28 = uVar74 + 0x100000 & 0xffe00000;
  uVar76 = uVar74 + 0x100000 >> 0x15 | iVar91 * 0x800;
  uVar31 = uVar39 & 0xffe00000;
  uVar67 = uVar39 >> 0x15 | uVar96 * 0x800;
  lVar4 = (longlong)(int)uVar49 * 0x215d1 +
          ((ulonglong)
           (iVar110 * -0xa6f7d + -uVar106 + (int)((ulonglong)uVar106 * 0xfff59083 >> 0x20)) << 0x20
          | (ulonglong)uVar106 * 0xfff59083 & 0xffffffff) + lVar3 + CONCAT44(uVar108 >> 0x15,uVar42)
  ;
  uVar77 = (uint)lVar4;
  uVar68 = uVar77 - uVar50;
  uVar58 = (uint)((ulonglong)uVar106 * 0x215d1);
  uVar42 = uVar47 + uVar58;
  uVar39 = (uint)((ulonglong)uVar71 * 0xfff59083);
  uVar33 = uVar42 + uVar39;
  uVar37 = uVar33 - uVar20;
  uVar59 = uVar40 + uVar37;
  iVar43 = ((iVar36 * -0xa6f7d + -uVar71 + (int)((ulonglong)uVar71 * 0xfff59083 >> 0x20) +
             iVar110 * 0x215d1 + (int)((ulonglong)uVar106 * 0x215d1 >> 0x20) +
             (int)((ulonglong)lVar5 >> 0x20) + (uint)CARRY4(uVar47,uVar58) +
            (uint)CARRY4(uVar42,uVar39)) - (uVar108 + (uVar33 < uVar20))) + (uVar60 >> 0x15) +
           (uint)CARRY4(uVar40,uVar37);
  uVar58 = (uint)((ulonglong)uVar71 * 0x215d1);
  uVar20 = (uint)((ulonglong)uVar106 * 0xfff0c653);
  lVar3 = (longlong)(int)uVar49 * 0x9fb67 +
          CONCAT44(iVar110 * -0xf39ad + -uVar106 + (int)((ulonglong)uVar106 * 0xfff0c653 >> 0x20) +
                   iVar36 * 0x215d1 + (int)((ulonglong)uVar71 * 0x215d1 >> 0x20) +
                   (uint)CARRY4(uVar20,uVar58),uVar20 + uVar58);
  uVar20 = (uint)lVar3;
  uVar51 = (uint)((ulonglong)uVar66 * 0xfff59083);
  uVar58 = uVar20 + uVar51;
  uVar42 = uVar58 + uVar79;
  uVar33 = uVar42 - uVar98;
  lVar2 = (longlong)(int)uVar49 * 0x72d18 +
          lVar2 + CONCAT44(iVar110 * 0x9fb67 + (int)((ulonglong)uVar106 * 0x9fb67 >> 0x20),
                           (int)((ulonglong)uVar106 * 0x9fb67));
  uVar120 = (uint)lVar2;
  uVar69 = (uint)((ulonglong)uVar66 * 0x215d1);
  uVar37 = (uint)((ulonglong)uVar71 * 0xfff0c653);
  uVar39 = uVar120 + uVar37;
  uVar40 = uVar39 + uVar69;
  uVar121 = (uint)((ulonglong)uVar61 * 0xfff59083);
  uVar47 = uVar40 + uVar121;
  uVar53 = uVar47 - uVar27;
  uVar108 = uVar105 + uVar53;
  iVar82 = ((iVar57 * -0xa6f7d + -uVar61 + (int)((ulonglong)uVar61 * 0xfff59083 >> 0x20) +
             iVar85 * 0x215d1 + (int)((ulonglong)uVar66 * 0x215d1 >> 0x20) +
             iVar36 * -0xf39ad + -uVar71 + (int)((ulonglong)uVar71 * 0xfff0c653 >> 0x20) +
             (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar120,uVar37) +
             (uint)CARRY4(uVar39,uVar69) + (uint)CARRY4(uVar40,uVar121)) -
           (uVar118 + (uVar47 < uVar27))) + (uVar97 >> 0x15) + (uint)CARRY4(uVar105,uVar53);
  lVar7 = lVar13 + CONCAT44(-(iVar107 + (uint)(uVar90 < uVar21)),uVar90 - uVar21) +
          CONCAT44(iVar30 * 0xa2c13 + (int)((ulonglong)uVar65 * 0xa2c13 >> 0x20),
                   (int)((ulonglong)uVar65 * 0xa2c13));
  uVar27 = (uint)((ulonglong)uVar61 * 0xa2c13);
  uVar37 = uVar27 + uVar74;
  uVar90 = (uint)((ulonglong)uVar65 * 0x72d18);
  uVar118 = uVar37 + uVar90;
  uVar105 = uVar118 - uVar28;
  uVar39 = (uint)((ulonglong)uVar66 * 0xa2c13);
  uVar21 = (uint)((ulonglong)uVar61 * 0x72d18);
  lVar12 = lVar12 + CONCAT44(iVar85 * 0xa2c13 + (int)((ulonglong)uVar66 * 0xa2c13 >> 0x20) +
                             iVar57 * 0x72d18 + (int)((ulonglong)uVar61 * 0x72d18 >> 0x20) +
                             (uint)CARRY4(uVar39,uVar21),uVar39 + uVar21);
  uVar21 = (uint)lVar12;
  uVar39 = uVar21 - uVar52;
  uVar40 = uVar39 + uVar76;
  uVar47 = (uint)((ulonglong)uVar65 * 0x9fb67);
  uVar69 = uVar47 + uVar40;
  iVar122 = iVar30 * 0x9fb67 + (int)((ulonglong)uVar65 * 0x9fb67 >> 0x20) +
            ((int)((ulonglong)lVar12 >> 0x20) - (iVar75 + (uint)(uVar21 < uVar52))) +
            (uint)CARRY4(uVar39,uVar76) + (uint)CARRY4(uVar47,uVar40);
  uVar39 = (uint)((ulonglong)uVar66 * 0x72d18);
  uVar52 = (uint)((ulonglong)uVar61 * 0x9fb67);
  uVar40 = uVar39 + uVar52;
  uVar21 = (uint)((ulonglong)uVar71 * 0xa2c13);
  lVar16 = lVar16 + CONCAT44(iVar36 * 0xa2c13 + (int)((ulonglong)uVar71 * 0xa2c13 >> 0x20) +
                             iVar85 * 0x72d18 + (int)((ulonglong)uVar66 * 0x72d18 >> 0x20) +
                             iVar57 * 0x9fb67 + (int)((ulonglong)uVar61 * 0x9fb67 >> 0x20) +
                             (uint)CARRY4(uVar39,uVar52) + (uint)CARRY4(uVar40,uVar21),
                             uVar40 + uVar21);
  uVar39 = (uint)lVar16;
  uVar21 = (uint)((ulonglong)uVar106 * 0xa2c13);
  uVar76 = (uint)((ulonglong)uVar106 * 0x72d18);
  uVar53 = (uint)((ulonglong)uVar71 * 0x72d18);
  uVar52 = (uint)((ulonglong)uVar71 * 0x9fb67);
  uVar40 = (uint)((ulonglong)uVar65 * 0xfff0c653);
  uVar47 = uVar39 + uVar40;
  uVar120 = uVar47 - uVar31;
  lVar11 = lVar11 + CONCAT44(iVar110 * 0xa2c13 + (int)((ulonglong)uVar106 * 0xa2c13 >> 0x20) +
                             iVar36 * 0x72d18 + (int)((ulonglong)uVar71 * 0x72d18 >> 0x20) +
                             (uint)CARRY4(uVar21,uVar53),uVar21 + uVar53);
  uVar111 = (uint)lVar11;
  uVar53 = (uint)((ulonglong)uVar66 * 0x9fb67);
  uVar112 = uVar111 + uVar53;
  uVar21 = (uint)((ulonglong)uVar65 * 0x215d1);
  uVar70 = (uint)((ulonglong)uVar65 * 0xfff59083);
  uVar123 = (uint)((ulonglong)uVar61 * 0xfff0c653);
  uVar124 = uVar112 + uVar123;
  uVar125 = uVar124 + uVar21;
  uVar126 = uVar125 + uVar67;
  uVar121 = uVar126 - uVar23;
  iVar107 = (iVar30 * 0x215d1 + (int)((ulonglong)uVar65 * 0x215d1 >> 0x20) +
             iVar57 * -0xf39ad + -uVar61 + (int)((ulonglong)uVar61 * 0xfff0c653 >> 0x20) +
             iVar85 * 0x9fb67 + (int)((ulonglong)uVar66 * 0x9fb67 >> 0x20) +
             (int)((ulonglong)lVar11 >> 0x20) + (uint)CARRY4(uVar111,uVar53) +
             (uint)CARRY4(uVar112,uVar123) + (uint)CARRY4(uVar124,uVar21) + (uVar96 >> 0x15) +
            (uint)CARRY4(uVar125,uVar67)) - (uVar73 + (uVar126 < uVar23));
  lVar2 = (longlong)(int)uVar49 * 0xa2c13 +
          CONCAT44(iVar110 * 0x72d18 + (int)((ulonglong)uVar106 * 0x72d18 >> 0x20) +
                   iVar36 * 0x9fb67 + (int)((ulonglong)uVar71 * 0x9fb67 >> 0x20) +
                   (uint)CARRY4(uVar76,uVar52),uVar76 + uVar52) +
          CONCAT44(iVar85 * -0xf39ad + -uVar66 + (int)((ulonglong)uVar66 * 0xfff0c653 >> 0x20),
                   (int)((ulonglong)uVar66 * 0xfff0c653));
  uVar53 = (uint)lVar2;
  uVar23 = (uint)((ulonglong)uVar61 * 0x215d1);
  uVar71 = uVar53 + uVar23;
  uVar73 = uVar71 + uVar70;
  uVar106 = uVar73 + uVar38;
  uVar76 = uVar106 - uVar92;
  uVar52 = (uint)(lVar7 + 0x100000);
  iVar75 = (int)((ulonglong)(lVar7 + 0x100000) >> 0x20);
  uVar21 = uVar52 & 0xffe00000;
  uVar52 = uVar52 >> 0x15 | iVar75 * 0x800;
  uVar67 = uVar52 + uVar105;
  iVar99 = ((iVar30 * 0x72d18 + (int)((ulonglong)uVar65 * 0x72d18 >> 0x20) +
             iVar57 * 0xa2c13 + (int)((ulonglong)uVar61 * 0xa2c13 >> 0x20) + iVar26 +
             (uint)CARRY4(uVar27,uVar74) + (uint)CARRY4(uVar37,uVar90)) -
           (iVar91 + (uint)(uVar118 < uVar28))) + (iVar75 >> 0x15) + (uint)CARRY4(uVar52,uVar105);
  iVar36 = iVar122 + (uint)(0xffefffff < uVar69);
  uVar27 = uVar69 + 0x100000 >> 0x15 | iVar36 * 0x800;
  uVar52 = uVar69 + 0x100000 & 0xffe00000;
  uVar37 = uVar27 + uVar120;
  iVar100 = ((iVar30 * -0xf39ad + -uVar65 + (int)((ulonglong)uVar65 * 0xfff0c653 >> 0x20) +
              (int)((ulonglong)lVar16 >> 0x20) + (uint)CARRY4(uVar39,uVar40)) -
            (uVar96 + (uVar47 < uVar31))) + (iVar36 >> 0x15) + (uint)CARRY4(uVar27,uVar120);
  iVar91 = iVar107 + (uint)(0xffefffff < uVar121);
  uVar27 = uVar121 + 0x100000 >> 0x15 | iVar91 * 0x800;
  uVar113 = uVar27 + uVar76;
  iVar30 = ((iVar35 + iVar30 * -0xa6f7d + -uVar65 + (int)((ulonglong)uVar65 * 0xfff59083 >> 0x20) +
                      iVar57 * 0x215d1 + (int)((ulonglong)uVar61 * 0x215d1 >> 0x20) +
                      (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar53,uVar23) +
                      (uint)CARRY4(uVar71,uVar70) + (uint)CARRY4(uVar73,uVar38)) -
           (uVar97 + (uVar106 < uVar92))) + (iVar91 >> 0x15) + (uint)CARRY4(uVar27,uVar76);
  uVar23 = uVar121 + 0x100000 & 0xffe00000;
  iVar35 = iVar82 + (uint)(0xffefffff < uVar108);
  uVar28 = uVar108 + 0x100000 >> 0x15 | iVar35 * 0x800;
  uVar38 = uVar28 + uVar33;
  uVar27 = uVar108 + 0x100000 & 0xffe00000;
  iVar26 = ((iVar29 + iVar85 * -0xa6f7d + -uVar66 + (int)((ulonglong)uVar66 * 0xfff59083 >> 0x20) +
                      (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4(uVar20,uVar51) +
            (uint)CARRY4(uVar58,uVar79)) - (uVar60 + (uVar42 < uVar98))) + (iVar35 >> 0x15) +
           (uint)CARRY4(uVar28,uVar33);
  uVar58 = uVar108 - uVar27;
  iVar29 = iVar43 + (uint)(0xffefffff < uVar59);
  uVar28 = uVar59 + 0x100000 >> 0x15 | iVar29 * 0x800;
  uVar42 = uVar28 + uVar68;
  uVar20 = uVar59 + 0x100000 & 0xffe00000;
  iVar110 = ((int)((ulonglong)lVar4 >> 0x20) - (uVar84 + (uVar77 < uVar50))) + (iVar29 >> 0x15) +
            (uint)CARRY4(uVar28,uVar68);
  uVar33 = uVar59 - uVar20;
  iVar127 = iVar119 + (uint)(0xffefffff < uVar109);
  uVar31 = uVar109 + 0x100000 >> 0x15 | iVar127 * 0x800;
  uVar76 = uVar31 + uVar104;
  uVar28 = uVar109 + 0x100000 & 0xffe00000;
  iVar101 = ((int)((ulonglong)lVar18 >> 0x20) - (iVar46 + (uint)((uint)lVar18 < uVar34))) +
            (iVar127 >> 0x15) + (uint)CARRY4(uVar31,uVar104);
  uVar34 = uVar109 - uVar28;
  iVar128 = iVar99 + (uint)(0xffefffff < uVar67);
  iVar46 = iVar100 + (uint)(0xffefffff < uVar37);
  iVar57 = iVar30 + (uint)(0xffefffff < uVar113);
  uVar39 = uVar113 + 0x100000 >> 0x15 | iVar57 * 0x800;
  uVar129 = uVar39 + uVar58;
  uVar31 = uVar113 + 0x100000 & 0xffe00000;
  iVar35 = (iVar82 - (iVar35 + (uint)(uVar108 < uVar27))) + (iVar57 >> 0x15) +
           (uint)CARRY4(uVar39,uVar58);
  uVar98 = uVar113 - uVar31;
  iVar85 = iVar26 + (uint)(0xffefffff < uVar38);
  uVar58 = uVar38 + 0x100000 >> 0x15 | iVar85 * 0x800;
  uVar27 = uVar38 + 0x100000 & 0xffe00000;
  uVar65 = uVar58 + uVar33;
  iVar43 = (iVar43 - (iVar29 + (uint)(uVar59 < uVar20))) + (iVar85 >> 0x15) +
           (uint)CARRY4(uVar58,uVar33);
  uVar66 = uVar38 - uVar27;
  iVar26 = iVar26 - (iVar85 + (uint)(uVar38 < uVar27));
  iVar29 = iVar110 + (uint)(0xffefffff < uVar42);
  uVar20 = uVar42 + 0x100000 & 0xffe00000;
  uVar27 = uVar42 + 0x100000 >> 0x15 | iVar29 * 0x800;
  uVar58 = uVar27 + uVar34;
  iVar119 = (iVar119 - (iVar127 + (uint)(uVar109 < uVar28))) + (iVar29 >> 0x15) +
            (uint)CARRY4(uVar27,uVar34);
  uVar61 = uVar42 - uVar20;
  iVar110 = iVar110 - (iVar29 + (uint)(uVar42 < uVar20));
  uVar27 = uVar67 + 0x100000 & 0xffe00000;
  uVar104 = uVar67 + 0x100000 >> 0x15 | iVar128 * 0x800;
  uVar20 = uVar37 + 0x100000 & 0xffe00000;
  uVar40 = uVar37 + 0x100000 >> 0x15 | iVar46 * 0x800;
  uVar126 = (uint)((ulonglong)uVar76 * 0xa2c13);
  uVar93 = uVar126 + uVar89;
  uVar60 = (uint)((ulonglong)uVar76 * 0x72d18);
  uVar50 = uVar60 + (uint)lVar7;
  uVar51 = uVar50 - uVar21;
  uVar28 = (uint)((ulonglong)uVar76 * 0xfff0c653);
  uVar109 = uVar28 + uVar69;
  uVar34 = uVar109 - uVar52;
  uVar38 = uVar104 + uVar34;
  uVar42 = (uint)((ulonglong)uVar76 * 0xfff59083);
  uVar33 = uVar42 + uVar121;
  uVar39 = uVar33 - uVar23;
  uVar77 = uVar40 + uVar39;
  iVar91 = ((iVar101 * -0xa6f7d + -uVar76 + (int)((ulonglong)uVar76 * 0xfff59083 >> 0x20) + iVar107
            + (uint)CARRY4(uVar42,uVar121)) - (iVar91 + (uint)(uVar33 < uVar23))) + (iVar46 >> 0x15)
           + (uint)CARRY4(uVar40,uVar39);
  uVar111 = (uint)((ulonglong)uVar58 * 0xa2c13);
  uVar92 = uVar111 + uVar88;
  uVar112 = (uint)((ulonglong)uVar58 * 0x72d18);
  uVar94 = uVar112 + uVar93;
  uVar123 = (uint)((ulonglong)uVar58 * 0x9fb67);
  uVar90 = uVar123 + uVar51;
  uVar84 = (uint)((ulonglong)uVar58 * 0x215d1);
  uVar23 = uVar84 + uVar38;
  uVar130 = (uint)((ulonglong)uVar76 * 0x215d1);
  uVar33 = (uint)((ulonglong)uVar76 * 0x9fb67);
  uVar131 = uVar130 + uVar37;
  uVar132 = uVar131 - uVar20;
  uVar124 = (uint)((ulonglong)uVar61 * 0xa2c13);
  uVar96 = (uint)((ulonglong)uVar61 * 0x72d18);
  uVar71 = (uint)((ulonglong)uVar58 * 0xfff59083);
  uVar133 = uVar71 + uVar132;
  uVar134 = uVar124 + uVar95;
  uVar125 = uVar96 + uVar92;
  uVar97 = (uint)((ulonglong)uVar58 * 0xfff0c653);
  uVar68 = (uint)((ulonglong)uVar61 * 0x9fb67);
  uVar73 = uVar68 + uVar94;
  uVar118 = (uint)((ulonglong)uVar61 * 0xfff0c653);
  uVar102 = uVar118 + uVar90;
  uVar39 = uVar33 + uVar67;
  uVar40 = uVar39 - uVar27;
  uVar47 = uVar40 + uVar97;
  uVar120 = (uint)((ulonglong)uVar61 * 0x215d1);
  uVar53 = uVar120 + uVar47;
  uVar42 = (uint)((ulonglong)uVar61 * 0xfff59083);
  uVar79 = uVar42 + uVar23;
  iVar85 = iVar110 * -0xa6f7d + -uVar61 + (int)((ulonglong)uVar61 * 0xfff59083 >> 0x20) +
           iVar119 * 0x215d1 + (int)((ulonglong)uVar58 * 0x215d1 >> 0x20) +
           ((iVar101 * -0xf39ad + -uVar76 + (int)((ulonglong)uVar76 * 0xfff0c653 >> 0x20) + iVar122
            + (uint)CARRY4(uVar28,uVar69)) - (iVar36 + (uint)(uVar109 < uVar52))) +
           (iVar128 >> 0x15) + (uint)CARRY4(uVar104,uVar34) + (uint)CARRY4(uVar84,uVar38) +
           (uint)CARRY4(uVar42,uVar23);
  uVar70 = (uint)((ulonglong)uVar65 * 0xa2c13);
  uVar74 = uVar70 + uVar86;
  uVar84 = (uint)((ulonglong)uVar65 * 0x72d18);
  uVar104 = uVar84 + uVar134;
  uVar121 = (uint)((ulonglong)uVar65 * 0x9fb67);
  uVar59 = uVar121 + uVar125;
  uVar114 = (uint)((ulonglong)uVar65 * 0x215d1);
  uVar135 = (uint)((ulonglong)uVar65 * 0xfff0c653);
  uVar136 = uVar135 + uVar73;
  uVar115 = uVar114 + uVar102;
  uVar108 = (uint)((ulonglong)uVar65 * 0xfff59083);
  uVar28 = uVar108 + uVar53;
  uVar52 = (uint)((ulonglong)uVar66 * 0xa2c13);
  uVar23 = uVar52 + uVar87;
  uVar109 = (uint)((ulonglong)uVar66 * 0x72d18);
  uVar38 = uVar109 + uVar74;
  uVar103 = (uint)((ulonglong)uVar66 * 0x9fb67);
  uVar105 = uVar103 + uVar104;
  uVar69 = (uint)((ulonglong)uVar66 * 0x215d1);
  uVar42 = (uint)((ulonglong)uVar66 * 0xfff0c653);
  uVar106 = uVar42 + uVar59;
  uVar49 = uVar69 + uVar136;
  uVar137 = (uint)((ulonglong)uVar66 * 0xfff59083);
  uVar34 = uVar137 + uVar115;
  iVar122 = iVar26 * -0xa6f7d + -uVar66 + (int)((ulonglong)uVar66 * 0xfff59083 >> 0x20) +
            iVar43 * 0x215d1 + (int)((ulonglong)uVar65 * 0x215d1 >> 0x20) +
            iVar110 * -0xf39ad + -uVar61 + (int)((ulonglong)uVar61 * 0xfff0c653 >> 0x20) +
            iVar119 * 0x9fb67 + (int)((ulonglong)uVar58 * 0x9fb67 >> 0x20) +
            ((iVar101 * 0x72d18 + (int)((ulonglong)uVar76 * 0x72d18 >> 0x20) +
              (int)((ulonglong)lVar7 >> 0x20) + (uint)CARRY4(uVar60,(uint)lVar7)) -
            (iVar75 + (uint)(uVar50 < uVar21))) + (uint)CARRY4(uVar123,uVar51) +
            (uint)CARRY4(uVar118,uVar90) + (uint)CARRY4(uVar114,uVar102) +
            (uint)CARRY4(uVar137,uVar115);
  uVar21 = (uint)((ulonglong)uVar129 * 0xa2c13);
  uVar50 = uVar21 + uVar41;
  iVar75 = iVar35 * 0xa2c13 + (int)((ulonglong)uVar129 * 0xa2c13 >> 0x20) +
           ((int)((ulonglong)lVar1 >> 0x20) - (iVar62 + (uint)((uint)lVar1 < uVar78))) +
           (uint)CARRY4(uVar21,uVar41);
  uVar41 = (uint)((ulonglong)uVar129 * 0x72d18);
  uVar51 = uVar41 + uVar23;
  uVar78 = (uint)((ulonglong)uVar129 * 0x9fb67);
  uVar60 = uVar78 + uVar38;
  iVar62 = iVar35 * 0x9fb67 + (int)((ulonglong)uVar129 * 0x9fb67 >> 0x20) +
           iVar26 * 0x72d18 + (int)((ulonglong)uVar66 * 0x72d18 >> 0x20) +
           iVar43 * 0xa2c13 + (int)((ulonglong)uVar65 * 0xa2c13 >> 0x20) +
           ((int)((ulonglong)lVar14 >> 0x20) - (iVar56 + (uint)((uint)lVar14 < uVar48))) +
           (uint)CARRY4(uVar54,uVar116) + (uint)CARRY4(uVar70,uVar86) + (uint)CARRY4(uVar109,uVar74)
           + (uint)CARRY4(uVar78,uVar38);
  uVar78 = (uint)((ulonglong)uVar129 * 0x215d1);
  uVar21 = (uint)((ulonglong)uVar129 * 0xfff0c653);
  uVar109 = uVar21 + uVar105;
  uVar38 = uVar78 + uVar106;
  iVar82 = iVar35 * 0x215d1 + (int)((ulonglong)uVar129 * 0x215d1 >> 0x20) +
           iVar26 * -0xf39ad + -uVar66 + (int)((ulonglong)uVar66 * 0xfff0c653 >> 0x20) +
           iVar43 * 0x9fb67 + (int)((ulonglong)uVar65 * 0x9fb67 >> 0x20) +
           iVar110 * 0x72d18 + (int)((ulonglong)uVar61 * 0x72d18 >> 0x20) +
           iVar119 * 0xa2c13 + (int)((ulonglong)uVar58 * 0xa2c13 >> 0x20) +
           ((int)((ulonglong)lVar9 >> 0x20) - (iVar117 + (uint)((uint)lVar9 < uVar22))) +
           (uint)CARRY4(uVar55,uVar44) + (uint)CARRY4(uVar111,uVar88) + (uint)CARRY4(uVar96,uVar92)
           + (uint)CARRY4(uVar121,uVar125) + (uint)CARRY4(uVar42,uVar59) +
           (uint)CARRY4(uVar78,uVar106);
  uVar55 = (uint)((ulonglong)uVar129 * 0xfff59083);
  uVar54 = uVar55 + uVar49;
  iVar56 = iVar75 + (uint)(0xffefffff < uVar50);
  uVar48 = uVar50 + 0x100000 >> 0x15 | iVar56 * 0x800;
  uVar42 = uVar48 + uVar51;
  uVar78 = uVar50 + 0x100000 & 0xffe00000;
  iVar117 = iVar35 * 0x72d18 + (int)((ulonglong)uVar129 * 0x72d18 >> 0x20) +
            iVar26 * 0xa2c13 + (int)((ulonglong)uVar66 * 0xa2c13 >> 0x20) +
            ((int)((ulonglong)lVar15 >> 0x20) - (iVar63 + (uint)((uint)lVar15 < uVar72))) +
            (uint)CARRY4(uVar52,uVar87) + (uint)CARRY4(uVar41,uVar23) + (iVar56 >> 0x15) +
            (uint)CARRY4(uVar48,uVar51);
  iVar127 = iVar62 + (uint)(0xffefffff < uVar60);
  uVar22 = uVar60 + 0x100000 >> 0x15 | iVar127 * 0x800;
  uVar48 = uVar60 + 0x100000 & 0xffe00000;
  uVar116 = uVar22 + uVar109;
  iVar64 = iVar35 * -0xf39ad + -uVar129 + (int)((ulonglong)uVar129 * 0xfff0c653 >> 0x20) +
           iVar26 * 0x9fb67 + (int)((ulonglong)uVar66 * 0x9fb67 >> 0x20) +
           iVar43 * 0x72d18 + (int)((ulonglong)uVar65 * 0x72d18 >> 0x20) +
           iVar110 * 0xa2c13 + (int)((ulonglong)uVar61 * 0xa2c13 >> 0x20) +
           (iVar25 - (iVar64 + (uint)(uVar24 < uVar83))) + (uint)CARRY4(uVar124,uVar95) +
           (uint)CARRY4(uVar84,uVar134) + (uint)CARRY4(uVar103,uVar104) +
           (uint)CARRY4(uVar21,uVar105) + (iVar127 >> 0x15) + (uint)CARRY4(uVar22,uVar109);
  iVar63 = iVar82 + (uint)(0xffefffff < uVar38);
  uVar22 = uVar38 + 0x100000 >> 0x15 | iVar63 * 0x800;
  uVar51 = uVar22 + uVar54;
  iVar35 = iVar35 * -0xa6f7d + -uVar129 + (int)((ulonglong)uVar129 * 0xfff59083 >> 0x20) +
           iVar26 * 0x215d1 + (int)((ulonglong)uVar66 * 0x215d1 >> 0x20) +
           iVar43 * -0xf39ad + -uVar65 + (int)((ulonglong)uVar65 * 0xfff0c653 >> 0x20) +
           iVar110 * 0x9fb67 + (int)((ulonglong)uVar61 * 0x9fb67 >> 0x20) +
           iVar119 * 0x72d18 + (int)((ulonglong)uVar58 * 0x72d18 >> 0x20) +
           iVar101 * 0xa2c13 + (int)((ulonglong)uVar76 * 0xa2c13 >> 0x20) +
           (iVar81 - (iVar45 + (uint)(uVar80 < uVar32))) + (uint)CARRY4(uVar126,uVar89) +
           (uint)CARRY4(uVar112,uVar93) + (uint)CARRY4(uVar68,uVar94) + (uint)CARRY4(uVar135,uVar73)
           + (uint)CARRY4(uVar69,uVar136) + (uint)CARRY4(uVar55,uVar49) + (iVar63 >> 0x15) +
           (uint)CARRY4(uVar22,uVar54);
  iVar36 = iVar122 + (uint)(0xffefffff < uVar34);
  uVar52 = uVar34 + 0x100000 >> 0x15 | iVar36 * 0x800;
  uVar54 = uVar52 + uVar28;
  uVar22 = uVar34 + 0x100000 & 0xffe00000;
  uVar21 = uVar38 + 0x100000 & 0xffe00000;
  iVar26 = iVar43 * -0xa6f7d + -uVar65 + (int)((ulonglong)uVar65 * 0xfff59083 >> 0x20) +
           iVar110 * 0x215d1 + (int)((ulonglong)uVar61 * 0x215d1 >> 0x20) +
           iVar119 * -0xf39ad + -uVar58 + (int)((ulonglong)uVar58 * 0xfff0c653 >> 0x20) +
           ((iVar101 * 0x9fb67 + (int)((ulonglong)uVar76 * 0x9fb67 >> 0x20) + iVar99 +
            (uint)CARRY4(uVar33,uVar67)) - (iVar128 + (uint)(uVar39 < uVar27))) +
           (uint)CARRY4(uVar40,uVar97) + (uint)CARRY4(uVar120,uVar47) + (uint)CARRY4(uVar108,uVar53)
           + (iVar36 >> 0x15) + (uint)CARRY4(uVar52,uVar28);
  uVar120 = uVar34 - uVar22;
  iVar110 = iVar85 + (uint)(0xffefffff < uVar79);
  uVar23 = uVar79 + 0x100000 >> 0x15 | iVar110 * 0x800;
  uVar72 = uVar23 + uVar133;
  uVar52 = uVar79 + 0x100000 & 0xffe00000;
  iVar81 = iVar119 * -0xa6f7d + -uVar58 + (int)((ulonglong)uVar58 * 0xfff59083 >> 0x20) +
           ((iVar101 * 0x215d1 + (int)((ulonglong)uVar76 * 0x215d1 >> 0x20) + iVar100 +
            (uint)CARRY4(uVar130,uVar37)) - (iVar46 + (uint)(uVar131 < uVar20))) +
           (uint)CARRY4(uVar71,uVar132) + (iVar110 >> 0x15) + (uint)CARRY4(uVar23,uVar133);
  uVar44 = uVar79 - uVar52;
  iVar119 = iVar91 + (uint)(0xffefffff < uVar77);
  uVar27 = uVar77 + 0x100000 >> 0x15 | iVar119 * 0x800;
  uVar41 = uVar27 + uVar98;
  uVar23 = uVar77 + 0x100000 & 0xffe00000;
  iVar57 = (iVar30 - (iVar57 + (uint)(uVar113 < uVar31))) + (iVar119 >> 0x15) +
           (uint)CARRY4(uVar27,uVar98);
  uVar67 = uVar77 - uVar23;
  iVar30 = iVar117 + (uint)(0xffefffff < uVar42);
  iVar45 = iVar64 + (uint)(0xffefffff < uVar116);
  iVar107 = iVar35 + (uint)(0xffefffff < uVar51);
  uVar27 = uVar42 + 0x100000 & 0xffe00000;
  uVar32 = uVar42 + 0x100000 >> 0x15 | iVar30 * 0x800;
  uVar24 = uVar51 + 0x100000 >> 0x15 | iVar107 * 0x800;
  uVar121 = uVar24 + uVar120;
  uVar20 = uVar51 + 0x100000 & 0xffe00000;
  iVar46 = iVar26 + (uint)(0xffefffff < uVar54);
  uVar33 = uVar54 + 0x100000 >> 0x15 | iVar46 * 0x800;
  uVar108 = uVar33 + uVar44;
  uVar28 = uVar54 + 0x100000 & 0xffe00000;
  uVar59 = uVar54 - uVar28;
  iVar43 = iVar81 + (uint)(0xffefffff < uVar72);
  uVar47 = uVar72 + 0x100000 >> 0x15 | iVar43 * 0x800;
  uVar65 = uVar47 + uVar67;
  uVar31 = uVar72 + 0x100000 & 0xffe00000;
  uVar83 = uVar72 - uVar31;
  iVar29 = iVar57 + (uint)(0xffefffff < uVar41);
  uVar84 = uVar41 + 0x100000 >> 0x15 | iVar29 * 0x800;
  uVar109 = uVar41 + 0x100000 & 0xffe00000;
  uVar90 = uVar41 - uVar109;
  iVar25 = iVar29 >> 0x15;
  uVar118 = uVar116 + 0x100000 >> 0x15 | iVar45 * 0x800;
  uVar58 = uVar116 + 0x100000 & 0xffe00000;
  uVar37 = (uint)((ulonglong)uVar84 * 0xa2c13);
  uVar39 = uVar37 - uVar78;
  uVar40 = uVar39 + uVar50;
  uVar68 = (uint)((ulonglong)uVar84 * 0x72d18);
  uVar53 = uVar40 & 0x1fffff;
  iVar56 = iVar75 + ((iVar25 * 0xa2c13 + (int)((ulonglong)uVar84 * 0xa2c13 >> 0x20)) -
                    (iVar56 + (uint)(uVar37 < uVar78))) + (uint)CARRY4(uVar39,uVar50);
  uVar70 = uVar68 + uVar42;
  uVar50 = uVar40 >> 0x15 | iVar56 * 0x800;
  uVar66 = uVar70 - uVar27;
  uVar55 = (uint)((ulonglong)uVar84 * 0x9fb67);
  uVar61 = uVar55 + uVar60;
  uVar71 = uVar61 + uVar32;
  uVar73 = uVar71 - uVar48;
  uVar78 = (uint)((ulonglong)uVar84 * 0x215d1);
  uVar69 = (uint)((ulonglong)uVar84 * 0xfff0c653);
  uVar76 = uVar69 + uVar116;
  uVar49 = uVar76 - uVar58;
  uVar37 = uVar78 + uVar38;
  uVar39 = uVar37 - uVar21;
  uVar40 = uVar118 + uVar39;
  uVar104 = (uint)((ulonglong)uVar84 * 0xfff59083);
  uVar105 = uVar104 + uVar51;
  uVar106 = uVar105 - uVar20;
  uVar74 = uVar50 + uVar66;
  iVar56 = ((iVar25 * 0x72d18 + (int)((ulonglong)uVar84 * 0x72d18 >> 0x20) + iVar117 +
            (uint)CARRY4(uVar68,uVar42)) - (iVar30 + (uint)(uVar70 < uVar27))) + (iVar56 >> 0x15) +
           (uint)CARRY4(uVar50,uVar66);
  uVar42 = uVar74 & 0x1fffff;
  uVar27 = uVar74 >> 0x15 | iVar56 * 0x800;
  uVar50 = uVar27 + uVar73;
  uVar66 = uVar50 & 0x1fffff;
  iVar30 = ((iVar25 * 0x9fb67 + (int)((ulonglong)uVar84 * 0x9fb67 >> 0x20) + iVar62 +
             (uint)CARRY4(uVar55,uVar60) + (iVar30 >> 0x15) + (uint)CARRY4(uVar61,uVar32)) -
           (iVar127 + (uint)(uVar71 < uVar48))) + (iVar56 >> 0x15) + (uint)CARRY4(uVar27,uVar73);
  uVar48 = uVar50 >> 0x15 | iVar30 * 0x800;
  uVar27 = uVar48 + uVar49;
  iVar30 = ((iVar25 * -0xf39ad + -uVar84 + (int)((ulonglong)uVar84 * 0xfff0c653 >> 0x20) + iVar64 +
            (uint)CARRY4(uVar69,uVar116)) - (iVar45 + (uint)(uVar76 < uVar58))) + (iVar30 >> 0x15) +
           (uint)CARRY4(uVar48,uVar49);
  uVar48 = uVar27 >> 0x15 | iVar30 * 0x800;
  uVar55 = uVar48 + uVar40;
  iVar30 = ((iVar25 * 0x215d1 + (int)((ulonglong)uVar84 * 0x215d1 >> 0x20) + iVar82 +
            (uint)CARRY4(uVar78,uVar38)) - (iVar63 + (uint)(uVar37 < uVar21))) + (iVar45 >> 0x15) +
           (uint)CARRY4(uVar118,uVar39) + (iVar30 >> 0x15) + (uint)CARRY4(uVar48,uVar40);
  uVar78 = uVar55 >> 0x15 | iVar30 * 0x800;
  uVar58 = uVar78 + uVar106;
  iVar25 = ((iVar25 * -0xa6f7d + -uVar84 + (int)((ulonglong)uVar84 * 0xfff59083 >> 0x20) + iVar35 +
            (uint)CARRY4(uVar104,uVar51)) - (iVar107 + (uint)(uVar105 < uVar20))) + (iVar30 >> 0x15)
           + (uint)CARRY4(uVar78,uVar106);
  uVar78 = uVar58 >> 0x15 | iVar25 * 0x800;
  uVar48 = uVar78 + uVar121;
  iVar25 = (iVar122 - (iVar36 + (uint)(uVar34 < uVar22))) + (iVar107 >> 0x15) +
           (uint)CARRY4(uVar24,uVar120) + (iVar25 >> 0x15) + (uint)CARRY4(uVar78,uVar121);
  uVar22 = uVar48 & 0x1fffff;
  uVar78 = uVar48 >> 0x15 | iVar25 * 0x800;
  uVar48 = uVar78 + uVar59;
  iVar25 = (iVar26 - (iVar46 + (uint)(uVar54 < uVar28))) + (iVar25 >> 0x15) +
           (uint)CARRY4(uVar78,uVar59);
  uVar38 = uVar48 & 0x1fffff;
  uVar78 = uVar48 >> 0x15 | iVar25 * 0x800;
  uVar48 = uVar78 + uVar108;
  uVar37 = uVar48 & 0x1fffff;
  iVar25 = (iVar85 - (iVar110 + (uint)(uVar79 < uVar52))) + (iVar46 >> 0x15) +
           (uint)CARRY4(uVar33,uVar44) + (iVar25 >> 0x15) + (uint)CARRY4(uVar78,uVar108);
  uVar48 = uVar48 >> 0x15 | iVar25 * 0x800;
  uVar78 = uVar48 + uVar83;
  uVar32 = uVar78 & 0x1fffff;
  iVar25 = (iVar81 - (iVar43 + (uint)(uVar72 < uVar31))) + (iVar25 >> 0x15) +
           (uint)CARRY4(uVar48,uVar83);
  uVar78 = uVar78 >> 0x15 | iVar25 * 0x800;
  uVar48 = uVar78 + uVar65;
  iVar25 = (iVar91 - (iVar119 + (uint)(uVar77 < uVar23))) + (iVar43 >> 0x15) +
           (uint)CARRY4(uVar47,uVar67) + (iVar25 >> 0x15) + (uint)CARRY4(uVar78,uVar65);
  uVar24 = uVar48 & 0x1fffff;
  uVar78 = uVar48 >> 0x15 | iVar25 * 0x800;
  uVar20 = uVar78 + uVar90;
  iVar25 = (iVar57 - (iVar29 + (uint)(uVar41 < uVar109))) + (iVar25 >> 0x15) +
           (uint)CARRY4(uVar78,uVar90);
  uVar21 = uVar20 >> 0x15 | iVar25 * 0x800;
  iVar25 = iVar25 >> 0x15;
  uVar78 = (uint)((ulonglong)uVar21 * 0xa2c13);
  uVar28 = uVar78 + uVar53;
  iVar26 = iVar25 * 0xa2c13 + (int)((ulonglong)uVar21 * 0xa2c13 >> 0x20) +
           (uint)CARRY4(uVar78,uVar53);
  uVar34 = uVar28 >> 0x15 | iVar26 * 0x800;
  uVar78 = (uint)((ulonglong)uVar21 * 0x72d18);
  uVar23 = uVar78 + uVar42;
  uVar31 = (uint)((ulonglong)uVar21 * 0x9fb67);
  uVar109 = uVar31 + uVar66;
  lVar3 = (ulonglong)uVar21 * 0xfff0c653 +
          (CONCAT44(iVar25 * -0xf39ad + -uVar21,uVar27) & 0xffffffff001fffff);
  uVar33 = (uint)lVar3;
  lVar2 = (ulonglong)uVar21 * 0x215d1 + (CONCAT44(iVar25 * 0x215d1,uVar55) & 0xffffffff001fffff);
  uVar52 = (uint)lVar2;
  lVar1 = (ulonglong)uVar21 * 0xfff59083 +
          (CONCAT44(iVar25 * -0xa6f7d + -uVar21,uVar58) & 0xffffffff001fffff);
  uVar58 = (uint)lVar1;
  uVar48 = uVar34 + uVar23;
  iVar26 = iVar25 * 0x72d18 + (int)((ulonglong)uVar21 * 0x72d18 >> 0x20) +
           (uint)CARRY4(uVar78,uVar42) + (iVar26 >> 0x15) + (uint)CARRY4(uVar34,uVar23);
  uVar78 = uVar48 & 0x1fffff;
  uVar23 = uVar48 >> 0x15 | iVar26 * 0x800;
  uVar27 = uVar23 + uVar109;
  iVar25 = iVar25 * 0x9fb67 + (int)((ulonglong)uVar21 * 0x9fb67 >> 0x20) +
           (uint)CARRY4(uVar31,uVar66) + (iVar26 >> 0x15) + (uint)CARRY4(uVar23,uVar109);
  uVar21 = uVar27 >> 0x15 | iVar25 * 0x800;
  uVar23 = uVar21 + uVar33;
  iVar25 = (int)((ulonglong)lVar3 >> 0x20) + (iVar25 >> 0x15) + (uint)CARRY4(uVar21,uVar33);
  uVar33 = uVar23 & 0x1fffff;
  uVar21 = uVar23 >> 0x15 | iVar25 * 0x800;
  uVar23 = uVar21 + uVar52;
  iVar25 = (int)((ulonglong)lVar2 >> 0x20) + (iVar25 >> 0x15) + (uint)CARRY4(uVar21,uVar52);
  uVar21 = uVar23 >> 0x15 | iVar25 * 0x800;
  uVar31 = uVar21 + uVar58;
  uVar42 = uVar23 & 0x1fffff;
  iVar25 = (int)((ulonglong)lVar1 >> 0x20) + (iVar25 >> 0x15) + (uint)CARRY4(uVar21,uVar58);
  uVar21 = uVar31 >> 0x15 | iVar25 * 0x800;
  uVar52 = uVar21 + uVar22;
  iVar25 = (iVar25 >> 0x15) + (uint)CARRY4(uVar21,uVar22);
  uVar22 = uVar52 >> 0x15 | iVar25 * 0x800;
  uVar52 = uVar52 & 0x1fffff;
  uVar34 = uVar22 + uVar38;
  iVar25 = (iVar25 >> 0x15) + (uint)CARRY4(uVar22,uVar38);
  uVar22 = uVar34 >> 0x15 | iVar25 * 0x800;
  uVar109 = uVar22 + uVar37;
  iVar25 = (iVar25 >> 0x15) + (uint)CARRY4(uVar22,uVar37);
  uVar22 = uVar109 >> 0x15 | iVar25 * 0x800;
  uVar21 = uVar22 + uVar32;
  iVar25 = (iVar25 >> 0x15) + (uint)CARRY4(uVar22,uVar32);
  uVar22 = uVar21 >> 0x15 | iVar25 * 0x800;
  uVar58 = uVar22 + uVar24;
  uVar21 = uVar21 & 0x1fffff;
  uVar22 = (uVar58 >> 0x15 | ((iVar25 >> 0x15) + (uint)CARRY4(uVar22,uVar24)) * 0x800) +
           (uVar20 & 0x1fffff);
  *(uint *)(param_1 + 0x20) =
       uVar28 & 0xff | ((uVar28 & 0x1fffff) >> 8 & 0xff) << 8 |
       ((uVar48 & 7) << 5 | (uVar28 & 0x1fffff) >> 0x10) << 0x10 | (uVar78 >> 3) << 0x18;
  *(uint *)(param_1 + 0x28) =
       uVar33 >> 1 & 0xff | (uVar33 >> 9 & 0xff) << 8 |
       ((uVar23 & 0xf) << 4 | uVar33 >> 0x11) << 0x10 | (uVar42 >> 4) << 0x18;
  *(uint *)(param_1 + 0x24) =
       uVar78 >> 0xb & 0xff | ((uVar27 & 0x3f) << 2 | uVar78 >> 0x13) << 8 |
       ((uVar27 & 0x1fffff) >> 6 & 0xff) << 0x10 |
       (uVar33 << 7 | (uVar27 & 0x1fffff) >> 0xe) << 0x18;
  *(uint *)(param_1 + 0x2c) =
       uVar42 >> 0xc & 0xff | ((uVar31 & 0x7f) << 1 | uVar42 >> 0x14) << 8 |
       ((uVar31 & 0x1fffff) >> 7 & 0xff) << 0x10 |
       (uVar52 << 6 | (uVar31 & 0x1fffff) >> 0xf) << 0x18;
  *(uint *)(param_1 + 0x30) =
       uVar52 >> 2 & 0xff | (uVar52 >> 10 & 0xff) << 8 |
       ((uVar34 & 0x1f) << 3 | uVar52 >> 0x12) << 0x10 | ((uVar34 & 0x1fffff) >> 5) << 0x18;
  *(uint *)(param_1 + 0x38) =
       uVar21 >> 3 & 0xff | (uVar21 >> 0xb & 0xff) << 8 |
       ((uVar58 & 0x3f) << 2 | uVar21 >> 0x13) << 0x10 | ((uVar58 & 0x1fffff) >> 6) << 0x18;
  *(uint *)(param_1 + 0x34) =
       (uVar34 & 0x1fffff) >> 0xd | (uVar109 & 0xff) << 8 |
       ((uVar109 & 0x1fffff) >> 8 & 0xff) << 0x10 |
       (uVar21 << 5 | (uVar109 & 0x1fffff) >> 0x10) << 0x18;
  *(uint *)(param_1 + 0x3c) =
       uVar22 * 0x80 & 0xff | (uVar58 & 0x1fffff) >> 0xe | (uVar22 >> 1 & 0xff) << 8 |
       (uVar22 >> 9 & 0xff) << 0x10 | (uVar22 >> 0x11) << 0x18;
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

