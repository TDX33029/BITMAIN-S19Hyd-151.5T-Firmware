// FUN_014e9f5c @ 014e9f5c size=4312 calls_out=17 calls_in=2
// strings: linux_x86_64 | linux_x86_64 | macos_x86_64 | macos_x86_64 | linux_armv7 | linux_armv7

void FUN_014e9f5c(int *param_1,undefined4 *param_2)

{
  char **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  char **ppcVar9;
  char **ppcVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  char **ppcVar14;
  char **ppcVar15;
  bool bVar16;
  char *local_cd8;
  char *local_cd4;
  char *local_cd0;
  char *local_ccc;
  char *local_cbc;
  char **local_ca4;
  char *local_ca0;
  char **local_c9c;
  char *local_c98;
  char **local_c94;
  char *local_c90;
  char **local_c8c;
  char *local_c88;
  char **local_c84;
  char **local_c80;
  char **local_c7c;
  char **local_c78;
  char **local_c74;
  char **local_c70;
  uint local_c64;
  uint local_c60;
  undefined4 local_c5c;
  int local_c58;
  undefined4 local_c54;
  undefined1 auStack_c50 [136];
  undefined1 auStack_bc8 [136];
  char **local_b40;
  char *local_b3c;
  uint uStack_b38;
  undefined4 uStack_b34;
  undefined1 auStack_ab4 [140];
  undefined1 auStack_a28 [140];
  undefined1 auStack_99c [140];
  char **local_910;
  char *pcStack_90c;
  uint uStack_908;
  undefined4 uStack_904;
  undefined4 *local_900;
  undefined4 *local_8fc;
  char *local_8f8;
  undefined4 *local_8f4;
  int local_8f0;
  undefined1 auStack_8e8 [704];
  char **local_628;
  char *local_624;
  undefined1 auStack_620 [136];
  char **local_598;
  char *local_594;
  undefined1 auStack_590 [136];
  char **local_508;
  char *local_504;
  undefined1 auStack_500 [136];
  char **local_478;
  char *local_474;
  undefined1 auStack_470 [136];
  char **local_3e8;
  char *local_3e4;
  undefined1 auStack_3e0 [136];
  char *local_358;
  char *local_354;
  uint local_350;
  undefined4 local_34c;
  undefined1 auStack_2d0 [136];
  undefined1 auStack_248 [136];
  undefined1 auStack_1c0 [136];
  undefined1 auStack_138 [136];
  undefined1 auStack_b0 [139];
  undefined1 uStack_25;
  
  pcVar12 = (char *)*param_2;
  uVar3 = 0x15;
  if ((int)pcVar12 < 0) {
    uVar3 = (uint)pcVar12 ^ 0x80000000;
  }
  if (uVar3 != 0x14) {
    if (uVar3 != 0x15) {
      iVar5 = FUN_014c8278(param_2,&uStack_25,&DAT_01cf9da4);
      *param_1 = 4;
      param_1[1] = iVar5;
      return;
    }
    local_8f0 = 0;
    local_910 = (char **)0x80000015;
    puVar4 = (undefined4 *)((uint)&local_358 | 4);
    local_628 = (char **)0x4;
    local_c8c = (char **)&SUB_00000004;
    local_c90 = local_624;
    local_c98 = local_594;
    local_ca0 = local_504;
    local_c88 = local_474;
    local_c94 = (char **)&SUB_00000004;
    local_c9c = (char **)&SUB_00000004;
    local_c84 = (char **)&SUB_00000004;
    local_900 = (undefined4 *)param_2[1];
    local_ca4 = (char **)&SUB_00000004;
    local_8f4 = local_900 + param_2[2] * 8;
    local_c7c = (char **)&SUB_00000004;
    local_c74 = (char **)&SUB_00000004;
    local_c78 = (char **)&SUB_00000004;
    local_c70 = (char **)&SUB_00000004;
    local_598 = (char **)0x4;
    local_508 = (char **)0x4;
    local_478 = (char **)0x4;
    local_c80 = (char **)&SUB_00000004;
    pcVar6 = pcVar12;
    local_8fc = local_900;
    local_8f8 = pcVar12;
LAB_014ea0a0:
    puVar2 = local_8fc;
    bVar16 = local_8fc == local_8f4;
    pcVar13 = pcVar6;
    if (!bVar16) {
      pcVar13 = (char *)*local_8fc;
      local_8fc = local_8fc + 8;
    }
    if (bVar16 || pcVar13 == (char *)0x80000015) goto switchD_014ea228_caseD_5;
    local_8f0 = local_8f0 + 1;
    uVar7 = puVar2[2];
    uVar11 = puVar2[3];
    *puVar4 = puVar2[1];
    puVar4[1] = uVar7;
    puVar4[2] = uVar11;
    local_b40 = (char **)puVar2[4];
    local_b3c = (char *)puVar2[5];
    uStack_b38 = puVar2[6];
    uStack_b34 = puVar2[7];
    local_358 = pcVar13;
    if (local_910 != (char **)0x80000015) {
      FUN_014c81b0(&local_910);
    }
    uVar3 = local_350;
    pcVar6 = local_354;
    local_910 = local_b40;
    pcStack_90c = local_b3c;
    uStack_908 = uStack_b38;
    uStack_904 = uStack_b34;
    uVar8 = 0x15;
    if ((int)pcVar13 < 0) {
      uVar8 = (uint)pcVar13 ^ 0x80000000;
    }
    uVar7 = local_34c;
    switch(uVar8) {
    case 1:
      uVar3 = (uint)local_354 & 0xff;
      uVar7 = 0;
    case 4:
      FUN_014e87cc(&local_b40,&switchD_014ea138::switchdataD_014ea13c,uVar3,uVar7);
      goto LAB_014ea1e8;
    default:
      local_b3c = (char *)FUN_014c8278(&local_358,&uStack_25,&DAT_01cf9e74);
      local_b40 = (char **)CONCAT31(local_b40._1_3_,1);
      goto LAB_014ea200;
    case 0xc:
      FUN_014eeea0(&local_b40,local_350,local_34c);
      goto LAB_014ea1dc;
    case 0xd:
      FUN_014eeea0(&local_b40,local_354,local_350);
      break;
    case 0xe:
      FUN_014e6ca0(&local_b40,local_350,local_34c);
LAB_014ea1dc:
      FUN_019bb7e0(pcVar6,uVar3);
LAB_014ea1e8:
      if ((uVar8 | 2) != 0xe) break;
      goto LAB_014ea200;
    case 0xf:
      FUN_014e6ca0(&local_b40,local_354,local_350);
    }
    FUN_014c81b0(&local_358);
LAB_014ea200:
    if ((char)local_b40 == '\0') {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((uint)local_b40 >> 8 & 0xff) {
      case 0:
        if (local_c70 == (char **)&SUB_00000004) {
          FUN_014d5228(&local_b40,&local_910);
          pcVar6 = local_b3c;
          local_c70 = local_b40;
          if (local_b40 == (char **)&SUB_00000004) {
            local_c70 = (char **)&SUB_00000004;
LAB_014eabc4:
            *param_1 = 4;
            param_1[1] = (int)local_b3c;
            goto LAB_014eabc8;
          }
          FUN_01bed4e2(&local_358,&uStack_b38,0x84);
          FUN_01bed4e2(auStack_620,&local_358,0x84);
          local_cd8 = pcVar6;
          local_c90 = pcVar6;
          local_c8c = local_c70;
          goto LAB_014ea0a0;
        }
        local_474 = local_c88;
        local_478 = local_c84;
        local_504 = local_ca0;
        local_508 = local_c9c;
        local_594 = local_c98;
        local_598 = local_c94;
        local_624 = local_c90;
        local_628 = local_c8c;
        local_3e4 = local_cbc;
        local_b3c = (char *)&DAT_0132b6a0;
        local_b40 = &local_358;
        local_3e8 = local_ca4;
        local_354 = (char *)0xc;
        local_358 = "linux_x86_64";
        iVar5 = FUN_019676ac(&DAT_005ab34f,&local_b40);
        break;
      case 1:
        if (local_c78 == (char **)&SUB_00000004) {
          FUN_014d5228(&local_b40,&local_910);
          pcVar6 = local_b3c;
          local_c78 = local_b40;
          if (local_b40 == (char **)&SUB_00000004) {
            local_c78 = (char **)&SUB_00000004;
            goto LAB_014eabc4;
          }
          FUN_01bed4e2(&local_358,&uStack_b38,0x84);
          FUN_01bed4e2(auStack_590,&local_358,0x84);
          local_cd4 = pcVar6;
          local_c98 = pcVar6;
          local_c94 = local_c78;
          goto LAB_014ea0a0;
        }
        local_474 = local_c88;
        local_478 = local_c84;
        local_504 = local_ca0;
        local_508 = local_c9c;
        local_594 = local_c98;
        local_598 = local_c94;
        local_624 = local_c90;
        local_628 = local_c8c;
        local_3e4 = local_cbc;
        local_b3c = (char *)&DAT_0132b6a0;
        local_b40 = &local_358;
        local_3e8 = local_ca4;
        local_354 = (char *)0xd;
        local_358 = "linux_aarch64";
        iVar5 = FUN_019676ac(&DAT_005ab34f,&local_b40);
        break;
      case 2:
        if (local_c74 == (char **)&SUB_00000004) {
          FUN_014d5228(&local_b40,&local_910);
          pcVar6 = local_b3c;
          local_c74 = local_b40;
          if (local_b40 == (char **)&SUB_00000004) {
            local_c74 = (char **)&SUB_00000004;
            goto LAB_014eabc4;
          }
          FUN_01bed4e2(&local_358,&uStack_b38,0x84);
          FUN_01bed4e2(auStack_500,&local_358,0x84);
          local_cd0 = pcVar6;
          local_ca0 = pcVar6;
          local_c9c = local_c74;
          goto LAB_014ea0a0;
        }
        local_474 = local_c88;
        local_478 = local_c84;
        local_504 = local_ca0;
        local_508 = local_c9c;
        local_594 = local_c98;
        local_598 = local_c94;
        local_624 = local_c90;
        local_628 = local_c8c;
        local_3e4 = local_cbc;
        local_b3c = (char *)&DAT_0132b6a0;
        local_b40 = &local_358;
        local_3e8 = local_ca4;
        local_354 = (char *)0xb;
        local_358 = "linux_armv7";
        iVar5 = FUN_019676ac(&DAT_005ab34f,&local_b40);
        break;
      case 3:
        if (local_c7c == (char **)&SUB_00000004) {
          FUN_014d5228(&local_b40,&local_910);
          pcVar6 = local_b3c;
          local_c7c = local_b40;
          if (local_b40 == (char **)&SUB_00000004) {
            local_c7c = (char **)&SUB_00000004;
            goto LAB_014eabc4;
          }
          FUN_01bed4e2(&local_358,&uStack_b38,0x84);
          FUN_01bed4e2(auStack_470,&local_358,0x84);
          local_ccc = pcVar6;
          local_c88 = pcVar6;
          local_c84 = local_c7c;
          goto LAB_014ea0a0;
        }
        local_474 = local_c88;
        local_478 = local_c84;
        local_504 = local_ca0;
        local_508 = local_c9c;
        local_594 = local_c98;
        local_598 = local_c94;
        local_624 = local_c90;
        local_628 = local_c8c;
        local_3e4 = local_cbc;
        local_b3c = (char *)&DAT_0132b6a0;
        local_b40 = &local_358;
        local_3e8 = local_ca4;
        local_354 = (char *)0xc;
        local_358 = "macos_x86_64";
        iVar5 = FUN_019676ac(&DAT_005ab34f,&local_b40);
        break;
      case 4:
        if (local_c80 != (char **)&SUB_00000004) {
          local_474 = local_c88;
          local_478 = local_c84;
          local_504 = local_ca0;
          local_508 = local_c9c;
          local_594 = local_c98;
          local_598 = local_c94;
          local_624 = local_c90;
          local_628 = local_c8c;
          local_3e4 = local_cbc;
          local_b3c = (char *)&DAT_0132b6a0;
          local_b40 = &local_358;
          local_3e8 = local_ca4;
          local_354 = (char *)0xe;
          local_358 = "windows_x86_64";
          iVar5 = FUN_019676ac(&DAT_005ab34f,&local_b40);
          break;
        }
        FUN_014d5228(&local_b40,&local_910);
        local_ca4 = local_b40;
        if (local_b40 != (char **)&SUB_00000004) goto code_r0x014ea444;
        local_474 = local_c88;
        local_478 = local_c84;
        local_504 = local_ca0;
        local_508 = local_c9c;
        local_594 = local_c98;
        local_598 = local_c94;
        local_624 = local_c90;
        local_628 = local_c8c;
        *param_1 = 4;
        param_1[1] = (int)local_b3c;
LAB_014eabec:
        if (local_c7c < &DAT_00000003) {
          FUN_014c9d44(&local_478);
        }
        if (local_c74 < &DAT_00000003) {
          FUN_014c9d44(&local_508);
        }
        if (local_c78 < &DAT_00000003) {
          FUN_014c9d44(&local_598);
        }
        if (local_c70 < &DAT_00000003) {
          FUN_014c9d44(&local_628);
        }
        FUN_014c9c60(&local_910);
        goto LAB_014ea844;
      case 5:
switchD_014ea228_caseD_5:
        local_474 = local_c88;
        local_478 = local_c84;
        local_504 = local_ca0;
        local_508 = local_c9c;
        local_594 = local_c98;
        local_598 = local_c94;
        local_624 = local_c90;
        local_628 = local_c8c;
        ppcVar14 = (char **)&DAT_00000003;
        if (local_c70 != (char **)&SUB_00000004) {
          FUN_01bed4e2(auStack_2d0,auStack_620,0x84);
          ppcVar14 = local_c70;
        }
        ppcVar15 = (char **)&DAT_00000003;
        if (local_c78 != (char **)&SUB_00000004) {
          FUN_01bed4e2(auStack_248,auStack_590,0x84);
          ppcVar15 = local_c78;
        }
        ppcVar9 = (char **)&DAT_00000003;
        if (local_c74 != (char **)&SUB_00000004) {
          FUN_01bed4e2(auStack_1c0,auStack_500,0x84);
          ppcVar9 = local_c74;
        }
        ppcVar10 = (char **)&DAT_00000003;
        if (local_c7c != (char **)&SUB_00000004) {
          FUN_01bed4e2(auStack_138,auStack_470,0x84);
          ppcVar10 = local_c7c;
        }
        if (local_c80 == (char **)&SUB_00000004) {
          local_c80 = (char **)&DAT_00000003;
        }
        else {
          FUN_01bed4e2(auStack_b0,auStack_3e0,0x84);
        }
        *param_1 = (int)ppcVar14;
        param_1[1] = (int)local_cd8;
        FUN_01bed4e2(param_1 + 2,auStack_2d0,0x84);
        param_1[0x23] = (int)ppcVar15;
        param_1[0x24] = (int)local_cd4;
        FUN_01bed4e2(param_1 + 0x25,auStack_248,0x84);
        param_1[0x47] = (int)local_cd0;
        param_1[0x46] = (int)ppcVar9;
        FUN_01bed4e2(param_1 + 0x48,auStack_1c0,0x84);
        param_1[0x6a] = (int)local_ccc;
        param_1[0x69] = (int)ppcVar10;
        FUN_01bed4e2(param_1 + 0x6b,auStack_138,0x84);
        param_1[0x8d] = (int)local_cbc;
        param_1[0x8c] = (int)local_c80;
        FUN_01bed4e2(param_1 + 0x8e,auStack_b0,0x84);
        FUN_01bed4e2(auStack_8e8,param_1,700);
        iVar5 = FUN_014c9cac(&local_910);
        if (iVar5 != 0) {
          *param_1 = 4;
          param_1[1] = iVar5;
          FUN_014c9e20(auStack_8e8);
        }
        goto LAB_014ea844;
      }
      *param_1 = 4;
      param_1[1] = iVar5;
    }
    else {
      *param_1 = 4;
      param_1[1] = (int)local_b3c;
LAB_014eabc8:
      local_3e4 = local_cbc;
      local_3e8 = local_ca4;
      local_474 = local_c88;
      local_478 = local_c84;
      local_504 = local_ca0;
      local_508 = local_c9c;
      local_594 = local_c98;
      local_598 = local_c94;
      local_624 = local_c90;
      local_628 = local_c8c;
    }
    if ((undefined1 *)0x1 < (undefined1 *)((int)local_c80 + -3)) {
      FUN_014c9d44(&local_3e8);
    }
    goto LAB_014eabec;
  }
  local_c5c = param_2[1];
  local_c64 = param_2[2];
  local_c58 = local_c64 + param_2[3] * 0x10;
  local_c54 = 0;
  local_c60 = local_c64;
  FUN_014d5288(&local_b40,&local_c64);
  pcVar6 = local_b3c;
  ppcVar14 = local_b40;
  if (local_b40 == (char **)&DAT_00000005) {
LAB_014ea4dc:
    *param_1 = 4;
    param_1[1] = (int)pcVar6;
  }
  else {
    FUN_01bed4e2(auStack_c50,&uStack_b38,0x84);
    if (ppcVar14 == (char **)&SUB_00000004) {
      pcVar6 = (char *)FUN_014dee0c(0,&DAT_01cf9ffc,&DAT_01d064b8);
      goto LAB_014ea4dc;
    }
    FUN_01bed4e2(auStack_590,auStack_c50,0x84);
    local_594 = pcVar6;
    local_598 = ppcVar14;
    FUN_014d5288(&local_b40,&local_c64);
    pcVar6 = local_b3c;
    ppcVar15 = local_b40;
    if (local_b40 == (char **)&DAT_00000005) {
LAB_014ea634:
      *param_1 = 4;
      param_1[1] = (int)pcVar6;
LAB_014ea828:
      if (ppcVar14 != (char **)&DAT_00000003) {
        FUN_014c9d44(&local_598);
      }
    }
    else {
      FUN_01bed4e2(auStack_bc8,&uStack_b38,0x84);
      if (ppcVar15 == (char **)&SUB_00000004) {
        pcVar6 = (char *)FUN_014dee0c(1,&DAT_01cf9ffc,&DAT_01d064b8);
        goto LAB_014ea634;
      }
      FUN_01bed4e2(auStack_500,auStack_bc8,0x84);
      local_504 = pcVar6;
      local_508 = ppcVar15;
      FUN_014d5288(&local_b40,&local_c64);
      pcVar6 = local_b3c;
      ppcVar9 = local_b40;
      if (local_b40 == (char **)&DAT_00000005) {
LAB_014ea77c:
        *param_1 = 4;
        param_1[1] = (int)pcVar6;
LAB_014ea814:
        if (ppcVar15 != (char **)&DAT_00000003) {
          FUN_014c9d44(&local_508);
        }
        goto LAB_014ea828;
      }
      FUN_01bed4e2(&local_358,&uStack_b38,0x84);
      if (ppcVar9 == (char **)&SUB_00000004) {
        pcVar6 = (char *)FUN_014dee0c(2,&DAT_01cf9ffc,&DAT_01d064b8);
        goto LAB_014ea77c;
      }
      FUN_01bed4e2(auStack_470,&local_358,0x84);
      local_474 = pcVar6;
      local_478 = ppcVar9;
      FUN_014d5288(&local_b40,&local_c64);
      pcVar6 = local_b3c;
      ppcVar10 = local_b40;
      if (local_b40 == (char **)&DAT_00000005) {
LAB_014ea7f0:
        *param_1 = 4;
        param_1[1] = (int)pcVar6;
LAB_014ea7fc:
        if (ppcVar9 != (char **)&DAT_00000003) {
          FUN_014c9d44(&local_478);
        }
        goto LAB_014ea814;
      }
      FUN_01bed4e2(auStack_b0,&uStack_b38,0x84);
      if (ppcVar10 == (char **)&SUB_00000004) {
        pcVar6 = (char *)FUN_014dee0c(3,&DAT_01cf9ffc,&DAT_01d064b8);
        goto LAB_014ea7f0;
      }
      FUN_01bed4e2(auStack_3e0,auStack_b0,0x84);
      local_3e4 = pcVar6;
      local_3e8 = ppcVar10;
      FUN_014d5288(&local_b40,&local_c64);
      pcVar6 = local_b3c;
      ppcVar1 = local_b40;
      if (local_b40 == (char **)&DAT_00000005) {
LAB_014ea8c8:
        *param_1 = 4;
        param_1[1] = (int)pcVar6;
        if (ppcVar10 != (char **)&DAT_00000003) {
          FUN_014c9d44(&local_3e8);
        }
        goto LAB_014ea7fc;
      }
      FUN_01bed4e2(&local_628,&uStack_b38,0x84);
      if (ppcVar1 == (char **)&SUB_00000004) {
        pcVar6 = (char *)FUN_014dee0c(4,&DAT_01cf9ffc,&DAT_01d064b8);
        goto LAB_014ea8c8;
      }
      FUN_01bed4e2(param_1 + 0x8e,&local_628,0x84);
      FUN_01bed4e2(&local_b40,&local_598,0x8c);
      FUN_01bed4e2(auStack_ab4,&local_508,0x8c);
      FUN_01bed4e2(auStack_a28,&local_478,0x8c);
      FUN_01bed4e2(auStack_99c,&local_3e8,0x8c);
      FUN_01bed4e2(param_1,&local_b40,0x230);
      param_1[0x8c] = (int)ppcVar1;
      param_1[0x8d] = (int)pcVar6;
      if (*param_1 != 4) {
        FUN_01bed4e2(auStack_8e8,param_1,700);
        iVar5 = FUN_014ca838(&local_c64);
        if (iVar5 != 0) {
          *param_1 = 4;
          param_1[1] = iVar5;
          FUN_014c9e20(auStack_8e8);
        }
        goto LAB_014ea844;
      }
    }
  }
  FUN_014deb6c(&local_c64);
LAB_014ea844:
  if ((pcVar12 < (char *)0x80000000) ||
     ((undefined1 *)((uint)pcVar12 & 0xfffffffe) == &DAT_80000014)) {
    return;
  }
  FUN_014c81b0(param_2);
  return;
code_r0x014ea444:
  local_cbc = local_b3c;
  FUN_01bed4e2(auStack_3e0,&uStack_b38,0x84);
  local_c80 = local_ca4;
  goto LAB_014ea0a0;
}

