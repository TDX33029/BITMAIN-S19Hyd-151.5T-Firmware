// FUN_01484a8c @ 01484a8c size=2100 calls_out=14 calls_in=1
// strings: No CA certificates were loaded from the systemNoRootAnchors

void FUN_01484a8c(int *param_1,uint *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *extraout_r1;
  int *extraout_r1_00;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  uint *puVar20;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int local_98;
  uint *local_94;
  int local_90;
  uint local_8c;
  int *local_88;
  int local_84;
  uint *local_80;
  uint *local_7c;
  int local_78;
  uint *local_74;
  int local_70;
  uint local_6c;
  int *local_68;
  int *local_64;
  uint local_60;
  int local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_48;
  int *local_44;
  uint local_40;
  int *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar16 = 0;
  uVar4 = param_2[2];
  uVar9 = *param_2;
  piVar11 = (int *)param_2[1];
  local_ac = 4;
  piVar7 = (int *)(uVar4 * 3);
  local_a8 = 0;
  piVar8 = piVar11 + uVar4 * 3;
  local_b0 = 0;
  local_48 = piVar11;
  local_44 = piVar11;
  local_40 = uVar9;
  local_3c = piVar8;
  if (uVar4 != 0) {
LAB_01484afc:
    piVar7 = (int *)((int)piVar11 + iVar16);
    if (*piVar7 != -0x7fffffff) {
      local_a0 = *(undefined4 *)((int)piVar11 + iVar16 + 4);
      uStack_9c = *(undefined4 *)((int)piVar11 + iVar16 + 8);
      local_a4 = *piVar7;
      FUN_0155dbb4(&local_70,&local_b0,&local_a4);
      if (local_70 == -0x7fffffd7) goto code_r0x01484b3c;
      *param_1 = local_70;
      param_1[1] = local_6c;
      param_1[2] = (int)local_68;
      param_1[3] = (int)local_64;
      param_1[4] = local_60;
      param_1[5] = local_5c;
      param_1[6] = (int)local_58;
      param_1[7] = (int)local_54;
      if (piVar8 != piVar7 + 3) {
        puVar5 = (undefined4 *)((int)piVar11 + iVar16 + 0x10);
        uVar4 = ((uVar4 * 0xc + -0xc) - iVar16) / 0xc;
        do {
          if ((puVar5[-1] & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(*puVar5);
          }
          puVar5 = puVar5 + 3;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (uVar9 != 0) {
        thunk_FUN_016d3fb4(piVar11);
      }
      iVar16 = local_a8;
      goto LAB_014851c0;
    }
    local_44 = (int *)((int)piVar11 + iVar16 + 0xc);
  }
LAB_01484b6c:
  if (piVar8 != local_44) {
    piVar18 = local_44 + 1;
    piVar7 = (int *)(((int)piVar8 - (int)local_44) * -0x55555555);
    uVar4 = (uint)((int)piVar8 - (int)local_44) / 0xc;
    do {
      if ((piVar18[-1] & 0x7fffffffU) != 0) {
        thunk_FUN_016d3fb4(*piVar18,piVar7);
        piVar7 = extraout_r1_00;
      }
      piVar18 = piVar18 + 3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (uVar9 != 0) {
    thunk_FUN_016d3fb4(piVar11,piVar7);
  }
  FUN_0156faf0(&local_98);
  local_78 = local_98;
  local_7c = local_94;
  puVar12 = local_94 + local_90 * 3;
  local_80 = local_94;
  local_74 = puVar12;
  if (local_90 != 0) {
    puVar15 = local_94;
    do {
      puVar20 = puVar15 + 3;
      uVar4 = *puVar15;
      if (uVar4 == 0x80000001) goto LAB_01484e50;
      uVar10 = puVar15[1];
      FUN_016cfa90(&local_70,uVar10,puVar15[2]);
      piVar7 = local_50;
      piVar17 = local_54;
      piVar8 = local_58;
      iVar16 = local_5c;
      uVar14 = local_60;
      piVar18 = local_64;
      piVar11 = local_68;
      uVar9 = local_6c;
      if (local_70 == 1) {
        uVar9 = 4;
        if ((int)local_68 < 0) {
          uVar9 = (uint)local_68 ^ 0x80000000;
        }
        if (uVar9 == 0x1b) {
          piVar18 = local_54 + 1;
          piVar11 = local_50;
          while( true ) {
            piVar7 = piVar17;
            if (piVar11 == (int *)0x0) break;
            if (piVar18[-1] != 0) {
              thunk_FUN_016d3fb4(*piVar18);
            }
            piVar18 = piVar18 + 3;
            piVar11 = (int *)((int)piVar11 + -1);
          }
        }
        else {
          if (uVar9 != 4) goto LAB_01484e38;
          if (((char)local_5c == '\0') && (((uint)local_58 & 0x7fffffff) != 0)) {
            thunk_FUN_016d3fb4(local_54);
          }
          piVar17 = piVar18 + 1;
          while( true ) {
            piVar7 = piVar18;
            piVar8 = piVar11;
            if (uVar14 == 0) break;
            if (piVar17[-1] != 0) {
              thunk_FUN_016d3fb4(*piVar17);
            }
            piVar17 = piVar17 + 3;
            uVar14 = uVar14 - 1;
          }
        }
joined_r0x01484df0:
        if (piVar8 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar7);
        }
      }
      else {
        FUN_01575480(&local_48,(uint)&local_70 | 4);
        iVar3 = local_a8;
        if (local_a8 == local_b0) {
          FUN_0154e368(&local_b0);
        }
        puVar5 = (undefined4 *)(local_ac + iVar3 * 0x24);
        *puVar5 = local_48;
        puVar5[1] = local_44;
        puVar5[2] = local_40;
        puVar5[3] = local_3c;
        puVar5[4] = local_38;
        puVar5[5] = uStack_34;
        puVar5[6] = uStack_30;
        puVar5[7] = uStack_2c;
        puVar5[8] = uStack_28;
        local_a8 = iVar3 + 1;
        if ((uVar9 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(piVar11);
        }
        if ((uVar14 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(iVar16);
        }
        piVar8 = piVar17;
        if (-0x7fffffff < (int)piVar17) goto joined_r0x01484df0;
      }
LAB_01484e38:
      if ((uVar4 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(uVar10);
      }
      puVar15 = puVar20;
    } while (puVar20 != puVar12);
    puVar20 = puVar12;
LAB_01484e50:
    local_7c = puVar20;
  }
  if ((int)puVar12 - (int)local_7c != 0) {
    puVar15 = local_7c + 1;
    uVar4 = (uint)((int)puVar12 - (int)local_7c) / 0xc;
    do {
      if ((puVar15[-1] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*puVar15);
      }
      puVar15 = puVar15 + 3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (local_98 != 0) {
    thunk_FUN_016d3fb4(local_94);
  }
  local_40 = local_8c;
  local_44 = local_88;
  piVar8 = local_88 + local_84 * 7;
  local_48 = local_88;
  piVar7 = local_88;
  local_3c = piVar8;
  if (local_84 != 0) {
    do {
      piVar11 = piVar7 + 7;
      if (*piVar7 == -0x7ffffffe) goto LAB_01484f38;
      local_6c = piVar7[1];
      local_68 = (int *)piVar7[2];
      local_64 = (int *)piVar7[3];
      local_60 = piVar7[4];
      local_5c = piVar7[5];
      local_58 = (int *)piVar7[6];
      local_70 = *piVar7;
      FUN_01485454(&local_70);
      piVar11 = piVar7 + 7;
      piVar7 = piVar7 + 7;
    } while (piVar11 != piVar8);
    piVar11 = piVar8;
LAB_01484f38:
    local_44 = piVar11;
  }
  iVar16 = ((uint)((int)piVar8 - (int)local_44) >> 2) * -0x49249249 + 1;
  piVar7 = local_44;
  while (iVar16 = iVar16 + -1, iVar16 != 0) {
    FUN_01498c74(piVar7);
    piVar7 = piVar7 + 7;
  }
  if (local_8c != 0) {
    thunk_FUN_016d3fb4(local_88);
  }
  if (local_a8 == 0) {
    iVar16 = thunk_FUN_016d4a50(0x2e);
    if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x2e);
    }
    FUN_016dd1aa(iVar16,"No CA certificates were loaded from the systemNoRootAnchors",0x2e);
    *param_1 = -0x7fffffe0;
    param_1[1] = 0x2e;
    param_1[2] = iVar16;
    param_1[3] = 0x2e;
    iVar16 = 0;
LAB_014851c0:
    iVar3 = local_ac;
    iVar19 = 0;
    for (; iVar16 != 0; iVar16 = iVar16 + -1) {
      if ((*(uint *)(iVar3 - iVar19) & 0x7fffffff) == 0) {
        iVar13 = iVar3 - iVar19;
        if ((*(uint *)(iVar13 + 0xc) & 0x7fffffff) == 0) goto LAB_014851fc;
LAB_01485228:
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar13 + 0x10));
        iVar6 = *(int *)(iVar13 + 0x18);
      }
      else {
        thunk_FUN_016d3fb4(*(undefined4 *)((iVar3 - iVar19) + 4));
        iVar13 = iVar3 - iVar19;
        if ((*(uint *)(iVar13 + 0xc) & 0x7fffffff) != 0) goto LAB_01485228;
LAB_014851fc:
        iVar6 = *(int *)(iVar13 + 0x18);
      }
      if ((-0x7fffffff < iVar6) && (iVar6 != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar13 + 0x1c));
      }
      iVar19 = iVar19 + -0x24;
    }
    if (local_b0 != 0) {
      thunk_FUN_016d3fb4(iVar3);
    }
  }
  else {
    local_68 = (int *)local_b0;
    local_64 = (int *)local_ac;
    local_60 = local_a8;
    local_6c = 1;
    local_70 = 1;
    piVar7 = (int *)thunk_FUN_016d4a50(0x14);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x14);
    }
    *piVar7 = local_70;
    piVar7[1] = local_6c;
    piVar7[2] = (int)local_68;
    piVar7[3] = (int)local_64;
    piVar7[4] = local_60;
    do {
      iVar16 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = iVar16 + 1;
    if (iVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x14852c4);
      (*pcVar1)();
    }
    local_50 = (int *)CONCAT13(local_50._3_1_,0x10000);
    local_60 = param_3[8];
    local_5c = param_3[9];
    local_58 = (int *)param_3[10];
    local_54 = (int *)param_3[0xb];
    local_50 = (int *)CONCAT22(local_50._2_2_,0x101);
    local_68 = (int *)0x0;
    local_70 = 0;
    local_6c = 4;
    DataMemoryBarrier(0xb);
    do {
      iVar16 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = iVar16 + -1;
    local_64 = piVar7;
    if (iVar16 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0156180c(param_3);
    }
    FUN_0152ea64(&local_48,&local_70);
    if (local_48 == (int *)&DAT_0000000d) {
      *param_1 = -0x7fffffd7;
      param_1[1] = (int)local_44;
      DataMemoryBarrier(0xb);
      do {
        iVar16 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar16 + -1;
      goto LAB_0148527c;
    }
    local_68 = local_48;
    local_64 = local_44;
    local_60 = local_40;
    local_6c = 1;
    local_70 = 1;
    piVar7 = (int *)thunk_FUN_016d4a50(0x14);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x14);
    }
    *piVar7 = local_70;
    piVar7[1] = local_6c;
    piVar7[2] = (int)local_68;
    piVar7[3] = (int)local_64;
    piVar7[4] = local_60;
    param_1[1] = (int)piVar7;
    param_1[2] = (int)&DAT_018a4db4;
    *param_1 = (int)&DAT_80000028;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar16 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = iVar16 + -1;
LAB_0148527c:
  if (iVar16 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0156180c(param_3);
  }
  return;
code_r0x01484b3c:
  iVar16 = iVar16 + 0xc;
  if (uVar4 * 0xc == iVar16) goto code_r0x01484b48;
  goto LAB_01484afc;
code_r0x01484b48:
  local_44 = piVar8;
  piVar7 = extraout_r1;
  goto LAB_01484b6c;
}

