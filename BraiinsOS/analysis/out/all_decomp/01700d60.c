// FUN_01700d60 @ 01700d60 size=2184 calls_out=0 calls_in=8
// strings: 

undefined8 FUN_01700d60(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
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
  int iVar29;
  
  uVar4 = (param_2[1] - (-((int)(*param_2 + 0xf0000001U) >> 0x1c) & 0xffU)) + 0xf8000001;
  uVar8 = (param_2[2] - (-((int)uVar4 >> 0x1b) & 0xffU)) + 0xf0000001;
  uVar9 = (param_2[3] - (-((int)uVar8 >> 0x1c) & 0xffU)) + 0xf8000001;
  uVar26 = (param_2[4] - (-((int)uVar9 >> 0x1b) & 0xffU)) + 0xf0000001;
  uVar5 = (param_2[5] - (-((int)uVar26 >> 0x1c) & 0xffU)) + 0xf8000001;
  uVar10 = (param_2[6] - (-((int)uVar5 >> 0x1b) & 0xffU)) + 0xf8000001;
  uVar24 = (param_2[7] - (-((int)uVar10 >> 0x1b) & 0xffU)) + 0xf0000001;
  uVar20 = (param_2[8] - (-((int)uVar24 >> 0x1c) & 0xffU)) + 0xf8000001;
  uVar19 = (param_2[9] - (-((int)uVar20 >> 0x1b) & 0xffU)) + 0xf0000001;
  uVar18 = (param_2[10] - (-((int)uVar19 >> 0x1c) & 0xffU)) + 0xf8000001;
  uVar1 = (param_2[0xb] - (-((int)uVar18 >> 0x1b) & 0xffU)) + 0xf0000001;
  uVar2 = (param_2[0xc] - (-((int)uVar1 >> 0x1c) & 0xffU)) + 0xf8000001;
  uVar27 = (param_2[0xd] - (-((int)uVar2 >> 0x1b) & 0xffU)) + 0xf8000001;
  uVar3 = (param_2[0xe] - (-((int)uVar27 >> 0x1b) & 0xffU)) + 0xf0000001;
  uVar6 = (param_2[0xf] - (-((int)uVar3 >> 0x1c) & 0xffU)) + 0xf8000001;
  uVar11 = (param_2[0x10] - (-((int)uVar6 >> 0x1b) & 0xffU)) + 0xf0000001;
  uVar12 = (param_2[0x11] - (-((int)uVar11 >> 0x1c) & 0xffU)) + 0xf8000001;
  uVar13 = (param_2[0x12] - (-((int)uVar12 >> 0x1b) & 0xffU)) + 0xf8000001;
  if (uVar13 >> 0x1b == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0xffffffff;
  }
  uVar7 = uVar14 & 0xfffffff;
  uVar14 = uVar14 & 0x7ffffff;
  uVar21 = (*param_2 + 0xf0000001U & 0xfffffff) + uVar7;
  uVar4 = (uVar4 & 0x7ffffff) + uVar14 + (uVar21 >> 0x1c);
  uVar15 = (uVar8 & 0xfffffff) + uVar7 + (uVar4 >> 0x1b);
  uVar8 = (uVar9 & 0x7ffffff) + uVar14 + (uVar15 >> 0x1c);
  uVar4 = uVar4 * 0x10 & 0x7ffffff0;
  uVar16 = (uVar26 & 0xfffffff) + uVar7 + (uVar8 >> 0x1b);
  uVar28 = (uVar5 & 0x7ffffff) + uVar14 + (uVar16 >> 0x1c);
  uVar17 = (uVar10 & 0x7ffffff) + uVar14 + (uVar28 >> 0x1b);
  uVar10 = (uVar24 & 0xfffffff) + uVar7 + (uVar17 >> 0x1b);
  uVar9 = (uVar20 & 0x7ffffff) + uVar14 + (uVar10 >> 0x1c);
  uVar20 = uVar21 & 0xfffffff;
  uVar22 = uVar10 & 0xfffffff;
  uVar5 = (uVar19 & 0xfffffff) + uVar7 + (uVar9 >> 0x1b);
  uVar25 = uVar9 * 0x10 & 0x7ffffff0;
  uVar24 = (uVar18 & 0x7ffffff) + uVar14 + (uVar5 >> 0x1c);
  uVar18 = (uVar1 & 0xfffffff) + uVar7 + (uVar24 >> 0x1b);
  uVar26 = (uVar2 & 0x7ffffff) + uVar14 + (uVar18 >> 0x1c);
  uVar19 = (uVar27 & 0x7ffffff) + uVar14 + (uVar26 >> 0x1b);
  uVar27 = (uVar3 & 0xfffffff) + uVar7 + (uVar19 >> 0x1b);
  uVar23 = uVar27 & 0xfffffff;
  uVar1 = (uVar6 & 0x7ffffff) + uVar14 + (uVar27 >> 0x1c);
  uVar7 = (uVar11 & 0xfffffff) + uVar7 + (uVar1 >> 0x1b);
  uVar6 = (uVar12 & 0x7ffffff) + uVar14 + (uVar7 >> 0x1c);
  uVar11 = uVar1 * 0x10 & 0x7ffffff0;
  iVar29 = (uVar13 & 0x7ffffff) + uVar14 + (uVar6 >> 0x1b);
  uVar1 = uVar4 >> 0x18;
  uVar9 = uVar15 * 0x80 + uVar1;
  uVar4 = uVar4 + (uVar20 >> 0x18);
  uVar12 = (uVar8 * 8 & 0x3ffffff8) +
           ((uVar15 & 0xfffffff) >> 0x19) + (uint)CARRY4(uVar15 * 0x80,uVar1);
  uVar1 = uVar25 >> 0x18;
  uVar25 = uVar25 + (uVar22 >> 0x18);
  uVar14 = uVar16 * 0x40 + (uVar12 >> 0x18);
  uVar15 = uVar5 * 0x80 + uVar1;
  uVar2 = (uVar24 * 8 & 0x3ffffff8) +
          ((uVar5 & 0xfffffff) >> 0x19) + (uint)CARRY4(uVar5 * 0x80,uVar1);
  uVar1 = uVar11 >> 0x18;
  uVar11 = uVar11 + (uVar23 >> 0x18);
  uVar24 = uVar18 * 0x40 + (uVar2 >> 0x18);
  uVar3 = uVar7 * 0x80 + uVar1;
  uVar5 = (uVar28 * 4 & 0x1ffffffc) +
          ((uVar16 & 0xfffffff) >> 0x1a) + (uint)CARRY4(uVar16 * 0x40,uVar12 >> 0x18);
  param_1[5] = uVar17 * 0x20 + (uVar5 >> 0x18);
  uVar8 = (uVar6 * 8 & 0x3ffffff8) +
          ((uVar7 & 0xfffffff) >> 0x19) + (uint)CARRY4(uVar7 * 0x80,uVar1);
  uVar6 = (uVar26 * 4 & 0x1ffffffc) +
          ((uVar18 & 0xfffffff) >> 0x1a) + (uint)CARRY4(uVar18 * 0x40,uVar2 >> 0x18);
  uVar1 = iVar29 * 0x40;
  uVar13 = uVar1 + (uVar8 >> 0x18);
  param_1[0xb] = uVar19 * 0x20 + (uVar6 >> 0x18);
  param_1[3] = uVar12 >> 0x10 & 0xff | (uVar14 & 0xff) << 8 | (uVar14 >> 8 & 0xff) << 0x10 |
               ((uVar14 >> 8 & 0xff00) >> 8) << 0x18;
  param_1[9] = uVar2 >> 0x10 & 0xff | (uVar24 & 0xff) << 8 | (uVar24 >> 8 & 0xff) << 0x10 |
               ((uVar24 >> 8 & 0xff00) >> 8) << 0x18;
  *param_1 = uVar21 & 0xff | (uVar20 >> 8 & 0xff) << 8 | (uVar20 >> 0x10 & 0xff) << 0x10 |
             uVar4 * 0x1000000;
  param_1[1] = uVar4 >> 8 & 0xff | (uVar4 >> 0x10 & 0xff) << 8 | (uVar9 & 0xff) << 0x10 |
               (uVar9 >> 8) << 0x18;
  param_1[2] = uVar9 >> 0x10 & 0xff | (uVar9 >> 0x18) << 8 | (uVar12 & 0xff) << 0x10 |
               (uVar12 >> 8) << 0x18;
  param_1[6] = uVar10 & 0xff | (uVar22 >> 8 & 0xff) << 8 | (uVar22 >> 0x10 & 0xff) << 0x10 |
               uVar25 * 0x1000000;
  param_1[7] = uVar25 >> 8 & 0xff | (uVar25 >> 0x10 & 0xff) << 8 | (uVar15 & 0xff) << 0x10 |
               (uVar15 >> 8) << 0x18;
  param_1[8] = uVar15 >> 0x10 & 0xff | (uVar15 >> 0x18) << 8 | (uVar2 & 0xff) << 0x10 |
               (uVar2 >> 8) << 0x18;
  param_1[0xc] = uVar27 & 0xff | (uVar23 >> 8 & 0xff) << 8 | (uVar23 >> 0x10 & 0xff) << 0x10 |
                 uVar11 * 0x1000000;
  param_1[0xd] = uVar11 >> 8 & 0xff | (uVar11 >> 0x10 & 0xff) << 8 | (uVar3 & 0xff) << 0x10 |
                 (uVar3 >> 8) << 0x18;
  param_1[0xe] = (uVar3 >> 8 & 0xff00) >> 8 | (uVar3 >> 0x18) << 8 | (uVar8 & 0xff) << 0x10 |
                 (uVar8 >> 8) << 0x18;
  param_1[4] = uVar14 >> 0x18 | (uVar5 & 0xff) << 8 | (uVar5 >> 8 & 0xff) << 0x10 |
               (uVar5 >> 0x10) << 0x18;
  param_1[10] = uVar24 >> 0x18 | (uVar6 & 0xff) << 8 | (uVar6 >> 8 & 0xff) << 0x10 |
                (uVar6 >> 0x10) << 0x18;
  param_1[0xf] = uVar8 >> 0x10 & 0xff | (uVar13 & 0xff) << 8 | (uVar13 >> 8 & 0xff) << 0x10 |
                 ((uVar13 >> 8 & 0xff00) >> 8) << 0x18;
  *(char *)(param_1 + 0x10) = (char)(uVar13 >> 0x18);
  *(byte *)((int)param_1 + 0x41) =
       (((byte)((uint)iVar29 >> 0x18) & 7) >> 2) + CARRY4(uVar1,uVar8 >> 0x18);
  return 0;
}

