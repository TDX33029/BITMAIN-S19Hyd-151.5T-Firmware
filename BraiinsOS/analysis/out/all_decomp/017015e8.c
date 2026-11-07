// FUN_017015e8 @ 017015e8 size=892 calls_out=0 calls_in=7
// strings: 

undefined8 FUN_017015e8(uint *param_1,uint *param_2)

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
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
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
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  
  uVar39 = *param_2;
  uVar35 = (uint)*(byte *)((int)param_2 + 5) * 0x1000 + (uint)*(byte *)((int)param_2 + 6) * 0x100000
           + (uVar39 >> 0x1c) + (uint)(byte)param_2[1] * 0x10;
  uVar30 = param_2[6];
  uVar27 = param_2[0xc];
  uVar23 = (uint)(byte)param_2[2] * 0x200 + (uint)*(byte *)((int)param_2 + 9) * 0x20000 +
           (uint)*(byte *)((int)param_2 + 7) * 2 + (uVar35 >> 0x1b);
  uVar22 = (uint)*(byte *)((int)param_2 + 10) * 0x2000000;
  uVar40 = uVar23 + uVar22;
  uVar31 = (uint)*(byte *)((int)param_2 + 0x1d) * 0x1000 +
           (uint)*(byte *)((int)param_2 + 0x1e) * 0x100000 + (uVar30 >> 0x1c) +
           (uint)(byte)param_2[7] * 0x10;
  uVar32 = (uint)(byte)param_2[3] * 0x2000 + (uint)*(byte *)((int)param_2 + 0xd) * 0x200000 +
           (uint)*(byte *)((int)param_2 + 0xb) * 0x20 +
           (uVar40 >> 0x1c |
           ((uint)(*(byte *)((int)param_2 + 10) >> 7) + (uint)CARRY4(uVar23,uVar22)) * 0x10);
  uVar24 = (uint)*(byte *)((int)param_2 + 0xf) * 0x400 + (uint)(byte)param_2[4] * 0x40000 +
           (uint)*(byte *)((int)param_2 + 0xe) * 4 + (uVar32 >> 0x1b);
  bVar1 = *(byte *)((int)param_2 + 0x11);
  uVar36 = (uint)(byte)param_2[8] * 0x200 + (uint)*(byte *)((int)param_2 + 0x21) * 0x20000 +
           (uint)*(byte *)((int)param_2 + 0x1f) * 2 + (uVar31 >> 0x1b);
  uVar22 = (uint)bVar1 * 0x4000000;
  uVar34 = uVar24 + uVar22;
  bVar2 = *(byte *)((int)param_2 + 0x13);
  uVar19 = param_2[5];
  bVar3 = *(byte *)((int)param_2 + 0x12);
  bVar4 = *(byte *)((int)param_2 + 0x3a);
  bVar5 = *(byte *)((int)param_2 + 0x16);
  bVar6 = *(byte *)((int)param_2 + 0x17);
  bVar7 = *(byte *)((int)param_2 + 0x29);
  bVar8 = *(byte *)((int)param_2 + 0x15);
  uVar23 = (uint)bVar4 * 0x2000000;
  uVar38 = (uint)*(byte *)((int)param_2 + 0x22) * 0x2000000;
  uVar37 = uVar36 + uVar38;
  uVar41 = (uint)*(byte *)((int)param_2 + 0x35) * 0x1000 +
           (uint)*(byte *)((int)param_2 + 0x36) * 0x100000 + (uVar27 >> 0x1c) +
           (uint)(byte)param_2[0xd] * 0x10;
  uVar33 = (uint)(byte)param_2[9] * 0x2000 + (uint)*(byte *)((int)param_2 + 0x25) * 0x200000 +
           (uint)*(byte *)((int)param_2 + 0x23) * 0x20 +
           (uVar37 >> 0x1c |
           ((uint)(*(byte *)((int)param_2 + 0x22) >> 7) + (uint)CARRY4(uVar36,uVar38)) * 0x10);
  uVar38 = (uint)bVar7 * 0x4000000;
  uVar25 = (uint)*(byte *)((int)param_2 + 0x27) * 0x400 + (uint)(byte)param_2[10] * 0x40000 +
           (uint)*(byte *)((int)param_2 + 0x26) * 4 + (uVar33 >> 0x1b);
  uVar36 = param_2[0xf];
  uVar26 = uVar25 + uVar38;
  uVar20 = param_2[0xb];
  bVar9 = *(byte *)((int)param_2 + 0x2b);
  uVar28 = (uint)(byte)param_2[0xe] * 0x200 + (uint)*(byte *)((int)param_2 + 0x39) * 0x20000 +
           (uint)*(byte *)((int)param_2 + 0x37) * 2 + (uVar41 >> 0x1b);
  uVar29 = uVar28 + uVar23;
  bVar10 = *(byte *)((int)param_2 + 0x3d);
  uVar21 = param_2[0x10];
  bVar11 = *(byte *)((int)param_2 + 0x2a);
  bVar12 = *(byte *)((int)param_2 + 0x2e);
  bVar13 = *(byte *)((int)param_2 + 0x3b);
  bVar14 = *(byte *)((int)param_2 + 0x41);
  bVar15 = *(byte *)((int)param_2 + 0x2f);
  bVar16 = *(byte *)((int)param_2 + 0x3f);
  bVar17 = *(byte *)((int)param_2 + 0x2d);
  bVar18 = *(byte *)((int)param_2 + 0x3e);
  param_1[10] = uVar33 & 0x7ffffff;
  *param_1 = uVar39 & 0xfffffff;
  param_1[1] = uVar35 & 0x7ffffff;
  param_1[2] = uVar40 & 0xfffffff;
  param_1[3] = uVar32 & 0x7ffffff;
  param_1[4] = uVar34 & 0xfffffff;
  uVar22 = (uint)bVar2 * 0x4000 + (uint)(byte)uVar19 * 0x400000 + (uint)bVar3 * 0x40 +
           (uVar34 >> 0x1c | ((uint)(bVar1 >> 6) + (uint)CARRY4(uVar24,uVar22)) * 0x10);
  param_1[5] = uVar22 & 0x7ffffff;
  param_1[7] = uVar30 & 0xfffffff;
  param_1[8] = uVar31 & 0x7ffffff;
  param_1[0xe] = uVar27 & 0xfffffff;
  uVar38 = (uint)bVar9 * 0x4000 + (uint)(byte)uVar20 * 0x400000 + (uint)bVar11 * 0x40 +
           (uVar26 >> 0x1c | ((uint)(bVar7 >> 6) + (uint)CARRY4(uVar25,uVar38)) * 0x10);
  param_1[6] = (uint)bVar5 * 0x800 + (uint)bVar6 * 0x80000 + (uint)bVar8 * 8 + (uVar22 >> 0x1b);
  param_1[9] = uVar37 & 0xfffffff;
  param_1[0xf] = uVar41 & 0x7ffffff;
  param_1[0xb] = uVar26 & 0xfffffff;
  param_1[0xd] = (uint)bVar12 * 0x800 + (uint)bVar15 * 0x80000 + (uint)bVar17 * 8 + (uVar38 >> 0x1b)
  ;
  param_1[0x10] = uVar29 & 0xfffffff;
  uVar22 = (uint)(byte)uVar36 * 0x2000 + (uint)bVar10 * 0x200000 + (uint)bVar13 * 0x20 +
           (uVar29 >> 0x1c | ((uint)(bVar4 >> 7) + (uint)CARRY4(uVar28,uVar23)) * 0x10);
  param_1[0xc] = uVar38 & 0x7ffffff;
  param_1[0x11] = uVar22 & 0x7ffffff;
  param_1[0x12] =
       (uint)(byte)uVar21 * 0x40000 + (uint)bVar14 * 0x4000000 + (uint)bVar16 * 0x400 +
       (uint)bVar18 * 4 + (uVar22 >> 0x1b);
  return 0;
}

