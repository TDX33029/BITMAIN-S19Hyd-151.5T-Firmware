// FUN_011bade8 @ 011bade8 size=2568 calls_out=15 calls_in=2
// strings: `len` greater than remaining | Out of bounds access | `len` greater than remaining

void FUN_011bade8(uint *param_1,uint *param_2,code *param_3)

{
  bool bVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  code *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  code *pcVar16;
  uint uVar17;
  uint uVar18;
  code *local_a4;
  code *local_98;
  code *local_94;
  code *local_90;
  uint local_8c;
  code *local_88;
  code *local_84;
  code **local_80;
  code *local_7c;
  uint local_78;
  code *local_70;
  code *local_6c;
  code *local_68;
  uint local_64 [2];
  code *local_5c;
  int local_58;
  code *local_54;
  uint local_50;
  code *local_4c;
  code *local_48;
  code *local_44;
  code *local_40;
  uint local_3c [6];
  
  uVar17 = param_2[3];
  uVar13 = *param_2;
  if (uVar17 == 0) {
    uVar18 = param_2[1];
    pcVar2 = (code *)0x0;
  }
  else {
    uVar14 = param_2[2];
    uVar4 = 0;
    uVar18 = param_2[1];
    uVar7 = uVar13;
    if (uVar14 < uVar13) {
      uVar7 = 0;
    }
    uVar6 = uVar14 - uVar7;
    iVar11 = uVar17 - (uVar13 - uVar6);
    pcVar2 = (code *)0x0;
    if (uVar17 < uVar13 - uVar6 || iVar11 == 0) {
      uVar12 = uVar6 + uVar17;
    }
    else {
      uVar4 = iVar11 * 0x10;
      uVar12 = uVar13;
    }
    if (uVar12 != uVar6) {
      iVar11 = uVar12 - uVar6;
      pcVar2 = (code *)0x0;
      piVar3 = (int *)(uVar18 + uVar14 * 0x10 + uVar7 * -0x10 + 8);
      do {
        iVar11 = iVar11 + -1;
        pcVar2 = pcVar2 + *piVar3;
        piVar3 = piVar3 + 4;
      } while (iVar11 != 0);
    }
    if (uVar4 != 0) {
      uVar4 = uVar4 >> 4;
      piVar3 = (int *)(uVar18 + 8);
      do {
        uVar4 = uVar4 - 1;
        pcVar2 = pcVar2 + *piVar3;
        piVar3 = piVar3 + 4;
      } while (uVar4 != 0);
    }
  }
  if (param_3 < pcVar2) {
    pcVar2 = param_3;
  }
  if (pcVar2 == (code *)0x0) {
    return;
  }
  if (param_1[2] != 0) {
    if (uVar17 == 0) {
      pcVar2 = (code *)0x0;
    }
    else {
      uVar14 = param_2[2];
      uVar4 = 0;
      uVar7 = uVar13;
      if (uVar14 < uVar13) {
        uVar7 = 0;
      }
      uVar6 = uVar14 - uVar7;
      iVar11 = uVar17 - (uVar13 - uVar6);
      pcVar2 = (code *)0x0;
      if (uVar17 < uVar13 - uVar6 || iVar11 == 0) {
        uVar12 = uVar6 + uVar17;
      }
      else {
        uVar4 = iVar11 * 0x10;
        uVar12 = uVar13;
      }
      if (uVar12 != uVar6) {
        iVar11 = uVar12 - uVar6;
        pcVar2 = (code *)0x0;
        piVar3 = (int *)(uVar18 + uVar14 * 0x10 + uVar7 * -0x10 + 8);
        do {
          iVar11 = iVar11 + -1;
          pcVar2 = pcVar2 + *piVar3;
          piVar3 = piVar3 + 4;
        } while (iVar11 != 0);
      }
      if (uVar4 != 0) {
        uVar4 = uVar4 >> 4;
        piVar3 = (int *)(uVar18 + 8);
        do {
          uVar4 = uVar4 - 1;
          pcVar2 = pcVar2 + *piVar3;
          piVar3 = piVar3 + 4;
        } while (uVar4 != 0);
      }
    }
    if (param_3 < pcVar2) {
      pcVar2 = param_3;
    }
    if ((code *)(param_1[2] - param_1[1]) < pcVar2) {
      FUN_00f5f538(param_1);
    }
    uVar4 = param_2[2];
    local_a4 = param_3;
    do {
      if (uVar17 == 0) {
        return;
      }
      uVar7 = 0;
      uVar14 = uVar4 - uVar13;
      if (uVar4 < uVar13) {
        uVar14 = uVar4;
      }
      iVar11 = uVar17 - (uVar13 - uVar14);
      pcVar2 = (code *)0x0;
      if (uVar17 < uVar13 - uVar14 || iVar11 == 0) {
        uVar6 = uVar14 + uVar17;
      }
      else {
        uVar7 = iVar11 * 0x10;
        uVar6 = uVar13;
      }
      if (uVar6 != uVar14) {
        iVar11 = uVar6 - uVar14;
        pcVar2 = (code *)0x0;
        piVar3 = (int *)(uVar18 + 8) + uVar14 * 4;
        do {
          iVar11 = iVar11 + -1;
          pcVar2 = pcVar2 + *piVar3;
          piVar3 = piVar3 + 4;
        } while (iVar11 != 0);
      }
      if (uVar7 != 0) {
        uVar7 = uVar7 >> 4;
        piVar3 = (int *)(uVar18 + 8);
        do {
          uVar7 = uVar7 - 1;
          pcVar2 = pcVar2 + *piVar3;
          piVar3 = piVar3 + 4;
        } while (uVar7 != 0);
      }
      if (local_a4 < pcVar2) {
        pcVar2 = local_a4;
      }
      if (pcVar2 == (code *)0x0) {
        return;
      }
      if (uVar17 == 0) {
        uVar15 = 1;
        pcVar2 = (code *)0x0;
      }
      else {
        uVar7 = uVar4 - uVar13;
        if (uVar4 < uVar13) {
          uVar7 = uVar4;
        }
        iVar11 = uVar18 + uVar7 * 0x10;
        uVar15 = *(undefined4 *)(iVar11 + 4);
        pcVar2 = *(code **)(iVar11 + 8);
      }
      uVar7 = param_1[1];
      pcVar9 = (code *)(param_1[2] - uVar7);
      if (local_a4 < pcVar2) {
        pcVar2 = local_a4;
      }
      if (pcVar9 < pcVar2) {
        FUN_00f5f538(param_1,pcVar2);
        uVar7 = param_1[1];
        pcVar9 = (code *)(param_1[2] - uVar7);
      }
      FUN_016dd1aa(*param_1 + uVar7,uVar15,pcVar2);
      if (pcVar9 < pcVar2) {
        local_88 = pcVar2;
        local_84 = pcVar9;
                    /* WARNING: Subroutine does not return */
        FUN_00f600c0(&local_88);
      }
      param_1[1] = (uint)(pcVar2 + uVar7);
      if (pcVar2 != (code *)0x0) {
        pcVar9 = pcVar2;
        do {
          if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("Out of bounds access",0x14,&DAT_0188a140);
          }
          uVar7 = uVar4 - uVar13;
          if (uVar4 < uVar13) {
            uVar7 = uVar4;
          }
          iVar11 = uVar18 + uVar7 * 0x10;
          pcVar16 = *(code **)(iVar11 + 8);
          if (pcVar9 < pcVar16) {
            *(code **)(iVar11 + 4) = pcVar9 + *(int *)(iVar11 + 4);
            *(int *)(iVar11 + 8) = (int)pcVar16 - (int)pcVar9;
            break;
          }
          uVar17 = uVar17 - 1;
          *(code **)(iVar11 + 4) = pcVar16 + *(int *)(iVar11 + 4);
          *(undefined4 *)(iVar11 + 8) = 0;
          uVar7 = uVar4 + 1;
          puVar8 = (uint *)(uVar18 + uVar4 * 0x10);
          local_88 = (code *)*puVar8;
          uVar4 = uVar7 - uVar13;
          if (uVar7 < uVar13) {
            uVar4 = uVar7;
          }
          local_84 = (code *)puVar8[1];
          local_80 = (code **)puVar8[2];
          local_7c = (code *)puVar8[3];
          param_2[2] = uVar4;
          param_2[3] = uVar17;
          if (local_88 != (code *)0x0) {
            (**(code **)(local_88 + 0x10))(&local_7c,local_84,local_80);
          }
          pcVar9 = pcVar9 + -(int)pcVar16;
        } while (pcVar9 != (code *)0x0);
      }
      local_a4 = local_a4 + -(int)pcVar2;
    } while( true );
  }
  if (uVar17 == 0) {
    pcVar2 = (code *)0x0;
    pcVar9 = (code *)0x0;
LAB_011bb490:
    if (pcVar9 < pcVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("`len` greater than remaining",0x1c,&DAT_0188a130);
    }
    if ((code *)0x7fffffff < pcVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00600c10();
    }
    local_70 = (code *)0x1;
    if ((pcVar2 != (code *)0x0) &&
       (local_70 = (code *)thunk_FUN_016d4a50(pcVar2), local_70 == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,pcVar2);
    }
    uVar13 = 0x20 - LZCOUNT((uint)pcVar2 >> 10);
    local_6c = (code *)0x0;
    if (6 < uVar13) {
      uVar13 = 7;
    }
    local_64[0] = uVar13 << 2 | 1;
    local_68 = pcVar2;
    if (pcVar9 == pcVar2) {
      FUN_011bb8cc(&local_70,param_2);
    }
    else {
      FUN_011bade8(&local_70,param_2,pcVar2);
    }
    uVar13 = local_64[0];
    if ((local_64[0] & 1) == 0) {
      local_94 = local_70;
      local_90 = local_6c;
      local_8c = local_64[0];
      local_98 = (code *)&DAT_018ad580;
    }
    else {
      local_54 = local_6c + (local_64[0] >> 5);
      local_58 = (int)local_70 - (local_64[0] >> 5);
      local_5c = local_68 + (local_64[0] >> 5);
      FUN_00f5ef18(&local_48,&local_5c);
      local_50 = uVar13 >> 5;
      if (local_40 < (code *)(uVar13 >> 5)) {
        local_80 = &local_4c;
        local_4c = local_40;
        local_7c = FUN_007883b8;
        local_84 = FUN_007883b8;
        local_88 = (code *)&local_50;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00584155,&local_88,&DAT_018a6700);
      }
      local_98 = local_48;
      local_90 = local_40 + -local_50;
      local_94 = local_44 + local_50;
      local_8c = local_3c[0];
    }
  }
  else {
    uVar7 = param_2[2];
    pcVar2 = (code *)0x0;
    uVar4 = uVar13;
    if (uVar7 < uVar13) {
      uVar4 = 0;
    }
    uVar6 = uVar7 - uVar4;
    iVar11 = uVar17 - (uVar13 - uVar6);
    uVar14 = 0;
    if (uVar17 < uVar13 - uVar6 || iVar11 == 0) {
      uVar12 = uVar6 + uVar17;
    }
    else {
      uVar14 = iVar11 * 0x10;
      uVar12 = uVar13;
    }
    if (uVar12 != uVar6) {
      iVar11 = uVar12 - uVar6;
      piVar3 = (int *)(uVar18 + uVar7 * 0x10 + uVar4 * -0x10 + 8);
      do {
        iVar11 = iVar11 + -1;
        pcVar2 = pcVar2 + *piVar3;
        piVar3 = piVar3 + 4;
      } while (iVar11 != 0);
    }
    if (uVar14 != 0) {
      uVar14 = uVar14 >> 4;
      piVar3 = (int *)(uVar18 + 8);
      do {
        uVar14 = uVar14 - 1;
        pcVar2 = pcVar2 + *piVar3;
        piVar3 = piVar3 + 4;
      } while (uVar14 != 0);
    }
    uVar4 = param_2[2];
    if (param_3 < pcVar2) {
      pcVar2 = param_3;
    }
    uVar7 = uVar13;
    if (uVar4 < uVar13) {
      uVar7 = 0;
    }
    uVar14 = uVar4 - uVar7;
    if (uVar13 - uVar14 < uVar17) {
      uVar6 = (uVar17 - (uVar13 - uVar14)) * 0x10;
      uVar12 = uVar13;
    }
    else {
      uVar6 = 0;
      uVar12 = uVar14 + uVar17;
    }
    pcVar9 = (code *)0x0;
    if (uVar12 != uVar14) {
      iVar11 = uVar12 - uVar14;
      pcVar9 = (code *)0x0;
      piVar3 = (int *)(uVar18 + uVar4 * 0x10 + uVar7 * -0x10 + 8);
      do {
        iVar11 = iVar11 + -1;
        pcVar9 = pcVar9 + *piVar3;
        piVar3 = piVar3 + 4;
      } while (iVar11 != 0);
    }
    if (uVar6 != 0) {
      uVar6 = uVar6 >> 4;
      piVar3 = (int *)(uVar18 + 8);
      do {
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar9 + *piVar3;
        piVar3 = piVar3 + 4;
      } while (uVar6 != 0);
    }
    if (pcVar9 < pcVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("`len` greater than remaining",0x39,&DAT_018a49a8);
    }
    uVar7 = param_2[2];
    uVar4 = uVar7 - uVar13;
    if (uVar7 < uVar13) {
      uVar4 = uVar7;
    }
    puVar10 = (undefined4 *)(uVar18 + uVar4 * 0x10);
    if ((code *)puVar10[2] == pcVar2) {
      local_48 = (code *)*puVar10;
      local_44 = (code *)puVar10[1];
      local_40 = (code *)puVar10[2];
      local_3c[0] = puVar10[3];
      puVar10[1] = local_44 + (int)pcVar2;
      uVar4 = uVar7 + 1;
      *puVar10 = &DAT_0187f9a4;
      puVar8 = (uint *)(uVar18 + uVar7 * 0x10);
      local_88 = (code *)*puVar8;
      uVar18 = uVar4 - uVar13;
      if (uVar4 < uVar13) {
        uVar18 = uVar4;
      }
      puVar10[2] = 0;
      puVar10[3] = 0;
      param_2[2] = uVar18;
      param_2[3] = uVar17 - 1;
      local_7c = (code *)puVar8[3];
      local_84 = (code *)puVar8[1];
      local_80 = (code **)puVar8[2];
      if (local_88 != (code *)0x0) {
        (**(code **)(local_88 + 0x10))(&local_7c,local_84,local_80);
      }
      local_98 = local_48;
      local_94 = local_44;
      local_90 = local_40;
      local_8c = local_3c[0];
    }
    else {
      if ((code *)puVar10[2] <= pcVar2) {
        pcVar9 = (code *)0x0;
        if (uVar17 != 0) {
          pcVar9 = (code *)0x0;
          uVar4 = uVar7 - uVar13;
          if (uVar7 < uVar13) {
            uVar4 = uVar7;
          }
          iVar11 = uVar17 - (uVar13 - uVar4);
          uVar7 = 0;
          if (uVar17 < uVar13 - uVar4 || iVar11 == 0) {
            uVar13 = uVar4 + uVar17;
          }
          else {
            uVar7 = iVar11 * 0x10;
          }
          if (uVar13 != uVar4) {
            iVar11 = uVar13 - uVar4;
            piVar3 = (int *)(uVar4 * 0x10 + uVar18 + 8);
            do {
              iVar11 = iVar11 + -1;
              pcVar9 = pcVar9 + *piVar3;
              piVar3 = piVar3 + 4;
            } while (iVar11 != 0);
          }
          if (uVar7 != 0) {
            uVar7 = uVar7 >> 4;
            piVar3 = (int *)(uVar18 + 8);
            do {
              uVar7 = uVar7 - 1;
              pcVar9 = pcVar9 + *piVar3;
              piVar3 = piVar3 + 4;
            } while (uVar7 != 0);
          }
        }
        goto LAB_011bb490;
      }
      local_88 = pcVar2;
      if (pcVar2 == (code *)0x0) {
        local_94 = (code *)puVar10[1];
        local_8c = 0;
        local_98 = (code *)&DAT_0187f9a4;
        local_90 = (code *)0x0;
      }
      else {
        (**(code **)*puVar10)(&local_98,puVar10 + 3,puVar10[1]);
        puVar10[1] = pcVar2 + puVar10[1];
        puVar10[2] = puVar10[2] - (int)pcVar2;
        local_90 = pcVar2;
      }
    }
  }
  local_70 = local_98;
  local_6c = local_94;
  local_68 = local_90;
  local_64[0] = local_8c;
  iVar11 = (**(code **)(local_98 + 0xc))(local_64);
  pcVar9 = local_68;
  pcVar2 = local_6c;
  if (iVar11 == 0) {
    uVar13 = param_1[1];
    pcVar16 = (code *)-uVar13;
    local_78 = local_64[0];
    local_7c = local_68;
    local_80 = (code **)local_6c;
    local_84 = local_70;
    local_3c[0] = local_64[0];
    local_40 = local_68;
    local_44 = local_6c;
    local_48 = local_70;
    if (pcVar16 < local_68) {
      FUN_00f5f538(param_1,local_68);
      uVar13 = param_1[1];
      pcVar16 = (code *)(param_1[2] - uVar13);
    }
    FUN_016dd1aa(*param_1 + uVar13,pcVar2,pcVar9);
    if (pcVar16 < pcVar9) {
      local_70 = pcVar9;
      local_6c = pcVar16;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_70);
    }
    param_1[1] = (uint)(pcVar9 + uVar13);
    (**(code **)(local_48 + 0x10))(local_3c,local_44,local_40);
    return;
  }
  local_3c[0] = local_64[0];
  local_40 = local_68;
  local_48 = local_70;
  local_44 = local_6c;
  (**(code **)(local_70 + 8))(&local_84,local_3c);
  local_88 = (code *)0x0;
  piVar3 = (int *)param_1[3];
  if (((uint)piVar3 & 1) == 0) {
    piVar5 = piVar3 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar11 + -1;
    if (iVar11 != 1) goto LAB_011bb760;
    DataMemoryBarrier(0xb);
    if (*piVar3 != 0) {
      thunk_FUN_016d3fb4(piVar3[1]);
    }
  }
  else {
    if (piVar3 < &DAT_00000020) goto LAB_011bb760;
    piVar3 = (int *)(*param_1 - ((uint)piVar3 >> 5));
  }
  thunk_FUN_016d3fb4(piVar3);
LAB_011bb760:
  *param_1 = (uint)local_84;
  param_1[1] = (uint)local_80;
  param_1[2] = (uint)local_7c;
  param_1[3] = local_78;
  return;
}

