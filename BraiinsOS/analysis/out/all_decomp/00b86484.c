// FUN_00b86484 @ 00b86484 size=580 calls_out=0 calls_in=2
// strings: 

void FUN_00b86484(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  byte in_Q;
  
  uVar16 = 2;
  uVar7 = *(uint *)(*(int *)(param_1[2] + 4) + 0xc);
  uVar10 = *(uint *)(*(int *)(param_1[3] + 4) + 0xc);
  uVar13 = *(uint *)(*(int *)(param_1[1] + 4) + 0xc);
  uVar3 = (uint)((int)uVar7 >> 0x1f) >> 1 ^ uVar7;
  uVar8 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
  uVar11 = *(uint *)(*(int *)(*param_1 + 4) + 0xc);
  bVar18 = (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar10 >> 0x1f) >> 1) ^
           *(uint *)(*(int *)(param_1[3] + 4) + 8)) <
           (((uint)((byte)((int)uVar7 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar7 >> 0x1f) >> 1) ^
           *(uint *)(*(int *)(param_1[2] + 4) + 8));
  uVar7 = 3;
  if ((int)(uVar8 - (uVar3 + bVar18)) < 0 !=
      (SBORROW4(uVar8,uVar3) != SBORROW4(uVar8 - uVar3,(uint)bVar18))) {
    uVar7 = 2;
    uVar16 = 3;
  }
  uVar8 = (uint)((int)uVar11 >> 0x1f) >> 1 ^ uVar11;
  uVar3 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  bVar18 = (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           *(uint *)(*(int *)(param_1[1] + 4) + 8)) <
           (((uint)((byte)((int)uVar11 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar11 >> 0x1f) >> 1) ^
           *(uint *)(*(int *)(*param_1 + 4) + 8));
  bVar19 = SBORROW4(uVar3,uVar8) != SBORROW4(uVar3 - uVar8,(uint)bVar18);
  bVar18 = (int)(uVar3 - (uVar8 + bVar18)) < 0;
  uVar11 = (uint)(bVar18 != bVar19);
  piVar2 = param_1 + uVar16;
  piVar12 = param_1 + uVar7;
  iVar9 = *(int *)(*piVar2 + 4);
  uVar10 = (uint)(bVar18 == bVar19);
  iVar6 = *(int *)(param_1[uVar11] + 4);
  iVar4 = *(int *)(*piVar12 + 4);
  uVar14 = *(uint *)(iVar6 + 0xc);
  uVar3 = *(uint *)(iVar9 + 0xc);
  uVar17 = *(uint *)(iVar4 + 0xc);
  uVar13 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
  uVar8 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
  piVar5 = param_1 + uVar10;
  uVar15 = *(uint *)(*(int *)(*piVar5 + 4) + 0xc);
  bVar19 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
           *(uint *)(iVar6 + 8)) <=
           (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar3 >> 0x1f) >> 1) ^
           *(uint *)(iVar9 + 8));
  bVar20 = SBORROW4(uVar8,uVar13) != SBORROW4(uVar8 - uVar13,(uint)!bVar19);
  bVar18 = (int)(uVar8 - (uVar13 + !bVar19)) < 0;
  uVar3 = (uint)(byte)(bVar18 << 4 | (uVar8 == uVar13 + !bVar19) << 3 |
                       (uVar13 < uVar8 || uVar8 - uVar13 < (uint)bVar19) << 2 | bVar20 << 1 | in_Q);
  uVar8 = uVar16;
  if (bVar18 != bVar20) {
    uVar8 = uVar10;
  }
  uVar13 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
  uVar14 = (uint)((int)uVar17 >> 0x1f) >> 1 ^ uVar17;
  bVar18 = (((uint)((byte)((int)uVar17 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar17 >> 0x1f) >> 1) ^
           *(uint *)(iVar4 + 8)) <
           (((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar15 >> 0x1f) >> 1) ^
           *(uint *)(*(int *)(*piVar5 + 4) + 8));
  if ((int)(uVar14 - (uVar13 + bVar18)) < 0 ==
      (SBORROW4(uVar14,uVar13) != SBORROW4(uVar14 - uVar13,(uint)bVar18))) {
    uVar7 = uVar8;
    piVar5 = piVar12;
    uVar16 = uVar10;
  }
  bVar19 = ((uVar3 & 0x1f) >> 1 & 1) != 0;
  bVar18 = (int)(uVar3 << 0x1b) < 0;
  if (bVar18 != bVar19) {
    uVar16 = uVar11;
  }
  piVar1 = param_1 + uVar7;
  piVar12 = param_1 + uVar16;
  uVar3 = *(uint *)(*(int *)(*piVar1 + 4) + 8);
  uVar7 = *(uint *)(*(int *)(*piVar12 + 4) + 0xc);
  uVar8 = *(uint *)(*(int *)(*piVar12 + 4) + 8);
  uVar16 = *(uint *)(*(int *)(*piVar1 + 4) + 0xc);
  iVar4 = param_1[uVar11];
  if (bVar18 != bVar19) {
    iVar4 = *piVar2;
  }
  uVar11 = (uint)((int)uVar7 >> 0x1f) >> 1 ^ uVar7;
  uVar10 = (uint)((int)uVar16 >> 0x1f) >> 1 ^ uVar16;
  *param_2 = iVar4;
  bVar18 = (((uint)((byte)((int)uVar16 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar16 >> 0x1f) >> 1) ^
           uVar3) < (((uint)((byte)((int)uVar7 >> 0x1f) & 1) << 0x1f |
                     (uint)((int)uVar7 >> 0x1f) >> 1) ^ uVar8);
  piVar2 = piVar1;
  if ((int)(uVar10 - (uVar11 + bVar18)) < 0 !=
      (SBORROW4(uVar10,uVar11) != SBORROW4(uVar10 - uVar11,(uint)bVar18))) {
    piVar2 = piVar12;
    piVar12 = piVar1;
  }
  param_2[1] = *piVar12;
  param_2[2] = *piVar2;
  param_2[3] = *piVar5;
  return;
}

