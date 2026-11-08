// FUN_016844e0 @ 016844e0 size=2044 calls_out=15 calls_in=0
// strings: 

undefined4 FUN_016844e0(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int **ppiVar6;
  int **ppiVar8;
  int **ppiVar7;
  undefined *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  undefined8 uVar22;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int **local_84;
  uint local_80;
  int **local_7c;
  int **local_78;
  int local_74;
  int **local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  undefined8 local_60;
  int *local_58;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  int *local_30;
  undefined2 local_2c;
  
  if (*param_1 != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00414686,0x1d,&DAT_018adca4);
  }
  uVar12 = 1;
  iVar2 = FUN_0168b2d0(param_1 + 0x10,param_2,1,0);
  if (iVar2 == 0) {
    local_90 = 0;
    local_94 = 4;
    local_84 = (int **)&DAT_00000004;
    local_4c = &local_88;
    local_50 = &local_8c;
    local_98 = 0;
    local_8c = 0;
    local_80 = 0;
    local_88 = 0;
    FUN_01681720(param_1 + 2,&local_98,0,&local_50);
    if (1 < local_80) {
      if (local_80 < 0x15) {
        FUN_0167036c();
      }
      else {
        FUN_01682828();
      }
    }
    local_74 = local_88;
    ppiVar6 = local_84 + local_80 * 6;
    local_7c = local_84;
    local_78 = local_84;
    local_70 = ppiVar6;
    if (local_80 != 0) {
      bVar1 = true;
      ppiVar7 = local_84;
      do {
        ppiVar8 = ppiVar7 + 6;
        piVar5 = *ppiVar7;
        local_78 = ppiVar8;
        if (piVar5 == (int *)0x80000000) break;
        piVar11 = ppiVar7[1];
        piVar10 = ppiVar7[2];
        piVar13 = ppiVar7[3];
        piVar4 = ppiVar7[5];
        local_48 = (int *)0x0;
        local_4c = (int *)&DAT_00000004;
        local_50 = (int *)0x0;
        local_6c = piVar5;
        local_68 = piVar11;
        local_64 = piVar10;
        FUN_0168a174(piVar13,4,0,&local_50);
        local_60._0_4_ = local_50;
        local_60._4_4_ = local_4c;
        local_58 = local_48;
        piVar15 = piVar11;
        if ((char)piVar13[0x17] == '\0') {
          if (piVar10 == (int *)0x0) goto LAB_016847fc;
          if (((uint)piVar4 & 1) != 0) goto LAB_01684660;
LAB_01684724:
          puVar9 = &DAT_0041950e;
          if (bVar1) {
            puVar9 = (undefined *)0x1;
          }
          iVar2 = FUN_0168b2d0(piVar13 + 0xe,param_2,puVar9,~bVar1);
          if (((iVar2 == 0) &&
              (iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1), iVar2 == 0)) &&
             ((iVar2 = FUN_0167f190(piVar11,piVar10,param_2), iVar2 == 0 &&
              ((iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1), iVar2 == 0 &&
               (iVar2 = FUN_0168b404(piVar13 + 0xe,param_2,1,0), iVar2 == 0)))))) {
            iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
LAB_016847e4:
            bVar1 = false;
            if (iVar2 == 0) goto LAB_01684810;
          }
LAB_01684bdc:
          piVar13 = local_58;
          piVar4 = local_60._4_4_;
          for (piVar17 = (int *)0x0; piVar13 != piVar17; piVar17 = (int *)((int)piVar17 + 1)) {
            if (piVar4[(int)piVar17 * 4] != 0) {
              thunk_FUN_016d3fb4(piVar4[(int)piVar17 * 4 + 1]);
            }
          }
          if ((int *)local_60 != (int *)0x0) {
LAB_01684c24:
            thunk_FUN_016d3fb4(piVar4);
          }
joined_r0x01684c30:
          for (; piVar10 != (int *)0x0; piVar10 = (int *)((int)piVar10 + -1)) {
            FUN_01666b88(piVar15);
            piVar15 = piVar15 + 0x12;
          }
          if (piVar5 != (int *)0x0) {
            thunk_FUN_016d3fb4(piVar11);
          }
          FUN_0168d278(&local_7c);
          iVar2 = local_94;
          iVar3 = local_90;
          goto joined_r0x01684c74;
        }
        if (piVar10 == (int *)0x0) {
LAB_016847fc:
          bVar1 = (bool)(local_48 == (int *)0x0 & bVar1);
        }
        else {
          if (((uint)piVar4 & 1) != 0) {
LAB_01684660:
            puVar9 = &DAT_0041950e;
            if (bVar1) {
              puVar9 = (undefined *)0x1;
            }
            iVar2 = FUN_0168b2d0(piVar13 + 0xe,param_2,puVar9,~bVar1);
            if ((((iVar2 == 0) &&
                 (iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004144e6,2), iVar2 == 0)) &&
                (iVar2 = FUN_0167f190(piVar11,piVar10,param_2), iVar2 == 0)) &&
               ((iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004144e8,2), iVar2 == 0 &&
                (iVar2 = FUN_0168b404(piVar13 + 0xe,param_2,1,0), iVar2 == 0)))) {
              iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
              goto LAB_016847e4;
            }
            goto LAB_01684bdc;
          }
          if (local_48 != (int *)0x0) goto LAB_01684724;
        }
LAB_01684810:
        piVar4 = local_60._4_4_;
        piVar13 = (int *)local_60;
        local_48 = (int *)local_60;
        piVar17 = local_60._4_4_ + (int)local_58 * 4;
        local_4c = local_60._4_4_;
        local_50 = local_60._4_4_;
        local_44 = piVar17;
        if (local_58 != (int *)0x0) {
          uVar21 = (int)local_58 << 4;
          piVar18 = local_60._4_4_;
          do {
            uVar21 = uVar21 - 0x10;
            iVar2 = *piVar18;
            piVar19 = piVar18 + 4;
            if (iVar2 == -0x80000000) goto LAB_0168491c;
            iVar20 = piVar18[1];
            iVar14 = piVar18[3];
            iVar3 = FUN_0167f310(iVar20,piVar18[2],param_2,&DAT_018adb00);
            if ((((iVar3 != 0) ||
                 (iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,"=",1), iVar3 != 0)) ||
                (iVar3 = FUN_0167f4b4(iVar14,param_2,&DAT_018adb10), iVar3 != 0)) ||
               (iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1), iVar3 != 0)) {
              if (iVar2 != 0) {
                thunk_FUN_016d3fb4(iVar20);
              }
              for (uVar16 = 0; uVar21 >> 4 != uVar16; uVar16 = uVar16 + 1) {
                if (piVar18[uVar16 * 4 + 4] != 0) {
                  thunk_FUN_016d3fb4(piVar18[uVar16 * 4 + 5]);
                }
              }
              if (piVar13 != (int *)0x0) goto LAB_01684c24;
              goto joined_r0x01684c30;
            }
            if (iVar2 != 0) {
              thunk_FUN_016d3fb4(iVar20);
            }
            piVar18 = piVar19;
          } while (piVar19 != piVar17);
          piVar19 = piVar17;
LAB_0168491c:
          local_4c = piVar19;
        }
        piVar15 = local_4c + 1;
        for (uVar21 = (uint)((int)piVar17 - (int)local_4c) >> 4; uVar21 != 0; uVar21 = uVar21 - 1) {
          if (piVar15[-1] != 0) {
            thunk_FUN_016d3fb4(*piVar15);
          }
          piVar15 = piVar15 + 4;
        }
        if (piVar13 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar4);
        }
        iVar2 = 0;
        for (; piVar10 != (int *)0x0; piVar10 = (int *)((int)piVar10 + -1)) {
          if (*(int *)((int)piVar11 + iVar2) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)((int)piVar11 + iVar2 + 4));
          }
          iVar3 = *(int *)((int)piVar11 + iVar2 + 0xc);
          if ((iVar3 != -0x7ffffffd) && (0 < iVar3)) {
            thunk_FUN_016d3fb4(*(undefined4 *)((int)piVar11 + iVar2 + 0x10));
          }
          iVar3 = *(int *)((int)piVar11 + iVar2 + 0x18);
          if ((iVar3 != -0x7ffffffd) && (0 < iVar3)) {
            thunk_FUN_016d3fb4(*(undefined4 *)((int)piVar11 + iVar2 + 0x1c));
          }
          iVar3 = *(int *)((int)piVar11 + iVar2 + 0x24);
          if ((iVar3 != -0x7ffffffd) && (0 < iVar3)) {
            thunk_FUN_016d3fb4(*(undefined4 *)((int)piVar11 + iVar2 + 0x28));
          }
          iVar3 = *(int *)((int)piVar11 + iVar2 + 0x30);
          if ((iVar3 != -0x7ffffffd) && (0 < iVar3)) {
            thunk_FUN_016d3fb4(*(undefined4 *)((int)piVar11 + iVar2 + 0x34));
          }
          iVar3 = *(int *)((int)piVar11 + iVar2 + 0x3c);
          if ((iVar3 != -0x7ffffffd) && (0 < iVar3)) {
            thunk_FUN_016d3fb4(*(undefined4 *)((int)piVar11 + iVar2 + 0x40));
          }
          iVar2 = iVar2 + 0x48;
        }
        if (piVar5 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar11);
        }
        ppiVar7 = ppiVar8;
      } while (ppiVar8 != ppiVar6);
    }
    FUN_0168d278(&local_7c);
    iVar14 = FUN_0168b404(param_1 + 0x10,param_2,1,0);
    iVar2 = local_94;
    iVar3 = local_90;
    if (iVar14 == 0) {
      local_4c = (int *)param_1[0x1d];
      local_2c = 1;
      if (0x7fffffff < (uint)param_1[0x1c]) {
        local_4c = (int *)&DAT_00000001;
      }
      local_48 = (int *)(param_1[0x1e] & ~(param_1[0x1c] >> 0x1f));
      local_34 = 0;
      local_38 = 1;
      local_3c = 0xd;
      local_50 = (int *)&DAT_0000000d;
      local_44 = (int *)0x0;
      local_40 = local_48;
      local_30 = local_48;
      do {
        uVar22 = FUN_015bb1b4(&local_50);
        uVar12 = 0;
        iVar2 = local_94;
        iVar3 = local_90;
        if ((int)uVar22 == 0) break;
        uVar12 = 1;
        local_78 = (int **)&DAT_0157d360;
        local_7c = (int **)&local_60;
        local_60 = uVar22;
        iVar14 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_7c);
        iVar2 = local_94;
        iVar3 = local_90;
      } while (iVar14 == 0);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        FUN_01666b88(iVar2);
        iVar2 = iVar2 + 0x48;
      }
    }
    else {
joined_r0x01684c74:
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        FUN_01666b88(iVar2);
        iVar2 = iVar2 + 0x48;
      }
      uVar12 = 1;
    }
    if (local_98 != 0) {
      thunk_FUN_016d3fb4(local_94);
    }
  }
  return uVar12;
}

