// FUN_010d0854 @ 010d0854 size=1048 calls_out=4 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x010d0a68) */
/* WARNING: Removing unreachable block (ram,0x010d090c) */
/* WARNING: Removing unreachable block (ram,0x010d09cc) */
/* WARNING: Removing unreachable block (ram,0x010d0b2c) */

void FUN_010d0854(undefined1 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  code *pcVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  uint local_30;
  uint local_2c;
  int local_28;
  
  uVar15 = param_2[8];
  uVar16 = param_2[9];
  uVar1 = (**(code **)(uVar16 + 0x1c))(uVar15);
  if (uVar1 == 0) {
    pcVar8 = *(code **)(uVar16 + 0xc);
    uVar1 = (*pcVar8)(uVar15);
    if (uVar1 == 0) {
      uVar2 = *param_2;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar3 = uVar2 | uVar6;
      uVar1 = uVar3;
      if (uVar3 == 0) {
        uVar1 = uVar7;
      }
      if (uVar3 != 0 || uVar1 != 0) {
        uVar1 = uVar7;
        uVar3 = uVar2;
        uVar12 = uVar6;
LAB_010d08c8:
        do {
          local_30 = 0x7fffffff;
          if (uVar3 < 0x7fffffff) {
            local_30 = uVar3;
          }
          if (uVar12 != 0) {
            local_30 = 0x7fffffff;
          }
          bVar17 = uVar3 < local_30;
          uVar3 = uVar3 - local_30;
          uVar12 = uVar12 - bVar17;
          local_2c = uVar1;
          iVar4 = FUN_016e041a(&local_30,&local_30);
          uVar1 = 0;
          if (iVar4 == -1) {
            piVar5 = (int *)FUN_016d2bc8();
            local_28 = *piVar5;
            if (local_28 != 4) goto LAB_010d0c3c;
            bVar17 = CARRY4(uVar3,local_30);
            uVar3 = uVar3 + local_30;
            uVar12 = uVar12 + ((int)local_30 >> 0x1f) + (uint)bVar17;
            local_28 = 4;
            uVar1 = local_2c;
            if (0 < (int)local_2c) goto LAB_010d08c8;
          }
        } while (uVar3 != 0 || uVar12 != 0);
      }
      uVar1 = (**(code **)(uVar16 + 0x10))(uVar15);
      if (uVar1 == 0) {
        uVar12 = param_2[4];
        uVar3 = param_2[5];
        uVar1 = param_2[6];
        if ((uVar12 == 0 && uVar3 == 0) && uVar1 == 0) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
          local_2c = uVar1;
          uVar9 = uVar12;
          uVar10 = uVar3;
LAB_010d0988:
          do {
            local_30 = 0x7fffffff;
            if (uVar9 < 0x7fffffff) {
              local_30 = uVar9;
            }
            if (uVar10 != 0) {
              local_30 = 0x7fffffff;
            }
            bVar18 = uVar9 < local_30;
            uVar9 = uVar9 - local_30;
            uVar10 = uVar10 - bVar18;
            iVar4 = FUN_016e041a(&local_30,&local_30);
            uVar11 = 0;
            if (iVar4 == -1) {
              piVar5 = (int *)FUN_016d2bc8();
              local_28 = *piVar5;
              if (local_28 != 4) goto LAB_010d0c3c;
              bVar18 = CARRY4(uVar9,local_30);
              uVar9 = uVar9 + local_30;
              uVar10 = uVar10 + ((int)local_30 >> 0x1f) + (uint)bVar18;
              local_28 = 4;
              uVar11 = local_2c;
              if (0 < (int)local_2c) goto LAB_010d0988;
            }
            local_2c = uVar11;
          } while (uVar9 != 0 || uVar10 != 0);
          uVar9 = uVar1;
          uVar10 = uVar12;
          uVar11 = uVar3;
LAB_010d0a24:
          do {
            local_30 = 0x7fffffff;
            if (uVar10 < 0x7fffffff) {
              local_30 = uVar10;
            }
            if (uVar11 != 0) {
              local_30 = 0x7fffffff;
            }
            bVar18 = uVar10 < local_30;
            uVar10 = uVar10 - local_30;
            uVar11 = uVar11 - bVar18;
            local_2c = uVar9;
            iVar4 = FUN_016e041a(&local_30,&local_30);
            uVar9 = 0;
            if (iVar4 == -1) {
              piVar5 = (int *)FUN_016d2bc8();
              local_28 = *piVar5;
              if (local_28 != 4) goto LAB_010d0c3c;
              bVar18 = CARRY4(uVar10,local_30);
              uVar10 = uVar10 + local_30;
              uVar11 = uVar11 + ((int)local_30 >> 0x1f) + (uint)bVar18;
              local_28 = 4;
              uVar9 = local_2c;
              if (0 < (int)local_2c) goto LAB_010d0a24;
            }
          } while (uVar10 != 0 || uVar11 != 0);
        }
        pcVar14 = *(code **)(uVar16 + 0x20);
        (*pcVar14)(&local_30,uVar15);
        if ((char)local_30 == '\0') {
          uVar9 = local_30 >> 8 & 0xff;
          if (bVar17) {
            uVar10 = uVar1;
            uVar11 = uVar12;
            uVar13 = uVar3;
LAB_010d0ae8:
            do {
              local_30 = 0x7fffffff;
              if (uVar11 < 0x7fffffff) {
                local_30 = uVar11;
              }
              if (uVar13 != 0) {
                local_30 = 0x7fffffff;
              }
              bVar17 = uVar11 < local_30;
              uVar11 = uVar11 - local_30;
              uVar13 = uVar13 - bVar17;
              local_2c = uVar10;
              iVar4 = FUN_016e041a(&local_30,&local_30);
              uVar10 = 0;
              if (iVar4 == -1) {
                piVar5 = (int *)FUN_016d2bc8();
                local_28 = *piVar5;
                if (local_28 != 4) {
LAB_010d0c3c:
                    /* WARNING: Subroutine does not return */
                  FUN_015f3600(&local_28,&DAT_005688c0,0,&DAT_018aadd0);
                }
                bVar17 = CARRY4(uVar11,local_30);
                uVar11 = uVar11 + local_30;
                uVar13 = uVar13 + ((int)local_30 >> 0x1f) + (uint)bVar17;
                local_28 = 4;
                uVar10 = local_2c;
                if (0 < (int)local_2c) goto LAB_010d0ae8;
              }
            } while (uVar11 != 0 || uVar13 != 0);
          }
          (*pcVar14)(&local_30,uVar15);
          if ((char)local_30 == '\0') {
            uVar10 = local_30 >> 8 & 0xff;
            FUN_015fbd34(uVar12,uVar3,uVar1);
            (*pcVar14)(&local_30,uVar15);
            if ((char)local_30 == '\0') {
              uVar3 = local_30 >> 8 & 0xff;
              uVar1 = (*pcVar8)(uVar15);
              if ((uVar1 == 0) && (uVar1 = (**(code **)(uVar16 + 0x14))(uVar15), uVar1 == 0)) {
                FUN_015fbd34(uVar2,uVar6,uVar7);
                if ((uVar9 ^ 1) + (uVar10 ^ 1) + (uVar3 ^ 1) < uVar9 + uVar10 + uVar3) {
                  param_1[1] = 1;
                  *param_1 = 0;
                  return;
                }
                param_1[1] = 0;
                *param_1 = 0;
                return;
              }
              goto LAB_010d0bac;
            }
          }
        }
        uVar1 = local_2c;
      }
    }
  }
LAB_010d0bac:
  *(uint *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}

