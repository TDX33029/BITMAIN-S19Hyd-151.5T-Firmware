// FUN_01b1c420 @ 01b1c420 size=892 calls_out=0 calls_in=7
// strings: 

undefined8 FUN_01b1c420(uint *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
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
  
  uVar12 = param_2[0xc];
  uVar13 = param_2[6];
  uVar24 = (uint)*(byte *)((int)param_2 + 5) * 0x1000 + (uint)*(byte *)((int)param_2 + 6) * 0x100000
           + (*param_2 >> 0x1c) + (uint)(byte)param_2[1] * 0x10;
  uVar14 = (uint)(byte)param_2[2] * 0x200 + (uint)*(byte *)((int)param_2 + 9) * 0x20000 +
           (uint)*(byte *)((int)param_2 + 7) * 2 + (uVar24 >> 0x1b);
  uVar25 = (uint)*(byte *)((int)param_2 + 10) * 0x2000000;
  uVar15 = uVar14 + uVar25;
  uVar16 = (uint)(byte)param_2[3] * 0x2000 + (uint)*(byte *)((int)param_2 + 0xd) * 0x200000 +
           (uint)*(byte *)((int)param_2 + 0xb) * 0x20 +
           (uVar15 >> 0x1c |
           ((uint)(*(byte *)((int)param_2 + 10) >> 7) + (uint)CARRY4(uVar14,uVar25)) * 0x10);
  uVar14 = (uint)*(byte *)((int)param_2 + 0xf) * 0x400 + (uint)(byte)param_2[4] * 0x40000 +
           (uint)*(byte *)((int)param_2 + 0xe) * 4 + (uVar16 >> 0x1b);
  uVar25 = (uint)*(byte *)((int)param_2 + 0x11) * 0x4000000;
  uVar17 = uVar14 + uVar25;
  uVar18 = (uint)*(byte *)((int)param_2 + 0x13) * 0x4000 + (uint)(byte)param_2[5] * 0x400000 +
           (uint)*(byte *)((int)param_2 + 0x12) * 0x40 +
           (uVar17 >> 0x1c |
           ((uint)(*(byte *)((int)param_2 + 0x11) >> 6) + (uint)CARRY4(uVar14,uVar25)) * 0x10);
  bVar1 = *(byte *)((int)param_2 + 0x16);
  bVar2 = *(byte *)((int)param_2 + 0x17);
  bVar3 = *(byte *)((int)param_2 + 0x15);
  bVar4 = *(byte *)((int)param_2 + 0x2e);
  uVar19 = (uint)*(byte *)((int)param_2 + 0x1d) * 0x1000 +
           (uint)*(byte *)((int)param_2 + 0x1e) * 0x100000 + (uVar13 >> 0x1c) +
           (uint)(byte)param_2[7] * 0x10;
  uVar14 = (uint)(byte)param_2[8] * 0x200 + (uint)*(byte *)((int)param_2 + 0x21) * 0x20000 +
           (uint)*(byte *)((int)param_2 + 0x1f) * 2 + (uVar19 >> 0x1b);
  uVar25 = (uint)*(byte *)((int)param_2 + 0x22) * 0x2000000;
  uVar10 = uVar14 + uVar25;
  uVar23 = (uint)(byte)param_2[9] * 0x2000 + (uint)*(byte *)((int)param_2 + 0x25) * 0x200000 +
           (uint)*(byte *)((int)param_2 + 0x23) * 0x20 +
           (uVar10 >> 0x1c |
           ((uint)(*(byte *)((int)param_2 + 0x22) >> 7) + (uint)CARRY4(uVar14,uVar25)) * 0x10);
  uVar14 = (uint)*(byte *)((int)param_2 + 0x27) * 0x400 + (uint)(byte)param_2[10] * 0x40000 +
           (uint)*(byte *)((int)param_2 + 0x26) * 4 + (uVar23 >> 0x1b);
  uVar25 = (uint)*(byte *)((int)param_2 + 0x29) * 0x4000000;
  uVar11 = uVar14 + uVar25;
  bVar5 = *(byte *)((int)param_2 + 0x2f);
  uVar22 = (uint)*(byte *)((int)param_2 + 0x2b) * 0x4000 + (uint)(byte)param_2[0xb] * 0x400000 +
           (uint)*(byte *)((int)param_2 + 0x2a) * 0x40 +
           (uVar11 >> 0x1c |
           ((uint)(*(byte *)((int)param_2 + 0x29) >> 6) + (uint)CARRY4(uVar14,uVar25)) * 0x10);
  bVar6 = *(byte *)((int)param_2 + 0x2d);
  uVar26 = (uint)*(byte *)((int)param_2 + 0x35) * 0x1000 +
           (uint)*(byte *)((int)param_2 + 0x36) * 0x100000 + (uVar12 >> 0x1c) +
           (uint)(byte)param_2[0xd] * 0x10;
  uVar20 = (uint)(byte)param_2[0xe] * 0x200 + (uint)*(byte *)((int)param_2 + 0x39) * 0x20000 +
           (uint)*(byte *)((int)param_2 + 0x37) * 2 + (uVar26 >> 0x1b);
  uVar25 = (uint)*(byte *)((int)param_2 + 0x3a) * 0x2000000;
  uVar21 = uVar20 + uVar25;
  uVar14 = param_2[0x10];
  uVar25 = (uint)(byte)param_2[0xf] * 0x2000 + (uint)*(byte *)((int)param_2 + 0x3d) * 0x200000 +
           (uint)*(byte *)((int)param_2 + 0x3b) * 0x20 +
           (uVar21 >> 0x1c |
           ((uint)(*(byte *)((int)param_2 + 0x3a) >> 7) + (uint)CARRY4(uVar20,uVar25)) * 0x10);
  bVar7 = *(byte *)((int)param_2 + 0x41);
  bVar8 = *(byte *)((int)param_2 + 0x3f);
  bVar9 = *(byte *)((int)param_2 + 0x3e);
  *param_1 = *param_2 & 0xfffffff;
  param_1[1] = uVar24 & 0x7ffffff;
  param_1[10] = uVar23 & 0x7ffffff;
  param_1[2] = uVar15 & 0xfffffff;
  param_1[3] = uVar16 & 0x7ffffff;
  param_1[4] = uVar17 & 0xfffffff;
  param_1[5] = uVar18 & 0x7ffffff;
  param_1[6] = (uint)bVar1 * 0x800 + (uint)bVar2 * 0x80000 + (uint)bVar3 * 8 + (uVar18 >> 0x1b);
  param_1[7] = uVar13 & 0xfffffff;
  param_1[8] = uVar19 & 0x7ffffff;
  param_1[9] = uVar10 & 0xfffffff;
  param_1[0xb] = uVar11 & 0xfffffff;
  param_1[0xc] = uVar22 & 0x7ffffff;
  param_1[0xd] = (uint)bVar4 * 0x800 + (uint)bVar5 * 0x80000 + (uint)bVar6 * 8 + (uVar22 >> 0x1b);
  param_1[0xe] = uVar12 & 0xfffffff;
  param_1[0xf] = uVar26 & 0x7ffffff;
  param_1[0x10] = uVar21 & 0xfffffff;
  param_1[0x11] = uVar25 & 0x7ffffff;
  param_1[0x12] =
       (uint)(byte)uVar14 * 0x40000 + (uint)bVar7 * 0x4000000 + (uint)bVar8 * 0x400 +
       (uint)bVar9 * 4 + (uVar25 >> 0x1b);
  return 0;
}

