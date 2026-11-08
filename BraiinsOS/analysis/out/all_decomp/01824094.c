// FUN_01824094 @ 01824094 size=1296 calls_out=0 calls_in=2
// strings: 

undefined8
FUN_01824094(uint *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            int *param_7)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  
  uVar8 = param_1[8];
  uVar6 = param_2[8];
  uVar16 = param_2[4];
  uVar22 = param_1[2];
  iVar19 = ((int)uVar8 >> 0x1f & param_3) + ((int)uVar6 >> 0x1f & param_4);
  iVar10 = ((int)uVar8 >> 0x1f & param_5) + ((int)uVar6 >> 0x1f & param_6);
  uVar17 = param_2[5];
  iVar11 = param_7[2];
  iVar23 = param_7[3];
  uVar3 = param_1[3];
  uVar12 = param_1[4];
  iVar24 = param_7[4];
  uVar7 = param_2[2];
  uVar9 = param_2[3];
  uVar13 = param_1[5];
  iVar18 = param_7[5];
  lVar1 = (longlong)(int)*param_1 * (longlong)(int)param_3 +
          (longlong)(int)param_4 * (longlong)(int)*param_2;
  lVar2 = (longlong)(int)param_5 * (longlong)(int)*param_1 +
          (longlong)(int)*param_2 * (longlong)(int)param_6;
  iVar19 = iVar19 - ((int)lVar1 * param_7[9] + iVar19 & 0x3fffffffU);
  iVar10 = iVar10 - ((int)lVar2 * param_7[9] + iVar10 & 0x3fffffffU);
  iVar14 = *param_7;
  uVar4 = param_2[1];
  lVar1 = ((longlong)iVar19 * (longlong)*param_7 + lVar1 >> 0x1e) +
          (longlong)param_7[1] * (longlong)iVar19 +
          (longlong)(int)param_2[1] * (longlong)(int)param_4 +
          (longlong)(int)param_3 * (longlong)(int)param_1[1];
  uVar20 = (uint)lVar1;
  iVar15 = (int)((ulonglong)lVar1 >> 0x20);
  iVar5 = param_7[1];
  *param_1 = uVar20 & 0x3fffffff;
  lVar1 = ((longlong)iVar10 * (longlong)iVar14 + lVar2 >> 0x1e) +
          (longlong)iVar5 * (longlong)iVar10 +
          (longlong)(int)uVar4 * (longlong)(int)param_6 +
          (longlong)(int)param_5 * (longlong)(int)param_1[1];
  uVar21 = (uint)lVar1;
  uVar4 = uVar20 >> 0x1e | iVar15 * 4;
  iVar5 = (int)((ulonglong)lVar1 >> 0x20);
  *param_2 = uVar21 & 0x3fffffff;
  uVar25 = uVar21 >> 0x1e | iVar5 * 4;
  lVar1 = (longlong)iVar11 * (longlong)iVar19 +
          (longlong)(int)uVar22 * (longlong)(int)param_3 +
          (longlong)(int)param_4 * (longlong)(int)uVar7;
  uVar20 = (uint)lVar1;
  uVar21 = uVar20 + uVar4;
  iVar14 = (int)((ulonglong)lVar1 >> 0x20) + (iVar15 >> 0x1e) + (uint)CARRY4(uVar20,uVar4);
  lVar1 = (longlong)iVar11 * (longlong)iVar10 +
          (longlong)(int)uVar22 * (longlong)(int)param_5 +
          (longlong)(int)param_6 * (longlong)(int)uVar7;
  uVar4 = (uint)lVar1;
  uVar7 = uVar4 + uVar25;
  iVar5 = (int)((ulonglong)lVar1 >> 0x20) + (iVar5 >> 0x1e) + (uint)CARRY4(uVar4,uVar25);
  param_1[1] = uVar21 & 0x3fffffff;
  param_2[1] = uVar7 & 0x3fffffff;
  uVar20 = uVar7 >> 0x1e | iVar5 * 4;
  uVar21 = uVar21 >> 0x1e | iVar14 * 4;
  lVar1 = (longlong)iVar23 * (longlong)iVar19 +
          (longlong)(int)uVar3 * (longlong)(int)param_3 +
          (longlong)(int)param_4 * (longlong)(int)uVar9;
  uVar4 = (uint)lVar1;
  uVar7 = uVar4 + uVar21;
  iVar11 = (int)((ulonglong)lVar1 >> 0x20) + (iVar14 >> 0x1e) + (uint)CARRY4(uVar4,uVar21);
  lVar1 = (longlong)iVar23 * (longlong)iVar10 +
          (longlong)(int)uVar3 * (longlong)(int)param_5 +
          (longlong)(int)param_6 * (longlong)(int)uVar9;
  uVar3 = (uint)lVar1;
  uVar4 = uVar3 + uVar20;
  param_1[2] = uVar7 & 0x3fffffff;
  iVar14 = (int)((ulonglong)lVar1 >> 0x20) + (iVar5 >> 0x1e) + (uint)CARRY4(uVar3,uVar20);
  param_2[2] = uVar4 & 0x3fffffff;
  uVar9 = uVar7 >> 0x1e | iVar11 * 4;
  uVar3 = uVar4 >> 0x1e | iVar14 * 4;
  lVar1 = (longlong)iVar24 * (longlong)iVar19 +
          (longlong)(int)uVar12 * (longlong)(int)param_3 +
          (longlong)(int)param_4 * (longlong)(int)uVar16;
  uVar4 = (uint)lVar1;
  uVar7 = uVar4 + uVar9;
  iVar5 = (int)((ulonglong)lVar1 >> 0x20) + (iVar11 >> 0x1e) + (uint)CARRY4(uVar4,uVar9);
  lVar1 = (longlong)iVar24 * (longlong)iVar10 +
          (longlong)(int)uVar12 * (longlong)(int)param_5 +
          (longlong)(int)param_6 * (longlong)(int)uVar16;
  uVar4 = (uint)lVar1;
  uVar9 = uVar4 + uVar3;
  iVar11 = (int)((ulonglong)lVar1 >> 0x20) + (iVar14 >> 0x1e) + (uint)CARRY4(uVar4,uVar3);
  uVar12 = uVar7 >> 0x1e | iVar5 * 4;
  param_1[3] = uVar7 & 0x3fffffff;
  param_2[3] = uVar9 & 0x3fffffff;
  uVar7 = uVar9 >> 0x1e | iVar11 * 4;
  lVar1 = (longlong)iVar18 * (longlong)iVar19 +
          (longlong)(int)uVar13 * (longlong)(int)param_3 +
          (longlong)(int)param_4 * (longlong)(int)uVar17;
  uVar3 = (uint)lVar1;
  uVar4 = uVar3 + uVar12;
  iVar15 = (int)((ulonglong)lVar1 >> 0x20) + (iVar5 >> 0x1e) + (uint)CARRY4(uVar3,uVar12);
  param_1[4] = uVar4 & 0x3fffffff;
  uVar4 = uVar4 >> 0x1e | iVar15 * 4;
  uVar3 = param_1[6];
  uVar12 = param_1[7];
  lVar1 = (longlong)iVar18 * (longlong)iVar10 +
          (longlong)(int)uVar13 * (longlong)(int)param_5 +
          (longlong)(int)param_6 * (longlong)(int)uVar17;
  uVar13 = (uint)lVar1;
  uVar16 = uVar13 + uVar7;
  uVar9 = param_2[7];
  iVar18 = (int)((ulonglong)lVar1 >> 0x20) + (iVar11 >> 0x1e) + (uint)CARRY4(uVar13,uVar7);
  iVar11 = param_7[7];
  iVar14 = param_7[6];
  iVar5 = param_7[8];
  param_2[4] = uVar16 & 0x3fffffff;
  uVar7 = uVar16 >> 0x1e | iVar18 * 4;
  lVar1 = (longlong)iVar14 * (longlong)iVar19 +
          (longlong)(int)uVar3 * (longlong)(int)param_3 +
          (longlong)(int)param_4 * (longlong)(int)param_2[6];
  uVar13 = (uint)lVar1;
  uVar16 = uVar13 + uVar4;
  iVar15 = (int)((ulonglong)lVar1 >> 0x20) + (iVar15 >> 0x1e) + (uint)CARRY4(uVar13,uVar4);
  lVar1 = (longlong)iVar14 * (longlong)iVar10 +
          (longlong)(int)uVar3 * (longlong)(int)param_5 +
          (longlong)(int)param_6 * (longlong)(int)param_2[6];
  uVar3 = (uint)lVar1;
  uVar4 = uVar3 + uVar7;
  iVar18 = (int)((ulonglong)lVar1 >> 0x20) + (iVar18 >> 0x1e) + (uint)CARRY4(uVar3,uVar7);
  param_1[5] = uVar16 & 0x3fffffff;
  param_2[5] = uVar4 & 0x3fffffff;
  uVar7 = uVar16 >> 0x1e | iVar15 * 4;
  uVar13 = uVar4 >> 0x1e | iVar18 * 4;
  lVar1 = (longlong)iVar11 * (longlong)iVar19 +
          (longlong)(int)uVar12 * (longlong)(int)param_3 +
          (longlong)(int)param_4 * (longlong)(int)uVar9;
  uVar3 = (uint)lVar1;
  uVar4 = uVar3 + uVar7;
  iVar14 = (int)((ulonglong)lVar1 >> 0x20) + (iVar15 >> 0x1e) + (uint)CARRY4(uVar3,uVar7);
  lVar1 = (longlong)iVar11 * (longlong)iVar10 +
          (longlong)(int)uVar12 * (longlong)(int)param_5 +
          (longlong)(int)param_6 * (longlong)(int)uVar9;
  uVar3 = (uint)lVar1;
  uVar7 = uVar3 + uVar13;
  iVar11 = (int)((ulonglong)lVar1 >> 0x20) + (iVar18 >> 0x1e) + (uint)CARRY4(uVar3,uVar13);
  lVar1 = (longlong)iVar5 * (longlong)iVar19 +
          (longlong)(int)uVar8 * (longlong)(int)param_3 +
          (longlong)(int)param_4 * (longlong)(int)uVar6;
  uVar9 = (uint)lVar1;
  lVar2 = (longlong)iVar5 * (longlong)iVar10 +
          (longlong)(int)uVar8 * (longlong)(int)param_5 +
          (longlong)(int)param_6 * (longlong)(int)uVar6;
  uVar8 = (uint)lVar2;
  uVar6 = uVar4 >> 0x1e | iVar14 * 4;
  param_1[6] = uVar4 & 0x3fffffff;
  uVar12 = uVar9 + uVar6;
  uVar3 = uVar7 >> 0x1e | iVar11 * 4;
  uVar4 = uVar8 + uVar3;
  param_2[6] = uVar7 & 0x3fffffff;
  param_1[7] = uVar12 & 0x3fffffff;
  param_2[7] = uVar4 & 0x3fffffff;
  param_1[8] = uVar12 >> 0x1e |
               ((int)((ulonglong)lVar1 >> 0x20) + (iVar14 >> 0x1e) + (uint)CARRY4(uVar9,uVar6)) * 4;
  param_2[8] = uVar4 >> 0x1e |
               ((int)((ulonglong)lVar2 >> 0x20) + (iVar11 >> 0x1e) + (uint)CARRY4(uVar8,uVar3)) * 4;
  return 0;
}

