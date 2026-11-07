// FUN_01727168 @ 01727168 size=5600 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01727168(uint *param_1)

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
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  uint uVar46;
  uint uVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  int iVar71;
  int iVar72;
  uint uVar73;
  int iVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  int iVar78;
  uint uVar79;
  uint uVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  uint uVar84;
  uint uVar85;
  int iVar86;
  int iVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  int iVar94;
  int iVar95;
  uint uVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  uint uVar100;
  uint uVar101;
  uint uVar102;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  uint uVar106;
  int iVar107;
  int iVar108;
  
  uVar16 = (*(byte *)((int)param_1 + 2) & 0x1f) << 0x10 | (uint)*(byte *)((int)param_1 + 1) << 8 |
           (uint)(byte)*param_1;
  uVar20 = ((*(byte *)((int)param_1 + 7) & 0x7f) << 0x10 | (uint)*(byte *)((int)param_1 + 6) << 8 |
           (uint)*(byte *)((int)param_1 + 5)) >> 2;
  uVar13 = (param_1[0xd] & 0x1ffffff) >> 4;
  uVar73 = (*(uint *)((int)param_1 + 0x39) & 0x7ffffff) >> 6;
  uVar96 = (*(uint *)((int)param_1 + 0x31) & 0xfffffff) >> 7;
  uVar29 = (*(uint *)((int)param_1 + 10) & 0x1ffffff) >> 4;
  uVar17 = ((*(byte *)((int)param_1 + 0xf) & 0x3f) << 0x10 |
            (uint)*(byte *)((int)param_1 + 0xe) << 8 | (uint)*(byte *)((int)param_1 + 0xd)) >> 1;
  uVar30 = (param_1[0xb] & 0x3ffffff) >> 5;
  uVar12 = ((*(byte *)((int)param_1 + 0x31) & 0x7f) << 0x10 | (uint)(byte)param_1[0xc] << 8 |
           (uint)*(byte *)((int)param_1 + 0x2f)) >> 2;
  uVar31 = ((*(byte *)((int)param_1 + 0x39) & 0x3f) << 0x10 | (uint)(byte)param_1[0xe] << 8 |
           (uint)*(byte *)((int)param_1 + 0x37)) >> 1;
  uVar85 = param_1[0xf] >> 3;
  uVar21 = ((uint)*(byte *)((int)param_1 + 0x29) << 0x10 | (uint)(byte)param_1[10] << 8 |
           (uint)*(byte *)((int)param_1 + 0x27)) >> 3;
  lVar1 = (longlong)(int)uVar12 * -0xa6f7d +
          (longlong)(int)uVar31 * 0x9fb67 +
          (longlong)(int)uVar96 * 0x215d1 +
          (longlong)(int)uVar13 * -0xf39ad +
          (longlong)(int)uVar73 * 0x72d18 +
          (longlong)(int)uVar85 * 0xa2c13 + (ulonglong)((param_1[7] & 0xfffffff) >> 7);
  uVar32 = (uint)lVar1;
  lVar2 = (longlong)(int)uVar31 * -0xf39ad +
          (longlong)(int)uVar96 * -0xa6f7d +
          (longlong)(int)uVar13 * 0x215d1 +
          (longlong)(int)uVar73 * 0x9fb67 +
          (longlong)(int)uVar85 * 0x72d18 +
          (ulonglong)((*(uint *)((int)param_1 + 0x1f) & 0x1ffffff) >> 4);
  lVar3 = (longlong)(int)uVar12 * 0xa2c13 +
          (ulonglong)((*(uint *)((int)param_1 + 0xf) & 0x7ffffff) >> 6);
  lVar4 = (longlong)(int)uVar31 * -0xa6f7d +
          (longlong)(int)uVar73 * 0x215d1 +
          (longlong)(int)uVar85 * -0xf39ad + (ulonglong)((param_1[9] & 0x7ffffff) >> 6);
  lVar5 = (longlong)(int)uVar85 * -0xa6f7d +
          (ulonglong)
          (((byte)param_1[0xb] & 0x1f) << 0x10 | (uint)*(byte *)((int)param_1 + 0x2b) << 8 |
          (uint)*(byte *)((int)param_1 + 0x2a));
  lVar6 = (longlong)(int)uVar85 * 0x215d1 + (longlong)(int)uVar73 * -0xa6f7d;
  uVar41 = (uint)lVar6;
  uVar42 = uVar21 + uVar41;
  lVar7 = (longlong)(int)uVar31 * 0x215d1 +
          (longlong)(int)uVar85 * 0x9fb67 +
          (longlong)(int)uVar73 * -0xf39ad + (longlong)(int)uVar13 * -0xa6f7d +
          (ulonglong)
          ((((byte)param_1[9] & 0x3f) << 0x10 | (uint)*(byte *)((int)param_1 + 0x23) << 8 |
           (uint)*(byte *)((int)param_1 + 0x22)) >> 1);
  uVar14 = (uint)lVar7;
  lVar8 = (longlong)(int)uVar12 * 0x9fb67 +
          (longlong)(int)uVar13 * 0xa2c13 + (longlong)(int)uVar96 * 0x72d18 +
          (ulonglong)
          ((*(byte *)((int)param_1 + 0x17) & 0x1f) << 0x10 |
           (uint)*(byte *)((int)param_1 + 0x16) << 8 | (uint)*(byte *)((int)param_1 + 0x15));
  lVar9 = (longlong)(int)uVar12 * 0x215d1 +
          (longlong)(int)uVar31 * 0x72d18 +
          (longlong)(int)uVar96 * -0xf39ad +
          (longlong)(int)uVar73 * 0xa2c13 + (longlong)(int)uVar13 * 0x9fb67 +
          (ulonglong)
          ((((byte)param_1[7] & 0x7f) << 0x10 | (uint)*(byte *)((int)param_1 + 0x1b) << 8 |
           (uint)*(byte *)((int)param_1 + 0x1a)) >> 2);
  uVar73 = (uint)(lVar3 + 0x100000);
  iVar49 = (int)((ulonglong)(lVar3 + 0x100000) >> 0x20);
  uVar85 = uVar73 & 0xffe00000;
  lVar11 = (longlong)(int)uVar12 * 0x72d18 +
           (longlong)(int)uVar96 * 0xa2c13 +
           (ulonglong)
           (((uint)(byte)param_1[5] << 0x10 | (uint)*(byte *)((int)param_1 + 0x13) << 8 |
            (uint)*(byte *)((int)param_1 + 0x12)) >> 3) +
           (ulonglong)(uVar73 >> 0x15 | iVar49 * 0x800);
  uVar15 = (uint)(lVar8 + 0x100000);
  iVar50 = (int)((ulonglong)(lVar8 + 0x100000) >> 0x20);
  uVar73 = uVar15 & 0xffe00000;
  lVar10 = (longlong)(int)uVar12 * -0xf39ad +
           (longlong)(int)uVar31 * 0xa2c13 +
           (longlong)(int)uVar13 * 0x72d18 + (longlong)(int)uVar96 * 0x9fb67 +
           (ulonglong)((*(uint *)((int)param_1 + 0x17) & 0x3ffffff) >> 5) +
           (ulonglong)(uVar15 >> 0x15 | iVar50 * 0x800);
  uVar12 = (uint)(lVar9 + 0x100000);
  iVar33 = (int)((ulonglong)(lVar9 + 0x100000) >> 0x20);
  uVar13 = uVar12 >> 0x15 | iVar33 * 0x800;
  uVar31 = uVar13 + uVar32;
  uVar12 = uVar12 & 0xffe00000;
  iVar74 = (int)((ulonglong)lVar1 >> 0x20) + (iVar33 >> 0x15) + (uint)CARRY4(uVar13,uVar32);
  uVar13 = (uint)(lVar2 + 0x100000);
  iVar97 = (int)((ulonglong)(lVar2 + 0x100000) >> 0x20);
  uVar15 = uVar13 >> 0x15 | iVar97 * 0x800;
  uVar96 = uVar15 + uVar14;
  uVar13 = uVar13 & 0xffe00000;
  iVar87 = (int)((ulonglong)lVar7 >> 0x20) + (iVar97 >> 0x15) + (uint)CARRY4(uVar15,uVar14);
  uVar32 = (uint)lVar2 - uVar13;
  uVar14 = (uint)(lVar4 + 0x100000);
  iVar98 = (int)((ulonglong)(lVar4 + 0x100000) >> 0x20);
  uVar15 = uVar14 >> 0x15 | iVar98 * 0x800;
  uVar18 = uVar15 + uVar42;
  uVar14 = uVar14 & 0xffe00000;
  iVar83 = (int)((ulonglong)lVar6 >> 0x20) + (uint)CARRY4(uVar21,uVar41) + (iVar98 >> 0x15) +
           (uint)CARRY4(uVar15,uVar42);
  uVar42 = (uint)lVar4 - uVar14;
  uVar21 = (uint)(lVar5 + 0x100000);
  iVar34 = (int)((ulonglong)(lVar5 + 0x100000) >> 0x20);
  uVar15 = uVar21 >> 0x15 | iVar34 * 0x800;
  uVar21 = uVar21 & 0xffe00000;
  uVar22 = uVar15 + uVar30;
  iVar99 = (iVar34 >> 0x15) + (uint)CARRY4(uVar15,uVar30);
  uVar51 = (uint)lVar5 - uVar21;
  uVar66 = (uint)(lVar11 + 0x100000);
  iVar43 = (int)((ulonglong)(lVar11 + 0x100000) >> 0x20);
  uVar52 = (uint)(lVar10 + 0x100000);
  iVar44 = (int)((ulonglong)(lVar10 + 0x100000) >> 0x20);
  iVar45 = iVar74 + (uint)(0xffefffff < uVar31);
  uVar30 = uVar31 + 0x100000 >> 0x15 | iVar45 * 0x800;
  uVar15 = uVar31 + 0x100000 & 0xffe00000;
  uVar35 = uVar30 + uVar32;
  iVar36 = ((int)((ulonglong)lVar2 >> 0x20) - (iVar97 + (uint)((uint)lVar2 < uVar13))) +
           (iVar45 >> 0x15) + (uint)CARRY4(uVar30,uVar32);
  uVar32 = uVar31 - uVar15;
  iVar37 = iVar87 + (uint)(0xffefffff < uVar96);
  uVar30 = uVar96 + 0x100000 >> 0x15 | iVar37 * 0x800;
  uVar41 = uVar30 + uVar42;
  uVar13 = uVar96 + 0x100000 & 0xffe00000;
  iVar97 = ((int)((ulonglong)lVar4 >> 0x20) - (iVar98 + (uint)((uint)lVar4 < uVar14))) +
           (iVar37 >> 0x15) + (uint)CARRY4(uVar30,uVar42);
  uVar30 = uVar96 - uVar13;
  iVar87 = iVar87 - (iVar37 + (uint)(uVar96 < uVar13));
  iVar37 = iVar83 + (uint)(0xffefffff < uVar18);
  uVar14 = uVar18 + 0x100000 >> 0x15 | iVar37 * 0x800;
  uVar88 = uVar14 + uVar51;
  uVar13 = uVar18 + 0x100000 & 0xffe00000;
  iVar34 = ((int)((ulonglong)lVar5 >> 0x20) - (iVar34 + (uint)((uint)lVar5 < uVar21))) +
           (iVar37 >> 0x15) + (uint)CARRY4(uVar14,uVar51);
  uVar100 = uVar18 - uVar13;
  iVar83 = iVar83 - (iVar37 + (uint)(uVar18 < uVar13));
  uVar13 = uVar66 & 0xffe00000;
  uVar75 = uVar66 >> 0x15 | iVar43 * 0x800;
  uVar14 = uVar52 & 0xffe00000;
  uVar42 = uVar52 >> 0x15 | iVar44 * 0x800;
  uVar53 = (uint)((ulonglong)uVar22 * 0xa2c13);
  uVar67 = uVar53 + uVar17;
  uVar54 = (uint)((ulonglong)uVar22 * 0x72d18);
  uVar55 = uVar54 + (uint)lVar3;
  uVar68 = uVar55 - uVar85;
  uVar56 = (uint)((ulonglong)uVar22 * 0x9fb67);
  uVar57 = uVar56 + (uint)lVar11;
  uVar58 = uVar57 - uVar13;
  uVar52 = (uint)((ulonglong)uVar22 * 0xfff0c653);
  uVar66 = uVar52 + (uint)lVar8;
  uVar46 = uVar66 + uVar75;
  uVar47 = uVar46 - uVar73;
  uVar59 = (uint)((ulonglong)uVar22 * 0x215d1);
  uVar60 = uVar59 + (uint)lVar10;
  uVar101 = uVar60 - uVar14;
  uVar21 = (uint)((ulonglong)uVar22 * 0xfff59083);
  uVar96 = uVar21 + (uint)lVar9;
  uVar18 = uVar96 + uVar42;
  uVar23 = uVar18 - uVar12;
  iVar98 = (iVar99 * -0xa6f7d + -uVar22 + (int)((ulonglong)uVar22 * 0xfff59083 >> 0x20) +
            (int)((ulonglong)lVar9 >> 0x20) + (uint)CARRY4(uVar21,(uint)lVar9) + (iVar44 >> 0x15) +
           (uint)CARRY4(uVar96,uVar42)) - (iVar33 + (uint)(uVar18 < uVar12));
  uVar61 = (uint)((ulonglong)uVar88 * 0x72d18);
  uVar62 = uVar61 + uVar67;
  uVar63 = (uint)((ulonglong)uVar88 * 0x9fb67);
  uVar69 = uVar63 + uVar68;
  uVar96 = (uint)((ulonglong)uVar88 * 0x215d1);
  uVar76 = (uint)((ulonglong)uVar88 * 0xfff0c653);
  uVar77 = uVar76 + uVar58;
  uVar21 = uVar96 + uVar47;
  uVar64 = (uint)((ulonglong)uVar88 * 0xa2c13);
  uVar89 = (uint)((ulonglong)uVar88 * 0xfff59083);
  uVar90 = uVar89 + uVar101;
  lVar1 = (ulonglong)uVar100 * 0xa2c13 +
          CONCAT44(iVar83 * 0xa2c13,(*(uint *)((int)param_1 + 7) & 0xfffffff) >> 7);
  uVar38 = (uint)lVar1;
  uVar24 = (uint)((ulonglong)uVar100 * 0x72d18);
  uVar25 = uVar64 + uVar24;
  uVar102 = (uint)((ulonglong)uVar100 * 0x9fb67);
  uVar26 = uVar25 + uVar29;
  uVar103 = uVar102 + uVar62;
  uVar91 = (uint)((ulonglong)uVar100 * 0x215d1);
  uVar42 = (uint)((ulonglong)uVar100 * 0xfff0c653);
  uVar51 = uVar42 + uVar69;
  uVar92 = uVar91 + uVar77;
  uVar12 = (uint)((ulonglong)uVar100 * 0xfff59083);
  uVar19 = uVar12 + uVar21;
  iVar78 = iVar83 * -0xa6f7d + -uVar100 + (int)((ulonglong)uVar100 * 0xfff59083 >> 0x20) +
           iVar34 * 0x215d1 + (int)((ulonglong)uVar88 * 0x215d1 >> 0x20) +
           ((iVar99 * -0xf39ad + -uVar22 + (int)((ulonglong)uVar22 * 0xfff0c653 >> 0x20) +
             (int)((ulonglong)lVar8 >> 0x20) + (uint)CARRY4(uVar52,(uint)lVar8) +
            (uint)CARRY4(uVar66,uVar75)) - (iVar50 + (uint)(uVar46 < uVar73))) +
           (uint)CARRY4(uVar96,uVar47) + (uint)CARRY4(uVar12,uVar21);
  uVar79 = (uint)((ulonglong)uVar41 * 0x72d18);
  uVar12 = uVar79 + uVar38;
  uVar39 = (uint)((ulonglong)uVar41 * 0x9fb67);
  uVar75 = uVar39 + uVar26;
  uVar73 = (uint)((ulonglong)uVar41 * 0x215d1);
  uVar27 = (uint)((ulonglong)uVar41 * 0xfff0c653);
  uVar28 = uVar27 + uVar103;
  uVar80 = uVar73 + uVar51;
  uVar70 = (uint)((ulonglong)uVar41 * 0xa2c13);
  uVar96 = (uint)((ulonglong)uVar41 * 0xfff59083);
  uVar84 = uVar96 + uVar92;
  lVar2 = (ulonglong)uVar30 * 0xa2c13 +
          CONCAT44(iVar87 * 0xa2c13,(*(uint *)((int)param_1 + 2) & 0x3ffffff) >> 5);
  uVar40 = (uint)lVar2;
  uVar52 = (uint)((ulonglong)uVar30 * 0x72d18);
  uVar66 = uVar70 + uVar52;
  uVar46 = uVar66 + uVar20;
  uVar104 = (uint)((ulonglong)uVar30 * 0x9fb67);
  uVar105 = uVar104 + uVar12;
  uVar21 = (uint)((ulonglong)uVar30 * 0x215d1);
  uVar93 = (uint)((ulonglong)uVar30 * 0xfff0c653);
  uVar106 = uVar93 + uVar75;
  uVar18 = uVar21 + uVar28;
  uVar47 = (uint)((ulonglong)uVar30 * 0xfff59083);
  uVar65 = uVar47 + uVar80;
  iVar94 = iVar87 * -0xa6f7d + -uVar30 + (int)((ulonglong)uVar30 * 0xfff59083 >> 0x20) +
           iVar97 * 0x215d1 + (int)((ulonglong)uVar41 * 0x215d1 >> 0x20) +
           iVar83 * -0xf39ad + -uVar100 + (int)((ulonglong)uVar100 * 0xfff0c653 >> 0x20) +
           iVar34 * 0x9fb67 + (int)((ulonglong)uVar88 * 0x9fb67 >> 0x20) +
           ((iVar99 * 0x72d18 + (int)((ulonglong)uVar22 * 0x72d18 >> 0x20) +
             (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4(uVar54,(uint)lVar3)) -
           (iVar49 + (uint)(uVar55 < uVar85))) + (uint)CARRY4(uVar63,uVar68) +
           (uint)CARRY4(uVar42,uVar69) + (uint)CARRY4(uVar73,uVar51) + (uint)CARRY4(uVar47,uVar80);
  uVar85 = (uint)((ulonglong)uVar35 * 0xa2c13);
  uVar54 = uVar85 + uVar16;
  iVar86 = iVar36 * 0xa2c13 + (int)((ulonglong)uVar35 * 0xa2c13 >> 0x20) +
           (uint)CARRY4(uVar85,uVar16);
  uVar16 = (uint)((ulonglong)uVar35 * 0x72d18);
  uVar51 = uVar16 + uVar40;
  uVar85 = (uint)((ulonglong)uVar35 * 0x9fb67);
  uVar47 = uVar85 + uVar46;
  iVar49 = iVar36 * 0x9fb67 + (int)((ulonglong)uVar35 * 0x9fb67 >> 0x20) +
           iVar97 * 0xa2c13 + (int)((ulonglong)uVar41 * 0xa2c13 >> 0x20) +
           iVar87 * 0x72d18 + (int)((ulonglong)uVar30 * 0x72d18 >> 0x20) +
           (uint)CARRY4(uVar70,uVar52) + (uint)CARRY4(uVar66,uVar20) + (uint)CARRY4(uVar85,uVar46);
  uVar85 = (uint)((ulonglong)uVar35 * 0x215d1);
  uVar46 = (uint)((ulonglong)uVar35 * 0xfff0c653);
  uVar20 = uVar46 + uVar105;
  uVar63 = uVar85 + uVar106;
  iVar71 = iVar36 * 0x215d1 + (int)((ulonglong)uVar35 * 0x215d1 >> 0x20) +
           iVar87 * -0xf39ad + -uVar30 + (int)((ulonglong)uVar30 * 0xfff0c653 >> 0x20) +
           iVar97 * 0x9fb67 + (int)((ulonglong)uVar41 * 0x9fb67 >> 0x20) +
           iVar34 * 0xa2c13 + (int)((ulonglong)uVar88 * 0xa2c13 >> 0x20) +
           iVar83 * 0x72d18 + (int)((ulonglong)uVar100 * 0x72d18 >> 0x20) +
           (uint)CARRY4(uVar64,uVar24) + (uint)CARRY4(uVar25,uVar29) + (uint)CARRY4(uVar39,uVar26) +
           (uint)CARRY4(uVar93,uVar75) + (uint)CARRY4(uVar85,uVar106);
  uVar52 = (uint)((ulonglong)uVar35 * 0xfff59083);
  uVar66 = uVar52 + uVar18;
  iVar48 = iVar86 + (uint)(0xffefffff < uVar54);
  uVar73 = uVar54 + 0x100000 >> 0x15 | iVar48 * 0x800;
  uVar42 = uVar73 + uVar51;
  uVar85 = uVar54 + 0x100000 & 0xffe00000;
  iVar81 = iVar36 * 0x72d18 + (int)((ulonglong)uVar35 * 0x72d18 >> 0x20) +
           (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar16,uVar40) + (iVar48 >> 0x15) +
           (uint)CARRY4(uVar73,uVar51);
  iVar72 = iVar49 + (uint)(0xffefffff < uVar47);
  uVar51 = uVar47 + 0x100000 >> 0x15 | iVar72 * 0x800;
  uVar16 = uVar51 + uVar20;
  uVar73 = uVar47 + 0x100000 & 0xffe00000;
  iVar107 = iVar36 * -0xf39ad + -uVar35 + (int)((ulonglong)uVar35 * 0xfff0c653 >> 0x20) +
            iVar87 * 0x9fb67 + (int)((ulonglong)uVar30 * 0x9fb67 >> 0x20) +
            iVar97 * 0x72d18 + (int)((ulonglong)uVar41 * 0x72d18 >> 0x20) +
            (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar79,uVar38) +
            (uint)CARRY4(uVar104,uVar12) + (uint)CARRY4(uVar46,uVar105) + (iVar72 >> 0x15) +
            (uint)CARRY4(uVar51,uVar20);
  iVar108 = iVar71 + (uint)(0xffefffff < uVar63);
  uVar51 = uVar63 + 0x100000 >> 0x15 | iVar108 * 0x800;
  uVar24 = uVar51 + uVar66;
  uVar12 = uVar63 + 0x100000 & 0xffe00000;
  iVar50 = iVar36 * -0xa6f7d + -uVar35 + (int)((ulonglong)uVar35 * 0xfff59083 >> 0x20) +
           iVar87 * 0x215d1 + (int)((ulonglong)uVar30 * 0x215d1 >> 0x20) +
           iVar97 * -0xf39ad + -uVar41 + (int)((ulonglong)uVar41 * 0xfff0c653 >> 0x20) +
           iVar83 * 0x9fb67 + (int)((ulonglong)uVar100 * 0x9fb67 >> 0x20) +
           iVar34 * 0x72d18 + (int)((ulonglong)uVar88 * 0x72d18 >> 0x20) +
           iVar99 * 0xa2c13 + (int)((ulonglong)uVar22 * 0xa2c13 >> 0x20) +
           (uint)CARRY4(uVar53,uVar17) + (uint)CARRY4(uVar61,uVar67) + (uint)CARRY4(uVar102,uVar62)
           + (uint)CARRY4(uVar27,uVar103) + (uint)CARRY4(uVar21,uVar28) +
           (uint)CARRY4(uVar52,uVar18) + (iVar108 >> 0x15) + (uint)CARRY4(uVar51,uVar66);
  iVar36 = iVar94 + (uint)(0xffefffff < uVar65);
  uVar30 = uVar65 + 0x100000 >> 0x15 | iVar36 * 0x800;
  uVar51 = uVar30 + uVar84;
  uVar21 = uVar65 + 0x100000 & 0xffe00000;
  iVar82 = iVar97 * -0xa6f7d + -uVar41 + (int)((ulonglong)uVar41 * 0xfff59083 >> 0x20) +
           iVar83 * 0x215d1 + (int)((ulonglong)uVar100 * 0x215d1 >> 0x20) +
           iVar34 * -0xf39ad + -uVar88 + (int)((ulonglong)uVar88 * 0xfff0c653 >> 0x20) +
           ((iVar99 * 0x9fb67 + (int)((ulonglong)uVar22 * 0x9fb67 >> 0x20) +
             (int)((ulonglong)lVar11 >> 0x20) + (uint)CARRY4(uVar56,(uint)lVar11)) -
           (iVar43 + (uint)(uVar57 < uVar13))) + (uint)CARRY4(uVar76,uVar58) +
           (uint)CARRY4(uVar91,uVar77) + (uint)CARRY4(uVar96,uVar92) + (iVar36 >> 0x15) +
           (uint)CARRY4(uVar30,uVar84);
  uVar61 = uVar65 - uVar21;
  iVar95 = iVar78 + (uint)(0xffefffff < uVar19);
  uVar30 = uVar19 + 0x100000 >> 0x15 | iVar95 * 0x800;
  uVar25 = uVar30 + uVar90;
  uVar13 = uVar19 + 0x100000 & 0xffe00000;
  iVar87 = iVar34 * -0xa6f7d + -uVar88 + (int)((ulonglong)uVar88 * 0xfff59083 >> 0x20) +
           ((iVar99 * 0x215d1 + (int)((ulonglong)uVar22 * 0x215d1 >> 0x20) +
             (int)((ulonglong)lVar10 >> 0x20) + (uint)CARRY4(uVar59,(uint)lVar10)) -
           (iVar44 + (uint)(uVar60 < uVar14))) + (uint)CARRY4(uVar89,uVar101) + (iVar95 >> 0x15) +
           (uint)CARRY4(uVar30,uVar90);
  uVar70 = uVar19 - uVar13;
  iVar34 = iVar98 + (uint)(0xffefffff < uVar23);
  uVar14 = uVar23 + 0x100000 & 0xffe00000;
  uVar30 = uVar23 + 0x100000 >> 0x15 | iVar34 * 0x800;
  uVar28 = uVar30 + uVar32;
  iVar43 = (iVar74 - (iVar45 + (uint)(uVar31 < uVar15))) + (iVar34 >> 0x15) +
           (uint)CARRY4(uVar30,uVar32);
  uVar39 = uVar23 - uVar14;
  iVar83 = iVar81 + (uint)(0xffefffff < uVar42);
  iVar44 = iVar107 + (uint)(0xffefffff < uVar16);
  iVar74 = iVar50 + (uint)(0xffefffff < uVar24);
  uVar15 = uVar42 + 0x100000 & 0xffe00000;
  uVar40 = uVar42 + 0x100000 >> 0x15 | iVar83 * 0x800;
  uVar29 = uVar24 + 0x100000 & 0xffe00000;
  uVar96 = uVar24 + 0x100000 >> 0x15 | iVar74 * 0x800;
  uVar60 = uVar96 + uVar61;
  iVar45 = iVar82 + (uint)(0xffefffff < uVar51);
  uVar18 = uVar51 + 0x100000 >> 0x15 | iVar45 * 0x800;
  uVar31 = uVar51 + 0x100000 & 0xffe00000;
  uVar53 = uVar18 + uVar70;
  uVar62 = uVar51 - uVar31;
  iVar37 = iVar87 + (uint)(0xffefffff < uVar25);
  uVar17 = uVar25 + 0x100000 >> 0x15 | iVar37 * 0x800;
  uVar32 = uVar25 + 0x100000 & 0xffe00000;
  uVar59 = uVar17 + uVar39;
  uVar35 = uVar25 - uVar32;
  iVar33 = iVar43 + (uint)(0xffefffff < uVar28);
  uVar30 = uVar28 + 0x100000 & 0xffe00000;
  uVar22 = uVar28 + 0x100000 >> 0x15 | iVar33 * 0x800;
  uVar57 = uVar28 - uVar30;
  iVar97 = iVar33 >> 0x15;
  uVar41 = uVar16 + 0x100000 & 0xffe00000;
  uVar58 = uVar16 + 0x100000 >> 0x15 | iVar44 * 0x800;
  uVar52 = (uint)((ulonglong)uVar22 * 0xa2c13);
  uVar66 = uVar52 - uVar85;
  uVar46 = uVar66 + uVar54;
  iVar48 = iVar86 + ((iVar97 * 0xa2c13 + (int)((ulonglong)uVar22 * 0xa2c13 >> 0x20)) -
                    (iVar48 + (uint)(uVar52 < uVar85))) + (uint)CARRY4(uVar66,uVar54);
  uVar38 = uVar46 & 0x1fffff;
  uVar85 = uVar46 >> 0x15 | iVar48 * 0x800;
  uVar76 = (uint)((ulonglong)uVar22 * 0x72d18);
  uVar77 = uVar76 + uVar42;
  uVar79 = uVar77 - uVar15;
  uVar64 = (uint)((ulonglong)uVar22 * 0x9fb67);
  uVar67 = uVar64 + uVar47;
  uVar68 = uVar67 - uVar73;
  uVar69 = uVar40 + uVar68;
  uVar52 = (uint)((ulonglong)uVar22 * 0x215d1);
  uVar54 = (uint)((ulonglong)uVar22 * 0xfff0c653);
  uVar55 = uVar54 + uVar16;
  uVar56 = uVar55 - uVar41;
  uVar66 = uVar52 + uVar63;
  uVar46 = uVar66 - uVar12;
  uVar20 = uVar58 + uVar46;
  uVar26 = (uint)((ulonglong)uVar22 * 0xfff59083);
  uVar75 = uVar26 + uVar24;
  uVar27 = uVar75 - uVar29;
  uVar80 = uVar85 + uVar79;
  iVar48 = ((iVar97 * 0x72d18 + (int)((ulonglong)uVar22 * 0x72d18 >> 0x20) + iVar81 +
            (uint)CARRY4(uVar76,uVar42)) - (iVar83 + (uint)(uVar77 < uVar15))) + (iVar48 >> 0x15) +
           (uint)CARRY4(uVar85,uVar79);
  uVar85 = uVar80 & 0x1fffff;
  uVar15 = uVar80 >> 0x15 | iVar48 * 0x800;
  uVar42 = uVar15 + uVar69;
  iVar83 = ((iVar97 * 0x9fb67 + (int)((ulonglong)uVar22 * 0x9fb67 >> 0x20) + iVar49 +
            (uint)CARRY4(uVar64,uVar47)) - (iVar72 + (uint)(uVar67 < uVar73))) + (iVar83 >> 0x15) +
           (uint)CARRY4(uVar40,uVar68) + (iVar48 >> 0x15) + (uint)CARRY4(uVar15,uVar69);
  uVar47 = uVar42 & 0x1fffff;
  uVar73 = uVar42 >> 0x15 | iVar83 * 0x800;
  uVar40 = uVar73 + uVar56;
  iVar83 = ((iVar97 * -0xf39ad + -uVar22 + (int)((ulonglong)uVar22 * 0xfff0c653 >> 0x20) + iVar107 +
            (uint)CARRY4(uVar54,uVar16)) - (iVar44 + (uint)(uVar55 < uVar41))) + (iVar83 >> 0x15) +
           (uint)CARRY4(uVar73,uVar56);
  uVar73 = uVar40 >> 0x15 | iVar83 * 0x800;
  uVar15 = uVar73 + uVar20;
  iVar83 = ((iVar97 * 0x215d1 + (int)((ulonglong)uVar22 * 0x215d1 >> 0x20) + iVar71 +
            (uint)CARRY4(uVar52,uVar63)) - (iVar108 + (uint)(uVar66 < uVar12))) + (iVar44 >> 0x15) +
           (uint)CARRY4(uVar58,uVar46) + (iVar83 >> 0x15) + (uint)CARRY4(uVar73,uVar20);
  uVar73 = uVar15 >> 0x15 | iVar83 * 0x800;
  uVar41 = uVar73 + uVar27;
  iVar97 = ((iVar97 * -0xa6f7d + -uVar22 + (int)((ulonglong)uVar22 * 0xfff59083 >> 0x20) + iVar50 +
            (uint)CARRY4(uVar26,uVar24)) - (iVar74 + (uint)(uVar75 < uVar29))) + (iVar83 >> 0x15) +
           (uint)CARRY4(uVar73,uVar27);
  uVar73 = uVar41 >> 0x15 | iVar97 * 0x800;
  uVar12 = uVar73 + uVar60;
  uVar16 = uVar12 & 0x1fffff;
  iVar97 = (iVar94 - (iVar36 + (uint)(uVar65 < uVar21))) + (iVar74 >> 0x15) +
           (uint)CARRY4(uVar96,uVar61) + (iVar97 >> 0x15) + (uint)CARRY4(uVar73,uVar60);
  uVar73 = uVar12 >> 0x15 | iVar97 * 0x800;
  uVar12 = uVar73 + uVar62;
  iVar97 = (iVar82 - (iVar45 + (uint)(uVar51 < uVar31))) + (iVar97 >> 0x15) +
           (uint)CARRY4(uVar73,uVar62);
  uVar42 = uVar12 & 0x1fffff;
  uVar73 = uVar12 >> 0x15 | iVar97 * 0x800;
  uVar12 = uVar73 + uVar53;
  uVar52 = uVar12 & 0x1fffff;
  iVar97 = (iVar78 - (iVar95 + (uint)(uVar19 < uVar13))) + (iVar45 >> 0x15) +
           (uint)CARRY4(uVar18,uVar70) + (iVar97 >> 0x15) + (uint)CARRY4(uVar73,uVar53);
  uVar73 = uVar12 >> 0x15 | iVar97 * 0x800;
  uVar12 = uVar73 + uVar35;
  iVar97 = (iVar87 - (iVar37 + (uint)(uVar25 < uVar32))) + (iVar97 >> 0x15) +
           (uint)CARRY4(uVar73,uVar35);
  uVar66 = uVar12 & 0x1fffff;
  uVar73 = uVar12 >> 0x15 | iVar97 * 0x800;
  uVar12 = uVar73 + uVar59;
  uVar18 = uVar12 & 0x1fffff;
  iVar97 = (iVar98 - (iVar34 + (uint)(uVar23 < uVar14))) + (iVar37 >> 0x15) +
           (uint)CARRY4(uVar17,uVar39) + (iVar97 >> 0x15) + (uint)CARRY4(uVar73,uVar59);
  uVar73 = uVar12 >> 0x15 | iVar97 * 0x800;
  uVar31 = uVar73 + uVar57;
  iVar97 = (iVar43 - (iVar33 + (uint)(uVar28 < uVar30))) + (iVar97 >> 0x15) +
           (uint)CARRY4(uVar73,uVar57);
  uVar13 = uVar31 >> 0x15 | iVar97 * 0x800;
  iVar97 = iVar97 >> 0x15;
  uVar73 = (uint)((ulonglong)uVar13 * 0xa2c13);
  uVar32 = uVar73 + uVar38;
  iVar34 = iVar97 * 0xa2c13 + (int)((ulonglong)uVar13 * 0xa2c13 >> 0x20) +
           (uint)CARRY4(uVar73,uVar38);
  uVar21 = uVar32 >> 0x15 | iVar34 * 0x800;
  uVar73 = (uint)((ulonglong)uVar13 * 0x72d18);
  uVar12 = uVar73 + uVar85;
  uVar30 = (uint)((ulonglong)uVar13 * 0x9fb67);
  uVar96 = uVar30 + uVar47;
  lVar3 = (ulonglong)uVar13 * 0xfff0c653 +
          (CONCAT44(iVar97 * -0xf39ad + -uVar13,uVar40) & 0xffffffff001fffff);
  uVar51 = (uint)lVar3;
  lVar2 = (ulonglong)uVar13 * 0x215d1 + (CONCAT44(iVar97 * 0x215d1,uVar15) & 0xffffffff001fffff);
  uVar15 = (uint)lVar2;
  lVar1 = (ulonglong)uVar13 * 0xfff59083 +
          (CONCAT44(iVar97 * -0xa6f7d + -uVar13,uVar41) & 0xffffffff001fffff);
  uVar41 = (uint)lVar1;
  uVar14 = uVar21 + uVar12;
  iVar34 = iVar97 * 0x72d18 + (int)((ulonglong)uVar13 * 0x72d18 >> 0x20) +
           (uint)CARRY4(uVar73,uVar85) + (iVar34 >> 0x15) + (uint)CARRY4(uVar21,uVar12);
  uVar21 = uVar14 & 0x1fffff;
  uVar85 = uVar14 >> 0x15 | iVar34 * 0x800;
  uVar73 = uVar85 + uVar96;
  iVar97 = iVar97 * 0x9fb67 + (int)((ulonglong)uVar13 * 0x9fb67 >> 0x20) +
           (uint)CARRY4(uVar30,uVar47) + (iVar34 >> 0x15) + (uint)CARRY4(uVar85,uVar96);
  uVar85 = uVar73 >> 0x15 | iVar97 * 0x800;
  uVar46 = uVar85 + uVar51;
  iVar97 = (int)((ulonglong)lVar3 >> 0x20) + (iVar97 >> 0x15) + (uint)CARRY4(uVar85,uVar51);
  uVar85 = uVar46 >> 0x15 | iVar97 * 0x800;
  uVar46 = uVar46 & 0x1fffff;
  uVar12 = uVar85 + uVar15;
  iVar97 = (int)((ulonglong)lVar2 >> 0x20) + (iVar97 >> 0x15) + (uint)CARRY4(uVar85,uVar15);
  uVar85 = uVar12 >> 0x15 | iVar97 * 0x800;
  uVar96 = uVar85 + uVar41;
  iVar97 = (int)((ulonglong)lVar1 >> 0x20) + (iVar97 >> 0x15) + (uint)CARRY4(uVar85,uVar41);
  uVar17 = uVar12 & 0x1fffff;
  uVar85 = uVar96 >> 0x15 | iVar97 * 0x800;
  uVar13 = uVar85 + uVar16;
  iVar97 = (iVar97 >> 0x15) + (uint)CARRY4(uVar85,uVar16);
  uVar85 = uVar13 >> 0x15 | iVar97 * 0x800;
  uVar51 = uVar85 + uVar42;
  uVar13 = uVar13 & 0x1fffff;
  iVar97 = (iVar97 >> 0x15) + (uint)CARRY4(uVar85,uVar42);
  uVar85 = uVar51 >> 0x15 | iVar97 * 0x800;
  uVar30 = uVar85 + uVar52;
  iVar97 = (iVar97 >> 0x15) + (uint)CARRY4(uVar85,uVar52);
  uVar85 = uVar30 >> 0x15 | iVar97 * 0x800;
  uVar15 = uVar85 + uVar66;
  iVar97 = (iVar97 >> 0x15) + (uint)CARRY4(uVar85,uVar66);
  uVar85 = uVar15 & 0x1fffff;
  uVar15 = uVar15 >> 0x15 | iVar97 * 0x800;
  uVar41 = uVar15 + uVar18;
  uVar15 = (uVar41 >> 0x15 | ((iVar97 >> 0x15) + (uint)CARRY4(uVar15,uVar18)) * 0x800) +
           (uVar31 & 0x1fffff);
  *param_1 = uVar32 & 0xff | ((uVar32 & 0x1fffff) >> 8 & 0xff) << 8 |
             ((uVar14 & 7) << 5 | (uVar32 & 0x1fffff) >> 0x10) << 0x10 | (uVar21 >> 3) << 0x18;
  param_1[2] = uVar46 >> 1 & 0xff | (uVar46 >> 9 & 0xff) << 8 |
               ((uVar12 & 0xf) << 4 | uVar46 >> 0x11) << 0x10 | (uVar17 >> 4) << 0x18;
  param_1[1] = uVar21 >> 0xb & 0xff | ((uVar73 & 0x3f) << 2 | uVar21 >> 0x13) << 8 |
               ((uVar73 & 0x1fffff) >> 6 & 0xff) << 0x10 |
               (uVar46 << 7 | (uVar73 & 0x1fffff) >> 0xe) << 0x18;
  param_1[4] = uVar13 >> 2 & 0xff | (uVar13 >> 10 & 0xff) << 8 |
               ((uVar51 & 0x1f) << 3 | uVar13 >> 0x12) << 0x10 | ((uVar51 & 0x1fffff) >> 5) << 0x18;
  param_1[3] = uVar17 >> 0xc & 0xff | ((uVar96 & 0x7f) << 1 | uVar17 >> 0x14) << 8 |
               ((uVar96 & 0x1fffff) >> 7 & 0xff) << 0x10 |
               (uVar13 << 6 | (uVar96 & 0x1fffff) >> 0xf) << 0x18;
  param_1[6] = uVar85 >> 3 & 0xff | (uVar85 >> 0xb & 0xff) << 8 |
               ((uVar41 & 0x3f) << 2 | uVar85 >> 0x13) << 0x10 | ((uVar41 & 0x1fffff) >> 6) << 0x18;
  param_1[5] = (uVar51 & 0x1fffff) >> 0xd | (uVar30 & 0xff) << 8 |
               ((uVar30 & 0x1fffff) >> 8 & 0xff) << 0x10 |
               (uVar85 << 5 | (uVar30 & 0x1fffff) >> 0x10) << 0x18;
  param_1[7] = uVar15 * 0x80 & 0xff | (uVar41 & 0x1fffff) >> 0xe | (uVar15 >> 1 & 0xff) << 8 |
               (uVar15 >> 9 & 0xff) << 0x10 | (uVar15 >> 0x11) << 0x18;
  return 0;
}

