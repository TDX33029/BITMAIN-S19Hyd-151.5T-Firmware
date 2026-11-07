// FUN_01b2f234 @ 01b2f234 size=1984 calls_out=0 calls_in=4
// strings: 

undefined8 FUN_01b2f234(undefined4 *param_1,uint *param_2,uint *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
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
  
  uVar6 = *param_2;
  uVar3 = *param_3;
  *param_1 = (int)((ulonglong)uVar3 * (ulonglong)uVar6);
  uVar1 = (ulonglong)param_3[1] * (ulonglong)*param_2 +
          ((ulonglong)uVar3 * (ulonglong)uVar6 >> 0x20);
  uVar6 = (uint)(uVar1 >> 0x20);
  lVar2 = (ulonglong)*param_3 * (ulonglong)param_2[1] + (uVar1 & 0xffffffff);
  uVar3 = (uint)lVar2;
  uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[1] = uVar3;
  if (CARRY4(uVar6,uVar10)) {
    uVar3 = 1;
  }
  if (!CARRY4(uVar6,uVar10)) {
    uVar3 = 0;
  }
  uVar1 = (ulonglong)*param_3 * (ulonglong)param_2[2] + (ulonglong)(uVar6 + uVar10);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar3 + uVar7;
  uVar1 = (ulonglong)param_3[1] * (ulonglong)param_2[1] + (uVar1 & 0xffffffff);
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar6 + uVar8;
  lVar2 = (ulonglong)param_3[2] * (ulonglong)*param_2 + (uVar1 & 0xffffffff);
  uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[2] = (int)lVar2;
  uVar3 = (uint)CARRY4(uVar9,uVar10) + (uint)CARRY4(uVar3,uVar7) + (uint)CARRY4(uVar6,uVar8);
  uVar1 = (ulonglong)param_3[3] * (ulonglong)*param_2 + (ulonglong)(uVar9 + uVar10);
  uVar9 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar3 + uVar9;
  uVar1 = (ulonglong)param_3[2] * (ulonglong)param_2[1] + (uVar1 & 0xffffffff);
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar10 = uVar6 + uVar8;
  uVar1 = (ulonglong)param_3[1] * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar7 = uVar10 + uVar4;
  lVar2 = (ulonglong)*param_3 * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[3] = (int)lVar2;
  uVar8 = (uint)CARRY4(uVar7,uVar5) +
          (uint)CARRY4(uVar10,uVar4) + (uint)CARRY4(uVar3,uVar9) + (uint)CARRY4(uVar6,uVar8);
  uVar1 = (ulonglong)*param_3 * (ulonglong)param_2[4] + (ulonglong)(uVar7 + uVar5);
  uVar11 = (uint)(uVar1 >> 0x20);
  uVar7 = uVar8 + uVar11;
  uVar1 = (ulonglong)param_3[1] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar12 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar7 + uVar12;
  uVar1 = (ulonglong)param_3[2] * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  uVar3 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar9 + uVar3;
  uVar1 = (ulonglong)param_3[3] * (ulonglong)param_2[1] + (uVar1 & 0xffffffff);
  uVar6 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar4 + uVar6;
  lVar2 = (ulonglong)param_3[4] * (ulonglong)*param_2 + (uVar1 & 0xffffffff);
  uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[4] = (int)lVar2;
  uVar3 = (uint)CARRY4(uVar5,uVar10) +
          (uint)CARRY4(uVar4,uVar6) +
          (uint)CARRY4(uVar9,uVar3) + (uint)CARRY4(uVar8,uVar11) + (uint)CARRY4(uVar7,uVar12);
  uVar1 = (ulonglong)param_3[5] * (ulonglong)*param_2 + (ulonglong)(uVar5 + uVar10);
  uVar13 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar3 + uVar13;
  uVar1 = (ulonglong)param_3[4] * (ulonglong)param_2[1] + (uVar1 & 0xffffffff);
  uVar14 = (uint)(uVar1 >> 0x20);
  uVar10 = uVar6 + uVar14;
  uVar1 = (ulonglong)param_3[3] * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar7 = uVar10 + uVar4;
  uVar1 = (ulonglong)param_3[2] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar5 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar7 + uVar5;
  uVar1 = (ulonglong)param_3[1] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar11 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar8 + uVar11;
  lVar2 = (ulonglong)*param_3 * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[5] = (int)lVar2;
  uVar4 = (uint)CARRY4(uVar9,uVar12) +
          (uint)CARRY4(uVar8,uVar11) +
          (uint)CARRY4(uVar7,uVar5) +
          (uint)CARRY4(uVar10,uVar4) + (uint)CARRY4(uVar3,uVar13) + (uint)CARRY4(uVar6,uVar14);
  uVar1 = (ulonglong)*param_3 * (ulonglong)param_2[6] + (ulonglong)(uVar9 + uVar12);
  uVar15 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar4 + uVar15;
  uVar1 = (ulonglong)param_3[1] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar16 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar9 + uVar16;
  uVar1 = (ulonglong)param_3[2] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar3 = (uint)(uVar1 >> 0x20);
  uVar11 = uVar5 + uVar3;
  uVar1 = (ulonglong)param_3[3] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar6 = (uint)(uVar1 >> 0x20);
  uVar12 = uVar11 + uVar6;
  uVar1 = (ulonglong)param_3[4] * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  uVar10 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar12 + uVar10;
  uVar1 = (ulonglong)param_3[5] * (ulonglong)param_2[1] + (uVar1 & 0xffffffff);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar14 = uVar13 + uVar7;
  lVar2 = (ulonglong)param_3[6] * (ulonglong)*param_2 + (uVar1 & 0xffffffff);
  uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[6] = (int)lVar2;
  uVar3 = (uint)CARRY4(uVar14,uVar8) +
          (uint)CARRY4(uVar13,uVar7) +
          (uint)CARRY4(uVar12,uVar10) +
          (uint)CARRY4(uVar11,uVar6) +
          (uint)CARRY4(uVar5,uVar3) + (uint)CARRY4(uVar4,uVar15) + (uint)CARRY4(uVar9,uVar16);
  uVar1 = (ulonglong)param_3[7] * (ulonglong)*param_2 + (ulonglong)(uVar14 + uVar8);
  uVar17 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar3 + uVar17;
  uVar1 = (ulonglong)param_3[6] * (ulonglong)param_2[1] + (uVar1 & 0xffffffff);
  uVar18 = (uint)(uVar1 >> 0x20);
  uVar10 = uVar6 + uVar18;
  uVar1 = (ulonglong)param_3[5] * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  uVar11 = (uint)(uVar1 >> 0x20);
  uVar7 = uVar10 + uVar11;
  uVar1 = (ulonglong)param_3[4] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar12 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar7 + uVar12;
  uVar1 = (ulonglong)param_3[3] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar13 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar8 + uVar13;
  uVar1 = (ulonglong)param_3[2] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar14 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar9 + uVar14;
  uVar1 = (ulonglong)param_3[1] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar15 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar4 + uVar15;
  lVar2 = (ulonglong)*param_3 * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar16 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[7] = (int)lVar2;
  uVar9 = (uint)CARRY4(uVar5,uVar16) +
          (uint)CARRY4(uVar4,uVar15) +
          (uint)CARRY4(uVar9,uVar14) +
          (uint)CARRY4(uVar8,uVar13) +
          (uint)CARRY4(uVar7,uVar12) +
          (uint)CARRY4(uVar10,uVar11) + (uint)CARRY4(uVar3,uVar17) + (uint)CARRY4(uVar6,uVar18);
  uVar1 = (ulonglong)param_3[1] * (ulonglong)param_2[7] + (ulonglong)(uVar5 + uVar16);
  uVar16 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar9 + uVar16;
  uVar1 = (ulonglong)param_3[2] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar17 = (uint)(uVar1 >> 0x20);
  uVar11 = uVar5 + uVar17;
  uVar1 = (ulonglong)param_3[3] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar3 = (uint)(uVar1 >> 0x20);
  uVar12 = uVar11 + uVar3;
  uVar1 = (ulonglong)param_3[4] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar6 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar12 + uVar6;
  uVar1 = (ulonglong)param_3[5] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar10 = (uint)(uVar1 >> 0x20);
  uVar14 = uVar13 + uVar10;
  uVar1 = (ulonglong)param_3[6] * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar15 = uVar14 + uVar7;
  lVar2 = (ulonglong)param_3[7] * (ulonglong)param_2[1] + (uVar1 & 0xffffffff);
  uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[8] = (int)lVar2;
  uVar1 = (ulonglong)param_3[7] * (ulonglong)param_2[2] + (ulonglong)(uVar15 + uVar8);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar3 = (uint)CARRY4(uVar15,uVar8) +
          (uint)CARRY4(uVar14,uVar7) +
          (uint)CARRY4(uVar13,uVar10) +
          (uint)CARRY4(uVar12,uVar6) +
          (uint)CARRY4(uVar11,uVar3) + (uint)CARRY4(uVar9,uVar16) + (uint)CARRY4(uVar5,uVar17);
  uVar6 = uVar3 + uVar4;
  uVar1 = (ulonglong)param_3[6] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar14 = (uint)(uVar1 >> 0x20);
  uVar10 = uVar6 + uVar14;
  uVar1 = (ulonglong)param_3[5] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar5 = (uint)(uVar1 >> 0x20);
  uVar7 = uVar10 + uVar5;
  uVar1 = (ulonglong)param_3[4] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar11 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar7 + uVar11;
  uVar1 = (ulonglong)param_3[3] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar12 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar8 + uVar12;
  lVar2 = (ulonglong)param_3[2] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[9] = (int)lVar2;
  uVar7 = (uint)CARRY4(uVar9,uVar13) +
          (uint)CARRY4(uVar8,uVar12) +
          (uint)CARRY4(uVar7,uVar11) +
          (uint)CARRY4(uVar10,uVar5) + (uint)CARRY4(uVar3,uVar4) + (uint)CARRY4(uVar6,uVar14);
  uVar1 = (ulonglong)param_3[3] * (ulonglong)param_2[7] + (ulonglong)(uVar9 + uVar13);
  uVar11 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar7 + uVar11;
  uVar1 = (ulonglong)param_3[4] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar12 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar8 + uVar12;
  uVar1 = (ulonglong)param_3[5] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar3 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar9 + uVar3;
  uVar1 = (ulonglong)param_3[6] * (ulonglong)param_2[4] + (uVar1 & 0xffffffff);
  uVar6 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar4 + uVar6;
  lVar2 = (ulonglong)param_3[7] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[10] = (int)lVar2;
  uVar3 = (uint)CARRY4(uVar5,uVar10) +
          (uint)CARRY4(uVar4,uVar6) +
          (uint)CARRY4(uVar9,uVar3) + (uint)CARRY4(uVar7,uVar11) + (uint)CARRY4(uVar8,uVar12);
  uVar1 = (ulonglong)param_3[7] * (ulonglong)param_2[4] + (ulonglong)(uVar5 + uVar10);
  uVar9 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar3 + uVar9;
  uVar1 = (ulonglong)param_3[6] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar10 = uVar6 + uVar8;
  uVar1 = (ulonglong)param_3[5] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar7 = uVar10 + uVar4;
  lVar2 = (ulonglong)param_3[4] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[0xb] = (int)lVar2;
  uVar3 = (uint)CARRY4(uVar7,uVar5) +
          (uint)CARRY4(uVar10,uVar4) + (uint)CARRY4(uVar3,uVar9) + (uint)CARRY4(uVar6,uVar8);
  uVar1 = (ulonglong)param_3[5] * (ulonglong)param_2[7] + (ulonglong)(uVar7 + uVar5);
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar10 = uVar3 + uVar8;
  uVar1 = (ulonglong)param_3[6] * (ulonglong)param_2[6] + (uVar1 & 0xffffffff);
  uVar9 = (uint)(uVar1 >> 0x20);
  uVar7 = uVar10 + uVar9;
  lVar2 = (ulonglong)param_3[7] * (ulonglong)param_2[5] + (uVar1 & 0xffffffff);
  uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[0xc] = (int)lVar2;
  uVar3 = (uint)CARRY4(uVar7,uVar6) + (uint)CARRY4(uVar3,uVar8) + (uint)CARRY4(uVar10,uVar9);
  uVar1 = (ulonglong)param_3[7] * (ulonglong)param_2[6] + (ulonglong)(uVar7 + uVar6);
  uVar10 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar3 + uVar10;
  lVar2 = (ulonglong)param_3[6] * (ulonglong)param_2[7] + (uVar1 & 0xffffffff);
  uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[0xd] = (int)lVar2;
  lVar2 = (ulonglong)param_3[7] * (ulonglong)param_2[7] + (ulonglong)(uVar6 + uVar7);
  param_1[0xe] = (int)lVar2;
  param_1[0xf] = (uint)CARRY4(uVar3,uVar10) + (int)((ulonglong)lVar2 >> 0x20) +
                 (uint)CARRY4(uVar6,uVar7);
  return 0;
}

