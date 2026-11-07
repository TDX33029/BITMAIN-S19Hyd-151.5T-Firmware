// FUN_01794f44 @ 01794f44 size=328 calls_out=1 calls_in=4
// strings: 

uint FUN_01794f44(int param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  if ((param_5 & 3) != 0) {
    return 0xffffffff;
  }
  if (param_6 < 0x1000) {
    return 0xffffffbe;
  }
  if (*param_2 < 0xff) {
    bVar2 = true;
LAB_01794a38:
    iVar1 = (*param_2 + 1) * 4;
    if (param_4 == 0) {
      FUN_016dd606(param_1,0,iVar1);
      *param_2 = 0;
      return 0;
    }
    puVar8 = (uint *)((int)param_3 + param_4);
    iVar3 = FUN_016dd606(param_5,0,0x1000);
    puVar11 = param_3 + 1;
    if (puVar11 < (uint *)((int)puVar8 + -0xf)) {
      uVar15 = *param_3;
      iVar4 = iVar3 + 0x400;
      iVar5 = iVar3 + 0x800;
      iVar6 = iVar3 + 0xc00;
      puVar9 = puVar11;
      do {
        uVar14 = (uVar15 & 0xffff) >> 8;
        uVar16 = *puVar9;
        uVar13 = (uVar15 & 0xffffff) >> 0x10;
        puVar10 = puVar9 + 4;
        *(int *)(iVar3 + (uVar15 & 0xff) * 4) = *(int *)(iVar3 + (uVar15 & 0xff) * 4) + 1;
        uVar12 = (uVar16 & 0xffff) >> 8;
        *(int *)(iVar4 + uVar14 * 4) = *(int *)(iVar4 + uVar14 * 4) + 1;
        uVar14 = (uVar16 & 0xffffff) >> 0x10;
        *(int *)(iVar5 + uVar13 * 4) = *(int *)(iVar5 + uVar13 * 4) + 1;
        *(int *)(iVar6 + (uVar15 >> 0x18) * 4) = *(int *)(iVar6 + (uVar15 >> 0x18) * 4) + 1;
        uVar13 = puVar9[1];
        *(int *)(iVar3 + (uVar16 & 0xff) * 4) = *(int *)(iVar3 + (uVar16 & 0xff) * 4) + 1;
        *(int *)(iVar4 + uVar12 * 4) = *(int *)(iVar4 + uVar12 * 4) + 1;
        uVar12 = (uVar13 & 0xffff) >> 8;
        *(int *)(iVar5 + uVar14 * 4) = *(int *)(iVar5 + uVar14 * 4) + 1;
        uVar15 = (uVar13 & 0xffffff) >> 0x10;
        *(int *)(iVar6 + (uVar16 >> 0x18) * 4) = *(int *)(iVar6 + (uVar16 >> 0x18) * 4) + 1;
        uVar16 = puVar9[2];
        *(int *)(iVar3 + (uVar13 & 0xff) * 4) = *(int *)(iVar3 + (uVar13 & 0xff) * 4) + 1;
        *(int *)(iVar4 + uVar12 * 4) = *(int *)(iVar4 + uVar12 * 4) + 1;
        uVar12 = (uVar16 & 0xffff) >> 8;
        *(int *)(iVar5 + uVar15 * 4) = *(int *)(iVar5 + uVar15 * 4) + 1;
        uVar14 = (uVar16 & 0xffffff) >> 0x10;
        *(int *)(iVar6 + (uVar13 >> 0x18) * 4) = *(int *)(iVar6 + (uVar13 >> 0x18) * 4) + 1;
        uVar15 = puVar9[3];
        *(int *)(iVar3 + (uVar16 & 0xff) * 4) = *(int *)(iVar3 + (uVar16 & 0xff) * 4) + 1;
        *(int *)(iVar4 + uVar12 * 4) = *(int *)(iVar4 + uVar12 * 4) + 1;
        *(int *)(iVar5 + uVar14 * 4) = *(int *)(iVar5 + uVar14 * 4) + 1;
        *(int *)(iVar6 + (uVar16 >> 0x18) * 4) = *(int *)(iVar6 + (uVar16 >> 0x18) * 4) + 1;
        puVar9 = puVar10;
      } while (puVar10 < (uint *)((int)puVar8 + -0xf));
      param_3 = (uint *)((int)puVar11 + (param_4 - 0x14 & 0xfffffff0) + 0xc);
    }
    if (param_3 < puVar8) {
      do {
        puVar11 = (uint *)((int)param_3 + 1);
        *(int *)(iVar3 + (uint)(byte)*param_3 * 4) = *(int *)(iVar3 + (uint)(byte)*param_3 * 4) + 1;
        param_3 = puVar11;
      } while (puVar8 != puVar11);
    }
    puVar8 = (uint *)(iVar3 + 0x3fc);
    uVar15 = 0;
    puVar11 = (uint *)(iVar3 + -4);
    do {
      puVar9 = puVar11 + 1;
      uVar14 = *puVar9 + puVar11[0x101] + puVar11[0x201] + puVar11[0x301];
      *puVar9 = uVar14;
      if (uVar15 < uVar14) {
        uVar15 = uVar14;
      }
      puVar11 = puVar9;
    } while (puVar8 != puVar9);
    uVar14 = 0xff;
    uVar12 = *(uint *)(iVar3 + 0x3fc);
    while (uVar12 == 0) {
      puVar8 = puVar8 + -1;
      uVar14 = uVar14 - 1;
      uVar12 = *puVar8;
    }
    if ((bVar2) && (*param_2 < uVar14)) {
      uVar15 = 0xffffffd0;
    }
    else {
      *param_2 = uVar14;
      FUN_016dd52c(param_1,iVar3,iVar1);
    }
    return uVar15;
  }
  *param_2 = 0xff;
  if (0x5db < param_4) {
    bVar2 = false;
    goto LAB_01794a38;
  }
  FUN_016dd606(param_1,0,0x400);
  uVar15 = 0;
  if (param_4 == 0) {
    *param_2 = 0;
    return 0;
  }
  puVar8 = param_3;
  if (param_3 < (uint *)((int)param_3 + param_4)) {
    do {
      puVar11 = (uint *)((int)puVar8 + 1);
      *(int *)(param_1 + (uint)(byte)*puVar8 * 4) = *(int *)(param_1 + (uint)(byte)*puVar8 * 4) + 1;
      puVar8 = puVar11;
    } while ((uint *)((int)param_3 + param_4) != puVar11);
    if (*(int *)(param_1 + 0x3fc) != 0) {
      uVar14 = 0xff;
      goto LAB_01795060;
    }
  }
  piVar7 = (int *)(param_1 + 0x3fc);
  uVar14 = 0xff;
  do {
    piVar7 = piVar7 + -1;
    uVar14 = uVar14 - 1;
  } while (*piVar7 == 0);
LAB_01795060:
  puVar8 = (uint *)(param_1 + -4);
  *param_2 = uVar14;
  do {
    puVar8 = puVar8 + 1;
    if (uVar15 < *puVar8) {
      uVar15 = *puVar8;
    }
  } while ((uint *)(param_1 + uVar14 * 4) != puVar8);
  return uVar15;
}

