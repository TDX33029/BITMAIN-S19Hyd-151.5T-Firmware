// FUN_015e5a60 @ 015e5a60 size=372 calls_out=1 calls_in=1
// strings: 

void FUN_015e5a60(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  
  uVar15 = param_1[1];
  uVar20 = param_1[6];
  uVar8 = 2;
  uVar18 = param_1[7];
  puVar12 = param_1 + 0xc;
  if (uVar15 < uVar18 || uVar18 - uVar15 < (uint)(*param_1 <= uVar20)) {
    uVar2 = uVar18;
    uVar4 = uVar20;
    do {
      uVar10 = *puVar12;
      uVar6 = puVar12[1];
      if (uVar6 <= uVar2 && (uint)(uVar4 <= uVar10) <= uVar6 - uVar2) goto LAB_015e5afc;
      uVar8 = uVar8 + 1;
      puVar12 = puVar12 + 6;
      uVar2 = uVar6;
      uVar4 = uVar10;
    } while (param_2 != uVar8);
  }
  else {
    uVar2 = uVar18;
    uVar4 = uVar20;
    do {
      uVar10 = *puVar12;
      uVar6 = puVar12[1];
      if (uVar2 < uVar6 || uVar6 - uVar2 < (uint)(uVar4 <= uVar10)) goto LAB_015e5afc;
      uVar8 = uVar8 + 1;
      puVar12 = puVar12 + 6;
      uVar2 = uVar6;
      uVar4 = uVar10;
    } while (param_2 != uVar8);
  }
LAB_015e5b04:
  if (uVar18 <= uVar15 && (uint)(*param_1 <= uVar20) <= uVar18 - uVar15) {
    iVar3 = param_2 * 0x18 + -0xc;
    iVar5 = 0;
    do {
      puVar13 = (undefined4 *)((int)param_1 + iVar3);
      uVar1 = *puVar13;
      puVar9 = (undefined4 *)((int)param_1 + iVar5);
      uVar14 = *puVar9;
      iVar3 = iVar3 + -0x18;
      iVar5 = iVar5 + 0x18;
      uVar17 = puVar13[-1];
      uVar11 = puVar13[-2];
      *puVar9 = puVar13[-3];
      uVar7 = puVar9[2];
      uVar19 = puVar9[3];
      puVar13[-2] = puVar9[1];
      puVar9[3] = uVar1;
      uVar16 = puVar13[1];
      puVar13[1] = puVar9[4];
      uVar1 = puVar9[5];
      puVar9[5] = puVar13[2];
      puVar13[2] = uVar1;
      puVar9[1] = uVar11;
      puVar9[2] = uVar17;
      puVar13[-3] = uVar14;
      puVar13[-1] = uVar7;
      *puVar13 = uVar19;
      puVar9[4] = uVar16;
    } while ((param_2 >> 1) * 0x18 != iVar5);
  }
  return;
LAB_015e5afc:
  if (uVar8 != param_2) {
    FUN_015e5bd4(param_1,param_2,0,LZCOUNT(param_2 | 1) << 1 ^ 0x3e);
    return;
  }
  goto LAB_015e5b04;
}

