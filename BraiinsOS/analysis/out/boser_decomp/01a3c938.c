// FUN_01a3c938 @ 01a3c938 size=1380 calls_out=12 calls_in=1
// strings: 

void FUN_01a3c938(int param_1,uint param_2,int param_3,uint param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  bool bVar17;
  int *local_4c;
  int *local_48;
  uint local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  undefined1 local_30;
  int *local_2c;
  undefined1 local_28;
  
  if ((param_4 & 0xff) == 2) {
    iVar6 = *(int *)(param_1 + 0x10);
    local_4c = *(int **)(param_1 + 0xc);
    local_44 = *(uint *)(param_1 + 8);
    piVar8 = local_4c + iVar6;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x10) = 0;
    local_48 = local_4c;
    local_40 = piVar8;
    if (iVar6 != 0) {
      piVar13 = local_4c;
      do {
        piVar11 = piVar13 + 1;
        piVar13 = (int *)*piVar13;
        local_48 = piVar11;
        local_3c = piVar13;
        FUN_01656cb0(&local_38,piVar13 + 6);
        uVar2 = local_30;
        piVar3 = local_34;
        if (local_38 == (int *)&DAT_00000001) {
          local_28 = local_30;
          local_2c = local_34;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d2bd10,&DAT_01d2bc50);
        }
        local_34[6] = 0;
        piVar7 = (int *)local_34[5];
        if (piVar7 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar7;
            bVar17 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar17);
          *piVar7 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a3b144();
          }
        }
        piVar3[5] = 0;
        FUN_00a97e8c(piVar3,uVar2);
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar13;
          bVar17 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar17);
        *piVar13 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a3b144(&local_3c);
        }
        piVar13 = piVar11;
      } while (piVar11 != piVar8);
    }
    FUN_01a3b334(&local_4c);
    param_3 = param_1;
    param_4 = param_2;
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x10);
    piVar8 = (int *)(param_3 + 8);
    if ((uint)(*piVar8 - *(int *)(param_3 + 0x10)) < uVar12) {
      FUN_016092cc(piVar8,*(int *)(param_3 + 0x10),uVar12,4,4);
    }
    local_4c = *(int **)(param_1 + 0xc);
    local_44 = *(uint *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    piVar3 = local_4c + uVar12;
    *(undefined4 *)(param_1 + 0xc) = 4;
    piVar13 = local_4c;
    local_48 = local_4c;
    local_40 = piVar3;
    if (uVar12 != 0) {
      do {
        piVar7 = piVar13 + 1;
        piVar13 = (int *)*piVar13;
        local_48 = piVar7;
        local_3c = piVar13;
        FUN_01656cb0(&local_38,piVar13 + 6);
        uVar2 = local_30;
        piVar11 = local_34;
        if (local_38 == (int *)&DAT_00000001) {
          local_28 = local_30;
          local_2c = local_34;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d2bd10,&DAT_01d2bc60);
        }
        piVar16 = *(int **)(param_1 + 0x14);
        piVar9 = (int *)local_34[5];
        if (piVar9 == (int *)0x0 || piVar16 == (int *)0x0) {
          if (piVar16 != (int *)0x0) {
            do {
              iVar6 = *piVar16;
              bVar17 = (bool)hasExclusiveAccess(piVar16);
            } while (!bVar17);
            *piVar16 = iVar6 + 1;
            if (iVar6 < 0) goto LAB_01a3ceb0;
          }
          if (piVar9 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar6 = *piVar9;
              bVar17 = (bool)hasExclusiveAccess(piVar9);
            } while (!bVar17);
            *piVar9 = iVar6 + -1;
            if (iVar6 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01a3b144();
            }
          }
        }
        else {
          do {
            iVar6 = *piVar16;
            bVar17 = (bool)hasExclusiveAccess(piVar16);
          } while (!bVar17);
          *piVar16 = iVar6 + 1;
          if (iVar6 < 0) {
LAB_01a3ceb0:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x1a3ceb0);
            (*pcVar1)();
          }
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar9;
            bVar17 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar17);
          *piVar9 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a3b144();
          }
        }
        piVar11[5] = (int)piVar16;
        piVar11[6] = *(int *)(param_3 + 0x10);
        FUN_00a97e8c(piVar11,uVar2);
        iVar6 = *(int *)(param_3 + 0x10);
        local_38 = piVar13;
        if (iVar6 == *(int *)(param_3 + 8)) {
          FUN_019ee1a8(piVar8);
        }
        *(int **)(*(int *)(param_3 + 0xc) + iVar6 * 4) = piVar13;
        *(int *)(param_3 + 0x10) = iVar6 + 1;
        piVar13 = piVar7;
      } while (piVar7 != piVar3);
    }
    FUN_01a3b334(&local_4c);
    piVar13 = *(int **)(param_1 + 0x14);
    uVar12 = *(uint *)(param_1 + 0x18);
    if (piVar13 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar13;
        bVar17 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar17);
      *piVar13 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a3b144();
      }
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_00a97e8c(param_1,param_2);
    iVar6 = *(int *)(param_3 + 0x10);
    if (iVar6 == uVar12 + 1) {
      if (iVar6 == 0) {
        puVar5 = &DAT_01d2bc40;
        goto LAB_01a3ce90;
      }
      local_4c = *(int **)(*(int *)(param_3 + 0xc) + (iVar6 + -1) * 4);
      *(int *)(param_3 + 0x10) = iVar6 + -1;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *local_4c;
        bVar17 = (bool)hasExclusiveAccess(local_4c);
      } while (!bVar17);
      *local_4c = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a3b144(&local_4c);
      }
    }
    else {
      if (iVar6 == 0) {
        puVar5 = &DAT_01d2bc10;
LAB_01a3ce90:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(puVar5);
      }
      iVar14 = *(int *)(param_3 + 0xc);
      uVar10 = iVar6 - 1;
      piVar13 = *(int **)(iVar14 + uVar10 * 4);
      *(uint *)(param_3 + 0x10) = uVar10;
      local_2c = piVar13;
      FUN_01656cb0(&local_4c,piVar13 + 6);
      if (local_4c == (int *)&DAT_00000001) {
        local_34 = (int *)CONCAT31(local_34._1_3_,(undefined1)local_44);
        local_38 = local_48;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_38,&DAT_01d2bd10,&DAT_01d2bc20);
      }
      local_48[6] = uVar12;
      FUN_00a97e8c(local_48,local_44 & 0xff);
      local_4c = piVar13;
      if (uVar10 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar12,uVar10,&DAT_01d2bc30);
      }
      puVar15 = (undefined4 *)(iVar14 + uVar12 * 4);
      piVar3 = (int *)*puVar15;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar17 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar17);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a3b144(puVar15);
      }
      *puVar15 = piVar13;
    }
    uVar10 = *(uint *)(param_3 + 0x10);
    uVar4 = *(uint *)(param_3 + 8);
    uVar12 = uVar10 * 4;
    bVar17 = false;
    if (uVar12 <= uVar4) {
      uVar12 = uVar10 * 2;
      bVar17 = uVar12 <= uVar4;
    }
    if (bVar17 && uVar4 != uVar12) {
      if (uVar4 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0052ce40,0x49,&DAT_01d2bbc0);
      }
      if (uVar10 < uVar10 * 2) {
        uVar10 = uVar10 * 2;
      }
      iVar6 = FUN_01609230(piVar8,uVar10,4,4);
      if (iVar6 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
    }
  }
  FUN_00a97e8c(param_3,param_4);
  return;
}

