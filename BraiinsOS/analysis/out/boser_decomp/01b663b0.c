// FUN_01b663b0 @ 01b663b0 size=9300 calls_out=7 calls_in=1
// strings: 

undefined8
FUN_01b663b0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            int param_7,int param_8)

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
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  uint uVar70;
  int iVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  int iVar75;
  int iVar76;
  uint uVar77;
  uint uVar78;
  int iVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  int iVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  int iVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  int iVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  uint uVar99;
  uint uVar100;
  int iVar101;
  uint uVar102;
  uint uVar103;
  uint uVar104;
  int iVar105;
  int iVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  int iVar112;
  uint uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  int iVar117;
  uint uVar118;
  uint uVar119;
  uint uVar120;
  uint uVar121;
  int iVar122;
  uint uVar123;
  int iVar124;
  uint uVar125;
  uint uVar126;
  uint uVar127;
  uint uVar128;
  uint uVar129;
  uint uVar130;
  int iVar131;
  uint uVar132;
  uint uVar133;
  uint uVar134;
  uint uVar135;
  uint uVar136;
  int iVar137;
  uint uVar138;
  uint uVar139;
  uint uVar140;
  undefined8 uVar141;
  ulonglong uVar142;
  ulonglong uVar143;
  undefined4 uVar144;
  undefined4 uVar145;
  undefined1 auStack_10c [160];
  undefined1 auStack_6c [2];
  undefined1 auStack_6a [3];
  undefined1 auStack_67 [2];
  undefined1 auStack_65 [3];
  undefined1 auStack_62 [3];
  undefined1 auStack_5f [2];
  undefined1 auStack_5d [3];
  undefined1 auStack_5a [3];
  undefined1 auStack_57 [2];
  undefined1 auStack_55 [3];
  undefined1 auStack_52 [2];
  undefined1 auStack_50 [36];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b391f8(param_2,&PTR_01d3b2b0,0);
  FUN_01b39010(auStack_10c,param_2);
  FUN_01b26644(param_1,auStack_10c);
  if (param_8 == 0) {
    param_8 = 0x20;
    iVar39 = 0;
    uVar145 = 0;
    param_7 = param_1;
    iVar40 = param_4;
    param_4 = param_5;
    uVar144 = param_6;
  }
  else {
    iVar40 = param_1;
    uVar144 = 0x20;
    iVar39 = param_5;
    uVar145 = param_6;
  }
  FUN_01b662a4(auStack_6c,param_7,param_8,iVar40,0x20,param_4,uVar144,iVar39,uVar145);
  FUN_01b391f8(auStack_6c);
  uVar25 = FUN_01b0d528(auStack_6c);
  uVar25 = uVar25 & 0x1fffff;
  uVar26 = FUN_01b0d558(auStack_6a);
  uVar43 = (uVar26 & 0x3ffffff) >> 5;
  uVar26 = FUN_01b0d528(auStack_67);
  uVar44 = (uVar26 & 0x7fffff) >> 2;
  uVar26 = FUN_01b0d558(auStack_65);
  uVar45 = (uVar26 & 0xfffffff) >> 7;
  uVar26 = FUN_01b0d558(auStack_62);
  uVar46 = (uVar26 & 0x1ffffff) >> 4;
  uVar26 = FUN_01b0d528(auStack_5f);
  uVar47 = (uVar26 & 0x3fffff) >> 1;
  uVar26 = FUN_01b0d558(auStack_5d);
  uVar48 = (uVar26 & 0x7ffffff) >> 6;
  uVar141 = FUN_01b0d528(auStack_5a);
  uVar84 = (uint)uVar141 >> 3 | (int)((ulonglong)uVar141 >> 0x20) << 0x1d;
  uVar26 = FUN_01b0d528(auStack_57);
  uVar26 = uVar26 & 0x1fffff;
  uVar27 = FUN_01b0d558(auStack_55);
  uVar49 = (uVar27 & 0x3ffffff) >> 5;
  uVar27 = FUN_01b0d528(auStack_52);
  uVar50 = (uVar27 & 0x7fffff) >> 2;
  uVar141 = FUN_01b0d558(auStack_50);
  uVar88 = (uint)uVar141 >> 7 | (int)((ulonglong)uVar141 >> 0x20) << 0x19;
  uVar27 = FUN_01b0d528(param_3);
  uVar27 = uVar27 & 0x1fffff;
  uVar28 = FUN_01b0d558(param_3 + 2);
  uVar51 = (uVar28 & 0x3ffffff) >> 5;
  uVar28 = FUN_01b0d528(param_3 + 5);
  uVar52 = (uVar28 & 0x7fffff) >> 2;
  uVar28 = FUN_01b0d558(param_3 + 7);
  uVar53 = (uVar28 & 0xfffffff) >> 7;
  uVar28 = FUN_01b0d558(param_3 + 10);
  uVar54 = (uVar28 & 0x1ffffff) >> 4;
  uVar28 = FUN_01b0d528(param_3 + 0xd);
  uVar55 = (uVar28 & 0x3fffff) >> 1;
  uVar28 = FUN_01b0d558(param_3 + 0xf);
  uVar56 = (uVar28 & 0x7ffffff) >> 6;
  uVar141 = FUN_01b0d528(param_3 + 0x12);
  uVar92 = (uint)uVar141 >> 3 | (int)((ulonglong)uVar141 >> 0x20) << 0x1d;
  uVar28 = FUN_01b0d528(param_3 + 0x15);
  uVar28 = uVar28 & 0x1fffff;
  uVar29 = FUN_01b0d558(param_3 + 0x17);
  uVar104 = (uVar29 & 0x3ffffff) >> 5;
  uVar29 = FUN_01b0d528(param_3 + 0x1a);
  uVar57 = (uVar29 & 0x7fffff) >> 2;
  uVar141 = FUN_01b0d558(param_3 + 0x1c);
  uVar100 = (uint)uVar141 >> 7 | (int)((ulonglong)uVar141 >> 0x20) << 0x19;
  uVar29 = FUN_01b0d528(param_2);
  uVar30 = FUN_01b0d558(param_2 + 2);
  uVar31 = FUN_01b0d528(param_2 + 5);
  uVar32 = FUN_01b0d558(param_2 + 7);
  uVar33 = FUN_01b0d558(param_2 + 10);
  uVar34 = FUN_01b0d528(param_2 + 0xd);
  uVar35 = FUN_01b0d558(param_2 + 0xf);
  uVar142 = FUN_01b0d528(param_2 + 0x12);
  uVar36 = FUN_01b0d528(param_2 + 0x15);
  uVar37 = FUN_01b0d558(param_2 + 0x17);
  uVar38 = FUN_01b0d528(param_2 + 0x1a);
  uVar143 = FUN_01b0d558(param_2 + 0x1c);
  lVar1 = (longlong)(int)uVar27 * (longlong)(int)uVar25 + (ulonglong)(uVar29 & 0x1fffff);
  lVar2 = (longlong)(int)uVar27 * (longlong)(int)uVar44 +
          (longlong)(int)uVar52 * (longlong)(int)uVar25 +
          (longlong)(int)uVar43 * (longlong)(int)uVar51 + (ulonglong)((uVar31 & 0x7fffff) >> 2);
  lVar3 = (longlong)(int)uVar27 * (longlong)(int)uVar46 +
          (longlong)(int)uVar52 * (longlong)(int)uVar44 +
          (longlong)(int)uVar51 * (longlong)(int)uVar45 +
          (longlong)(int)uVar54 * (longlong)(int)uVar25 +
          (longlong)(int)uVar43 * (longlong)(int)uVar53 + (ulonglong)((uVar33 & 0x1ffffff) >> 4);
  lVar4 = (longlong)(int)uVar27 * (longlong)(int)uVar48 +
          (longlong)(int)uVar52 * (longlong)(int)uVar46 +
          (longlong)(int)uVar51 * (longlong)(int)uVar47 +
          (longlong)(int)uVar54 * (longlong)(int)uVar44 +
          (longlong)(int)uVar53 * (longlong)(int)uVar45 +
          (longlong)(int)uVar56 * (longlong)(int)uVar25 +
          (longlong)(int)uVar43 * (longlong)(int)uVar55 + (ulonglong)((uVar35 & 0x7ffffff) >> 6);
  lVar5 = (longlong)(int)uVar52 * (longlong)(int)uVar48 +
          (longlong)(int)uVar51 * (longlong)(int)uVar84 +
          (longlong)(int)uVar54 * (longlong)(int)uVar46 +
          (longlong)(int)uVar53 * (longlong)(int)uVar47 +
          (longlong)(int)uVar56 * (longlong)(int)uVar44 +
          (longlong)(int)uVar55 * (longlong)(int)uVar45 +
          (longlong)(int)uVar92 * (longlong)(int)uVar43 +
          (longlong)(int)uVar28 * (longlong)(int)uVar25 +
          (longlong)(int)uVar26 * (longlong)(int)uVar27 + (ulonglong)(uVar36 & 0x1fffff);
  lVar6 = (longlong)(int)uVar51 * (longlong)(int)uVar26 +
          (longlong)(int)uVar27 * (longlong)(int)uVar49 +
          (longlong)(int)uVar53 * (longlong)(int)uVar48 +
          (longlong)(int)uVar52 * (longlong)(int)uVar84 +
          (longlong)(int)uVar55 * (longlong)(int)uVar46 +
          (longlong)(int)uVar54 * (longlong)(int)uVar47 +
          (longlong)(int)uVar92 * (longlong)(int)uVar44 +
          (longlong)(int)uVar56 * (longlong)(int)uVar45 +
          (longlong)(int)uVar104 * (longlong)(int)uVar25 +
          (longlong)(int)uVar43 * (longlong)(int)uVar28 + (ulonglong)((uVar37 & 0x3ffffff) >> 5);
  uVar29 = (uint)lVar6;
  lVar7 = (longlong)(int)uVar27 * (longlong)(int)uVar50 +
          (longlong)(int)uVar52 * (longlong)(int)uVar26 +
          (longlong)(int)uVar51 * (longlong)(int)uVar49 +
          (longlong)(int)uVar54 * (longlong)(int)uVar48 +
          (longlong)(int)uVar53 * (longlong)(int)uVar84 +
          (longlong)(int)uVar56 * (longlong)(int)uVar46 +
          (longlong)(int)uVar55 * (longlong)(int)uVar47 +
          (longlong)(int)uVar28 * (longlong)(int)uVar44 +
          (longlong)(int)uVar92 * (longlong)(int)uVar45 +
          (longlong)(int)uVar57 * (longlong)(int)uVar25 +
          (longlong)(int)uVar43 * (longlong)(int)uVar104 + (ulonglong)((uVar38 & 0x7fffff) >> 2);
  lVar8 = (longlong)(int)uVar51 * (longlong)(int)uVar50 +
          (longlong)(int)uVar53 * (longlong)(int)uVar26 +
          (longlong)(int)uVar52 * (longlong)(int)uVar49 +
          (longlong)(int)uVar55 * (longlong)(int)uVar48 +
          (longlong)(int)uVar54 * (longlong)(int)uVar84 +
          (longlong)(int)uVar92 * (longlong)(int)uVar46 +
          (longlong)(int)uVar56 * (longlong)(int)uVar47 +
          (longlong)(int)uVar104 * (longlong)(int)uVar44 +
          (longlong)(int)uVar28 * (longlong)(int)uVar45 +
          (longlong)(int)uVar57 * (longlong)(int)uVar43 +
          (longlong)(int)uVar100 * (longlong)(int)uVar25 +
          (longlong)(int)uVar88 * (longlong)(int)uVar27 + (uVar143 >> 7);
  uVar31 = (uint)lVar8;
  lVar9 = (longlong)(int)uVar51 * (longlong)(int)uVar88 +
          (longlong)(int)uVar53 * (longlong)(int)uVar49 +
          (longlong)(int)uVar52 * (longlong)(int)uVar50 +
          (longlong)(int)uVar55 * (longlong)(int)uVar84 +
          (longlong)(int)uVar54 * (longlong)(int)uVar26 +
          (longlong)(int)uVar92 * (longlong)(int)uVar47 +
          (longlong)(int)uVar56 * (longlong)(int)uVar48 +
          (longlong)(int)uVar104 * (longlong)(int)uVar45 +
          (longlong)(int)uVar28 * (longlong)(int)uVar46 +
          (longlong)(int)uVar100 * (longlong)(int)uVar43 +
          (longlong)(int)uVar44 * (longlong)(int)uVar57;
  lVar10 = (longlong)(int)uVar53 * (longlong)(int)uVar50 +
           (longlong)(int)uVar52 * (longlong)(int)uVar88 +
           (longlong)(int)uVar55 * (longlong)(int)uVar26 +
           (longlong)(int)uVar54 * (longlong)(int)uVar49 +
           (longlong)(int)uVar92 * (longlong)(int)uVar48 +
           (longlong)(int)uVar56 * (longlong)(int)uVar84 +
           (longlong)(int)uVar104 * (longlong)(int)uVar46 +
           (longlong)(int)uVar28 * (longlong)(int)uVar47 +
           (longlong)(int)uVar100 * (longlong)(int)uVar44 +
           (longlong)(int)uVar45 * (longlong)(int)uVar57;
  uVar33 = (uint)lVar10;
  lVar11 = (longlong)(int)uVar53 * (longlong)(int)uVar88 +
           (longlong)(int)uVar55 * (longlong)(int)uVar49 +
           (longlong)(int)uVar54 * (longlong)(int)uVar50 +
           (longlong)(int)uVar56 * (longlong)(int)uVar26 +
           (longlong)(int)uVar104 * (longlong)(int)uVar47 +
           (longlong)(int)uVar28 * (longlong)(int)uVar48 +
           (longlong)(int)uVar92 * (longlong)(int)uVar84 +
           (longlong)(int)uVar100 * (longlong)(int)uVar45 +
           (longlong)(int)uVar46 * (longlong)(int)uVar57;
  lVar12 = (longlong)(int)uVar55 * (longlong)(int)uVar50 +
           (longlong)(int)uVar54 * (longlong)(int)uVar88 +
           (longlong)(int)uVar56 * (longlong)(int)uVar49 +
           (longlong)(int)uVar104 * (longlong)(int)uVar48 +
           (longlong)(int)uVar57 * (longlong)(int)uVar47 +
           (longlong)(int)uVar100 * (longlong)(int)uVar46 +
           (longlong)(int)uVar28 * (longlong)(int)uVar84 +
           (longlong)(int)uVar26 * (longlong)(int)uVar92;
  lVar13 = (longlong)(int)uVar55 * (longlong)(int)uVar88 +
           (longlong)(int)uVar92 * (longlong)(int)uVar49 +
           (longlong)(int)uVar56 * (longlong)(int)uVar50 +
           (longlong)(int)uVar104 * (longlong)(int)uVar84 +
           (longlong)(int)uVar28 * (longlong)(int)uVar26 +
           (longlong)(int)uVar100 * (longlong)(int)uVar47 +
           (longlong)(int)uVar48 * (longlong)(int)uVar57;
  lVar14 = (longlong)(int)uVar92 * (longlong)(int)uVar50 +
           (longlong)(int)uVar56 * (longlong)(int)uVar88 +
           (longlong)(int)uVar104 * (longlong)(int)uVar26 +
           (longlong)(int)uVar28 * (longlong)(int)uVar49 +
           (longlong)(int)uVar100 * (longlong)(int)uVar48 +
           (longlong)(int)uVar84 * (longlong)(int)uVar57;
  uVar35 = (uint)lVar14;
  lVar15 = (longlong)(int)uVar104 * (longlong)(int)uVar49 +
           (longlong)(int)uVar28 * (longlong)(int)uVar50 +
           (longlong)(int)uVar57 * (longlong)(int)uVar26 +
           (longlong)(int)uVar100 * (longlong)(int)uVar84 +
           (longlong)(int)uVar88 * (longlong)(int)uVar92;
  lVar16 = (longlong)(int)uVar104 * (longlong)(int)uVar50 +
           (longlong)(int)uVar57 * (longlong)(int)uVar49 +
           (longlong)(int)uVar100 * (longlong)(int)uVar26 +
           (longlong)(int)uVar88 * (longlong)(int)uVar28;
  uVar28 = (uint)lVar16;
  lVar17 = (longlong)(int)uVar104 * (longlong)(int)uVar88 +
           (longlong)(int)uVar100 * (longlong)(int)uVar49 +
           (longlong)(int)uVar50 * (longlong)(int)uVar57;
  lVar18 = (longlong)(int)uVar100 * (longlong)(int)uVar50 +
           (longlong)(int)uVar88 * (longlong)(int)uVar57;
  uVar36 = (uint)lVar18;
  lVar19 = (longlong)(int)uVar88 * (longlong)(int)uVar100;
  uVar26 = (uint)(lVar1 + 0x100000);
  iVar40 = (int)((ulonglong)(lVar1 + 0x100000) >> 0x20);
  uVar57 = uVar26 & 0xffe00000;
  lVar21 = (longlong)(int)uVar51 * (longlong)(int)uVar25 +
           (longlong)(int)uVar43 * (longlong)(int)uVar27 + (ulonglong)((uVar30 & 0x3ffffff) >> 5) +
           (ulonglong)(uVar26 >> 0x15 | iVar40 * 0x800);
  uVar88 = (uint)lVar1 - uVar57;
  uVar26 = (uint)(lVar2 + 0x100000);
  iVar89 = (int)((ulonglong)(lVar2 + 0x100000) >> 0x20);
  uVar111 = uVar26 & 0xffe00000;
  lVar22 = (longlong)(int)uVar51 * (longlong)(int)uVar44 +
           (longlong)(int)uVar27 * (longlong)(int)uVar45 +
           (longlong)(int)uVar53 * (longlong)(int)uVar25 +
           (longlong)(int)uVar43 * (longlong)(int)uVar52 + (ulonglong)((uVar32 & 0xfffffff) >> 7) +
           (ulonglong)(uVar26 >> 0x15 | iVar89 * 0x800);
  lVar20 = lVar3 + 0x100000;
  uVar30 = (uint)lVar20;
  iVar39 = (int)((ulonglong)lVar20 >> 0x20);
  lVar23 = (longlong)(int)uVar51 * (longlong)(int)uVar46 +
           (longlong)(int)uVar27 * (longlong)(int)uVar47 +
           (longlong)(int)uVar53 * (longlong)(int)uVar44 +
           (longlong)(int)uVar52 * (longlong)(int)uVar45 +
           (longlong)(int)uVar55 * (longlong)(int)uVar25 +
           (longlong)(int)uVar43 * (longlong)(int)uVar54 + (ulonglong)((uVar34 & 0x3fffff) >> 1) +
           (ulonglong)(uVar30 >> 0x15 | iVar39 * 0x800);
  lVar20 = lVar4 + 0x100000;
  uVar34 = (uint)lVar20;
  iVar41 = (int)((ulonglong)lVar20 >> 0x20);
  lVar24 = (longlong)(int)uVar51 * (longlong)(int)uVar48 +
           (longlong)(int)uVar53 * (longlong)(int)uVar46 +
           (longlong)(int)uVar52 * (longlong)(int)uVar47 +
           (longlong)(int)uVar55 * (longlong)(int)uVar44 +
           (longlong)(int)uVar54 * (longlong)(int)uVar45 +
           (longlong)(int)uVar56 * (longlong)(int)uVar43 +
           (longlong)(int)uVar92 * (longlong)(int)uVar25 +
           (longlong)(int)uVar84 * (longlong)(int)uVar27 + (uVar142 >> 3) +
           (ulonglong)(uVar34 >> 0x15 | iVar41 * 0x800);
  lVar20 = lVar5 + 0x100000;
  uVar26 = (uint)lVar20;
  iVar58 = (int)((ulonglong)lVar20 >> 0x20);
  uVar25 = uVar26 >> 0x15 | iVar58 * 0x800;
  uVar45 = uVar25 + uVar29;
  iVar59 = (int)((ulonglong)lVar6 >> 0x20) + (iVar58 >> 0x15) + (uint)CARRY4(uVar25,uVar29);
  lVar6 = lVar7 + 0x100000;
  uVar46 = (uint)lVar6;
  iVar60 = (int)((ulonglong)lVar6 >> 0x20);
  uVar25 = uVar46 >> 0x15 | iVar60 * 0x800;
  uVar47 = uVar25 + uVar31;
  iVar61 = (int)((ulonglong)lVar8 >> 0x20) + (iVar60 >> 0x15) + (uint)CARRY4(uVar25,uVar31);
  lVar6 = lVar9 + 0x100000;
  uVar48 = (uint)lVar6;
  iVar62 = (int)((ulonglong)lVar6 >> 0x20);
  uVar25 = uVar48 >> 0x15 | iVar62 * 0x800;
  uVar49 = uVar25 + uVar33;
  iVar63 = (int)((ulonglong)lVar10 >> 0x20) + (iVar62 >> 0x15) + (uint)CARRY4(uVar25,uVar33);
  lVar6 = lVar11 + 0x100000;
  uVar25 = (uint)lVar6;
  iVar64 = (int)((ulonglong)lVar6 >> 0x20);
  uVar33 = uVar25 >> 0x15 | iVar64 * 0x800;
  uVar31 = uVar33 + (uint)lVar12;
  lVar6 = lVar13 + 0x100000;
  uVar50 = (uint)lVar6;
  iVar93 = (int)((ulonglong)lVar6 >> 0x20);
  uVar27 = uVar50 >> 0x15 | iVar93 * 0x800;
  uVar51 = uVar27 + uVar35;
  iVar85 = (int)((ulonglong)lVar14 >> 0x20) + (iVar93 >> 0x15) + (uint)CARRY4(uVar27,uVar35);
  uVar27 = (uint)(lVar15 + 0x100000);
  iVar105 = (int)((ulonglong)(lVar15 + 0x100000) >> 0x20);
  uVar73 = uVar27 & 0xffe00000;
  uVar27 = uVar27 >> 0x15 | iVar105 * 0x800;
  uVar78 = uVar27 + uVar28;
  iVar65 = (int)((ulonglong)lVar16 >> 0x20) + (iVar105 >> 0x15) + (uint)CARRY4(uVar27,uVar28);
  uVar32 = (uint)lVar15 - uVar73;
  uVar27 = (uint)(lVar17 + 0x100000);
  iVar106 = (int)((ulonglong)(lVar17 + 0x100000) >> 0x20);
  uVar74 = uVar27 & 0xffe00000;
  uVar27 = uVar27 >> 0x15 | iVar106 * 0x800;
  uVar35 = uVar27 + uVar36;
  iVar66 = (int)((ulonglong)lVar18 >> 0x20) + (iVar106 >> 0x15) + (uint)CARRY4(uVar27,uVar36);
  uVar52 = (uint)lVar17 - uVar74;
  uVar27 = (uint)(lVar19 + 0x100000);
  iVar75 = (int)((ulonglong)(lVar19 + 0x100000) >> 0x20);
  uVar29 = uVar27 & 0xffe00000;
  uVar53 = uVar27 >> 0x15 | iVar75 * 0x800;
  uVar54 = (uint)lVar19 - uVar29;
  uVar27 = (uint)(lVar21 + 0x100000);
  iVar76 = (int)((ulonglong)(lVar21 + 0x100000) >> 0x20);
  uVar130 = uVar27 & 0xffe00000;
  uVar37 = uVar27 >> 0x15 | iVar76 * 0x800;
  uVar38 = uVar37 + (uint)lVar2;
  uVar55 = uVar38 - uVar111;
  uVar56 = (uint)lVar21 - uVar130;
  uVar43 = (uint)(lVar22 + 0x100000);
  iVar131 = (int)((ulonglong)(lVar22 + 0x100000) >> 0x20);
  uVar30 = uVar30 & 0xffe00000;
  uVar27 = uVar43 >> 0x15 | iVar131 * 0x800;
  uVar43 = uVar43 & 0xffe00000;
  lVar3 = lVar3 + CONCAT44(-(iVar39 + (uint)(uVar27 < uVar30)),uVar27 - uVar30);
  uVar84 = (uint)lVar3;
  uVar92 = (uint)lVar22 - uVar43;
  uVar44 = (uint)(lVar23 + 0x100000);
  iVar112 = (int)((ulonglong)(lVar23 + 0x100000) >> 0x20);
  uVar34 = uVar34 & 0xffe00000;
  uVar27 = uVar44 >> 0x15 | iVar112 * 0x800;
  uVar44 = uVar44 & 0xffe00000;
  uVar100 = (uint)lVar23 - uVar44;
  lVar6 = lVar24 + 0x100000;
  uVar104 = (uint)lVar6;
  iVar67 = (int)((ulonglong)lVar6 >> 0x20);
  iVar68 = iVar59 + (uint)(0xffefffff < uVar45);
  iVar69 = iVar61 + (uint)(0xffefffff < uVar47);
  iVar101 = iVar63 + (uint)(0xffefffff < uVar49);
  uVar77 = uVar31 + 0x100000;
  iVar79 = (int)((ulonglong)lVar12 >> 0x20) + (iVar64 >> 0x15) + (uint)CARRY4(uVar33,(uint)lVar12) +
           (uint)(0xffefffff < uVar31);
  iVar42 = iVar85 + (uint)(0xffefffff < uVar51);
  uVar36 = uVar51 + 0x100000 & 0xffe00000;
  uVar28 = uVar51 + 0x100000 >> 0x15 | iVar42 * 0x800;
  uVar70 = uVar28 + uVar32;
  iVar71 = ((int)((ulonglong)lVar15 >> 0x20) - (iVar105 + (uint)((uint)lVar15 < uVar73))) +
           (iVar42 >> 0x15) + (uint)CARRY4(uVar28,uVar32);
  uVar73 = uVar51 - uVar36;
  iVar105 = iVar65 + (uint)(0xffefffff < uVar78);
  uVar28 = uVar78 + 0x100000 & 0xffe00000;
  uVar30 = uVar78 + 0x100000 >> 0x15 | iVar105 * 0x800;
  uVar72 = uVar30 + uVar52;
  iVar39 = ((int)((ulonglong)lVar17 >> 0x20) - (iVar106 + (uint)((uint)lVar17 < uVar74))) +
           (iVar105 >> 0x15) + (uint)CARRY4(uVar30,uVar52);
  uVar30 = uVar78 - uVar28;
  iVar65 = iVar65 - (iVar105 + (uint)(uVar78 < uVar28));
  iVar105 = iVar66 + (uint)(0xffefffff < uVar35);
  uVar28 = uVar35 + 0x100000 & 0xffe00000;
  uVar31 = uVar35 + 0x100000 >> 0x15 | iVar105 * 0x800;
  uVar32 = uVar31 + uVar54;
  iVar106 = ((int)((ulonglong)lVar19 >> 0x20) - (iVar75 + (uint)((uint)lVar19 < uVar29))) +
            (iVar105 >> 0x15) + (uint)CARRY4(uVar31,uVar54);
  uVar29 = uVar35 - uVar28;
  iVar66 = iVar66 - (iVar105 + (uint)(uVar35 < uVar28));
  lVar13 = (longlong)(int)uVar53 * -0xa6f7d + lVar13;
  uVar28 = (uint)lVar13;
  uVar54 = uVar77 & 0xffe00000;
  uVar35 = uVar77 >> 0x15 | iVar79 * 0x800;
  uVar50 = uVar50 & 0xffe00000;
  uVar31 = uVar28 - uVar50;
  uVar86 = uVar35 + uVar31;
  iVar75 = ((int)((ulonglong)lVar13 >> 0x20) - (iVar93 + (uint)(uVar28 < uVar50))) +
           (iVar79 >> 0x15) + (uint)CARRY4(uVar35,uVar31);
  lVar8 = (longlong)(int)uVar53 * 0x215d1 +
          ((ulonglong)(iVar106 * -0xa6f7d + -uVar32 + (int)((ulonglong)uVar32 * 0xfff59083 >> 0x20))
           << 0x20 | (ulonglong)uVar32 * 0xfff59083 & 0xffffffff) +
          lVar12 + CONCAT44(iVar64 >> 0x15,uVar33);
  uVar132 = (uint)lVar8;
  uVar74 = uVar132 - uVar54;
  lVar6 = (longlong)(int)uVar53 * -0xf39ad + lVar11 +
          CONCAT44(iVar106 * 0x215d1 + (int)((ulonglong)uVar32 * 0x215d1 >> 0x20),
                   (int)((ulonglong)uVar32 * 0x215d1));
  uVar28 = (uint)lVar6;
  uVar35 = (uint)((ulonglong)uVar29 * 0xfff59083);
  uVar31 = uVar28 + uVar35;
  uVar25 = uVar25 & 0xffe00000;
  uVar50 = uVar31 - uVar25;
  uVar33 = uVar49 + 0x100000 >> 0x15 | iVar101 * 0x800;
  uVar87 = uVar33 + uVar50;
  iVar64 = ((iVar66 * -0xa6f7d + -uVar29 + (int)((ulonglong)uVar29 * 0xfff59083 >> 0x20) +
             (int)((ulonglong)lVar6 >> 0x20) + (uint)CARRY4(uVar28,uVar35)) -
           (iVar64 + (uint)(uVar31 < uVar25))) + (iVar101 >> 0x15) + (uint)CARRY4(uVar33,uVar50);
  uVar28 = (uint)((ulonglong)uVar32 * 0xfff0c653);
  uVar25 = (uint)((ulonglong)uVar29 * 0x215d1);
  uVar80 = (uint)((ulonglong)uVar72 * 0xfff59083);
  lVar6 = (longlong)(int)uVar53 * 0x9fb67 +
          CONCAT44(iVar106 * -0xf39ad + -uVar32 + (int)((ulonglong)uVar32 * 0xfff0c653 >> 0x20) +
                   iVar66 * 0x215d1 + (int)((ulonglong)uVar29 * 0x215d1 >> 0x20) +
                   (uint)CARRY4(uVar28,uVar25),uVar28 + uVar25);
  uVar133 = (uint)lVar6;
  uVar134 = uVar133 + uVar80;
  uVar135 = uVar134 + uVar49;
  uVar113 = uVar49 + 0x100000 & 0xffe00000;
  uVar81 = uVar135 - uVar113;
  uVar35 = uVar104 & 0xffe00000;
  lVar24 = lVar24 + CONCAT44(iVar65 * 0xa2c13 + (int)((ulonglong)uVar30 * 0xa2c13 >> 0x20),
                             (int)((ulonglong)uVar30 * 0xa2c13));
  uVar114 = (uint)lVar24;
  uVar82 = uVar114 - uVar35;
  uVar25 = (uint)((ulonglong)uVar72 * 0xa2c13);
  uVar28 = (uint)((ulonglong)uVar30 * 0x72d18);
  lVar5 = lVar5 + CONCAT44(iVar39 * 0xa2c13 + (int)((ulonglong)uVar72 * 0xa2c13 >> 0x20) +
                           iVar65 * 0x72d18 + (int)((ulonglong)uVar30 * 0x72d18 >> 0x20) +
                           (uint)CARRY4(uVar25,uVar28),uVar25 + uVar28);
  uVar52 = (uint)lVar5;
  uVar26 = uVar26 & 0xffe00000;
  uVar77 = uVar52 - uVar26;
  uVar25 = uVar104 >> 0x15 | iVar67 * 0x800;
  uVar28 = uVar25 + uVar77;
  uVar33 = (uint)((ulonglong)uVar32 * 0x9fb67);
  uVar31 = (uint)((ulonglong)uVar29 * 0xfff0c653);
  lVar9 = (longlong)(int)uVar53 * 0x72d18 +
          CONCAT44(iVar106 * 0x9fb67 + (int)((ulonglong)uVar32 * 0x9fb67 >> 0x20) +
                   iVar66 * -0xf39ad + -uVar29 + (int)((ulonglong)uVar29 * 0xfff0c653 >> 0x20) +
                   (uint)CARRY4(uVar33,uVar31),uVar33 + uVar31) + lVar9;
  uVar104 = (uint)lVar9;
  uVar31 = (uint)((ulonglong)uVar72 * 0x215d1);
  uVar78 = uVar104 + uVar31;
  uVar33 = (uint)((ulonglong)uVar30 * 0xfff59083);
  uVar115 = uVar78 + uVar33;
  uVar48 = uVar48 & 0xffe00000;
  uVar50 = uVar115 - uVar48;
  uVar116 = uVar47 + 0x100000 >> 0x15 | iVar69 * 0x800;
  uVar107 = uVar116 + uVar50;
  iVar93 = ((iVar65 * -0xa6f7d + -uVar30 + (int)((ulonglong)uVar30 * 0xfff59083 >> 0x20) +
             iVar39 * 0x215d1 + (int)((ulonglong)uVar72 * 0x215d1 >> 0x20) +
             (int)((ulonglong)lVar9 >> 0x20) + (uint)CARRY4(uVar104,uVar31) +
            (uint)CARRY4(uVar78,uVar33)) - (iVar62 + (uint)(uVar115 < uVar48))) + (iVar69 >> 0x15) +
           (uint)CARRY4(uVar116,uVar50);
  lVar9 = lVar4 + CONCAT44(-(iVar41 + (uint)(uVar27 < uVar34)),uVar27 - uVar34) +
          CONCAT44(iVar71 * 0xa2c13 + (int)((ulonglong)uVar70 * 0xa2c13 >> 0x20),
                   (int)((ulonglong)uVar70 * 0xa2c13));
  uVar116 = (uint)((ulonglong)uVar70 * 0x72d18);
  uVar90 = uVar116 + uVar82;
  uVar27 = (uint)((ulonglong)uVar70 * 0x9fb67);
  uVar83 = uVar27 + uVar28;
  iVar117 = iVar71 * 0x9fb67 + (int)((ulonglong)uVar70 * 0x9fb67 >> 0x20) +
            ((int)((ulonglong)lVar5 >> 0x20) - (iVar58 + (uint)(uVar52 < uVar26))) +
            (iVar67 >> 0x15) + (uint)CARRY4(uVar25,uVar77) + (uint)CARRY4(uVar27,uVar28);
  uVar118 = (uint)((ulonglong)uVar72 * 0x72d18);
  uVar115 = (uint)((ulonglong)uVar30 * 0x9fb67);
  uVar119 = uVar118 + uVar115;
  uVar104 = (uint)((ulonglong)uVar29 * 0xa2c13);
  uVar77 = uVar119 + uVar104;
  uVar78 = uVar77 + uVar45;
  uVar94 = (uint)((ulonglong)uVar70 * 0xfff0c653);
  uVar95 = uVar78 + uVar94;
  uVar25 = uVar45 + 0x100000 & 0xffe00000;
  uVar102 = uVar95 - uVar25;
  uVar27 = (uint)((ulonglong)uVar32 * 0xa2c13);
  uVar33 = (uint)((ulonglong)uVar29 * 0x72d18);
  uVar28 = uVar27 + uVar33;
  uVar34 = (uint)((ulonglong)uVar72 * 0x9fb67);
  uVar31 = uVar28 + uVar34;
  uVar26 = (uint)((ulonglong)uVar30 * 0xfff0c653);
  lVar7 = lVar7 + CONCAT44(iVar65 * -0xf39ad + -uVar30 +
                           (int)((ulonglong)uVar30 * 0xfff0c653 >> 0x20) +
                           iVar39 * 0x9fb67 + (int)((ulonglong)uVar72 * 0x9fb67 >> 0x20) +
                           iVar106 * 0xa2c13 + (int)((ulonglong)uVar32 * 0xa2c13 >> 0x20) +
                           iVar66 * 0x72d18 + (int)((ulonglong)uVar29 * 0x72d18 >> 0x20) +
                           (uint)CARRY4(uVar27,uVar33) + (uint)CARRY4(uVar28,uVar34) +
                           (uint)CARRY4(uVar31,uVar26),uVar31 + uVar26);
  uVar26 = (uint)lVar7;
  uVar28 = uVar45 + 0x100000 >> 0x15 | iVar68 * 0x800;
  uVar27 = uVar26 + uVar28;
  uVar31 = (uint)((ulonglong)uVar70 * 0x215d1);
  uVar33 = uVar27 + uVar31;
  uVar46 = uVar46 & 0xffe00000;
  uVar136 = uVar33 - uVar46;
  iVar137 = (iVar71 * 0x215d1 + (int)((ulonglong)uVar70 * 0x215d1 >> 0x20) +
             (int)((ulonglong)lVar7 >> 0x20) + (iVar68 >> 0x15) + (uint)CARRY4(uVar26,uVar28) +
            (uint)CARRY4(uVar27,uVar31)) - (iVar60 + (uint)(uVar33 < uVar46));
  uVar27 = (uint)((ulonglong)uVar32 * 0x72d18);
  uVar26 = (uint)((ulonglong)uVar29 * 0x9fb67);
  lVar4 = (longlong)(int)uVar53 * 0xa2c13 +
          CONCAT44(iVar106 * 0x72d18 + (int)((ulonglong)uVar32 * 0x72d18 >> 0x20) +
                   iVar66 * 0x9fb67 + (int)((ulonglong)uVar29 * 0x9fb67 >> 0x20) +
                   (uint)CARRY4(uVar27,uVar26),uVar27 + uVar26);
  uVar53 = (uint)lVar4;
  uVar46 = (uint)((ulonglong)uVar72 * 0xfff0c653);
  uVar48 = uVar53 + uVar46;
  uVar31 = (uint)((ulonglong)uVar30 * 0x215d1);
  uVar50 = uVar48 + uVar31;
  uVar32 = (uint)((ulonglong)uVar70 * 0xfff59083);
  uVar33 = uVar50 + uVar32;
  uVar34 = uVar33 + uVar47;
  uVar26 = uVar47 + 0x100000 & 0xffe00000;
  uVar52 = uVar34 - uVar26;
  uVar27 = (uint)(lVar9 + 0x100000);
  iVar41 = (int)((ulonglong)(lVar9 + 0x100000) >> 0x20);
  uVar28 = uVar27 & 0xffe00000;
  uVar27 = uVar27 >> 0x15 | iVar41 * 0x800;
  uVar120 = uVar27 + uVar90;
  iVar106 = iVar71 * 0x72d18 + (int)((ulonglong)uVar70 * 0x72d18 >> 0x20) +
            ((int)((ulonglong)lVar24 >> 0x20) - (iVar67 + (uint)(uVar114 < uVar35))) +
            (uint)CARRY4(uVar116,uVar82) + (iVar41 >> 0x15) + (uint)CARRY4(uVar27,uVar90);
  uVar121 = (uint)lVar9 - uVar28;
  iVar122 = iVar117 + (uint)(0xffefffff < uVar83);
  uVar27 = uVar83 + 0x100000 >> 0x15 | iVar122 * 0x800;
  uVar123 = uVar27 + uVar102;
  iVar124 = ((iVar71 * -0xf39ad + -uVar70 + (int)((ulonglong)uVar70 * 0xfff0c653 >> 0x20) +
              iVar59 + iVar66 * 0xa2c13 + (int)((ulonglong)uVar29 * 0xa2c13 >> 0x20) +
                       iVar39 * 0x72d18 + (int)((ulonglong)uVar72 * 0x72d18 >> 0x20) +
                       iVar65 * 0x9fb67 + (int)((ulonglong)uVar30 * 0x9fb67 >> 0x20) +
                       (uint)CARRY4(uVar118,uVar115) + (uint)CARRY4(uVar119,uVar104) +
              (uint)CARRY4(uVar77,uVar45) + (uint)CARRY4(uVar78,uVar94)) -
            (iVar68 + (uint)(uVar95 < uVar25))) + (iVar122 >> 0x15) + (uint)CARRY4(uVar27,uVar102);
  iVar68 = iVar137 + (uint)(0xffefffff < uVar136);
  uVar25 = uVar136 + 0x100000 >> 0x15 | iVar68 * 0x800;
  uVar35 = uVar25 + uVar52;
  iVar58 = ((iVar61 + iVar71 * -0xa6f7d + -uVar70 + (int)((ulonglong)uVar70 * 0xfff59083 >> 0x20) +
                      iVar65 * 0x215d1 + (int)((ulonglong)uVar30 * 0x215d1 >> 0x20) +
                      (iVar39 * -0xf39ad - uVar72) + (int)((ulonglong)uVar72 * 0xfff0c653 >> 0x20) +
                      (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar53,uVar46) +
                      (uint)CARRY4(uVar48,uVar31) + (uint)CARRY4(uVar50,uVar32) +
            (uint)CARRY4(uVar33,uVar47)) - (iVar69 + (uint)(uVar34 < uVar26))) + (iVar68 >> 0x15) +
           (uint)CARRY4(uVar25,uVar52);
  iVar105 = iVar93 + (uint)(0xffefffff < uVar107);
  uVar26 = uVar107 + 0x100000 & 0xffe00000;
  uVar25 = uVar107 + 0x100000 >> 0x15 | iVar105 * 0x800;
  uVar27 = uVar25 + uVar81;
  iVar59 = ((iVar63 + (iVar39 * -0xa6f7d - uVar72) + (int)((ulonglong)uVar72 * 0xfff59083 >> 0x20) +
                      (int)((ulonglong)lVar6 >> 0x20) + (uint)CARRY4(uVar133,uVar80) +
            (uint)CARRY4(uVar134,uVar49)) - (iVar101 + (uint)(uVar135 < uVar113))) +
           (iVar105 >> 0x15) + (uint)CARRY4(uVar25,uVar81);
  uVar30 = uVar107 - uVar26;
  iVar60 = iVar64 + (uint)(0xffefffff < uVar87);
  uVar34 = uVar87 + 0x100000 & 0xffe00000;
  uVar25 = uVar87 + 0x100000 >> 0x15 | iVar60 * 0x800;
  uVar29 = uVar25 + uVar74;
  iVar65 = ((int)((ulonglong)lVar8 >> 0x20) - (iVar79 + (uint)(uVar132 < uVar54))) +
           (iVar60 >> 0x15) + (uint)CARRY4(uVar25,uVar74);
  uVar45 = uVar87 - uVar34;
  iVar61 = iVar75 + (uint)(0xffefffff < uVar86);
  uVar32 = uVar86 + 0x100000 & 0xffe00000;
  uVar25 = uVar86 + 0x100000 >> 0x15 | iVar61 * 0x800;
  uVar52 = uVar25 + uVar73;
  iVar39 = (iVar85 - (iVar42 + (uint)(uVar51 < uVar36))) + (iVar61 >> 0x15) +
           (uint)CARRY4(uVar25,uVar73);
  uVar33 = uVar86 - uVar32;
  iVar67 = iVar106 + (uint)(0xffefffff < uVar120);
  iVar62 = iVar124 + (uint)(0xffefffff < uVar123);
  iVar69 = iVar58 + (uint)(0xffefffff < uVar35);
  uVar114 = uVar35 + 0x100000 & 0xffe00000;
  uVar25 = uVar35 + 0x100000 >> 0x15 | iVar69 * 0x800;
  uVar96 = uVar25 + uVar30;
  iVar66 = (iVar93 - (iVar105 + (uint)(uVar107 < uVar26))) + (iVar69 >> 0x15) +
           (uint)CARRY4(uVar25,uVar30);
  uVar30 = uVar35 - uVar114;
  iVar105 = iVar59 + (uint)(0xffefffff < uVar27);
  uVar26 = uVar27 + 0x100000 & 0xffe00000;
  uVar25 = uVar27 + 0x100000 >> 0x15 | iVar105 * 0x800;
  uVar31 = uVar25 + uVar45;
  iVar42 = (iVar64 - (iVar60 + (uint)(uVar87 < uVar34))) + (iVar105 >> 0x15) +
           (uint)CARRY4(uVar25,uVar45);
  uVar45 = uVar27 - uVar26;
  iVar59 = iVar59 - (iVar105 + (uint)(uVar27 < uVar26));
  iVar105 = iVar65 + (uint)(0xffefffff < uVar29);
  uVar25 = uVar29 + 0x100000 & 0xffe00000;
  uVar26 = uVar29 + 0x100000 >> 0x15 | iVar105 * 0x800;
  uVar125 = uVar26 + uVar33;
  iVar71 = (iVar75 - (iVar61 + (uint)(uVar86 < uVar32))) + (iVar105 >> 0x15) +
           (uint)CARRY4(uVar26,uVar33);
  uVar46 = uVar29 - uVar25;
  uVar94 = (uint)((ulonglong)uVar52 * 0xa2c13);
  iVar65 = iVar65 - (iVar105 + (uint)(uVar29 < uVar25));
  uVar95 = uVar94 + uVar100;
  uVar102 = (uint)((ulonglong)uVar52 * 0x72d18);
  uVar107 = uVar102 + uVar121;
  uVar77 = (uint)((ulonglong)uVar52 * 0x9fb67);
  uVar78 = uVar77 + uVar120;
  uVar118 = uVar120 + 0x100000 & 0xffe00000;
  uVar97 = uVar78 - uVar118;
  uVar33 = (uint)((ulonglong)uVar52 * 0xfff0c653);
  uVar34 = uVar33 + uVar83;
  uVar49 = uVar120 + 0x100000 >> 0x15 | iVar67 * 0x800;
  uVar50 = uVar34 + uVar49;
  uVar47 = uVar83 + 0x100000 & 0xffe00000;
  uVar48 = uVar50 - uVar47;
  uVar80 = (uint)((ulonglong)uVar52 * 0x215d1);
  uVar91 = uVar123 + 0x100000 & 0xffe00000;
  uVar81 = uVar80 + uVar123;
  uVar103 = uVar81 - uVar91;
  uVar25 = (uint)((ulonglong)uVar52 * 0xfff59083);
  uVar26 = uVar25 + uVar136;
  uVar29 = uVar123 + 0x100000 >> 0x15 | iVar62 * 0x800;
  uVar32 = uVar26 + uVar29;
  uVar27 = uVar136 + 0x100000 & 0xffe00000;
  uVar113 = uVar32 - uVar27;
  iVar60 = (iVar39 * -0xa6f7d + -uVar52 + (int)((ulonglong)uVar52 * 0xfff59083 >> 0x20) + iVar137 +
            (uint)CARRY4(uVar25,uVar136) + (iVar62 >> 0x15) + (uint)CARRY4(uVar26,uVar29)) -
           (iVar68 + (uint)(uVar32 < uVar27));
  uVar108 = (uint)((ulonglong)uVar125 * 0xa2c13);
  uVar109 = uVar108 + uVar84;
  uVar53 = (uint)((ulonglong)uVar125 * 0x72d18);
  uVar54 = uVar53 + uVar95;
  uVar82 = (uint)((ulonglong)uVar125 * 0x9fb67);
  uVar115 = uVar82 + uVar107;
  uVar86 = (uint)((ulonglong)uVar125 * 0xfff0c653);
  uVar87 = uVar86 + uVar97;
  uVar29 = (uint)((ulonglong)uVar125 * 0x215d1);
  uVar32 = uVar29 + uVar48;
  uVar126 = (uint)((ulonglong)uVar125 * 0xfff59083);
  uVar127 = uVar126 + uVar103;
  uVar128 = (uint)((ulonglong)uVar46 * 0xa2c13);
  uVar129 = uVar128 + uVar92;
  uVar25 = (uint)((ulonglong)uVar46 * 0x72d18);
  uVar26 = uVar25 + uVar109;
  uVar119 = (uint)((ulonglong)uVar46 * 0x9fb67);
  uVar132 = uVar119 + uVar54;
  uVar104 = (uint)((ulonglong)uVar46 * 0xfff0c653);
  uVar70 = uVar104 + uVar115;
  uVar110 = (uint)((ulonglong)uVar46 * 0x215d1);
  uVar116 = uVar110 + uVar87;
  uVar27 = (uint)((ulonglong)uVar46 * 0xfff59083);
  uVar36 = uVar27 + uVar32;
  iVar105 = iVar65 * -0xa6f7d + -uVar46 + (int)((ulonglong)uVar46 * 0xfff59083 >> 0x20) +
            iVar71 * 0x215d1 + (int)((ulonglong)uVar125 * 0x215d1 >> 0x20) +
            ((iVar39 * -0xf39ad + -uVar52 + (int)((ulonglong)uVar52 * 0xfff0c653 >> 0x20) + iVar117
              + (uint)CARRY4(uVar33,uVar83) + (iVar67 >> 0x15) + (uint)CARRY4(uVar34,uVar49)) -
            (iVar122 + (uint)(uVar50 < uVar47))) + (uint)CARRY4(uVar29,uVar48) +
            (uint)CARRY4(uVar27,uVar32);
  uVar138 = (uint)((ulonglong)uVar31 * 0xa2c13);
  uVar47 = uVar138 + uVar55;
  uVar32 = (uint)((ulonglong)uVar31 * 0x72d18);
  uVar33 = uVar32 + uVar129;
  uVar136 = (uint)((ulonglong)uVar31 * 0x9fb67);
  uVar139 = uVar136 + uVar26;
  uVar48 = (uint)((ulonglong)uVar31 * 0xfff0c653);
  uVar49 = uVar48 + uVar132;
  uVar98 = (uint)((ulonglong)uVar31 * 0x215d1);
  uVar99 = uVar98 + uVar70;
  uVar73 = (uint)((ulonglong)uVar31 * 0xfff59083);
  uVar140 = uVar73 + uVar116;
  uVar83 = (uint)((ulonglong)uVar45 * 0xa2c13);
  uVar90 = uVar83 + uVar56;
  uVar27 = (uint)((ulonglong)uVar45 * 0x72d18);
  uVar29 = uVar27 + uVar47;
  uVar133 = (uint)((ulonglong)uVar45 * 0x9fb67);
  uVar34 = uVar133 + uVar33;
  uVar72 = (uint)((ulonglong)uVar45 * 0xfff0c653);
  uVar74 = uVar72 + uVar139;
  uVar134 = (uint)((ulonglong)uVar45 * 0x215d1);
  uVar135 = uVar134 + uVar49;
  uVar50 = (uint)((ulonglong)uVar45 * 0xfff59083);
  uVar51 = uVar50 + uVar99;
  iVar64 = iVar59 * -0xa6f7d + -uVar45 + (int)((ulonglong)uVar45 * 0xfff59083 >> 0x20) +
           iVar42 * 0x215d1 + (int)((ulonglong)uVar31 * 0x215d1 >> 0x20) +
           iVar65 * -0xf39ad + -uVar46 + (int)((ulonglong)uVar46 * 0xfff0c653 >> 0x20) +
           iVar71 * 0x9fb67 + (int)((ulonglong)uVar125 * 0x9fb67 >> 0x20) +
           iVar39 * 0x72d18 + (int)((ulonglong)uVar52 * 0x72d18 >> 0x20) +
           ((int)((ulonglong)lVar9 >> 0x20) - (iVar41 + (uint)((uint)lVar9 < uVar28))) +
           (uint)CARRY4(uVar102,uVar121) + (uint)CARRY4(uVar82,uVar107) +
           (uint)CARRY4(uVar104,uVar115) + (uint)CARRY4(uVar98,uVar70) + (uint)CARRY4(uVar50,uVar99)
  ;
  uVar28 = (uint)((ulonglong)uVar96 * 0xa2c13);
  uVar70 = uVar28 + uVar88;
  iVar41 = iVar66 * 0xa2c13 + (int)((ulonglong)uVar96 * 0xa2c13 >> 0x20) +
           ((int)((ulonglong)lVar1 >> 0x20) - (iVar40 + (uint)((uint)lVar1 < uVar57))) +
           (uint)CARRY4(uVar28,uVar88);
  uVar57 = (uint)((ulonglong)uVar96 * 0x72d18);
  uVar50 = uVar57 + uVar90;
  uVar88 = (uint)((ulonglong)uVar96 * 0x9fb67);
  uVar28 = uVar88 + uVar29;
  iVar75 = iVar66 * 0x9fb67 + (int)((ulonglong)uVar96 * 0x9fb67 >> 0x20) +
           iVar59 * 0x72d18 + (int)((ulonglong)uVar45 * 0x72d18 >> 0x20) +
           iVar42 * 0xa2c13 + (int)((ulonglong)uVar31 * 0xa2c13 >> 0x20) +
           (((int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar37,(uint)lVar2)) -
           (iVar89 + (uint)(uVar38 < uVar111))) + (uint)CARRY4(uVar138,uVar55) +
           (uint)CARRY4(uVar27,uVar47) + (uint)CARRY4(uVar88,uVar29);
  uVar27 = (uint)((ulonglong)uVar96 * 0xfff0c653);
  uVar29 = uVar27 + uVar34;
  uVar37 = (uint)((ulonglong)uVar96 * 0x215d1);
  uVar104 = uVar37 + uVar74;
  iVar61 = iVar66 * 0x215d1 + (int)((ulonglong)uVar96 * 0x215d1 >> 0x20) +
           iVar59 * -0xf39ad + -uVar45 + (int)((ulonglong)uVar45 * 0xfff0c653 >> 0x20) +
           iVar42 * 0x9fb67 + (int)((ulonglong)uVar31 * 0x9fb67 >> 0x20) +
           iVar65 * 0x72d18 + (int)((ulonglong)uVar46 * 0x72d18 >> 0x20) +
           iVar71 * 0xa2c13 + (int)((ulonglong)uVar125 * 0xa2c13 >> 0x20) +
           (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4(uVar108,uVar84) +
           (uint)CARRY4(uVar25,uVar109) + (uint)CARRY4(uVar136,uVar26) +
           (uint)CARRY4(uVar72,uVar139) + (uint)CARRY4(uVar37,uVar74);
  uVar26 = (uint)((ulonglong)uVar96 * 0xfff59083);
  uVar37 = uVar26 + uVar135;
  iVar68 = iVar41 + (uint)(0xffefffff < uVar70);
  uVar25 = uVar70 + 0x100000 >> 0x15 | iVar68 * 0x800;
  uVar102 = uVar25 + uVar50;
  iVar76 = iVar66 * 0x72d18 + (int)((ulonglong)uVar96 * 0x72d18 >> 0x20) +
           iVar59 * 0xa2c13 + (int)((ulonglong)uVar45 * 0xa2c13 >> 0x20) +
           ((int)((ulonglong)lVar21 >> 0x20) - (iVar76 + (uint)((uint)lVar21 < uVar130))) +
           (uint)CARRY4(uVar83,uVar56) + (uint)CARRY4(uVar57,uVar90) + (iVar68 >> 0x15) +
           (uint)CARRY4(uVar25,uVar50);
  iVar63 = iVar75 + (uint)(0xffefffff < uVar28);
  uVar25 = uVar28 + 0x100000 >> 0x15 | iVar63 * 0x800;
  uVar90 = uVar25 + uVar29;
  iVar79 = iVar66 * -0xf39ad + -uVar96 + (int)((ulonglong)uVar96 * 0xfff0c653 >> 0x20) +
           iVar59 * 0x9fb67 + (int)((ulonglong)uVar45 * 0x9fb67 >> 0x20) +
           iVar42 * 0x72d18 + (int)((ulonglong)uVar31 * 0x72d18 >> 0x20) +
           iVar65 * 0xa2c13 + (int)((ulonglong)uVar46 * 0xa2c13 >> 0x20) +
           ((int)((ulonglong)lVar22 >> 0x20) - (iVar131 + (uint)((uint)lVar22 < uVar43))) +
           (uint)CARRY4(uVar128,uVar92) + (uint)CARRY4(uVar32,uVar129) +
           (uint)CARRY4(uVar133,uVar33) + (uint)CARRY4(uVar27,uVar34) + (iVar63 >> 0x15) +
           (uint)CARRY4(uVar25,uVar29);
  iVar85 = iVar61 + (uint)(0xffefffff < uVar104);
  uVar25 = uVar104 + 0x100000 >> 0x15 | iVar85 * 0x800;
  uVar107 = uVar25 + uVar37;
  iVar89 = iVar66 * -0xa6f7d + -uVar96 + (int)((ulonglong)uVar96 * 0xfff59083 >> 0x20) +
           iVar59 * 0x215d1 + (int)((ulonglong)uVar45 * 0x215d1 >> 0x20) +
           iVar42 * -0xf39ad + -uVar31 + (int)((ulonglong)uVar31 * 0xfff0c653 >> 0x20) +
           iVar65 * 0x9fb67 + (int)((ulonglong)uVar46 * 0x9fb67 >> 0x20) +
           iVar71 * 0x72d18 + (int)((ulonglong)uVar125 * 0x72d18 >> 0x20) +
           iVar39 * 0xa2c13 + (int)((ulonglong)uVar52 * 0xa2c13 >> 0x20) +
           ((int)((ulonglong)lVar23 >> 0x20) - (iVar112 + (uint)((uint)lVar23 < uVar44))) +
           (uint)CARRY4(uVar94,uVar100) + (uint)CARRY4(uVar53,uVar95) + (uint)CARRY4(uVar119,uVar54)
           + (uint)CARRY4(uVar48,uVar132) + (uint)CARRY4(uVar134,uVar49) +
           (uint)CARRY4(uVar26,uVar135) + (iVar85 >> 0x15) + (uint)CARRY4(uVar25,uVar37);
  iVar59 = iVar64 + (uint)(0xffefffff < uVar51);
  uVar25 = uVar51 + 0x100000 >> 0x15 | iVar59 * 0x800;
  uVar53 = uVar51 + 0x100000 & 0xffe00000;
  uVar37 = uVar25 + uVar140;
  iVar93 = iVar42 * -0xa6f7d + -uVar31 + (int)((ulonglong)uVar31 * 0xfff59083 >> 0x20) +
           iVar65 * 0x215d1 + (int)((ulonglong)uVar46 * 0x215d1 >> 0x20) +
           iVar71 * -0xf39ad + -uVar125 + (int)((ulonglong)uVar125 * 0xfff0c653 >> 0x20) +
           ((iVar39 * 0x9fb67 + (int)((ulonglong)uVar52 * 0x9fb67 >> 0x20) + iVar106 +
            (uint)CARRY4(uVar77,uVar120)) - (iVar67 + (uint)(uVar78 < uVar118))) +
           (uint)CARRY4(uVar86,uVar97) + (uint)CARRY4(uVar110,uVar87) + (uint)CARRY4(uVar73,uVar116)
           + (iVar59 >> 0x15) + (uint)CARRY4(uVar25,uVar140);
  uVar54 = uVar51 - uVar53;
  iVar65 = iVar105 + (uint)(0xffefffff < uVar36);
  uVar86 = uVar36 + 0x100000 & 0xffe00000;
  uVar25 = uVar36 + 0x100000 >> 0x15 | iVar65 * 0x800;
  uVar48 = uVar25 + uVar127;
  iVar71 = iVar71 * -0xa6f7d + -uVar125 + (int)((ulonglong)uVar125 * 0xfff59083 >> 0x20) +
           ((iVar39 * 0x215d1 + (int)((ulonglong)uVar52 * 0x215d1 >> 0x20) + iVar124 +
            (uint)CARRY4(uVar80,uVar123)) - (iVar62 + (uint)(uVar81 < uVar91))) +
           (uint)CARRY4(uVar126,uVar103) + (iVar65 >> 0x15) + (uint)CARRY4(uVar25,uVar127);
  uVar87 = uVar36 - uVar86;
  iVar101 = iVar60 + (uint)(0xffefffff < uVar113);
  uVar25 = uVar113 + 0x100000 & 0xffe00000;
  uVar26 = uVar113 + 0x100000 >> 0x15 | iVar101 * 0x800;
  uVar52 = uVar26 + uVar30;
  iVar66 = (iVar58 - (iVar69 + (uint)(uVar35 < uVar114))) + (iVar101 >> 0x15) +
           (uint)CARRY4(uVar26,uVar30);
  uVar26 = uVar113 - uVar25;
  iVar67 = iVar76 + (uint)(0xffefffff < uVar102);
  iVar58 = iVar79 + (uint)(0xffefffff < uVar90);
  iVar62 = iVar89 + (uint)(0xffefffff < uVar107);
  uVar73 = uVar107 + 0x100000 >> 0x15 | iVar62 * 0x800;
  uVar94 = uVar73 + uVar54;
  iVar69 = iVar93 + (uint)(0xffefffff < uVar37);
  uVar55 = uVar37 + 0x100000 & 0xffe00000;
  uVar72 = uVar37 + 0x100000 >> 0x15 | iVar69 * 0x800;
  uVar95 = uVar72 + uVar87;
  uVar114 = uVar37 - uVar55;
  iVar42 = iVar71 + (uint)(0xffefffff < uVar48);
  uVar35 = uVar48 + 0x100000 & 0xffe00000;
  uVar116 = uVar48 + 0x100000 >> 0x15 | iVar42 * 0x800;
  uVar118 = uVar116 + uVar26;
  uVar49 = uVar48 - uVar35;
  iVar40 = iVar66 + (uint)(0xffefffff < uVar52);
  uVar38 = uVar52 + 0x100000 & 0xffe00000;
  uVar50 = uVar52 + 0x100000 >> 0x15 | iVar40 * 0x800;
  uVar119 = uVar52 - uVar38;
  iVar39 = iVar40 >> 0x15;
  uVar27 = (uint)((ulonglong)uVar50 * 0xa2c13);
  uVar29 = uVar70 + 0x100000 & 0xffe00000;
  uVar30 = uVar27 - uVar29;
  uVar115 = uVar30 + uVar70;
  iVar41 = iVar41 + ((iVar39 * 0xa2c13 + (int)((ulonglong)uVar50 * 0xa2c13 >> 0x20)) -
                    (iVar68 + (uint)(uVar27 < uVar29))) + (uint)CARRY4(uVar30,uVar70);
  uVar43 = (uint)((ulonglong)uVar50 * 0x72d18);
  uVar44 = uVar43 + uVar102;
  uVar83 = uVar102 + 0x100000 & 0xffe00000;
  uVar82 = uVar44 - uVar83;
  uVar27 = (uint)((ulonglong)uVar50 * 0x9fb67);
  uVar29 = uVar27 + uVar28;
  uVar45 = uVar102 + 0x100000 >> 0x15 | iVar67 * 0x800;
  uVar46 = uVar29 + uVar45;
  uVar30 = uVar28 + 0x100000 & 0xffe00000;
  uVar47 = uVar46 - uVar30;
  uVar56 = (uint)((ulonglong)uVar50 * 0xfff0c653);
  uVar57 = uVar56 + uVar90;
  uVar31 = uVar90 + 0x100000 & 0xffe00000;
  uVar88 = uVar57 - uVar31;
  uVar74 = (uint)((ulonglong)uVar50 * 0x215d1);
  uVar77 = uVar74 + uVar104;
  uVar32 = uVar104 + 0x100000 & 0xffe00000;
  uVar78 = uVar77 - uVar32;
  uVar33 = uVar90 + 0x100000 >> 0x15 | iVar58 * 0x800;
  uVar34 = uVar33 + uVar78;
  uVar84 = (uint)((ulonglong)uVar50 * 0xfff59083);
  uVar92 = uVar84 + uVar107;
  uVar80 = uVar107 + 0x100000 & 0xffe00000;
  uVar81 = uVar92 - uVar80;
  uVar100 = uVar115 >> 0x15 | iVar41 * 0x800;
  uVar70 = uVar100 + uVar82;
  uVar115 = uVar115 & 0x1fffff;
  iVar41 = ((iVar39 * 0x72d18 + (int)((ulonglong)uVar50 * 0x72d18 >> 0x20) + iVar76 +
            (uint)CARRY4(uVar43,uVar102)) - (iVar67 + (uint)(uVar44 < uVar83))) + (iVar41 >> 0x15) +
           (uint)CARRY4(uVar100,uVar82);
  uVar100 = uVar70 & 0x1fffff;
  uVar43 = uVar70 >> 0x15 | iVar41 * 0x800;
  uVar44 = uVar43 + uVar47;
  iVar41 = ((iVar39 * 0x9fb67 + (int)((ulonglong)uVar50 * 0x9fb67 >> 0x20) + iVar75 +
             (uint)CARRY4(uVar27,uVar28) + (iVar67 >> 0x15) + (uint)CARRY4(uVar29,uVar45)) -
           (iVar63 + (uint)(uVar46 < uVar30))) + (iVar41 >> 0x15) + (uint)CARRY4(uVar43,uVar47);
  uVar46 = uVar44 & 0x1fffff;
  uVar27 = uVar44 >> 0x15 | iVar41 * 0x800;
  uVar30 = uVar27 + uVar88;
  iVar41 = ((iVar39 * -0xf39ad + -uVar50 + (int)((ulonglong)uVar50 * 0xfff0c653 >> 0x20) + iVar79 +
            (uint)CARRY4(uVar56,uVar90)) - (iVar58 + (uint)(uVar57 < uVar31))) + (iVar41 >> 0x15) +
           (uint)CARRY4(uVar27,uVar88);
  uVar28 = uVar30 >> 0x15 | iVar41 * 0x800;
  uVar27 = uVar28 + uVar34;
  iVar41 = ((iVar39 * 0x215d1 + (int)((ulonglong)uVar50 * 0x215d1 >> 0x20) + iVar61 +
            (uint)CARRY4(uVar74,uVar104)) - (iVar85 + (uint)(uVar77 < uVar32))) + (iVar58 >> 0x15) +
           (uint)CARRY4(uVar33,uVar78) + (iVar41 >> 0x15) + (uint)CARRY4(uVar28,uVar34);
  uVar28 = uVar27 >> 0x15 | iVar41 * 0x800;
  uVar43 = uVar28 + uVar81;
  iVar39 = ((iVar39 * -0xa6f7d + -uVar50 + (int)((ulonglong)uVar50 * 0xfff59083 >> 0x20) + iVar89 +
            (uint)CARRY4(uVar84,uVar107)) - (iVar62 + (uint)(uVar92 < uVar80))) + (iVar41 >> 0x15) +
           (uint)CARRY4(uVar28,uVar81);
  uVar28 = uVar43 >> 0x15 | iVar39 * 0x800;
  uVar29 = uVar28 + uVar94;
  uVar31 = uVar29 & 0x1fffff;
  iVar39 = (iVar64 - (iVar59 + (uint)(uVar51 < uVar53))) + (iVar62 >> 0x15) +
           (uint)CARRY4(uVar73,uVar54) + (iVar39 >> 0x15) + (uint)CARRY4(uVar28,uVar94);
  uVar28 = uVar29 >> 0x15 | iVar39 * 0x800;
  uVar29 = uVar28 + uVar114;
  iVar39 = (iVar93 - (iVar69 + (uint)(uVar37 < uVar55))) + (iVar39 >> 0x15) +
           (uint)CARRY4(uVar28,uVar114);
  uVar28 = uVar29 >> 0x15 | iVar39 * 0x800;
  uVar32 = uVar28 + uVar95;
  uVar33 = uVar32 & 0x1fffff;
  iVar39 = (iVar105 - (iVar65 + (uint)(uVar36 < uVar86))) + (iVar69 >> 0x15) +
           (uint)CARRY4(uVar72,uVar87) + (iVar39 >> 0x15) + (uint)CARRY4(uVar28,uVar95);
  uVar29 = uVar29 & 0x1fffff;
  uVar28 = uVar32 >> 0x15 | iVar39 * 0x800;
  uVar34 = uVar28 + uVar49;
  iVar39 = (iVar71 - (iVar42 + (uint)(uVar48 < uVar35))) + (iVar39 >> 0x15) +
           (uint)CARRY4(uVar28,uVar49);
  uVar28 = uVar34 >> 0x15 | iVar39 * 0x800;
  uVar32 = uVar28 + uVar118;
  iVar39 = (iVar60 - (iVar101 + (uint)(uVar113 < uVar25))) + (iVar42 >> 0x15) +
           (uint)CARRY4(uVar116,uVar26) + (iVar39 >> 0x15) + (uint)CARRY4(uVar28,uVar118);
  uVar34 = uVar34 & 0x1fffff;
  uVar25 = uVar32 >> 0x15 | iVar39 * 0x800;
  uVar32 = uVar32 & 0x1fffff;
  uVar28 = uVar25 + uVar119;
  iVar39 = (iVar66 - (iVar40 + (uint)(uVar52 < uVar38))) + (iVar39 >> 0x15) +
           (uint)CARRY4(uVar25,uVar119);
  uVar25 = uVar28 >> 0x15 | iVar39 * 0x800;
  iVar39 = iVar39 >> 0x15;
  uVar26 = (uint)((ulonglong)uVar25 * 0xa2c13);
  uVar45 = uVar26 + uVar115;
  uVar38 = (uint)((ulonglong)uVar25 * 0x72d18);
  iVar40 = iVar39 * 0xa2c13 + (int)((ulonglong)uVar25 * 0xa2c13 >> 0x20) +
           (uint)CARRY4(uVar26,uVar115);
  uVar44 = uVar38 + uVar100;
  uVar35 = (uint)((ulonglong)uVar25 * 0x9fb67);
  uVar36 = uVar35 + uVar46;
  lVar1 = (ulonglong)uVar25 * 0xfff0c653 +
          (CONCAT44(iVar39 * -0xf39ad + -uVar25,uVar30) & 0xffffffff001fffff);
  uVar30 = (uint)lVar1;
  lVar3 = (ulonglong)uVar25 * 0x215d1 + (CONCAT44(iVar39 * 0x215d1,uVar27) & 0xffffffff001fffff);
  uVar47 = (uint)lVar3;
  lVar2 = (ulonglong)uVar25 * 0xfff59083 +
          (CONCAT44(iVar39 * -0xa6f7d + -uVar25,uVar43) & 0xffffffff001fffff);
  uVar26 = (uint)lVar2;
  uVar27 = uVar45 >> 0x15 | iVar40 * 0x800;
  uVar45 = uVar45 & 0x1fffff;
  uVar37 = uVar27 + uVar44;
  iVar40 = iVar39 * 0x72d18 + (int)((ulonglong)uVar25 * 0x72d18 >> 0x20) +
           (uint)CARRY4(uVar38,uVar100) + (iVar40 >> 0x15) + (uint)CARRY4(uVar27,uVar44);
  uVar27 = uVar37 >> 0x15 | iVar40 * 0x800;
  uVar38 = uVar27 + uVar36;
  uVar37 = uVar37 & 0x1fffff;
  iVar39 = iVar39 * 0x9fb67 + (int)((ulonglong)uVar25 * 0x9fb67 >> 0x20) +
           (uint)CARRY4(uVar35,uVar46) + (iVar40 >> 0x15) + (uint)CARRY4(uVar27,uVar36);
  uVar35 = uVar38 & 0x1fffff;
  uVar25 = uVar38 >> 0x15 | iVar39 * 0x800;
  uVar27 = uVar25 + uVar30;
  iVar39 = (int)((ulonglong)lVar1 >> 0x20) + (iVar39 >> 0x15) + (uint)CARRY4(uVar25,uVar30);
  uVar30 = uVar27 & 0x1fffff;
  uVar25 = uVar27 >> 0x15 | iVar39 * 0x800;
  uVar27 = uVar25 + uVar47;
  iVar39 = (int)((ulonglong)lVar3 >> 0x20) + (iVar39 >> 0x15) + (uint)CARRY4(uVar25,uVar47);
  uVar43 = uVar27 & 0x1fffff;
  uVar25 = uVar27 >> 0x15 | iVar39 * 0x800;
  uVar27 = uVar25 + uVar26;
  iVar39 = (int)((ulonglong)lVar2 >> 0x20) + (iVar39 >> 0x15) + (uint)CARRY4(uVar25,uVar26);
  uVar38 = uVar27 & 0x1fffff;
  uVar25 = uVar27 >> 0x15 | iVar39 * 0x800;
  uVar26 = uVar25 + uVar31;
  iVar39 = (iVar39 >> 0x15) + (uint)CARRY4(uVar25,uVar31);
  uVar25 = uVar26 & 0x1fffff;
  uVar26 = uVar26 >> 0x15 | iVar39 * 0x800;
  uVar27 = uVar26 + uVar29;
  iVar39 = (iVar39 >> 0x15) + (uint)CARRY4(uVar26,uVar29);
  uVar29 = uVar27 & 0x1fffff;
  uVar26 = uVar27 >> 0x15 | iVar39 * 0x800;
  uVar27 = uVar26 + uVar33;
  iVar39 = (iVar39 >> 0x15) + (uint)CARRY4(uVar26,uVar33);
  uVar36 = uVar27 & 0x1fffff;
  uVar26 = uVar27 >> 0x15 | iVar39 * 0x800;
  uVar27 = uVar26 + uVar34;
  iVar39 = (iVar39 >> 0x15) + (uint)CARRY4(uVar26,uVar34);
  uVar26 = uVar27 & 0x1fffff;
  uVar27 = uVar27 >> 0x15 | iVar39 * 0x800;
  uVar31 = uVar27 + uVar32;
  uVar33 = uVar31 & 0x1fffff;
  uVar27 = (uVar31 >> 0x15 | ((iVar39 >> 0x15) + (uint)CARRY4(uVar27,uVar32)) * 0x800) +
           (uVar28 & 0x1fffff);
  *(char *)(param_1 + 0x20) = (char)uVar45;
  *(char *)(param_1 + 0x21) = (char)(uVar45 >> 8);
  *(byte *)(param_1 + 0x22) = (byte)(uVar37 << 5) | (byte)(uVar45 >> 0x10);
  *(char *)(param_1 + 0x23) = (char)(uVar37 >> 3);
  *(char *)(param_1 + 0x24) = (char)(uVar37 >> 0xb);
  *(byte *)(param_1 + 0x25) = (byte)(uVar35 << 2) | (byte)(uVar37 >> 0x13);
  *(char *)(param_1 + 0x26) = (char)(uVar35 >> 6);
  *(byte *)(param_1 + 0x27) = (byte)(uVar30 << 7) | (byte)(uVar35 >> 0xe);
  *(char *)(param_1 + 0x28) = (char)(uVar30 >> 1);
  *(char *)(param_1 + 0x29) = (char)(uVar30 >> 9);
  *(byte *)(param_1 + 0x2a) = (byte)(uVar43 << 4) | (byte)(uVar30 >> 0x11);
  *(char *)(param_1 + 0x2b) = (char)(uVar43 >> 4);
  *(char *)(param_1 + 0x2c) = (char)(uVar43 >> 0xc);
  *(byte *)(param_1 + 0x2d) = (byte)(uVar38 << 1) | (byte)(uVar43 >> 0x14);
  *(char *)(param_1 + 0x2e) = (char)(uVar38 >> 7);
  *(byte *)(param_1 + 0x2f) = (byte)(uVar25 << 6) | (byte)(uVar38 >> 0xf);
  *(char *)(param_1 + 0x30) = (char)(uVar25 >> 2);
  *(char *)(param_1 + 0x31) = (char)(uVar25 >> 10);
  *(byte *)(param_1 + 0x32) = (byte)(uVar29 << 3) | (byte)(uVar25 >> 0x12);
  *(char *)(param_1 + 0x33) = (char)(uVar29 >> 5);
  *(char *)(param_1 + 0x34) = (char)(uVar29 >> 0xd);
  *(char *)(param_1 + 0x35) = (char)uVar36;
  *(char *)(param_1 + 0x36) = (char)(uVar36 >> 8);
  *(byte *)(param_1 + 0x37) = (byte)(uVar26 << 5) | (byte)(uVar36 >> 0x10);
  *(char *)(param_1 + 0x38) = (char)(uVar26 >> 3);
  *(char *)(param_1 + 0x39) = (char)(uVar26 >> 0xb);
  *(byte *)(param_1 + 0x3a) = (byte)(uVar33 << 2) | (byte)(uVar26 >> 0x13);
  *(char *)(param_1 + 0x3b) = (char)(uVar33 >> 6);
  *(byte *)(param_1 + 0x3c) = (char)uVar27 * -0x80 | (byte)(uVar33 >> 0xe);
  *(char *)(param_1 + 0x3d) = (char)(uVar27 >> 1);
  *(char *)(param_1 + 0x3e) = (char)(uVar27 >> 9);
  *(char *)(param_1 + 0x3f) = (char)(uVar27 >> 0x11);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

