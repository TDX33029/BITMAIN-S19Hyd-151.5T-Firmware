// FUN_01794dfc @ 01794dfc size=1044 calls_out=2 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x01794c90) */
/* WARNING: Removing unreachable block (ram,0x01794c98) */

uint FUN_01794dfc(int param_1,int *param_2,uint *param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  if (param_4 < 0x5dc) {
    iVar10 = *param_2;
    FUN_016dd606(param_1,0,(iVar10 + 1) * 4);
    if (param_4 != 0) {
      puVar6 = param_3;
      if (param_3 < (uint *)((int)param_3 + param_4)) {
        do {
          puVar9 = (uint *)((int)puVar6 + 1);
          *(int *)(param_1 + (uint)(byte)*puVar6 * 4) =
               *(int *)(param_1 + (uint)(byte)*puVar6 * 4) + 1;
          puVar6 = puVar9;
        } while ((uint *)((int)param_3 + param_4) != puVar9);
      }
      iVar1 = iVar10 * 4;
      if (*(int *)(param_1 + iVar10 * 4) == 0) {
        piVar5 = (int *)(param_1 + iVar1);
        do {
          piVar5 = piVar5 + -1;
          iVar10 = iVar10 + -1;
        } while (*piVar5 == 0);
        iVar1 = iVar10 * 4;
      }
      puVar6 = (uint *)(param_1 + -4);
      uVar14 = 0;
      *param_2 = iVar10;
      do {
        puVar6 = puVar6 + 1;
        if (uVar14 < *puVar6) {
          uVar14 = *puVar6;
        }
      } while ((uint *)(param_1 + iVar1) != puVar6);
      return uVar14;
    }
    *param_2 = 0;
    uVar14 = 0;
  }
  else {
    if ((param_5 & 3) != 0) {
      return 0xffffffff;
    }
    if (0xfff < param_6) {
      iVar10 = (*param_2 + 1) * 4;
      if (param_4 == 0) {
        FUN_016dd606(param_1,0,iVar10);
        *param_2 = 0;
        return 0;
      }
      puVar6 = (uint *)((int)param_3 + param_4);
      iVar1 = FUN_016dd606(param_5,0,0x1000);
      puVar9 = param_3 + 1;
      if (puVar9 < (uint *)((int)puVar6 + -0xf)) {
        uVar14 = *param_3;
        iVar2 = iVar1 + 0x400;
        iVar3 = iVar1 + 0x800;
        iVar4 = iVar1 + 0xc00;
        puVar7 = puVar9;
        do {
          uVar13 = (uVar14 & 0xffff) >> 8;
          uVar15 = *puVar7;
          uVar12 = (uVar14 & 0xffffff) >> 0x10;
          puVar8 = puVar7 + 4;
          *(int *)(iVar1 + (uVar14 & 0xff) * 4) = *(int *)(iVar1 + (uVar14 & 0xff) * 4) + 1;
          uVar11 = (uVar15 & 0xffff) >> 8;
          *(int *)(iVar2 + uVar13 * 4) = *(int *)(iVar2 + uVar13 * 4) + 1;
          uVar13 = (uVar15 & 0xffffff) >> 0x10;
          *(int *)(iVar3 + uVar12 * 4) = *(int *)(iVar3 + uVar12 * 4) + 1;
          *(int *)(iVar4 + (uVar14 >> 0x18) * 4) = *(int *)(iVar4 + (uVar14 >> 0x18) * 4) + 1;
          uVar12 = puVar7[1];
          *(int *)(iVar1 + (uVar15 & 0xff) * 4) = *(int *)(iVar1 + (uVar15 & 0xff) * 4) + 1;
          *(int *)(iVar2 + uVar11 * 4) = *(int *)(iVar2 + uVar11 * 4) + 1;
          uVar11 = (uVar12 & 0xffff) >> 8;
          *(int *)(iVar3 + uVar13 * 4) = *(int *)(iVar3 + uVar13 * 4) + 1;
          uVar14 = (uVar12 & 0xffffff) >> 0x10;
          *(int *)(iVar4 + (uVar15 >> 0x18) * 4) = *(int *)(iVar4 + (uVar15 >> 0x18) * 4) + 1;
          uVar15 = puVar7[2];
          *(int *)(iVar1 + (uVar12 & 0xff) * 4) = *(int *)(iVar1 + (uVar12 & 0xff) * 4) + 1;
          *(int *)(iVar2 + uVar11 * 4) = *(int *)(iVar2 + uVar11 * 4) + 1;
          uVar11 = (uVar15 & 0xffff) >> 8;
          *(int *)(iVar3 + uVar14 * 4) = *(int *)(iVar3 + uVar14 * 4) + 1;
          uVar13 = (uVar15 & 0xffffff) >> 0x10;
          *(int *)(iVar4 + (uVar12 >> 0x18) * 4) = *(int *)(iVar4 + (uVar12 >> 0x18) * 4) + 1;
          uVar14 = puVar7[3];
          *(int *)(iVar1 + (uVar15 & 0xff) * 4) = *(int *)(iVar1 + (uVar15 & 0xff) * 4) + 1;
          *(int *)(iVar2 + uVar11 * 4) = *(int *)(iVar2 + uVar11 * 4) + 1;
          *(int *)(iVar3 + uVar13 * 4) = *(int *)(iVar3 + uVar13 * 4) + 1;
          *(int *)(iVar4 + (uVar15 >> 0x18) * 4) = *(int *)(iVar4 + (uVar15 >> 0x18) * 4) + 1;
          puVar7 = puVar8;
        } while (puVar8 < (uint *)((int)puVar6 + -0xf));
        param_3 = (uint *)((int)puVar9 + (param_4 - 0x14 & 0xfffffff0) + 0xc);
      }
      if (param_3 < puVar6) {
        do {
          puVar9 = (uint *)((int)param_3 + 1);
          *(int *)(iVar1 + (uint)(byte)*param_3 * 4) =
               *(int *)(iVar1 + (uint)(byte)*param_3 * 4) + 1;
          param_3 = puVar9;
        } while (puVar6 != puVar9);
      }
      puVar6 = (uint *)(iVar1 + 0x3fc);
      uVar14 = 0;
      puVar9 = (uint *)(iVar1 + -4);
      do {
        puVar7 = puVar9 + 1;
        uVar13 = *puVar7 + puVar9[0x101] + puVar9[0x201] + puVar9[0x301];
        *puVar7 = uVar13;
        if (uVar14 < uVar13) {
          uVar14 = uVar13;
        }
        puVar9 = puVar7;
      } while (puVar6 != puVar7);
      iVar2 = 0xff;
      uVar13 = *(uint *)(iVar1 + 0x3fc);
      while (uVar13 == 0) {
        puVar6 = puVar6 + -1;
        iVar2 = iVar2 + -1;
        uVar13 = *puVar6;
      }
      *param_2 = iVar2;
      FUN_016dd52c(param_1,iVar1,iVar10);
      return uVar14;
    }
    uVar14 = 0xffffffbe;
  }
  return uVar14;
}

