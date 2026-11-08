// FUN_00b86038 @ 00b86038 size=1100 calls_out=2 calls_in=1
// strings: 

void FUN_00b86038(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  
  FUN_00b86484(param_1,param_3);
  piVar9 = param_3 + 4;
  FUN_00b86484(param_1 + 0x10,piVar9);
  iVar1 = *(int *)(*param_3 + 4);
  iVar4 = *(int *)(param_3[4] + 4);
  uVar13 = *(uint *)(iVar1 + 0xc);
  uVar7 = *(uint *)(iVar4 + 0xc);
  piVar2 = param_3 + 7;
  iVar15 = *piVar2;
  uVar11 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  piVar5 = param_3 + 3;
  iVar6 = *piVar5;
  uVar12 = (uint)((int)uVar7 >> 0x1f) >> 1 ^ uVar7;
  bVar17 = (((uint)((byte)((int)uVar7 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar7 >> 0x1f) >> 1) ^
           *(uint *)(iVar4 + 8)) <
           (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           *(uint *)(iVar1 + 8));
  bVar20 = SBORROW4(uVar12,uVar11) != SBORROW4(uVar12 - uVar11,(uint)bVar17);
  bVar17 = (int)(uVar12 - (uVar11 + bVar17)) < 0;
  uVar7 = (uint)(bVar17 != bVar20);
  iVar1 = *param_3;
  if (uVar7 != 0) {
    iVar1 = param_3[4];
  }
  *param_2 = iVar1;
  iVar8 = *(int *)(iVar15 + 4);
  iVar4 = *(int *)(iVar6 + 4);
  piVar9 = piVar9 + uVar7;
  iVar14 = *piVar9;
  uVar13 = *(uint *)(iVar8 + 0xc);
  uVar12 = *(uint *)(iVar4 + 0xc);
  param_3 = param_3 + (bVar17 == bVar20);
  iVar1 = *param_3;
  uVar11 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  uVar7 = (uint)((int)uVar12 >> 0x1f) >> 1 ^ uVar12;
  bVar17 = (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           *(uint *)(iVar8 + 8)) <
           (((uint)((byte)((int)uVar12 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar12 >> 0x1f) >> 1) ^
           *(uint *)(iVar4 + 8));
  bVar20 = SBORROW4(uVar11,uVar7) != SBORROW4(uVar11 - uVar7,(uint)bVar17);
  bVar17 = (int)(uVar11 - (uVar7 + bVar17)) < 0;
  if (bVar17 != bVar20) {
    iVar15 = iVar6;
  }
  param_2[7] = iVar15;
  iVar15 = *(int *)(iVar1 + 4);
  iVar4 = *(int *)(iVar14 + 4);
  uVar12 = *(uint *)(iVar15 + 0xc);
  uVar7 = *(uint *)(iVar4 + 0xc);
  uVar13 = (uint)((int)uVar12 >> 0x1f) >> 1 ^ uVar12;
  uVar11 = (uint)((int)uVar7 >> 0x1f) >> 1 ^ uVar7;
  bVar18 = (((uint)((byte)((int)uVar7 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar7 >> 0x1f) >> 1) ^
           *(uint *)(iVar4 + 8)) <
           (((uint)((byte)((int)uVar12 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar12 >> 0x1f) >> 1) ^
           *(uint *)(iVar15 + 8));
  bVar21 = SBORROW4(uVar11,uVar13) != SBORROW4(uVar11 - uVar13,(uint)bVar18);
  bVar18 = (int)(uVar11 - (uVar13 + bVar18)) < 0;
  uVar7 = (uint)(bVar18 != bVar21);
  if (uVar7 != 0) {
    iVar1 = iVar14;
  }
  param_2[1] = iVar1;
  iVar1 = 0;
  if (bVar17 != bVar20) {
    iVar1 = -1;
  }
  piVar5 = piVar5 + iVar1;
  iVar1 = 0;
  if (bVar17 == bVar20) {
    iVar1 = -1;
  }
  piVar2 = piVar2 + iVar1;
  iVar1 = *(int *)(*piVar5 + 4);
  iVar15 = *(int *)(*piVar2 + 4);
  uVar13 = *(uint *)(iVar1 + 0xc);
  uVar11 = *(uint *)(iVar15 + 0xc);
  uVar16 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  uVar12 = (uint)((int)uVar11 >> 0x1f) >> 1 ^ uVar11;
  bVar17 = (((uint)((byte)((int)uVar11 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar11 >> 0x1f) >> 1) ^
           *(uint *)(iVar15 + 8)) <
           (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           *(uint *)(iVar1 + 8));
  bVar20 = SBORROW4(uVar12,uVar16) != SBORROW4(uVar12 - uVar16,(uint)bVar17);
  bVar17 = (int)(uVar12 - (uVar16 + bVar17)) < 0;
  iVar1 = *piVar2;
  if (bVar17 != bVar20) {
    iVar1 = *piVar5;
  }
  param_2[6] = iVar1;
  param_3 = param_3 + (bVar18 == bVar21);
  piVar9 = piVar9 + uVar7;
  iVar1 = *(int *)(*param_3 + 4);
  iVar15 = *(int *)(*piVar9 + 4);
  uVar13 = *(uint *)(iVar1 + 0xc);
  uVar12 = *(uint *)(iVar15 + 0xc);
  uVar11 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  uVar7 = (uint)((int)uVar12 >> 0x1f) >> 1 ^ uVar12;
  bVar18 = (((uint)((byte)((int)uVar12 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar12 >> 0x1f) >> 1) ^
           *(uint *)(iVar15 + 8)) <
           (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           *(uint *)(iVar1 + 8));
  bVar21 = SBORROW4(uVar7,uVar11) != SBORROW4(uVar7 - uVar11,(uint)bVar18);
  bVar18 = (int)(uVar7 - (uVar11 + bVar18)) < 0;
  uVar7 = (uint)(bVar18 != bVar21);
  iVar1 = *param_3;
  if (uVar7 != 0) {
    iVar1 = *piVar9;
  }
  iVar15 = 0;
  if (bVar17 == bVar20) {
    iVar15 = -1;
  }
  piVar2 = piVar2 + iVar15;
  iVar4 = *piVar2;
  iVar15 = 0;
  if (bVar17 != bVar20) {
    iVar15 = -1;
  }
  piVar5 = piVar5 + iVar15;
  iVar15 = *piVar5;
  param_2[2] = iVar1;
  iVar6 = *(int *)(iVar4 + 4);
  iVar1 = *(int *)(iVar15 + 4);
  uVar11 = *(uint *)(iVar6 + 0xc);
  uVar12 = *(uint *)(iVar1 + 0xc);
  uVar16 = (uint)((int)uVar11 >> 0x1f) >> 1 ^ uVar11;
  uVar13 = (uint)((int)uVar12 >> 0x1f) >> 1 ^ uVar12;
  bVar17 = (((uint)((byte)((int)uVar11 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar11 >> 0x1f) >> 1) ^
           *(uint *)(iVar6 + 8)) <
           (((uint)((byte)((int)uVar12 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar12 >> 0x1f) >> 1) ^
           *(uint *)(iVar1 + 8));
  bVar20 = SBORROW4(uVar16,uVar13) != SBORROW4(uVar16 - uVar13,(uint)bVar17);
  bVar17 = (int)(uVar16 - (uVar13 + bVar17)) < 0;
  iVar1 = param_3[bVar18 == bVar21];
  if (bVar17 != bVar20) {
    iVar4 = iVar15;
  }
  param_2[5] = iVar4;
  iVar15 = *(int *)(iVar1 + 4);
  iVar6 = piVar9[uVar7];
  uVar16 = *(uint *)(iVar15 + 0xc);
  iVar4 = *(int *)(iVar6 + 4);
  uVar13 = *(uint *)(iVar4 + 0xc);
  uVar12 = (uint)((int)uVar16 >> 0x1f) >> 1 ^ uVar16;
  uVar11 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  bVar19 = (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           *(uint *)(iVar4 + 8)) <
           (((uint)((byte)((int)uVar16 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar16 >> 0x1f) >> 1) ^
           *(uint *)(iVar15 + 8));
  bVar22 = SBORROW4(uVar11,uVar12) != SBORROW4(uVar11 - uVar12,(uint)bVar19);
  bVar19 = (int)(uVar11 - (uVar12 + bVar19)) < 0;
  uVar11 = (uint)(bVar19 != bVar22);
  if (uVar11 != 0) {
    iVar1 = iVar6;
  }
  iVar15 = 0;
  if (bVar17 == bVar20) {
    iVar15 = -1;
  }
  iVar6 = piVar2[iVar15];
  iVar4 = 0;
  if (bVar17 != bVar20) {
    iVar4 = -1;
  }
  param_2[3] = iVar1;
  iVar1 = piVar5[iVar4];
  iVar14 = *(int *)(iVar6 + 4);
  iVar8 = *(int *)(iVar1 + 4);
  uVar12 = *(uint *)(iVar14 + 0xc);
  uVar16 = *(uint *)(iVar8 + 0xc);
  uVar13 = (uint)((int)uVar12 >> 0x1f) >> 1 ^ uVar12;
  uVar10 = (uint)((int)uVar16 >> 0x1f) >> 1 ^ uVar16;
  bVar17 = (((uint)((byte)((int)uVar12 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar12 >> 0x1f) >> 1) ^
           *(uint *)(iVar14 + 8)) <
           (((uint)((byte)((int)uVar16 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar16 >> 0x1f) >> 1) ^
           *(uint *)(iVar8 + 8));
  bVar20 = SBORROW4(uVar13,uVar10) != SBORROW4(uVar13 - uVar10,(uint)bVar17);
  bVar17 = (int)(uVar13 - (uVar10 + bVar17)) < 0;
  if (bVar17 != bVar20) {
    iVar6 = iVar1;
  }
  param_2[4] = iVar6;
  iVar1 = 0;
  if (bVar17 == bVar20) {
    iVar1 = -1;
  }
  iVar6 = 0;
  if (bVar17 != bVar20) {
    iVar6 = -1;
  }
  piVar3 = param_3 + (bVar18 == bVar21) + (bVar19 == bVar22);
  piVar5 = piVar5 + iVar4 + iVar6 + 1;
  bVar17 = piVar3 == piVar5;
  if (bVar17) {
    piVar5 = piVar2 + iVar15 + iVar1 + 1;
    piVar3 = piVar9 + uVar7 + uVar11;
  }
  if (!bVar17 || piVar3 != piVar5) {
    FUN_00fb7254();
  }
  return;
}

