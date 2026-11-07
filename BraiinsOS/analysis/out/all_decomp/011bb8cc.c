// FUN_011bb8cc @ 011bb8cc size=1488 calls_out=6 calls_in=2
// strings: Out of bounds access

void FUN_011bb8cc(uint *param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *local_80;
  uint local_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c [2];
  
  uVar17 = param_2[3];
  uVar13 = *param_2;
  iVar2 = 0;
  if (uVar17 == 0) {
    uVar9 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = param_2[2];
    uVar9 = uVar7 - uVar13;
    if (uVar7 < uVar13) {
      uVar9 = uVar7;
    }
    if (uVar13 - uVar9 < uVar17) {
      iVar2 = uVar17 - (uVar13 - uVar9);
      uVar7 = uVar13;
    }
    else {
      uVar7 = uVar9 + uVar17;
    }
  }
  uVar18 = param_2[1];
  iVar8 = uVar7 * 0x10 + uVar9 * -0x10;
  iVar4 = uVar18 + uVar9 * 0x10;
  while (iVar8 != 0) {
    piVar3 = (int *)(iVar4 + 8);
    iVar8 = iVar8 + -0x10;
    iVar4 = iVar4 + 0x10;
    if (*piVar3 != 0) goto LAB_011bb970;
  }
  iVar2 = iVar2 << 4;
  uVar9 = uVar18;
  do {
    if (iVar2 == 0) {
      return;
    }
    piVar3 = (int *)(uVar9 + 8);
    iVar2 = iVar2 + -0x10;
    uVar9 = uVar9 + 0x10;
  } while (*piVar3 == 0);
LAB_011bb970:
  if (param_1[2] != 0) {
    if (uVar17 != 0) {
      uVar16 = param_2[2];
      uVar9 = 0;
      uVar7 = uVar13;
      if (uVar16 < uVar13) {
        uVar7 = 0;
      }
      uVar11 = uVar16 - uVar7;
      iVar2 = uVar17 - (uVar13 - uVar11);
      uVar5 = 0;
      if (uVar17 < uVar13 - uVar11 || iVar2 == 0) {
        uVar15 = uVar11 + uVar17;
      }
      else {
        uVar9 = iVar2 * 0x10;
        uVar15 = uVar13;
      }
      if (uVar15 != uVar11) {
        iVar2 = uVar15 - uVar11;
        uVar5 = 0;
        piVar3 = (int *)(uVar18 + uVar16 * 0x10 + uVar7 * -0x10 + 8);
        do {
          iVar2 = iVar2 + -1;
          uVar5 = *piVar3 + uVar5;
          piVar3 = piVar3 + 4;
        } while (iVar2 != 0);
      }
      if (uVar9 != 0) {
        uVar9 = uVar9 >> 4;
        piVar3 = (int *)(uVar18 + 8);
        do {
          uVar9 = uVar9 - 1;
          uVar5 = *piVar3 + uVar5;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      if (param_1[2] - param_1[1] < uVar5) {
        FUN_00f5f538(param_1);
      }
    }
    local_80 = param_1 + 1;
    uVar9 = param_2[2];
    do {
      uVar7 = uVar9 - uVar13;
      if (uVar9 < uVar13) {
        uVar7 = uVar9;
      }
      iVar2 = uVar18 + uVar7 * 0x10;
      do {
        iVar4 = 0;
        if (uVar13 - uVar7 < uVar17) {
          iVar4 = uVar17 - (uVar13 - uVar7);
          uVar16 = uVar13;
        }
        else {
          uVar16 = uVar7 + uVar17;
        }
        if (uVar17 == 0) {
          uVar16 = 0;
          uVar5 = 0;
        }
        else {
          uVar5 = uVar7;
        }
        iVar8 = uVar18 + uVar5 * 0x10;
        iVar10 = uVar16 * 0x10 + uVar5 * -0x10;
        if (uVar17 == 0) {
          iVar4 = 0;
        }
        while (iVar10 != 0) {
          piVar3 = (int *)(iVar8 + 8);
          iVar10 = iVar10 + -0x10;
          iVar8 = iVar8 + 0x10;
          if (*piVar3 != 0) goto LAB_011bbb78;
        }
        iVar4 = iVar4 << 4;
        uVar16 = uVar18;
        do {
          if (iVar4 == 0) {
            return;
          }
          piVar3 = (int *)(uVar16 + 8);
          iVar4 = iVar4 + -0x10;
          uVar16 = uVar16 + 0x10;
        } while (*piVar3 == 0);
LAB_011bbb78:
        if (uVar17 == 0) {
          uVar5 = param_1[1];
          uVar16 = 0;
        }
        else {
          uVar5 = param_1[1];
          uVar14 = *(undefined4 *)(iVar2 + 4);
          uVar16 = *(uint *)(iVar2 + 8);
          if (param_1[2] - uVar5 < uVar16) {
            FUN_00f5f538(param_1,uVar16);
            uVar5 = param_1[1];
          }
          FUN_016dd1aa(*param_1 + uVar5,uVar14,uVar16);
          if (param_1[2] - uVar5 < uVar16) {
            local_60 = uVar16;
            local_5c = param_1[2] - uVar5;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_60);
          }
        }
        *local_80 = uVar5 + uVar16;
      } while (uVar16 == 0);
      do {
        if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("Out of bounds access",0x14,&DAT_0188a140);
        }
        uVar7 = uVar9 - uVar13;
        if (uVar9 < uVar13) {
          uVar7 = uVar9;
        }
        iVar2 = uVar18 + uVar7 * 0x10;
        uVar7 = *(uint *)(iVar2 + 8);
        if (uVar16 < uVar7) {
          *(uint *)(iVar2 + 4) = *(int *)(iVar2 + 4) + uVar16;
          *(uint *)(iVar2 + 8) = uVar7 - uVar16;
          break;
        }
        uVar17 = uVar17 - 1;
        uVar5 = uVar9 + 1;
        *(uint *)(iVar2 + 4) = *(int *)(iVar2 + 4) + uVar7;
        *(undefined4 *)(iVar2 + 8) = 0;
        puVar12 = (uint *)(uVar18 + uVar9 * 0x10);
        local_60 = *puVar12;
        uVar9 = uVar5 - uVar13;
        if (uVar5 < uVar13) {
          uVar9 = uVar5;
        }
        local_5c = puVar12[1];
        local_58 = puVar12[2];
        local_54 = puVar12[3];
        param_2[2] = uVar9;
        param_2[3] = uVar17;
        if (local_60 != 0) {
          (**(code **)(local_60 + 0x10))(&local_54,local_5c,local_58);
        }
        uVar16 = uVar16 - uVar7;
      } while (uVar16 != 0);
    } while( true );
  }
  if (uVar17 == 0) {
    iVar2 = 0;
  }
  else {
    uVar7 = param_2[2];
    iVar2 = 0;
    uVar9 = uVar13;
    if (uVar7 < uVar13) {
      uVar9 = 0;
    }
    uVar5 = uVar7 - uVar9;
    iVar4 = uVar17 - (uVar13 - uVar5);
    uVar16 = 0;
    if (uVar17 < uVar13 - uVar5 || iVar4 == 0) {
      uVar13 = uVar5 + uVar17;
    }
    else {
      uVar16 = iVar4 * 0x10;
    }
    if (uVar13 != uVar5) {
      iVar4 = uVar13 - uVar5;
      iVar2 = 0;
      piVar3 = (int *)(uVar18 + uVar7 * 0x10 + uVar9 * -0x10 + 8);
      do {
        iVar4 = iVar4 + -1;
        iVar2 = *piVar3 + iVar2;
        piVar3 = piVar3 + 4;
      } while (iVar4 != 0);
    }
    if (uVar16 != 0) {
      uVar16 = uVar16 >> 4;
      piVar3 = (int *)(uVar18 + 8);
      do {
        uVar16 = uVar16 - 1;
        iVar2 = *piVar3 + iVar2;
        piVar3 = piVar3 + 4;
      } while (uVar16 != 0);
    }
  }
  FUN_011baa0c(&local_70,param_2,iVar2);
  local_48 = local_70;
  local_44 = uStack_6c;
  local_40 = uStack_68;
  local_3c = uStack_64;
  iVar2 = (**(code **)(local_70 + 0xc))(&local_3c);
  uVar17 = local_40;
  uVar13 = local_44;
  if (iVar2 == 0) {
    uVar7 = param_1[1];
    uVar9 = -uVar7;
    local_50 = local_3c;
    local_54 = local_40;
    local_58 = local_44;
    local_5c = local_48;
    local_2c[0] = local_3c;
    local_30 = local_40;
    local_34 = local_44;
    local_38 = local_48;
    if (uVar9 < local_40) {
      FUN_00f5f538(param_1,local_40);
      uVar7 = param_1[1];
      uVar9 = param_1[2] - uVar7;
    }
    FUN_016dd1aa(*param_1 + uVar7,uVar13,uVar17);
    if (uVar9 < uVar17) {
      local_48 = uVar17;
      local_44 = uVar9;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_48);
    }
    param_1[1] = uVar7 + uVar17;
    (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
    return;
  }
  local_2c[0] = local_3c;
  local_30 = local_40;
  local_38 = local_48;
  local_34 = local_44;
  (**(code **)(local_48 + 8))(&local_5c,local_2c);
  local_60 = 0;
  piVar3 = (int *)param_1[3];
  if (((uint)piVar3 & 1) == 0) {
    piVar6 = piVar3 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar2 + -1;
    if (iVar2 != 1) goto LAB_011bbe54;
    DataMemoryBarrier(0xb);
    if (*piVar3 != 0) {
      thunk_FUN_016d3fb4(piVar3[1]);
    }
  }
  else {
    if (piVar3 < &DAT_00000020) goto LAB_011bbe54;
    piVar3 = (int *)(*param_1 - ((uint)piVar3 >> 5));
  }
  thunk_FUN_016d3fb4(piVar3);
LAB_011bbe54:
  *param_1 = local_5c;
  param_1[1] = local_58;
  param_1[2] = local_54;
  param_1[3] = local_50;
  return;
}

