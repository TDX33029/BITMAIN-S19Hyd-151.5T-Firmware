// FUN_00654de0 @ 00654de0 size=1300 calls_out=11 calls_in=2
// strings: 

void FUN_00654de0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  bool bVar19;
  bool bVar20;
  undefined *local_6c;
  uint local_64;
  uint local_60;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_30;
  int local_2c;
  uint local_28;
  
  uVar14 = *(uint *)(param_1 + 0x2fc);
  local_54 = *(uint *)(param_1 + 0x300);
  if (local_54 <= uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_003d3f13,0x2f,&DAT_01c03588);
  }
  if (local_54 != 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&DAT_0056d73c,&local_54,&DAT_003d3f42,0x53,&DAT_01c03618);
  }
  uVar17 = *(uint *)(param_1 + 0x1ac);
  uVar13 = 0;
  bVar20 = 0x3ffffffe < uVar17;
  bVar19 = uVar17 == 0x3fffffff;
  uVar6 = uVar17 * 4;
  if (uVar17 < 0x40000000) {
    bVar20 = 0x7ffffffb < uVar6;
    bVar19 = uVar6 == 0x7ffffffc;
  }
  if (!bVar20 || bVar19) {
    if (uVar6 == 0) {
      local_4c = 4;
      local_50 = 0;
    }
    else {
      uVar13 = 4;
      local_4c = FUN_01298504(uVar6,4);
      local_50 = uVar17;
      if (local_4c == 0) goto LAB_00654e20;
    }
    local_48 = 0;
    if (uVar17 != 0) {
      uVar6 = 0;
      do {
        *(uint *)(local_4c + uVar6 * 4) = uVar6;
        uVar6 = uVar6 + 1;
      } while (uVar17 != uVar6);
      local_48 = uVar17;
    }
    uVar16 = 4;
    uVar6 = 4;
    local_44 = 0;
    puVar15 = *(uint **)(param_1 + 0x1a8);
    local_6c = &DAT_01c035f8;
    local_30 = local_50;
    local_2c = local_4c;
    local_28 = local_48;
    do {
      uVar3 = uVar17;
      if (uVar17 < uVar16) {
        uVar3 = uVar16;
      }
      do {
        uVar11 = uVar16;
        if (uVar3 == uVar11) {
          if (uVar6 == 0) {
            puVar7 = &DAT_01c03598;
          }
          else {
            uVar11 = uVar6 - 1;
            if ((int)uVar6 < 1) {
              local_2c = 0;
              puVar7 = &DAT_01c035a8;
              local_30 = uVar11;
              goto LAB_006552a8;
            }
            FUN_00660ea8(&local_50,puVar15,uVar17,3,uVar11);
            if (uVar6 == 1) {
              puVar7 = &DAT_01c035b8;
            }
            else {
              FUN_00660ea8(&local_50,puVar15,uVar17,uVar14,uVar6 - 2);
              uVar16 = local_48;
              iVar2 = local_4c;
              uVar14 = local_50;
              if (2 < uVar6) {
                *(uint *)(param_1 + 0x2f8) = uVar6 - 3;
                *(uint *)(param_1 + 0x2fc) = uVar6 - 2;
                *(uint *)(param_1 + 0x300) = uVar11;
                if (uVar17 <= uVar11) {
                  local_6c = &DAT_01c035d8;
                  goto LAB_006552f8;
                }
                uVar13 = 0;
                if (puVar15[uVar11 * 5 + 2] != 0) {
                  *(uint *)(param_1 + 0x2f8) = uVar11;
                }
                bVar20 = 0x3ffffffe < local_48;
                bVar19 = local_48 == 0x3fffffff;
                uVar6 = local_48 * 4;
                if (local_48 < 0x40000000) {
                  bVar20 = 0x7ffffffb < uVar6;
                  bVar19 = uVar6 == 0x7ffffffc;
                }
                if (bVar20 && !bVar19) {
LAB_00655028:
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(uVar13,uVar6);
                }
                uVar3 = 0;
                if (uVar6 == 0) {
                  iVar4 = 4;
                  local_64 = 0;
                }
                else {
                  uVar13 = 4;
                  iVar4 = FUN_01298504(uVar6,4);
                  local_64 = uVar16;
                  if (iVar4 == 0) goto LAB_00655028;
                }
                FUN_01bed4e2(iVar4,iVar2,uVar6);
                puVar7 = &DAT_01c03de8;
                goto LAB_00655094;
              }
              puVar7 = &DAT_01c035c8;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(puVar7);
        }
        if (0x7ffffffe < uVar11) {
          puVar7 = &DAT_01c035e8;
          local_2c = 0;
          local_30 = uVar11;
          goto LAB_006552a8;
        }
        if (uVar17 <= uVar11) {
LAB_006552f8:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar11,uVar17,local_6c);
        }
        uVar16 = uVar11 + 1;
      } while (puVar15[uVar11 * 5 + 2] == 0);
      FUN_00660ea8(&local_50,puVar15,uVar17,uVar11,uVar6);
      uVar3 = uVar6 + 1;
      if (uVar3 < 0x7ffffffe || uVar6 == 0x7ffffffd) {
        uVar6 = uVar3;
      }
      else {
        local_64 = 0;
        local_60 = uVar3;
      }
      if (0x7ffffffe < uVar3) {
        puVar7 = &DAT_01c03608;
        local_30 = local_60;
        local_2c = local_64;
LAB_006552a8:
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01c03648,puVar7);
      }
    } while( true );
  }
LAB_00654e20:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar13,uVar6);
  while( true ) {
    uVar11 = *(uint *)(iVar4 + uVar3 * 4);
    if (uVar3 != uVar11) {
      do {
        uVar6 = uVar11;
        if (uVar16 <= uVar6) {
          puVar7 = &DAT_01c03df8;
          goto LAB_0065528c;
        }
        uVar11 = *(uint *)(iVar4 + uVar6 * 4);
      } while (uVar3 != uVar11);
      *(uint *)(iVar2 + uVar3 * 4) = uVar6;
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == uVar17) break;
LAB_00655094:
    if (uVar3 == uVar16) {
      uVar6 = uVar16;
      goto LAB_0065528c;
    }
  }
  iVar8 = *(int *)(param_1 + 0x1c0);
  iVar12 = *(int *)(param_1 + 0x1b4);
  uVar11 = *(uint *)(param_1 + 0x1b8);
  uVar3 = *(uint *)(param_1 + 0x1c4);
  bVar1 = *(byte *)(param_1 + 0x2eb);
  puVar18 = puVar15 + uVar17 * 5;
  uVar17 = bVar1 + 1;
  do {
    uVar5 = puVar15[3];
    if (uVar16 <= uVar5) {
LAB_0065526c:
      uVar6 = uVar5;
      puVar7 = &DAT_01c03628;
LAB_0065528c:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar6,uVar16,puVar7);
    }
    uVar6 = *puVar15;
    puVar15[3] = *(uint *)(iVar2 + uVar5 * 4);
    while (uVar6 != 0) {
      if (uVar11 <= uVar6) {
        puVar7 = &DAT_01c03408;
        uVar16 = uVar11;
        goto LAB_0065528c;
      }
      iVar9 = iVar12 + uVar6 * 9;
      uVar5 = *(uint *)(iVar9 + 1);
      if (uVar16 <= uVar5) goto LAB_0065526c;
      uVar6 = *(uint *)(iVar9 + 5);
      *(undefined4 *)(iVar9 + 1) = *(undefined4 *)(iVar2 + uVar5 * 4);
    }
    uVar6 = puVar15[1];
    if (uVar6 != 0) {
      if (uVar3 < uVar6) {
        puVar7 = &DAT_01c033e8;
        uVar5 = uVar3;
LAB_006551f4:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar6,uVar3,uVar5,puVar7);
      }
      uVar5 = uVar3 - uVar6;
      if (uVar5 <= bVar1) {
        uVar6 = 0;
        puVar7 = &DAT_01c033f8;
        uVar3 = uVar17;
        goto LAB_006551f4;
      }
      puVar10 = (uint *)(iVar8 + uVar6 * 4);
      iVar9 = uVar17 * 4;
      do {
        uVar5 = *puVar10;
        if (uVar16 <= uVar5) goto LAB_0065526c;
        iVar9 = iVar9 + -4;
        *puVar10 = *(uint *)(iVar2 + uVar5 * 4);
        puVar10 = puVar10 + 1;
      } while (iVar9 != 0);
    }
    puVar15 = puVar15 + 5;
    if (puVar15 == puVar18) {
      FUN_0134aee0(local_64,iVar4,4,4);
      FUN_0134aee0(uVar14,iVar2,4,4);
      return;
    }
  } while( true );
}

