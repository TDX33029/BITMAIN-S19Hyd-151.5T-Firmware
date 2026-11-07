// FUN_01b2f9f4 @ 01b2f9f4 size=1540 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b2f9f4(undefined4 *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
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
  bool bVar20;
  
  uVar1 = (ulonglong)*param_2 * (ulonglong)*param_2;
  *param_1 = (int)uVar1;
  lVar2 = (ulonglong)*param_2 * (ulonglong)param_2[1];
  lVar3 = lVar2 + (uVar1 >> 0x20);
  param_1[1] = (int)(lVar3 + lVar2);
  uVar5 = (uint)CARRY4((uint)((ulonglong)lVar3 >> 0x20),
                       (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar3,(uint)lVar2));
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[1] + ((ulonglong)(lVar3 + lVar2) >> 0x20);
  uVar6 = (uint)(uVar1 >> 0x20);
  uVar12 = uVar5 + uVar6;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar12 + uVar7;
  lVar2 = (ulonglong)*param_2 * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  param_1[2] = (int)lVar2;
  uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
  bVar20 = CARRY4(uVar13,uVar4);
  uVar13 = uVar13 + uVar4;
  if (!bVar20) {
    uVar4 = 0;
  }
  if (bVar20) {
    uVar4 = 1;
  }
  uVar4 = uVar4 + (uint)CARRY4(uVar5,uVar6) + (uint)CARRY4(uVar12,uVar7);
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[3] + (ulonglong)uVar13;
  uVar9 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar9;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar12 = (uint)(uVar1 >> 0x20);
  uVar7 = uVar6 + uVar12;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar7 + uVar8;
  lVar2 = (ulonglong)param_2[1] * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  param_1[3] = (int)lVar2;
  uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar12 = (uint)CARRY4(uVar4,uVar9) + (uint)CARRY4(uVar6,uVar12) + (uint)CARRY4(uVar7,uVar8) +
           (uint)CARRY4(uVar5,uVar13);
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[2] + (ulonglong)(uVar5 + uVar13);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar12 + uVar4;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar6 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar5 + uVar6;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar14 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar13 + uVar14;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar8 + uVar7;
  lVar2 = (ulonglong)*param_2 * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  param_1[4] = (int)lVar2;
  uVar15 = (uint)((ulonglong)lVar2 >> 0x20);
  bVar20 = CARRY4(uVar9,uVar15);
  uVar9 = uVar9 + uVar15;
  if (!bVar20) {
    uVar15 = 0;
  }
  if (bVar20) {
    uVar15 = 1;
  }
  uVar15 = uVar15 + (uint)CARRY4(uVar12,uVar4) + (uint)CARRY4(uVar5,uVar6) +
                    (uint)CARRY4(uVar13,uVar14) + (uint)CARRY4(uVar8,uVar7);
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[5] + (ulonglong)uVar9;
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar15 + uVar4;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar6 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar8 + uVar6;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar12 = (uint)(uVar1 >> 0x20);
  uVar14 = uVar9 + uVar12;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar16 = uVar14 + uVar7;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar13 = (uint)(uVar1 >> 0x20);
  uVar17 = uVar16 + uVar13;
  lVar2 = (ulonglong)param_2[2] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  param_1[5] = (int)lVar2;
  uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar4 = (uint)CARRY4(uVar15,uVar4) + (uint)CARRY4(uVar8,uVar6) + (uint)CARRY4(uVar9,uVar12) +
          (uint)CARRY4(uVar14,uVar7) + (uint)CARRY4(uVar16,uVar13) + (uint)CARRY4(uVar17,uVar5);
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[3] + (ulonglong)(uVar17 + uVar5);
  uVar9 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar9;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar18 = (uint)(uVar1 >> 0x20);
  uVar7 = uVar6 + uVar18;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar14 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar7 + uVar14;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar17 = (uint)(uVar1 >> 0x20);
  uVar12 = uVar5 + uVar17;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar15 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar12 + uVar15;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar16 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar13 + uVar16;
  lVar2 = (ulonglong)*param_2 * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  param_1[6] = (int)lVar2;
  uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
  bVar20 = CARRY4(uVar8,uVar10);
  uVar8 = uVar8 + uVar10;
  if (!bVar20) {
    uVar10 = 0;
  }
  if (bVar20) {
    uVar10 = 1;
  }
  uVar10 = uVar10 + (uint)CARRY4(uVar4,uVar9) + (uint)CARRY4(uVar6,uVar18) +
                    (uint)CARRY4(uVar7,uVar14) + (uint)CARRY4(uVar5,uVar17) +
                    (uint)CARRY4(uVar12,uVar15) + (uint)CARRY4(uVar13,uVar16);
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[7] + (ulonglong)uVar8;
  uVar19 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar10 + uVar19;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar14 = uVar9 + uVar4;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar12 = (uint)(uVar1 >> 0x20);
  uVar15 = uVar14 + uVar12;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar6 = (uint)(uVar1 >> 0x20);
  uVar16 = uVar15 + uVar6;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar13 = (uint)(uVar1 >> 0x20);
  uVar17 = uVar16 + uVar13;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar18 = uVar17 + uVar7;
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar11 = uVar18 + uVar8;
  lVar2 = (ulonglong)param_2[3] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  param_1[7] = (int)lVar2;
  uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar4 = (uint)CARRY4(uVar10,uVar19) + (uint)CARRY4(uVar9,uVar4) + (uint)CARRY4(uVar14,uVar12) +
          (uint)CARRY4(uVar15,uVar6) + (uint)CARRY4(uVar16,uVar13) + (uint)CARRY4(uVar17,uVar7) +
          (uint)CARRY4(uVar18,uVar8) + (uint)CARRY4(uVar11,uVar5);
  uVar1 = (ulonglong)param_2[4] * (ulonglong)param_2[4] + (ulonglong)(uVar11 + uVar5);
  uVar9 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar9;
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar17 = (uint)(uVar1 >> 0x20);
  uVar7 = uVar6 + uVar17;
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar14 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar7 + uVar14;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar10 = (uint)(uVar1 >> 0x20);
  uVar12 = uVar5 + uVar10;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar15 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar12 + uVar15;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar16 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar13 + uVar16;
  lVar2 = (ulonglong)param_2[1] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  param_1[8] = (int)lVar2;
  uVar18 = (uint)((ulonglong)lVar2 >> 0x20);
  bVar20 = CARRY4(uVar8,uVar18);
  uVar8 = uVar8 + uVar18;
  if (!bVar20) {
    uVar18 = 0;
  }
  if (bVar20) {
    uVar18 = 1;
  }
  uVar18 = uVar18 + (uint)CARRY4(uVar4,uVar9) + (uint)CARRY4(uVar6,uVar17) +
                    (uint)CARRY4(uVar7,uVar14) + (uint)CARRY4(uVar5,uVar10) +
                    (uint)CARRY4(uVar12,uVar15) + (uint)CARRY4(uVar13,uVar16);
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[7] + (ulonglong)uVar8;
  uVar6 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar18 + uVar6;
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar8 + uVar4;
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar12 = (uint)(uVar1 >> 0x20);
  uVar14 = uVar9 + uVar12;
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar15 = uVar14 + uVar7;
  uVar1 = (ulonglong)param_2[4] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar13 = (uint)(uVar1 >> 0x20);
  uVar16 = uVar15 + uVar13;
  lVar2 = (ulonglong)param_2[4] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  param_1[9] = (int)lVar2;
  uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar4 = (uint)CARRY4(uVar18,uVar6) + (uint)CARRY4(uVar8,uVar4) + (uint)CARRY4(uVar9,uVar12) +
          (uint)CARRY4(uVar14,uVar7) + (uint)CARRY4(uVar15,uVar13) + (uint)CARRY4(uVar16,uVar5);
  uVar1 = (ulonglong)param_2[5] * (ulonglong)param_2[5] + (ulonglong)(uVar16 + uVar5);
  uVar13 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar13;
  uVar1 = (ulonglong)param_2[4] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar7 = uVar6 + uVar8;
  uVar1 = (ulonglong)param_2[4] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar15 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar7 + uVar15;
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar9 = (uint)(uVar1 >> 0x20);
  uVar12 = uVar5 + uVar9;
  lVar2 = (ulonglong)param_2[3] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  param_1[10] = (int)lVar2;
  uVar14 = (uint)((ulonglong)lVar2 >> 0x20);
  bVar20 = CARRY4(uVar12,uVar14);
  uVar12 = uVar12 + uVar14;
  if (!bVar20) {
    uVar14 = 0;
  }
  if (bVar20) {
    uVar14 = 1;
  }
  uVar14 = uVar14 + (uint)CARRY4(uVar4,uVar13) + (uint)CARRY4(uVar6,uVar8) +
                    (uint)CARRY4(uVar7,uVar15) + (uint)CARRY4(uVar5,uVar9);
  uVar1 = (ulonglong)param_2[4] * (ulonglong)param_2[7] + (ulonglong)uVar12;
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar12 = uVar14 + uVar7;
  uVar1 = (ulonglong)param_2[4] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar12 + uVar4;
  uVar1 = (ulonglong)param_2[5] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar5 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar13 + uVar5;
  lVar2 = (ulonglong)param_2[5] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  param_1[0xb] = (int)lVar2;
  uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar4 = (uint)CARRY4(uVar14,uVar7) + (uint)CARRY4(uVar12,uVar4) + (uint)CARRY4(uVar13,uVar5) +
          (uint)CARRY4(uVar8,uVar6);
  uVar1 = (ulonglong)param_2[6] * (ulonglong)param_2[6] + (ulonglong)(uVar8 + uVar6);
  uVar5 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar5;
  uVar1 = (ulonglong)param_2[5] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar12 = (uint)(uVar1 >> 0x20);
  uVar7 = uVar6 + uVar12;
  lVar2 = (ulonglong)param_2[5] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  param_1[0xc] = (int)lVar2;
  uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
  bVar20 = CARRY4(uVar7,uVar13);
  uVar7 = uVar7 + uVar13;
  if (!bVar20) {
    uVar13 = 0;
  }
  if (bVar20) {
    uVar13 = 1;
  }
  uVar13 = uVar13 + (uint)CARRY4(uVar4,uVar5) + (uint)CARRY4(uVar6,uVar12);
  uVar1 = (ulonglong)param_2[6] * (ulonglong)param_2[7] + (ulonglong)uVar7;
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar13 + uVar4;
  lVar2 = (ulonglong)param_2[6] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  param_1[0xd] = (int)lVar2;
  uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
  lVar2 = (ulonglong)param_2[7] * (ulonglong)param_2[7] + (ulonglong)(uVar6 + uVar7);
  param_1[0xe] = (int)lVar2;
  param_1[0xf] = (uint)CARRY4(uVar13,uVar4) + (int)((ulonglong)lVar2 >> 0x20) +
                 (uint)CARRY4(uVar6,uVar7);
  return 0;
}

