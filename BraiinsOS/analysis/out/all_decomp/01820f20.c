// FUN_01820f20 @ 01820f20 size=1916 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01820f20(undefined4 *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
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
  
  uVar4 = *param_2;
  uVar6 = *param_3;
  *param_1 = (int)((ulonglong)uVar6 * (ulonglong)uVar4);
  lVar2 = (ulonglong)param_3[1] * (ulonglong)*param_2 +
          ((ulonglong)uVar6 * (ulonglong)uVar4 >> 0x20);
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[1];
  uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
  param_1[1] = (int)(lVar2 + lVar1);
  bVar20 = CARRY4((uint)((ulonglong)lVar2 >> 0x20),uVar4 + CARRY4((uint)lVar2,(uint)lVar1));
  if (bVar20) {
    uVar4 = 1;
  }
  if (!bVar20) {
    uVar4 = 0;
  }
  uVar3 = (ulonglong)param_3[2] * (ulonglong)*param_2 + ((ulonglong)(lVar2 + lVar1) >> 0x20);
  uVar7 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar4 + uVar7;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar12 = uVar11 + uVar5;
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  param_1[2] = (int)lVar1;
  uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar7 = (uint)CARRY4(uVar4,uVar7) + (uint)CARRY4(uVar11,uVar5) + (uint)CARRY4(uVar12,uVar6);
  uVar3 = (ulonglong)param_3[3] * (ulonglong)*param_2 + (ulonglong)(uVar12 + uVar6);
  uVar4 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar7 + uVar4;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar6 = (uint)(uVar3 >> 0x20);
  uVar12 = uVar11 + uVar6;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar12 + uVar5;
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  param_1[3] = (int)lVar1;
  uVar13 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar4 = (uint)CARRY4(uVar7,uVar4) + (uint)CARRY4(uVar11,uVar6) + (uint)CARRY4(uVar12,uVar5) +
          (uint)CARRY4(uVar8,uVar13);
  uVar3 = (ulonglong)param_3[4] * (ulonglong)*param_2 + (ulonglong)(uVar8 + uVar13);
  uVar12 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar4 + uVar12;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar8 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar6 + uVar8;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar13 = (uint)(uVar3 >> 0x20);
  uVar7 = uVar5 + uVar13;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar14 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar7 + uVar14;
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  param_1[4] = (int)lVar1;
  uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar12 = (uint)CARRY4(uVar4,uVar12) + (uint)CARRY4(uVar6,uVar8) + (uint)CARRY4(uVar5,uVar13) +
           (uint)CARRY4(uVar7,uVar14) + (uint)CARRY4(uVar11,uVar15);
  uVar3 = (ulonglong)param_3[5] * (ulonglong)*param_2 + (ulonglong)(uVar11 + uVar15);
  uVar16 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar12 + uVar16;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar6 = (uint)(uVar3 >> 0x20);
  uVar13 = uVar8 + uVar6;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar14 = uVar13 + uVar5;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar7 = (uint)(uVar3 >> 0x20);
  uVar15 = uVar14 + uVar7;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar11 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar15 + uVar11;
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  param_1[5] = (int)lVar1;
  uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar13 = (uint)CARRY4(uVar12,uVar16) + (uint)CARRY4(uVar8,uVar6) + (uint)CARRY4(uVar13,uVar5) +
           (uint)CARRY4(uVar14,uVar7) + (uint)CARRY4(uVar15,uVar11) + (uint)CARRY4(uVar9,uVar4);
  uVar3 = (ulonglong)param_3[6] * (ulonglong)*param_2 + (ulonglong)(uVar9 + uVar4);
  uVar8 = (uint)(uVar3 >> 0x20);
  uVar14 = uVar13 + uVar8;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar6 = (uint)(uVar3 >> 0x20);
  uVar15 = uVar14 + uVar6;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar15 + uVar5;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar7 = (uint)(uVar3 >> 0x20);
  uVar16 = uVar9 + uVar7;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar11 = (uint)(uVar3 >> 0x20);
  uVar17 = uVar16 + uVar11;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar12 = (uint)(uVar3 >> 0x20);
  uVar18 = uVar17 + uVar12;
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  param_1[6] = (int)lVar1;
  uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar13 = (uint)CARRY4(uVar13,uVar8) + (uint)CARRY4(uVar14,uVar6) + (uint)CARRY4(uVar15,uVar5) +
           (uint)CARRY4(uVar9,uVar7) + (uint)CARRY4(uVar16,uVar11) + (uint)CARRY4(uVar17,uVar12) +
           (uint)CARRY4(uVar18,uVar4);
  uVar3 = (ulonglong)param_3[7] * (ulonglong)*param_2 + (ulonglong)(uVar18 + uVar4);
  uVar19 = (uint)(uVar3 >> 0x20);
  uVar14 = uVar13 + uVar19;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar6 = (uint)(uVar3 >> 0x20);
  uVar15 = uVar14 + uVar6;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar15 + uVar5;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar7 = (uint)(uVar3 >> 0x20);
  uVar16 = uVar9 + uVar7;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar11 = (uint)(uVar3 >> 0x20);
  uVar17 = uVar16 + uVar11;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar12 = (uint)(uVar3 >> 0x20);
  uVar18 = uVar17 + uVar12;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar8 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar18 + uVar8;
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  param_1[7] = (int)lVar1;
  uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar8 = (uint)CARRY4(uVar13,uVar19) + (uint)CARRY4(uVar14,uVar6) + (uint)CARRY4(uVar15,uVar5) +
          (uint)CARRY4(uVar9,uVar7) + (uint)CARRY4(uVar16,uVar11) + (uint)CARRY4(uVar17,uVar12) +
          (uint)CARRY4(uVar18,uVar8) + (uint)CARRY4(uVar10,uVar4);
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[1] + (ulonglong)(uVar10 + uVar4);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar13 = uVar8 + uVar18;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar4 = (uint)(uVar3 >> 0x20);
  uVar14 = uVar13 + uVar4;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar6 = (uint)(uVar3 >> 0x20);
  uVar15 = uVar14 + uVar6;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar15 + uVar5;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar7 = (uint)(uVar3 >> 0x20);
  uVar16 = uVar9 + uVar7;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar11 = (uint)(uVar3 >> 0x20);
  uVar17 = uVar16 + uVar11;
  lVar1 = (ulonglong)param_3[1] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  param_1[8] = (int)lVar1;
  uVar12 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar8 = (uint)CARRY4(uVar8,uVar18) + (uint)CARRY4(uVar13,uVar4) + (uint)CARRY4(uVar14,uVar6) +
          (uint)CARRY4(uVar15,uVar5) + (uint)CARRY4(uVar9,uVar7) + (uint)CARRY4(uVar16,uVar11) +
          (uint)CARRY4(uVar17,uVar12);
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[2] + (ulonglong)(uVar17 + uVar12);
  uVar13 = (uint)(uVar3 >> 0x20);
  uVar12 = uVar8 + uVar13;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar4 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar12 + uVar4;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar14 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar6 + uVar14;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar15 = (uint)(uVar3 >> 0x20);
  uVar7 = uVar5 + uVar15;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar9 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar7 + uVar9;
  lVar1 = (ulonglong)param_3[2] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  param_1[9] = (int)lVar1;
  uVar16 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar7 = (uint)CARRY4(uVar8,uVar13) + (uint)CARRY4(uVar12,uVar4) + (uint)CARRY4(uVar6,uVar14) +
          (uint)CARRY4(uVar5,uVar15) + (uint)CARRY4(uVar7,uVar9) + (uint)CARRY4(uVar11,uVar16);
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[3] + (ulonglong)(uVar11 + uVar16);
  uVar12 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar7 + uVar12;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar8 = (uint)(uVar3 >> 0x20);
  uVar4 = uVar11 + uVar8;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar13 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar4 + uVar13;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar14 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar6 + uVar14;
  lVar1 = (ulonglong)param_3[3] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  param_1[10] = (int)lVar1;
  uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar4 = (uint)CARRY4(uVar7,uVar12) + (uint)CARRY4(uVar11,uVar8) + (uint)CARRY4(uVar4,uVar13) +
          (uint)CARRY4(uVar6,uVar14) + (uint)CARRY4(uVar5,uVar15);
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[4] + (ulonglong)(uVar5 + uVar15);
  uVar11 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar4 + uVar11;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar12 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar6 + uVar12;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar8 = (uint)(uVar3 >> 0x20);
  uVar7 = uVar5 + uVar8;
  lVar1 = (ulonglong)param_3[4] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  param_1[0xb] = (int)lVar1;
  uVar13 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar4 = (uint)CARRY4(uVar4,uVar11) + (uint)CARRY4(uVar6,uVar12) + (uint)CARRY4(uVar5,uVar8) +
          (uint)CARRY4(uVar7,uVar13);
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[5] + (ulonglong)(uVar7 + uVar13);
  uVar7 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar4 + uVar7;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar11 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar6 + uVar11;
  lVar1 = (ulonglong)param_3[5] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  param_1[0xc] = (int)lVar1;
  uVar8 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar12 = (uint)CARRY4(uVar4,uVar7) + (uint)CARRY4(uVar6,uVar11) + (uint)CARRY4(uVar5,uVar8);
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[6] + (ulonglong)(uVar5 + uVar8);
  uVar13 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar12 + uVar13;
  lVar1 = (ulonglong)param_3[6] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  param_1[0xd] = (int)lVar1;
  uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar4 = param_2[7];
  uVar11 = uVar8 + uVar7;
  uVar5 = param_3[7];
  uVar6 = (uint)((ulonglong)uVar5 * (ulonglong)uVar4);
  param_1[0xe] = uVar11 + uVar6;
  param_1[0xf] = (uint)CARRY4(uVar12,uVar13) + (int)((ulonglong)uVar5 * (ulonglong)uVar4 >> 0x20) +
                 (uint)CARRY4(uVar8,uVar7) + (uint)CARRY4(uVar11,uVar6);
  return 0;
}

