// FUN_017664ac @ 017664ac size=2232 calls_out=15 calls_in=2
// strings: Out of bounds access | `len` greater than remaining | `len` greater than remaining

void FUN_017664ac(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint **ppuVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint local_74;
  uint local_6c;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  uint uStack_5c;
  uint *local_58;
  uint *local_54;
  uint **local_50;
  uint *local_4c;
  uint uStack_48;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint auStack_34 [2];
  uint *local_2c;
  uint *local_28;
  
  if (param_2[3] != 0) {
    uVar7 = param_2[2];
    uVar2 = uVar7 - *param_2;
    if (uVar7 < *param_2) {
      uVar2 = uVar7;
    }
    iVar5 = param_2[1] + uVar2 * 0x10;
    if (*(uint **)(iVar5 + 8) == param_3) {
      FUN_0128371c(&local_40,iVar5,param_3);
      if (param_2[3] != 0) {
        uVar7 = param_2[2] + 1;
        piVar6 = (int *)(param_2[1] + param_2[2] * 0x10);
        uVar2 = uVar7 - *param_2;
        if (uVar7 < *param_2) {
          uVar2 = uVar7;
        }
        param_2[2] = uVar2;
        param_2[3] = param_2[3] - 1;
        local_58 = (uint *)*piVar6;
        local_54 = (uint *)piVar6[1];
        local_50 = (uint **)piVar6[2];
        local_4c = (uint *)piVar6[3];
        if (local_58 != (uint *)0x0) {
          (*(code *)local_58[4])(&local_4c,local_54,local_50);
        }
      }
      *param_1 = (uint)local_40;
      param_1[1] = (uint)local_3c;
      param_1[2] = (uint)local_38;
      param_1[3] = auStack_34[0];
      return;
    }
    if (param_3 < *(uint **)(iVar5 + 8)) {
      FUN_0128371c(param_1,iVar5,param_3);
      return;
    }
  }
  FUN_01710904(&local_58,param_2);
  puVar1 = (uint *)FUN_01728908(&local_58);
  if (puVar1 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74("`len` greater than remaining",0x1c,&DAT_01d1a210);
  }
  uVar8 = 0;
  if ((int)param_3 < 0) {
LAB_017665b0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar8,param_3);
  }
  puVar9 = (uint *)0x0;
  puVar10 = (uint *)0x1;
  puVar11 = (uint *)0x0;
  if (param_3 != (uint *)0x0) {
    uVar8 = 1;
    puVar10 = (uint *)FUN_01298504(param_3,1);
    puVar11 = param_3;
    if (puVar10 == (uint *)0x0) goto LAB_017665b0;
  }
  local_7c = (uint *)0x0;
  uVar2 = 0x20 - LZCOUNT((uint)puVar11 >> 10);
  if (6 < uVar2) {
    uVar2 = 7;
  }
  local_74 = uVar2 << 2 | 1;
  local_80 = puVar10;
  local_78 = puVar11;
  if (puVar1 == param_3) {
    FUN_01710904(&local_58,param_2);
    puVar1 = local_58;
    do {
      if (puVar1 == local_54) {
        ppuVar3 = local_50;
        goto LAB_01766840;
      }
      puVar9 = puVar1 + 2;
      puVar1 = puVar1 + 4;
    } while (*puVar9 == 0);
    goto LAB_01766858;
  }
  FUN_01710904(&local_58,param_2);
  puVar1 = (uint *)FUN_01728908(&local_58);
  if (param_3 < puVar1) {
    puVar1 = param_3;
  }
  if (puVar1 == (uint *)0x0) goto LAB_01766c30;
  if (puVar11 != (uint *)0x0) {
    FUN_01710904(&local_58,param_2);
    FUN_01728908(&local_58);
    while( true ) {
      FUN_01710904(&local_58,param_2);
      puVar1 = (uint *)FUN_01728908(&local_58);
      if (param_3 < puVar1) {
        puVar1 = param_3;
      }
      if (puVar1 == (uint *)0x0) goto LAB_01766c30;
      if (param_2[3] == 0) {
        iVar5 = 0;
      }
      else {
        uVar7 = param_2[2];
        uVar2 = uVar7 - *param_2;
        if (uVar7 < *param_2) {
          uVar2 = uVar7;
        }
        iVar5 = param_2[1] + uVar2 * 0x10;
        puVar9 = *(uint **)(iVar5 + 8);
        iVar5 = *(int *)(iVar5 + 4);
      }
      if (param_3 < puVar9) {
        puVar9 = param_3;
      }
      puVar11 = (uint *)((int)local_78 - (int)local_7c);
      if (iVar5 == 0) {
        iVar5 = 1;
        puVar9 = (uint *)0x0;
      }
      if (puVar11 < puVar9) {
        FUN_01283c9c(&local_80,puVar9);
        puVar11 = (uint *)((int)local_78 - (int)local_7c);
      }
      puVar1 = local_7c;
      FUN_01bed4e2((int)local_80 + (int)local_7c,iVar5,puVar9);
      if (puVar11 < puVar9) break;
      local_7c = (uint *)((int)puVar1 + (int)puVar9);
      if (puVar9 != (uint *)0x0) {
        puVar1 = puVar9;
        do {
          if (param_2[3] == 0) {
LAB_01766b90:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("Out of bounds access",0x14,&DAT_01d1a220);
          }
          uVar7 = param_2[2];
          uVar2 = uVar7 - *param_2;
          if (uVar7 < *param_2) {
            uVar2 = uVar7;
          }
          iVar5 = param_2[1] + uVar2 * 0x10;
          puVar10 = *(uint **)(iVar5 + 8);
          if (puVar1 < puVar10) {
            *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + (int)puVar1;
            *(int *)(iVar5 + 8) = (int)puVar10 - (int)puVar1;
            break;
          }
          *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + (int)puVar10;
          *(undefined4 *)(iVar5 + 8) = 0;
          if (param_2[3] != 0) {
            uVar7 = param_2[2] + 1;
            uVar2 = uVar7 - *param_2;
            if (uVar7 < *param_2) {
              uVar2 = uVar7;
            }
            puVar11 = (uint *)(param_2[1] + param_2[2] * 0x10);
            param_2[2] = uVar2;
            param_2[3] = param_2[3] - 1;
            local_58 = (uint *)*puVar11;
            local_54 = (uint *)puVar11[1];
            local_50 = (uint **)puVar11[2];
            local_4c = (uint *)puVar11[3];
            if (local_58 != (uint *)0x0) {
              (*(code *)local_58[4])(&local_4c,local_54,local_50);
            }
          }
          puVar1 = (uint *)((int)puVar1 - (int)puVar10);
        } while (puVar1 != (uint *)0x0);
      }
      param_3 = (uint *)((int)param_3 - (int)puVar9);
    }
    local_58 = puVar9;
    goto LAB_01766cc8;
  }
  FUN_01710904(&local_58,param_2);
  puVar1 = (uint *)FUN_01728908(&local_58);
  FUN_01710904(&local_58,param_2);
  if (param_3 < puVar1) {
    puVar1 = param_3;
  }
  puVar9 = (uint *)FUN_01728908(&local_58);
  if (puVar9 < puVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("`len` greater than remaining",0x39,&DAT_01d2e1cc);
  }
  FUN_017664ac(&local_68,param_2,puVar1);
  local_40 = local_68;
  local_3c = local_64;
  local_38 = local_60;
  auStack_34[0] = uStack_5c;
  FUN_0128341c(&local_58,&local_40);
  puVar1 = local_4c;
  ppuVar3 = local_50;
  if (local_58 != (uint *)0x0) {
    local_40 = local_54;
    local_3c = (uint *)local_50;
    local_38 = local_4c;
    auStack_34[0] = uStack_48;
    if (local_4c == (uint *)0x0) {
      local_28 = (uint *)0x0;
      puVar9 = (uint *)0x0;
    }
    else {
      FUN_01283c9c(&local_80,local_4c);
      puVar9 = local_7c;
      local_28 = local_78;
      puVar10 = local_80;
    }
    FUN_01bed4e2((int)puVar10 + (int)puVar9,ppuVar3,puVar1);
    local_28 = (uint *)((int)local_28 - (int)puVar9);
    if (local_28 < puVar1) {
      local_2c = puVar1;
                    /* WARNING: Subroutine does not return */
      FUN_01284540(&local_2c);
    }
    local_7c = (uint *)((int)puVar9 + (int)puVar1);
    (*(code *)local_40[4])(auStack_34,local_3c,local_38);
    goto LAB_01766c30;
  }
  goto LAB_01766b74;
  while (puVar1 = (uint *)(ppuVar3 + 2), ppuVar3 = ppuVar3 + 4, *puVar1 == 0) {
LAB_017668d8:
    if (ppuVar3 == (uint **)local_4c) goto LAB_01766c30;
  }
LAB_017668f0:
  if (param_2[3] == 0) {
    iVar5 = 0;
  }
  else {
    uVar7 = param_2[2];
    uVar2 = uVar7 - *param_2;
    if (uVar7 < *param_2) {
      uVar2 = uVar7;
    }
    iVar4 = param_2[1] + uVar2 * 0x10;
    iVar5 = *(int *)(iVar4 + 4);
    puVar10 = *(uint **)(iVar4 + 8);
  }
  puVar1 = puVar10;
  if (iVar5 == 0) {
    iVar5 = 1;
    puVar1 = (uint *)0x0;
  }
  puVar11 = (uint *)((int)local_78 - (int)local_7c);
  if (puVar11 < puVar1) {
    FUN_01283c9c(&local_80,puVar1);
    puVar11 = (uint *)((int)local_78 - (int)local_7c);
  }
  puVar9 = local_7c;
  FUN_01bed4e2((int)local_80 + (int)local_7c,iVar5,puVar1);
  if (puVar1 <= puVar11) {
    local_7c = (uint *)((int)puVar9 + (int)puVar1);
    while (puVar1 != (uint *)0x0) {
      if (param_2[3] == 0) goto LAB_01766b90;
      uVar7 = param_2[2];
      uVar2 = uVar7 - *param_2;
      if (uVar7 < *param_2) {
        uVar2 = uVar7;
      }
      iVar5 = param_2[1] + uVar2 * 0x10;
      puVar1 = *(uint **)(iVar5 + 8);
      if (puVar10 < puVar1) {
        *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + (int)puVar10;
        *(int *)(iVar5 + 8) = (int)puVar1 - (int)puVar10;
        break;
      }
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + (int)puVar1;
      *(undefined4 *)(iVar5 + 8) = 0;
      if (param_2[3] != 0) {
        uVar7 = param_2[2] + 1;
        uVar2 = uVar7 - *param_2;
        if (uVar7 < *param_2) {
          uVar2 = uVar7;
        }
        puVar9 = (uint *)(param_2[1] + param_2[2] * 0x10);
        param_2[2] = uVar2;
        param_2[3] = param_2[3] - 1;
        local_58 = (uint *)*puVar9;
        local_54 = (uint *)puVar9[1];
        local_50 = (uint **)puVar9[2];
        local_4c = (uint *)puVar9[3];
        if (local_58 != (uint *)0x0) {
          (*(code *)local_58[4])(&local_4c,local_54,local_50);
        }
      }
      puVar10 = (uint *)((int)puVar10 - (int)puVar1);
      puVar1 = puVar10;
    }
    goto LAB_017668a0;
  }
  local_58 = puVar1;
LAB_01766cc8:
  local_54 = puVar11;
                    /* WARNING: Subroutine does not return */
  FUN_01284540();
  while (puVar1 = (uint *)(ppuVar3 + 2), ppuVar3 = ppuVar3 + 4, *puVar1 == 0) {
LAB_01766840:
    if (ppuVar3 == (uint **)local_4c) goto LAB_01766c30;
  }
LAB_01766858:
  if (puVar11 != (uint *)0x0) {
    FUN_01710904(&local_58,param_2);
    puVar1 = (uint *)FUN_01728908(&local_58);
    if (puVar11 < puVar1) {
      FUN_01283c9c(&local_80,puVar1);
    }
LAB_017668a0:
    FUN_01710904(&local_58,param_2);
    puVar1 = local_58;
    do {
      if (puVar1 == local_54) {
        ppuVar3 = local_50;
        goto LAB_017668d8;
      }
      puVar9 = puVar1 + 2;
      puVar1 = puVar1 + 4;
    } while (*puVar9 == 0);
    goto LAB_017668f0;
  }
  FUN_01710904(&local_58,param_2);
  uVar8 = FUN_01728908(&local_58);
  FUN_017664ac(&local_68,param_2,uVar8);
  local_40 = local_68;
  local_3c = local_64;
  local_38 = local_60;
  auStack_34[0] = uStack_5c;
  FUN_0128341c(&local_58,&local_40);
  puVar1 = local_4c;
  ppuVar3 = local_50;
  if (local_58 != (uint *)0x0) {
    local_40 = local_54;
    local_3c = (uint *)local_50;
    local_38 = local_4c;
    auStack_34[0] = uStack_48;
    if (local_4c == (uint *)0x0) {
      local_28 = (uint *)0x0;
      puVar9 = (uint *)0x0;
    }
    else {
      FUN_01283c9c(&local_80,local_4c);
      puVar9 = local_7c;
      local_28 = local_78;
      puVar10 = local_80;
    }
    FUN_01bed4e2((int)puVar10 + (int)puVar9,ppuVar3,puVar1);
    local_28 = (uint *)((int)local_28 - (int)puVar9);
    if (local_28 < puVar1) {
      local_2c = puVar1;
                    /* WARNING: Subroutine does not return */
      FUN_01284540(&local_2c);
    }
    local_7c = (uint *)((int)puVar9 + (int)puVar1);
    (*(code *)local_40[4])(auStack_34,local_3c,local_38);
    goto LAB_01766c30;
  }
LAB_01766b74:
  FUN_012840cc(&local_80);
  local_80 = local_54;
  local_7c = (uint *)local_50;
  local_78 = local_4c;
  local_74 = uStack_48;
LAB_01766c30:
  uVar2 = local_74;
  if ((local_74 & 1) == 0) {
    param_1[1] = (uint)local_80;
    param_1[2] = (uint)local_7c;
    param_1[3] = local_74;
    *param_1 = (uint)&DAT_01d2e520;
  }
  else {
    local_60 = (uint *)((int)local_7c + (local_74 >> 5));
    local_64 = (uint *)((int)local_80 - (local_74 >> 5));
    local_68 = (uint *)((int)local_78 + (local_74 >> 5));
    FUN_01283524(&local_40,&local_68);
    local_6c = uVar2 >> 5;
    if (local_38 < (uint *)(uVar2 >> 5)) {
      local_50 = &local_2c;
      local_2c = local_38;
      local_4c = (uint *)&LAB_01a6a304;
      local_54 = (uint *)&LAB_01a6a304;
      local_58 = &local_6c;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ac267,&local_58,&DAT_01d2e534);
    }
    *param_1 = (uint)local_40;
    param_1[1] = (int)local_3c + local_6c;
    param_1[2] = (int)local_38 - local_6c;
    param_1[3] = auStack_34[0];
  }
  return;
}

