// FUN_01b9b9e8 @ 01b9b9e8 size=1216 calls_out=2 calls_in=0
// strings: 

uint FUN_01b9b9e8(int param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int *piVar5;
  int *piVar4;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  uint local_3c;
  uint local_38;
  uint local_30;
  
  iVar13 = *(int *)(param_1 + 100);
  uVar12 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  iVar6 = *(int *)(param_1 + 4);
  iVar7 = *(int *)(param_1 + 0xc);
  uVar20 = (int)param_2 - iVar6;
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar20 - uVar8) {
    local_3c = uVar20 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_3c = uVar8;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_3c = uVar8;
  }
  if (uVar12 < uVar20) {
    uVar8 = uVar20 - uVar12;
  }
  else {
    uVar8 = 0;
  }
  local_30 = 1 << (*(uint *)(param_1 + 0xc4) & 0xff);
  piVar14 = *(int **)(param_1 + 0xb4);
  lVar1 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar9 = (uint)lVar1;
  uVar3 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
  iVar10 = piVar14[0x30];
  iVar17 = *(int *)(param_1 + 0x5c);
  iVar16 = *(int *)(param_1 + 0xc0);
  uVar23 = *(uint *)(param_1 + 0x1c);
  uVar15 = uVar9 >> (0x42U - iVar10 & 0xff) | uVar3 << (iVar10 - 0x22U & 0xff) |
           uVar3 >> (0x22U - iVar10 & 0xff);
  iVar19 = piVar14[0x17];
  uVar11 = -iVar16 + 0x40;
  HintPreloadData(iVar19 + uVar15 * 0x10);
  iVar10 = *(int *)(param_1 + 0xdc);
  do {
    if (uVar20 <= uVar23) break;
    lVar1 = (ulonglong)*(uint *)(iVar6 + uVar23) * 0xbf9b0000;
    uVar21 = *(int *)(iVar6 + uVar23 + 4) * -0x40650000 + *(uint *)(iVar6 + uVar23) * -0x30e44324 +
             (int)((ulonglong)lVar1 >> 0x20);
    uVar21 = (uint)lVar1 >> (uVar11 & 0xff) | uVar21 << (iVar16 - 0x20U & 0xff) |
             uVar21 >> (0x20U - iVar16 & 0xff);
    *(undefined4 *)(iVar13 + (uVar12 - 1 & uVar23) * 4) = *(undefined4 *)(iVar17 + uVar21 * 4);
    *(uint *)(iVar17 + uVar21 * 4) = uVar23;
    uVar23 = uVar23 + 1;
  } while (iVar10 == 0);
  *(uint *)(param_1 + 0x1c) = uVar20;
  uVar9 = *(uint *)(iVar17 + (uVar9 >> (uVar11 & 0xff) | uVar3 << (0x20 - uVar11 & 0xff) |
                             uVar3 >> (-iVar16 + 0x20U & 0xff)) * 4);
  uVar3 = 3;
  for (; ((uVar11 = uVar3, local_30 != 0 && local_3c <= uVar9 &&
          (((*(int *)(iVar6 + uVar9 + (uVar3 - 3)) != *(int *)((int)param_2 + (uVar3 - 3)) ||
            (uVar11 = FUN_01b9b884(param_2,iVar6 + uVar9,param_3), uVar11 <= uVar3)) ||
           (*param_4 = (uVar20 + 3) - uVar9, uVar3 = uVar11, param_3 != (int)param_2 + uVar11)))) &&
         (uVar11 = uVar3, uVar8 < uVar9)); uVar9 = *(uint *)(iVar13 + (uVar9 & uVar12 - 1) * 4)) {
    local_30 = local_30 - 1;
    uVar3 = uVar11;
  }
  iVar13 = piVar14[1];
  iVar10 = *piVar14;
  uVar12 = local_30;
  if (2 < local_30) {
    uVar12 = 3;
  }
  piVar22 = (int *)(uVar15 * 0x10 + iVar19);
  piVar4 = piVar22;
  do {
    piVar5 = piVar4 + 1;
    HintPreloadData(iVar13 + *piVar4);
    piVar4 = piVar5;
  } while (piVar5 != (int *)(iVar19 + 0xc + uVar15 * 0x10));
  iVar16 = uVar15 * 4 + 0x40000003;
  iVar17 = piVar14[0x19];
  HintPreloadData(iVar17 + (*(uint *)(iVar19 + iVar16 * 4) >> 8) * 4);
  local_38 = 0;
  do {
    if (uVar12 == local_38) {
      uVar3 = *(uint *)(iVar19 + iVar16 * 4);
      uVar8 = uVar3 >> 8;
      uVar3 = uVar3 & 0xff;
      piVar14 = (int *)(iVar17 + uVar8 * 4);
      if (local_30 - uVar12 < uVar3) {
        uVar3 = local_30 - uVar12;
      }
      piVar22 = (int *)(iVar17 + (uVar8 + uVar3) * 4);
      piVar4 = piVar14;
      while (piVar4 != piVar22) {
        HintPreloadData(iVar13 + *piVar4);
        piVar4 = piVar4 + 1;
      }
      do {
        if (piVar14 == piVar22) {
          return uVar11;
        }
        iVar16 = *piVar14;
        if (*(uint *)(iVar13 + iVar16) == *param_2) {
          iVar17 = FUN_01b9b970(param_2 + 1,iVar13 + iVar16 + 4,param_3,iVar10,iVar6 + iVar7);
          uVar12 = iVar17 + 4;
          if (uVar11 < uVar12) {
            *param_4 = ((3 - iVar7) + uVar20 + (iVar10 - iVar13)) - iVar16;
            if (param_3 == (int)param_2 + uVar12) {
              return uVar12;
            }
            uVar11 = uVar12;
          }
        }
        piVar14 = piVar14 + 1;
      } while( true );
    }
    iVar18 = *piVar22;
    if (iVar18 == 0) {
      return uVar11;
    }
    if (*(uint *)(iVar13 + iVar18) == *param_2) {
      iVar2 = FUN_01b9b970(param_2 + 1,iVar13 + iVar18 + 4,param_3,iVar10,iVar6 + iVar7);
      uVar8 = iVar2 + 4;
      if ((uVar11 < uVar8) &&
         (*param_4 = ((3 - iVar7) + uVar20 + (iVar10 - iVar13)) - iVar18, uVar11 = uVar8,
         param_3 == (int)param_2 + uVar8)) {
        return uVar8;
      }
    }
    piVar22 = piVar22 + 1;
    local_38 = local_38 + 1;
  } while( true );
}

