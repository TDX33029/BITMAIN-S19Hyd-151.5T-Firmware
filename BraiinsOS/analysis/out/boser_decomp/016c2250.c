// FUN_016c2250 @ 016c2250 size=468 calls_out=2 calls_in=2
// strings: 

void FUN_016c2250(uint *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint extraout_r12;
  bool bVar18;
  bool bVar19;
  uint local_30;
  uint local_2c;
  
  uVar8 = 0;
  iVar13 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
LAB_016c2278:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar8,iVar13);
  }
  if (iVar13 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    uVar8 = 4;
    local_2c = FUN_01298504(iVar13,4);
    if (local_2c == 0) goto LAB_016c2278;
    local_30 = param_3;
    if (param_3 != 0) {
      iVar11 = param_2 + param_3 * 0xc;
      uVar5 = param_3;
      iVar13 = 0;
      uVar2 = extraout_r12;
      do {
        if (param_2 == iVar11) break;
        uVar15 = *(uint *)(param_2 + 8);
        uVar14 = 0;
        bVar19 = 0x1ffffffe < uVar15;
        bVar18 = uVar15 == 0x1fffffff;
        if (uVar15 < 0x20000000) {
          uVar8 = uVar15 << 3;
          bVar19 = 0x7ffffffb < uVar8;
          bVar18 = uVar8 == 0x7ffffffc;
        }
        uVar3 = uVar2;
        if (bVar19 && !bVar18) {
LAB_016c2414:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar14,uVar3);
        }
        if (uVar8 == 0) {
          uVar3 = 0;
          uVar2 = 4;
        }
        else {
          puVar16 = *(undefined4 **)(param_2 + 4);
          uVar14 = 4;
          uVar2 = FUN_01298504(uVar8,4);
          uVar3 = uVar8;
          if (uVar2 == 0) goto LAB_016c2414;
          uVar3 = uVar15;
          if (uVar15 != 0) {
            uVar4 = uVar15;
            iVar6 = 0;
            puVar17 = puVar16;
            do {
              if (puVar17 == puVar16 + uVar15 * 2) break;
              piVar12 = (int *)*puVar17;
              if (piVar12 != (int *)0x0) {
                do {
                  iVar9 = *piVar12;
                  bVar18 = (bool)hasExclusiveAccess(piVar12);
                } while (!bVar18);
                *piVar12 = iVar9 + 1;
                if (iVar9 < 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)software_udf(0xfdee,0x16c2420);
                  (*pcVar1)();
                }
                uVar8 = puVar17[1];
              }
              puVar10 = (undefined4 *)(uVar2 + iVar6 * 8);
              *puVar10 = piVar12;
              uVar4 = uVar4 - 1;
              puVar10[1] = uVar8;
              iVar6 = iVar6 + 1;
              puVar17 = puVar17 + 2;
            } while (uVar4 != 0);
          }
        }
        uVar5 = uVar5 - 1;
        param_2 = param_2 + 0xc;
        puVar7 = (uint *)(local_2c + iVar13 * 0xc);
        *puVar7 = uVar3;
        puVar7[1] = uVar2;
        puVar7[2] = uVar15;
        iVar13 = iVar13 + 1;
      } while (uVar5 != 0);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

