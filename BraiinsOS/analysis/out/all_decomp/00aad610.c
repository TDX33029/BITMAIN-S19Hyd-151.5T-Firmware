// FUN_00aad610 @ 00aad610 size=3540 calls_out=10 calls_in=1
// strings: Out of bounds access | `len` greater than remaining | `len` greater than remaining

/* WARNING: Removing unreachable block (ram,0x00aadc1c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00aad610(int *param_1,uint *param_2,code *param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  code *pcVar10;
  uint uVar11;
  code *pcVar12;
  code *pcVar13;
  uint uVar14;
  code *pcVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint *local_9c;
  code *local_98;
  code *local_94;
  code *local_90;
  uint local_8c;
  code *local_88;
  code *pcStack_84;
  code *pcStack_80;
  uint uStack_7c;
  code *local_78;
  code *local_74;
  code **local_70;
  code *local_6c;
  uint local_68;
  code *local_60;
  code *local_5c;
  code *local_58;
  uint local_54;
  uint local_50 [6];
  code *local_38;
  code *local_34;
  code *local_30;
  uint local_2c [2];
  
  uVar14 = param_2[3];
  uVar17 = *param_2;
  if (uVar14 == 0) {
    pcVar13 = (code *)0x0;
    uVar18 = param_2[1];
  }
  else {
    uVar4 = param_2[2];
    uVar18 = uVar4 - uVar17;
    if (uVar4 < uVar17) {
      uVar18 = uVar4;
    }
    piVar9 = (int *)(param_2[1] + uVar18 * 0x10);
    if ((code *)piVar9[2] == param_3) {
      local_38 = (code *)*piVar9;
      local_34 = (code *)piVar9[1];
      local_30 = (code *)piVar9[2];
      local_2c[0] = piVar9[3];
      *piVar9 = (int)&DAT_0187f9a4;
      piVar9[1] = (int)(param_3 + (int)local_34);
      piVar9[2] = 0;
      piVar9[3] = 0;
      if (param_2[3] != 0) {
        param_2[3] = param_2[3] - 1;
        piVar9 = (int *)(param_2[1] + param_2[2] * 0x10);
        local_78 = (code *)*piVar9;
        uVar14 = param_2[2] + 1;
        uVar17 = uVar14 - *param_2;
        if (uVar14 < *param_2) {
          uVar17 = uVar14;
        }
        local_74 = (code *)piVar9[1];
        local_70 = (code **)piVar9[2];
        local_6c = (code *)piVar9[3];
        param_2[2] = uVar17;
        if (local_78 != (code *)0x0) {
          (**(code **)(local_78 + 0x10))(&local_6c,local_74,local_70);
        }
      }
      *param_1 = (int)local_38;
      param_1[1] = (int)local_34;
      param_1[2] = (int)local_30;
      param_1[3] = local_2c[0];
      return;
    }
    if (param_3 < (code *)piVar9[2]) {
      if (param_3 == (code *)0x0) {
        iVar1 = piVar9[1];
        param_1[2] = 0;
        *param_1 = (int)&DAT_0187f9a4;
        param_1[1] = iVar1;
        param_1[3] = 0;
        return;
      }
      local_78 = param_3;
      (**(code **)*piVar9)(param_1,piVar9 + 3,piVar9[1]);
      iVar1 = piVar9[1];
      iVar5 = piVar9[2];
      param_1[2] = (int)param_3;
      piVar9[1] = (int)(param_3 + iVar1);
      piVar9[2] = iVar5 - (int)param_3;
      return;
    }
    uVar18 = param_2[1];
    pcVar13 = (code *)0x0;
    uVar7 = param_2[2];
    uVar4 = uVar17;
    if (uVar7 < uVar17) {
      uVar4 = 0;
    }
    uVar6 = uVar7 - uVar4;
    iVar1 = uVar14 - (uVar17 - uVar6);
    uVar2 = 0;
    if (uVar14 < uVar17 - uVar6 || iVar1 == 0) {
      uVar11 = uVar6 + uVar14;
    }
    else {
      uVar2 = iVar1 * 0x10;
      uVar11 = uVar17;
    }
    if (uVar11 != uVar6) {
      iVar1 = uVar11 - uVar6;
      piVar9 = (int *)(uVar18 + uVar7 * 0x10 + uVar4 * -0x10 + 8);
      do {
        iVar1 = iVar1 + -1;
        pcVar13 = pcVar13 + *piVar9;
        piVar9 = piVar9 + 4;
      } while (iVar1 != 0);
    }
    if (uVar2 != 0) {
      uVar2 = uVar2 >> 4;
      piVar9 = (int *)(uVar18 + 8);
      do {
        uVar2 = uVar2 - 1;
        pcVar13 = pcVar13 + *piVar9;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
  }
  local_9c = param_2 + 1;
  if (pcVar13 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_015be724("`len` greater than remaining",0x1c,&DAT_0188a130);
  }
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  pcVar3 = (code *)0x1;
  local_90 = (code *)0x0;
  if ((param_3 != (code *)0x0) &&
     (pcVar3 = (code *)thunk_FUN_016d4a50(param_3), local_90 = param_3, pcVar3 == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  local_94 = (code *)0x0;
  uVar4 = 0x20 - LZCOUNT((uint)local_90 >> 10);
  if (6 < uVar4) {
    uVar4 = 7;
  }
  local_8c = uVar4 << 2 | 1;
  local_98 = pcVar3;
  if (pcVar13 == param_3) {
    iVar1 = 0;
    if (uVar14 == 0) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = param_2[2];
      uVar4 = uVar7 - uVar17;
      if (uVar7 < uVar17) {
        uVar4 = uVar7;
      }
      if (uVar17 - uVar4 < uVar14) {
        iVar1 = uVar14 - (uVar17 - uVar4);
        uVar7 = uVar17;
      }
      else {
        uVar7 = uVar4 + uVar14;
      }
    }
    iVar8 = uVar7 * 0x10 + uVar4 * -0x10;
    iVar5 = uVar18 + uVar4 * 0x10;
    do {
      if (iVar8 == 0) {
        iVar1 = iVar1 << 4;
        uVar4 = uVar18;
        goto LAB_00aad990;
      }
      piVar9 = (int *)(iVar5 + 8);
      iVar8 = iVar8 + -0x10;
      iVar5 = iVar5 + 0x10;
    } while (*piVar9 == 0);
    goto LAB_00aad9ac;
  }
  if (uVar14 == 0) goto LAB_00aae27c;
  uVar4 = 0;
  uVar2 = param_2[2];
  pcVar13 = (code *)0x0;
  uVar7 = uVar17;
  if (uVar2 < uVar17) {
    uVar7 = 0;
  }
  uVar6 = uVar2 - uVar7;
  iVar1 = uVar14 - (uVar17 - uVar6);
  if (uVar14 < uVar17 - uVar6 || iVar1 == 0) {
    uVar11 = uVar6 + uVar14;
  }
  else {
    uVar4 = iVar1 * 0x10;
    uVar11 = uVar17;
  }
  if (uVar11 != uVar6) {
    iVar1 = uVar11 - uVar6;
    piVar9 = (int *)(uVar18 + uVar2 * 0x10 + uVar7 * -0x10 + 8);
    do {
      iVar1 = iVar1 + -1;
      pcVar13 = pcVar13 + *piVar9;
      piVar9 = piVar9 + 4;
    } while (iVar1 != 0);
  }
  if (uVar4 != 0) {
    uVar4 = uVar4 >> 4;
    piVar9 = (int *)(uVar18 + 8);
    do {
      uVar4 = uVar4 - 1;
      pcVar13 = pcVar13 + *piVar9;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  if (param_3 < pcVar13) {
    pcVar13 = param_3;
  }
  if (pcVar13 == (code *)0x0) goto LAB_00aae27c;
  if (local_90 != (code *)0x0) {
    if (uVar14 != 0) {
      uVar4 = param_2[2];
      uVar18 = uVar4 - uVar17;
      if (uVar4 < uVar17) {
        uVar18 = uVar4;
      }
      iVar1 = uVar14 - (uVar17 - uVar18);
      uVar4 = 0;
      if (uVar14 < uVar17 - uVar18 || iVar1 == 0) {
        uVar17 = uVar18 + uVar14;
      }
      else {
        uVar4 = iVar1 * 0x10;
      }
      if (uVar17 != uVar18) {
        iVar1 = uVar17 - uVar18;
        do {
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (uVar4 != 0) {
        uVar4 = uVar4 >> 4;
        do {
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    while (uVar17 = param_2[3], uVar17 != 0) {
      uVar4 = *param_2;
      uVar2 = param_2[1];
      uVar14 = 0;
      pcVar13 = (code *)0x0;
      uVar7 = param_2[2];
      uVar18 = uVar7 - uVar4;
      if (uVar7 < uVar4) {
        uVar18 = uVar7;
      }
      iVar1 = uVar17 - (uVar4 - uVar18);
      if (uVar17 < uVar4 - uVar18 || iVar1 == 0) {
        uVar7 = uVar18 + uVar17;
      }
      else {
        uVar14 = iVar1 * 0x10;
        uVar7 = uVar4;
      }
      if (uVar7 != uVar18) {
        iVar1 = uVar7 - uVar18;
        pcVar13 = (code *)0x0;
        piVar9 = (int *)(uVar2 + uVar18 * 0x10 + 8);
        do {
          iVar1 = iVar1 + -1;
          pcVar13 = pcVar13 + *piVar9;
          piVar9 = piVar9 + 4;
        } while (iVar1 != 0);
      }
      if (uVar14 != 0) {
        uVar14 = uVar14 >> 4;
        piVar9 = (int *)(uVar2 + 8);
        do {
          uVar14 = uVar14 - 1;
          pcVar13 = pcVar13 + *piVar9;
          piVar9 = piVar9 + 4;
        } while (uVar14 != 0);
      }
      if (param_3 < pcVar13) {
        pcVar13 = param_3;
      }
      if (pcVar13 == (code *)0x0) break;
      if (uVar17 == 0) {
        uVar16 = 1;
        pcVar13 = (code *)0x0;
      }
      else {
        uVar14 = param_2[2];
        uVar17 = uVar14 - uVar4;
        if (uVar14 < uVar4) {
          uVar17 = uVar14;
        }
        iVar1 = uVar2 + uVar17 * 0x10;
        uVar16 = *(undefined4 *)(iVar1 + 4);
        pcVar13 = *(code **)(iVar1 + 8);
      }
      if (param_3 < pcVar13) {
        pcVar13 = param_3;
      }
      pcVar15 = local_90 + -(int)local_94;
      if (pcVar15 < pcVar13) {
        FUN_00f5f538(&local_98,pcVar13);
        pcVar15 = local_90 + -(int)local_94;
      }
      pcVar3 = local_94;
      FUN_016dd1aa(local_98 + (int)local_94,uVar16,pcVar13);
      if (pcVar15 < pcVar13) {
        local_78 = pcVar13;
LAB_00aae37c:
        local_74 = pcVar15;
                    /* WARNING: Subroutine does not return */
        FUN_00f600c0();
      }
      local_94 = pcVar3 + (int)pcVar13;
      if (pcVar13 != (code *)0x0) {
        pcVar3 = pcVar13;
        do {
          if (param_2[3] == 0) {
LAB_00aae35c:
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("Out of bounds access",0x14,&DAT_0188a140);
          }
          uVar14 = param_2[2];
          uVar17 = uVar14 - *param_2;
          if (uVar14 < *param_2) {
            uVar17 = uVar14;
          }
          iVar1 = param_2[1] + uVar17 * 0x10;
          pcVar15 = *(code **)(iVar1 + 8);
          if (pcVar3 < pcVar15) {
            *(code **)(iVar1 + 4) = pcVar3 + *(int *)(iVar1 + 4);
            *(int *)(iVar1 + 8) = (int)pcVar15 - (int)pcVar3;
            break;
          }
          *(code **)(iVar1 + 4) = pcVar15 + *(int *)(iVar1 + 4);
          *(undefined4 *)(iVar1 + 8) = 0;
          if (param_2[3] != 0) {
            param_2[3] = param_2[3] - 1;
            piVar9 = (int *)(param_2[1] + param_2[2] * 0x10);
            local_78 = (code *)*piVar9;
            uVar14 = param_2[2] + 1;
            uVar17 = uVar14 - *param_2;
            if (uVar14 < *param_2) {
              uVar17 = uVar14;
            }
            local_74 = (code *)piVar9[1];
            local_70 = (code **)piVar9[2];
            local_6c = (code *)piVar9[3];
            param_2[2] = uVar17;
            if (local_78 != (code *)0x0) {
              (**(code **)(local_78 + 0x10))(&local_6c,local_74,local_70);
            }
          }
          pcVar3 = pcVar3 + -(int)pcVar15;
        } while (pcVar3 != (code *)0x0);
      }
      param_3 = param_3 + -(int)pcVar13;
    }
    goto LAB_00aae27c;
  }
  if (uVar14 == 0) {
    pcVar13 = (code *)0x0;
  }
  else {
    uVar7 = param_2[2];
    pcVar13 = (code *)0x0;
    uVar4 = uVar17;
    if (uVar7 < uVar17) {
      uVar4 = 0;
    }
    uVar6 = uVar7 - uVar4;
    iVar1 = uVar14 - (uVar17 - uVar6);
    uVar2 = 0;
    if (uVar14 < uVar17 - uVar6 || iVar1 == 0) {
      uVar11 = uVar6 + uVar14;
    }
    else {
      uVar2 = iVar1 * 0x10;
      uVar11 = uVar17;
    }
    if (uVar11 != uVar6) {
      iVar1 = uVar11 - uVar6;
      pcVar13 = (code *)0x0;
      piVar9 = (int *)(uVar18 + uVar7 * 0x10 + uVar4 * -0x10 + 8);
      do {
        iVar1 = iVar1 + -1;
        pcVar13 = pcVar13 + *piVar9;
        piVar9 = piVar9 + 4;
      } while (iVar1 != 0);
    }
    if (uVar2 != 0) {
      uVar2 = uVar2 >> 4;
      piVar9 = (int *)(uVar18 + 8);
      do {
        uVar2 = uVar2 - 1;
        pcVar13 = pcVar13 + *piVar9;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    uVar4 = param_2[2];
    if (param_3 < pcVar13) {
      pcVar13 = param_3;
    }
    uVar7 = uVar17;
    if (uVar4 < uVar17) {
      uVar7 = 0;
    }
    uVar2 = uVar4 - uVar7;
    if (uVar17 - uVar2 < uVar14) {
      uVar14 = (uVar14 - (uVar17 - uVar2)) * 0x10;
    }
    else {
      uVar17 = uVar2 + uVar14;
      uVar14 = 0;
    }
    pcVar15 = (code *)0x0;
    if (uVar17 != uVar2) {
      iVar1 = uVar17 - uVar2;
      pcVar15 = (code *)0x0;
      piVar9 = (int *)(uVar18 + uVar4 * 0x10 + uVar7 * -0x10 + 8);
      do {
        iVar1 = iVar1 + -1;
        pcVar15 = pcVar15 + *piVar9;
        piVar9 = piVar9 + 4;
      } while (iVar1 != 0);
    }
    if (uVar14 != 0) {
      uVar14 = uVar14 >> 4;
      piVar9 = (int *)(uVar18 + 8);
      do {
        uVar14 = uVar14 - 1;
        pcVar15 = pcVar15 + *piVar9;
        piVar9 = piVar9 + 4;
      } while (uVar14 != 0);
    }
    if (pcVar15 < pcVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("`len` greater than remaining",0x39,&DAT_018a49a8);
    }
  }
  FUN_00aad610(&local_88,param_2,pcVar13);
  local_60 = local_88;
  local_5c = pcStack_84;
  local_58 = pcStack_80;
  local_54 = uStack_7c;
  iVar1 = (**(code **)(local_88 + 0xc))(&local_54);
  pcVar15 = local_58;
  pcVar13 = local_5c;
  if (iVar1 == 0) {
    local_68 = local_54;
    local_6c = local_58;
    local_70 = (code **)local_5c;
    local_74 = local_60;
    local_78 = (code *)0x1;
    local_2c[0] = local_54;
    local_30 = local_58;
    local_34 = local_5c;
    local_38 = local_60;
    if (local_58 == (code *)0x0) {
      pcVar12 = (code *)0x0;
      pcVar10 = (code *)0x0;
    }
    else {
      FUN_00f5f538(&local_98,local_58);
      pcVar10 = local_94;
      pcVar12 = local_90;
      pcVar3 = local_98;
    }
    FUN_016dd1aa(pcVar3 + (int)pcVar10,pcVar13,pcVar15);
    if (pcVar12 + -(int)pcVar10 < pcVar15) {
      local_60 = pcVar15;
      local_5c = pcVar12 + -(int)pcVar10;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_60);
    }
    local_94 = pcVar10 + (int)pcVar15;
    (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
    goto LAB_00aae27c;
  }
  local_2c[0] = local_54;
  local_30 = local_58;
  local_34 = local_5c;
  local_38 = local_60;
  (**(code **)(local_60 + 8))(&local_74,local_2c);
  goto LAB_00aae170;
  while( true ) {
    piVar9 = (int *)(uVar14 + 8);
    iVar1 = iVar1 + -0x10;
    uVar14 = uVar14 + 0x10;
    if (*piVar9 != 0) break;
LAB_00aadacc:
    if (iVar1 == 0) goto LAB_00aae27c;
  }
LAB_00aadae8:
  if (uVar4 != 0) {
    uVar4 = param_2[2];
    uVar14 = uVar4 - uVar18;
    if (uVar4 < uVar18) {
      uVar14 = uVar4;
    }
    iVar1 = uVar17 + uVar14 * 0x10;
    uVar16 = *(undefined4 *)(iVar1 + 4);
    pcVar13 = *(code **)(iVar1 + 8);
    if (local_90 + -(int)local_94 < pcVar13) {
      FUN_00f5f538(&local_98,pcVar13);
    }
    pcVar3 = local_94;
    FUN_016dd1aa(local_98 + (int)local_94,uVar16,pcVar13);
    pcVar15 = local_90 + -(int)pcVar3;
    if (pcVar15 < pcVar13) {
      local_78 = pcVar13;
      goto LAB_00aae37c;
    }
    local_94 = pcVar3 + (int)pcVar13;
    for (; pcVar13 != (code *)0x0; pcVar13 = pcVar13 + -(int)pcVar3) {
      if (param_2[3] == 0) goto LAB_00aae35c;
      uVar14 = param_2[2];
      uVar17 = uVar14 - *param_2;
      if (uVar14 < *param_2) {
        uVar17 = uVar14;
      }
      iVar1 = param_2[1] + uVar17 * 0x10;
      pcVar3 = *(code **)(iVar1 + 8);
      if (pcVar13 < pcVar3) {
        *(code **)(iVar1 + 4) = pcVar13 + *(int *)(iVar1 + 4);
        *(int *)(iVar1 + 8) = (int)pcVar3 - (int)pcVar13;
        break;
      }
      *(code **)(iVar1 + 4) = pcVar3 + *(int *)(iVar1 + 4);
      *(undefined4 *)(iVar1 + 8) = 0;
      if (param_2[3] != 0) {
        param_2[3] = param_2[3] - 1;
        piVar9 = (int *)(param_2[1] + param_2[2] * 0x10);
        local_78 = (code *)*piVar9;
        uVar14 = param_2[2] + 1;
        uVar17 = uVar14 - *param_2;
        if (uVar14 < *param_2) {
          uVar17 = uVar14;
        }
        local_74 = (code *)piVar9[1];
        local_70 = (code **)piVar9[2];
        local_6c = (code *)piVar9[3];
        param_2[2] = uVar17;
        if (local_78 != (code *)0x0) {
          (**(code **)(local_78 + 0x10))(&local_6c,local_74,local_70);
        }
      }
    }
  }
  goto LAB_00aada54;
  while( true ) {
    piVar9 = (int *)(uVar4 + 8);
    iVar1 = iVar1 + -0x10;
    uVar4 = uVar4 + 0x10;
    if (*piVar9 != 0) break;
LAB_00aad990:
    if (iVar1 == 0) goto LAB_00aae27c;
  }
LAB_00aad9ac:
  if (local_90 != (code *)0x0) {
    if (uVar14 != 0) {
      uVar4 = 0;
      uVar2 = param_2[2];
      pcVar13 = (code *)0x0;
      uVar7 = uVar17;
      if (uVar2 < uVar17) {
        uVar7 = 0;
      }
      uVar6 = uVar2 - uVar7;
      iVar1 = uVar14 - (uVar17 - uVar6);
      if (uVar14 < uVar17 - uVar6 || iVar1 == 0) {
        uVar17 = uVar6 + uVar14;
      }
      else {
        uVar4 = iVar1 * 0x10;
      }
      if (uVar17 != uVar6) {
        iVar1 = uVar17 - uVar6;
        piVar9 = (int *)(uVar18 + uVar2 * 0x10 + uVar7 * -0x10 + 8);
        do {
          iVar1 = iVar1 + -1;
          pcVar13 = pcVar13 + *piVar9;
          piVar9 = piVar9 + 4;
        } while (iVar1 != 0);
      }
      if (uVar4 != 0) {
        uVar4 = uVar4 >> 4;
        piVar9 = (int *)(uVar18 + 8);
        do {
          uVar4 = uVar4 - 1;
          pcVar13 = pcVar13 + *piVar9;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      if (local_90 < pcVar13) {
        FUN_00f5f538(&local_98);
      }
    }
LAB_00aada54:
    uVar4 = param_2[3];
    uVar14 = 0;
    uVar18 = *param_2;
    iVar1 = 0;
    uVar17 = 0;
    if (uVar4 != 0) {
      uVar17 = param_2[2];
      uVar14 = uVar17 - uVar18;
      if (uVar17 < uVar18) {
        uVar14 = uVar17;
      }
      if (uVar18 - uVar14 < uVar4) {
        iVar1 = uVar4 - (uVar18 - uVar14);
        uVar17 = uVar18;
      }
      else {
        uVar17 = uVar14 + uVar4;
      }
    }
    iVar5 = uVar17 * 0x10 + uVar14 * -0x10;
    uVar17 = *local_9c;
    iVar8 = uVar17 + uVar14 * 0x10;
    do {
      if (iVar5 == 0) {
        iVar1 = iVar1 << 4;
        uVar14 = uVar17;
        goto LAB_00aadacc;
      }
      piVar9 = (int *)(iVar8 + 8);
      iVar5 = iVar5 + -0x10;
      iVar8 = iVar8 + 0x10;
    } while (*piVar9 == 0);
    goto LAB_00aadae8;
  }
  if (uVar14 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    uVar7 = param_2[2];
    uVar4 = uVar17;
    if (uVar7 < uVar17) {
      uVar4 = 0;
    }
    uVar6 = uVar7 - uVar4;
    iVar5 = uVar14 - (uVar17 - uVar6);
    uVar2 = 0;
    if (uVar14 < uVar17 - uVar6 || iVar5 == 0) {
      uVar17 = uVar6 + uVar14;
    }
    else {
      uVar2 = iVar5 * 0x10;
    }
    if (uVar17 != uVar6) {
      iVar5 = uVar17 - uVar6;
      iVar1 = 0;
      piVar9 = (int *)(uVar18 + uVar7 * 0x10 + uVar4 * -0x10 + 8);
      do {
        iVar5 = iVar5 + -1;
        iVar1 = *piVar9 + iVar1;
        piVar9 = piVar9 + 4;
      } while (iVar5 != 0);
    }
    if (uVar2 != 0) {
      uVar2 = uVar2 >> 4;
      piVar9 = (int *)(uVar18 + 8);
      do {
        uVar2 = uVar2 - 1;
        iVar1 = *piVar9 + iVar1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
  }
  FUN_00aad610(&local_88,param_2,iVar1);
  local_60 = local_88;
  local_5c = pcStack_84;
  local_58 = pcStack_80;
  local_54 = uStack_7c;
  iVar1 = (**(code **)(local_88 + 0xc))(&local_54);
  pcVar15 = local_58;
  pcVar13 = local_5c;
  if (iVar1 == 0) {
    local_68 = local_54;
    local_6c = local_58;
    local_70 = (code **)local_5c;
    local_74 = local_60;
    local_78 = (code *)0x1;
    local_2c[0] = local_54;
    local_30 = local_58;
    local_34 = local_5c;
    local_38 = local_60;
    if (local_58 == (code *)0x0) {
      pcVar12 = (code *)0x0;
      pcVar10 = (code *)0x0;
    }
    else {
      FUN_00f5f538(&local_98,local_58);
      pcVar10 = local_94;
      pcVar12 = local_90;
      pcVar3 = local_98;
    }
    FUN_016dd1aa(pcVar3 + (int)pcVar10,pcVar13,pcVar15);
    if (pcVar12 + -(int)pcVar10 < pcVar15) {
      local_60 = pcVar15;
      local_5c = pcVar12 + -(int)pcVar10;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_60);
    }
    local_94 = pcVar10 + (int)pcVar15;
    (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
    goto LAB_00aae27c;
  }
  local_2c[0] = local_54;
  local_30 = local_58;
  local_34 = local_5c;
  local_38 = local_60;
  (**(code **)(local_60 + 8))(&local_74,local_2c);
LAB_00aae170:
  local_78 = (code *)0x0;
  local_98 = local_74;
  local_94 = (code *)local_70;
  local_90 = local_6c;
  local_8c = local_68;
LAB_00aae27c:
  uVar17 = local_8c;
  if ((local_8c & 1) == 0) {
    param_1[1] = (int)local_98;
    param_1[2] = (int)local_94;
    param_1[3] = local_8c;
    *param_1 = (int)&DAT_018ad580;
    return;
  }
  local_58 = local_94 + (local_8c >> 5);
  local_5c = (code *)((int)local_98 - (local_8c >> 5));
  local_60 = local_90 + (local_8c >> 5);
  FUN_00f5ef18(&local_38,&local_60);
  local_50[0] = uVar17 >> 5;
  if (local_30 < (code *)(uVar17 >> 5)) {
    local_70 = &local_88;
    local_6c = FUN_007883b8;
    local_74 = FUN_007883b8;
    local_78 = (code *)local_50;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00584155,&local_78,&DAT_018a6700);
  }
  *param_1 = (int)local_38;
  param_1[1] = (int)(local_34 + local_50[0]);
  param_1[2] = (int)local_30 - local_50[0];
  param_1[3] = local_2c[0];
  return;
}

