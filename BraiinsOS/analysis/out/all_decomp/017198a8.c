// FUN_017198a8 @ 017198a8 size=1552 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_017198a8(undefined4 *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
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
  bool bVar21;
  
  uVar1 = (ulonglong)*param_2 * (ulonglong)*param_2;
  *param_1 = (int)uVar1;
  lVar2 = (ulonglong)*param_2 * (ulonglong)param_2[1];
  uVar11 = (uint)lVar2;
  lVar3 = lVar2 + (uVar1 >> 0x20);
  param_1[1] = (int)(lVar3 + lVar2);
  bVar21 = CARRY4((uint)((ulonglong)lVar3 >> 0x20),
                  (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar11));
  if (bVar21) {
    uVar11 = 1;
  }
  if (!bVar21) {
    uVar11 = 0;
  }
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[1] + ((ulonglong)(lVar3 + lVar2) >> 0x20);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar12 = uVar11 + uVar4;
  lVar2 = (ulonglong)*param_2 * (ulonglong)param_2[2];
  iVar5 = (int)lVar2;
  uVar1 = lVar2 + (uVar1 & 0xffffffff);
  uVar6 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar12 + uVar6;
  lVar2 = lVar2 + (uVar1 & 0xffffffff);
  param_1[2] = (int)lVar2;
  uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
  if (!CARRY4(uVar13,uVar9)) {
    iVar5 = 0;
  }
  if (CARRY4(uVar13,uVar9)) {
    iVar5 = 1;
  }
  uVar11 = iVar5 + (uint)CARRY4(uVar11,uVar4) + (uint)CARRY4(uVar12,uVar6);
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[3] + (ulonglong)(uVar13 + uVar9);
  uVar14 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar11 + uVar14;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar13 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar13;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar6 + uVar7;
  lVar2 = (ulonglong)param_2[1] * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[3] = (int)lVar2;
  uVar10 = (uint)CARRY4(uVar11,uVar14) + (uint)CARRY4(uVar4,uVar13) + (uint)CARRY4(uVar6,uVar7) +
           (uint)CARRY4(uVar9,uVar12);
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[2] + (ulonglong)(uVar9 + uVar12);
  uVar11 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar10 + uVar11;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar8;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar6 + uVar7;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar14 = (uint)(uVar1 >> 0x20);
  uVar12 = uVar9 + uVar14;
  lVar2 = (ulonglong)*param_2 * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  iVar5 = (int)lVar2;
  param_1[4] = iVar5;
  uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
  if (CARRY4(uVar12,uVar13)) {
    iVar5 = 1;
  }
  if (!CARRY4(uVar12,uVar13)) {
    iVar5 = 0;
  }
  uVar11 = iVar5 + (uint)CARRY4(uVar10,uVar11) + (uint)CARRY4(uVar4,uVar8) +
                   (uint)CARRY4(uVar6,uVar7) + (uint)CARRY4(uVar9,uVar14);
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[5] + (ulonglong)(uVar12 + uVar13);
  uVar10 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar11 + uVar10;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar15 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar15;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar6 + uVar8;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar12 = uVar9 + uVar7;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar14 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar12 + uVar14;
  lVar2 = (ulonglong)param_2[2] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  param_1[5] = (int)lVar2;
  uVar16 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar11 = (uint)CARRY4(uVar11,uVar10) + (uint)CARRY4(uVar4,uVar15) + (uint)CARRY4(uVar6,uVar8) +
           (uint)CARRY4(uVar9,uVar7) + (uint)CARRY4(uVar12,uVar14) + (uint)CARRY4(uVar13,uVar16);
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[3] + (ulonglong)(uVar13 + uVar16);
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar10 = uVar11 + uVar8;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar15 = uVar10 + uVar4;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar6 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar15 + uVar6;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar16 = (uint)(uVar1 >> 0x20);
  uVar12 = uVar9 + uVar16;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar14 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar12 + uVar14;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar17 = (uint)(uVar1 >> 0x20);
  bVar21 = CARRY4(uVar13,uVar17);
  uVar13 = uVar13 + uVar17;
  lVar2 = (ulonglong)*param_2 * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  param_1[6] = (int)lVar2;
  uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
  if (CARRY4(uVar13,uVar7)) {
    uVar17 = 1;
  }
  if (!CARRY4(uVar13,uVar7)) {
    uVar17 = 0;
  }
  uVar17 = uVar17 + (uint)CARRY4(uVar11,uVar8) + (uint)CARRY4(uVar10,uVar4) +
                    (uint)CARRY4(uVar15,uVar6) + (uint)CARRY4(uVar9,uVar16) +
                    (uint)CARRY4(uVar12,uVar14) + (uint)bVar21;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[7] + (ulonglong)(uVar13 + uVar7);
  uVar11 = (uint)(uVar1 >> 0x20);
  uVar18 = uVar17 + uVar11;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar18 + uVar4;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar19 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar6 + uVar19;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar12 = uVar9 + uVar8;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar16 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar12 + uVar16;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar10 = (uint)(uVar1 >> 0x20);
  uVar7 = uVar13 + uVar10;
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar15 = (uint)(uVar1 >> 0x20);
  uVar14 = uVar7 + uVar15;
  lVar2 = (ulonglong)param_2[3] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  param_1[7] = (int)lVar2;
  uVar20 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar11 = (uint)CARRY4(uVar17,uVar11) + (uint)CARRY4(uVar18,uVar4) + (uint)CARRY4(uVar6,uVar19) +
           (uint)CARRY4(uVar9,uVar8) + (uint)CARRY4(uVar12,uVar16) + (uint)CARRY4(uVar13,uVar10) +
           (uint)CARRY4(uVar7,uVar15) + (uint)CARRY4(uVar14,uVar20);
  uVar1 = (ulonglong)param_2[4] * (ulonglong)param_2[4] + (ulonglong)(uVar14 + uVar20);
  uVar17 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar11 + uVar17;
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar13 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar13;
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar14 = uVar6 + uVar7;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar9 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar14 + uVar9;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar16 = (uint)(uVar1 >> 0x20);
  uVar10 = uVar8 + uVar16;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar12 = (uint)(uVar1 >> 0x20);
  bVar21 = CARRY4(uVar10,uVar12);
  uVar10 = uVar10 + uVar12;
  lVar2 = (ulonglong)param_2[1] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  param_1[8] = (int)lVar2;
  uVar15 = (uint)((ulonglong)lVar2 >> 0x20);
  if (CARRY4(uVar10,uVar15)) {
    uVar12 = 1;
  }
  if (!CARRY4(uVar10,uVar15)) {
    uVar12 = 0;
  }
  uVar12 = uVar12 + (uint)CARRY4(uVar11,uVar17) + (uint)CARRY4(uVar4,uVar13) +
                    (uint)CARRY4(uVar6,uVar7) + (uint)CARRY4(uVar14,uVar9) +
                    (uint)CARRY4(uVar8,uVar16) + (uint)bVar21;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[7] + (ulonglong)(uVar10 + uVar15);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar11 = uVar12 + uVar7;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar15 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar11 + uVar15;
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar10 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar10;
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar14 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar6 + uVar14;
  uVar1 = (ulonglong)param_2[4] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar9 + uVar8;
  lVar2 = (ulonglong)param_2[4] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  param_1[9] = (int)lVar2;
  uVar16 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar4 = (uint)CARRY4(uVar12,uVar7) + (uint)CARRY4(uVar11,uVar15) + (uint)CARRY4(uVar4,uVar10) +
          (uint)CARRY4(uVar6,uVar14) + (uint)CARRY4(uVar9,uVar8) + (uint)CARRY4(uVar13,uVar16);
  uVar1 = (ulonglong)param_2[5] * (ulonglong)param_2[5] + (ulonglong)(uVar13 + uVar16);
  uVar14 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar14;
  uVar1 = (ulonglong)param_2[4] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar6 + uVar7;
  uVar1 = (ulonglong)param_2[4] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar12 = uVar9 + uVar8;
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar10 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar12 + uVar10;
  lVar2 = (ulonglong)param_2[3] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  param_1[10] = (int)lVar2;
  uVar11 = (uint)((ulonglong)lVar2 >> 0x20);
  bVar21 = CARRY4(uVar13,uVar11);
  uVar13 = uVar13 + uVar11;
  if (bVar21) {
    uVar11 = 1;
  }
  if (!bVar21) {
    uVar11 = 0;
  }
  uVar11 = uVar11 + (uint)CARRY4(uVar4,uVar14) + (uint)CARRY4(uVar6,uVar7) +
                    (uint)CARRY4(uVar9,uVar8) + (uint)CARRY4(uVar12,uVar10);
  uVar1 = (ulonglong)param_2[4] * (ulonglong)param_2[7] + (ulonglong)uVar13;
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar11 + uVar7;
  uVar1 = (ulonglong)param_2[4] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar12 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar12;
  uVar1 = (ulonglong)param_2[5] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar13 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar6 + uVar13;
  lVar2 = (ulonglong)param_2[5] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  param_1[0xb] = (int)lVar2;
  uVar14 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar11 = (uint)CARRY4(uVar11,uVar7) + (uint)CARRY4(uVar4,uVar12) + (uint)CARRY4(uVar6,uVar13) +
           (uint)CARRY4(uVar9,uVar14);
  uVar1 = (ulonglong)param_2[6] * (ulonglong)param_2[6] + (ulonglong)(uVar9 + uVar14);
  uVar13 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar11 + uVar13;
  uVar1 = (ulonglong)param_2[5] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar12 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar12;
  lVar2 = (ulonglong)param_2[5] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  param_1[0xc] = (int)lVar2;
  uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
  bVar21 = CARRY4(uVar6,uVar9);
  uVar9 = uVar6 + uVar9;
  if (!bVar21) {
    uVar6 = 0;
  }
  if (bVar21) {
    uVar6 = 1;
  }
  uVar6 = uVar6 + (uint)CARRY4(uVar11,uVar13) + (uint)CARRY4(uVar4,uVar12);
  uVar1 = (ulonglong)param_2[6] * (ulonglong)param_2[7] + (ulonglong)uVar9;
  uVar9 = (uint)(uVar1 >> 0x20);
  uVar11 = uVar6 + uVar9;
  lVar2 = (ulonglong)param_2[6] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  param_1[0xd] = (int)lVar2;
  uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
  lVar2 = (ulonglong)param_2[7] * (ulonglong)param_2[7] + (ulonglong)(uVar11 + uVar4);
  param_1[0xe] = (int)lVar2;
  param_1[0xf] = (uint)CARRY4(uVar6,uVar9) + (int)((ulonglong)lVar2 >> 0x20) +
                 (uint)CARRY4(uVar11,uVar4);
  return 0;
}

