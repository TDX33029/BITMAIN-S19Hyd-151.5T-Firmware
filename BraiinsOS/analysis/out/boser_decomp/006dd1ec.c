// FUN_006dd1ec @ 006dd1ec size=948 calls_out=8 calls_in=27
// strings: 

undefined4 FUN_006dd1ec(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  uint local_60;
  undefined *local_58;
  uint local_4c;
  
  uVar15 = param_2[1];
  iVar14 = param_2[2];
  uVar4 = FUN_01adafd4(*param_1,param_1[1],param_1[2],param_1[3],uVar15,iVar14);
  iVar5 = param_1[5];
  local_4c = param_1[6];
  if (param_1[9] == 0) {
    FUN_006b89dc(param_1 + 7,1,iVar5,local_4c);
  }
  puVar12 = (uint *)param_1[7];
  uVar11 = param_1[8];
  piVar18 = param_1 + 4;
  bVar2 = false;
  iVar17 = 0;
  bVar3 = false;
  uVar10 = uVar4;
  do {
    local_58 = &DAT_01d307c8;
    uVar10 = uVar11 & uVar10;
    uVar6 = *(uint *)((int)puVar12 + uVar10);
    uVar7 = uVar6 ^ (uVar4 >> 0x19) * 0x1010101;
    for (uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar16 = puVar12[-1 - (uVar10 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                                     (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >>
                                      3) & uVar11)];
      if (local_4c <= uVar16) {
LAB_006dd58c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar16,local_4c,local_58);
      }
      iVar8 = iVar5 + uVar16 * 0x10;
      if ((iVar14 == *(int *)(iVar8 + 8)) &&
         (iVar8 = thunk_FUN_01bed842(uVar15,*(undefined4 *)(iVar8 + 4)), iVar8 == 0)) {
        local_4c = param_1[6];
        if (uVar16 < local_4c) {
          FUN_019bb7e0(*param_2,uVar15);
          return 1;
        }
        local_58 = &DAT_01d307d8;
        goto LAB_006dd58c;
      }
    }
    if (bVar2) {
      if (bVar3) goto LAB_006dd390;
      bVar2 = true;
      bVar3 = false;
    }
    else {
      uVar7 = uVar6 & 0x80808080;
      if (uVar7 == 0) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        local_60 = uVar10 + ((uint)LZCOUNT((uVar6 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                           (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                   uVar11;
LAB_006dd390:
        if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
        bVar2 = true;
        bVar3 = true;
      }
    }
    iVar17 = iVar17 + 4;
    uVar10 = uVar10 + iVar17;
  } while( true );
  uVar10 = (uint)*(char *)((int)puVar12 + local_60);
  if (-1 < (int)uVar10) {
    uVar10 = *puVar12 & 0x80808080;
    uVar7 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                    (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
    uVar10 = (uint)*(byte *)((int)puVar12 + (uVar7 >> 3));
    local_60 = uVar7 >> 3;
  }
  uVar7 = param_1[6];
  bVar1 = (byte)(uVar4 >> 0x19);
  *(byte *)((int)puVar12 + local_60) = bVar1;
  iVar17 = param_1[9];
  iVar8 = param_1[10];
  *(byte *)((int)puVar12 + (uVar11 & local_60 - 4) + 4) = bVar1;
  puVar12[-1 - local_60] = uVar7;
  iVar5 = param_1[6];
  param_1[9] = iVar17 - (uVar10 & 1);
  param_1[10] = iVar8 + 1;
  if (iVar5 == param_1[4]) {
    uVar10 = param_1[9] + param_1[10];
    if (0x7fffffe < uVar10) {
      uVar10 = 0x7ffffff;
    }
    if (1 < uVar10 - iVar5) {
      iVar17 = FUN_0132b728(piVar18,iVar5,uVar10 - iVar5,4,0x10);
      iVar5 = param_1[6];
      if (iVar17 == -0x7fffffff) goto LAB_006dd500;
    }
    FUN_0132b704(piVar18,iVar5,1,4,0x10);
    iVar5 = param_1[6];
  }
LAB_006dd500:
  uVar13 = *param_2;
  if (iVar5 == *piVar18) {
    FUN_01aa1b90(piVar18);
  }
  param_1[6] = iVar5 + 1;
  puVar9 = (undefined4 *)(param_1[5] + iVar5 * 0x10);
  *puVar9 = uVar13;
  puVar9[3] = uVar4;
  puVar9[1] = uVar15;
  puVar9[2] = iVar14;
  return 0;
}

