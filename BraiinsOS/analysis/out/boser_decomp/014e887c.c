// FUN_014e887c @ 014e887c size=3456 calls_out=17 calls_in=2
// strings: linux_armv7 | linux_armv7 | linux_aarch64 | linux_aarch64 | linux_x86_64 | linux_x86_64

void FUN_014e887c(int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 *******unaff_r4;
  undefined4 *******pppppppuVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *******pppppppuVar11;
  undefined4 *******pppppppuVar12;
  uint uVar13;
  undefined4 *******pppppppuVar14;
  bool bVar15;
  undefined2 *local_a08;
  undefined2 *local_a04;
  undefined2 *local_a00;
  undefined2 *local_9f4;
  undefined4 *******local_9e0;
  undefined2 *local_9dc;
  undefined4 *******local_9d8;
  undefined2 *local_9d4;
  undefined4 *******local_9d0;
  undefined2 *local_9cc;
  undefined4 *******local_9c8;
  undefined4 *******local_9c4;
  undefined4 *******local_9c0;
  undefined4 *******local_9bc;
  undefined4 *******local_9b8;
  uint local_9ac;
  uint local_9a8;
  uint local_9a4;
  int local_9a0;
  undefined4 local_99c;
  undefined1 auStack_998 [136];
  undefined4 *******local_910;
  undefined2 *local_90c;
  uint uStack_908;
  undefined4 uStack_904;
  undefined1 auStack_884 [140];
  undefined1 auStack_7f8 [144];
  undefined4 *******local_768;
  undefined2 *puStack_764;
  uint uStack_760;
  undefined4 uStack_75c;
  undefined4 *local_758;
  undefined4 *local_754;
  uint local_750;
  undefined4 *local_74c;
  int local_748;
  undefined1 auStack_740 [560];
  undefined4 *******local_510;
  undefined2 *local_50c;
  undefined1 auStack_508 [136];
  undefined4 *******local_480;
  undefined2 *local_47c;
  undefined1 auStack_478 [136];
  undefined4 *******local_3f0;
  undefined2 *local_3ec;
  undefined1 auStack_3e8 [136];
  undefined4 *******local_360;
  undefined2 *local_35c;
  undefined1 auStack_358 [136];
  undefined4 *******local_2d0;
  uint local_2cc;
  uint local_2c8;
  undefined4 local_2c4;
  undefined1 auStack_248 [136];
  undefined1 auStack_1c0 [136];
  undefined1 auStack_138 [136];
  undefined1 auStack_b0 [139];
  undefined1 uStack_25;
  
  uVar7 = *param_2;
  uVar2 = 0x15;
  if ((int)uVar7 < 0) {
    uVar2 = uVar7 ^ 0x80000000;
  }
  if (uVar2 != 0x14) {
    if (uVar2 != 0x15) {
      iVar4 = FUN_014c8278(param_2,&uStack_25,&DAT_01cf9d64);
      *param_1 = 4;
      param_1[1] = iVar4;
      return;
    }
    local_748 = 0;
    local_768 = (undefined4 *******)0x80000015;
    puVar3 = (undefined4 *)((uint)&local_2d0 | 4);
    local_9c8 = (undefined4 *******)&SUB_00000004;
    local_9cc = local_50c;
    local_9d4 = local_47c;
    local_9dc = local_3ec;
    local_9d0 = (undefined4 *******)&SUB_00000004;
    local_9d8 = (undefined4 *******)&SUB_00000004;
    local_758 = (undefined4 *)param_2[1];
    local_9e0 = (undefined4 *******)&SUB_00000004;
    local_74c = local_758 + param_2[2] * 8;
    local_9bc = (undefined4 *******)&SUB_00000004;
    local_9c0 = (undefined4 *******)&SUB_00000004;
    local_9b8 = (undefined4 *******)&SUB_00000004;
    local_510 = (undefined4 *******)0x4;
    local_480 = (undefined4 *******)0x4;
    local_3f0 = (undefined4 *******)0x4;
    local_9c4 = (undefined4 *******)&SUB_00000004;
    local_754 = local_758;
    local_750 = uVar7;
LAB_014e8998:
    puVar1 = local_754;
    bVar15 = local_754 == local_74c;
    if (!bVar15) {
      unaff_r4 = (undefined4 *******)*local_754;
      local_754 = local_754 + 8;
    }
    if (bVar15 || unaff_r4 == (undefined4 *******)0x80000015) goto switchD_014e8b20_caseD_4;
    local_748 = local_748 + 1;
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    *puVar3 = puVar1[1];
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
    local_910 = (undefined4 *******)puVar1[4];
    local_90c = (undefined2 *)puVar1[5];
    uStack_908 = puVar1[6];
    uStack_904 = puVar1[7];
    local_2d0 = unaff_r4;
    if (local_768 != (undefined4 *******)0x80000015) {
      FUN_014c81b0(&local_768);
    }
    uVar13 = local_2c8;
    uVar2 = local_2cc;
    local_768 = local_910;
    puStack_764 = local_90c;
    uStack_760 = uStack_908;
    uStack_75c = uStack_904;
    uVar10 = 0x15;
    if ((int)unaff_r4 < 0) {
      uVar10 = (uint)unaff_r4 ^ 0x80000000;
    }
    uVar8 = local_2c4;
    switch(uVar10) {
    case 1:
      uVar13 = local_2cc & 0xff;
      uVar8 = 0;
    case 4:
      FUN_014dbb88(&local_910,&switchD_014e8a30::switchdataD_014e8a34,uVar13,uVar8);
      goto LAB_014e8ae0;
    default:
      local_90c = (undefined2 *)FUN_014c8278(&local_2d0,&uStack_25,&DAT_01cf9f14);
      local_910 = (undefined4 *******)CONCAT31(local_910._1_3_,1);
      goto LAB_014e8af8;
    case 0xc:
      FUN_014ee640(&local_910,local_2c8,local_2c4);
      goto LAB_014e8ad4;
    case 0xd:
      FUN_014ee640(&local_910,local_2cc,local_2c8);
      break;
    case 0xe:
      FUN_014e831c(&local_910,local_2c8,local_2c4);
LAB_014e8ad4:
      FUN_019bb7e0(uVar2,uVar13);
LAB_014e8ae0:
      if ((uVar10 | 2) != 0xe) break;
      goto LAB_014e8af8;
    case 0xf:
      FUN_014e831c(&local_910,local_2cc,local_2c8);
    }
    FUN_014c81b0(&local_2d0);
LAB_014e8af8:
    if ((char)local_910 == '\0') {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((uint)local_910 >> 8 & 0xff) {
      case 0:
        if (local_9b8 == (undefined4 *******)&SUB_00000004) {
          FUN_014d5228(&local_910,&local_768);
          local_a08 = local_90c;
          unaff_r4 = local_910;
          if (local_910 == (undefined4 *******)&SUB_00000004) {
            local_9b8 = (undefined4 *******)&SUB_00000004;
LAB_014e9304:
            local_35c = local_9f4;
            local_360 = local_9e0;
            local_3ec = local_9dc;
            local_3f0 = local_9d8;
            local_47c = local_9d4;
            local_480 = local_9d0;
            local_50c = local_9cc;
            local_510 = local_9c8;
            *param_1 = 4;
            param_1[1] = (int)local_90c;
            goto LAB_014e9308;
          }
          FUN_01bed4e2(&local_2d0,&uStack_908,0x84);
          FUN_01bed4e2(auStack_508,&local_2d0,0x84);
          local_9cc = local_a08;
          local_9b8 = unaff_r4;
          local_9c8 = unaff_r4;
          goto LAB_014e8998;
        }
        local_3ec = local_9dc;
        local_3f0 = local_9d8;
        local_47c = local_9d4;
        local_480 = local_9d0;
        local_50c = local_9cc;
        local_510 = local_9c8;
        local_35c = local_9f4;
        local_90c = &DAT_0132b6a0;
        local_910 = &local_2d0;
        local_360 = local_9e0;
        local_2cc = 0xc;
        local_2d0 = (undefined4 *******)0x4a54c7;
        iVar4 = FUN_019676ac(&DAT_005ab34f,&local_910);
        break;
      case 1:
        if (local_9c0 == (undefined4 *******)&SUB_00000004) {
          FUN_014d5228(&local_910,&local_768);
          local_a04 = local_90c;
          unaff_r4 = local_910;
          if (local_910 == (undefined4 *******)&SUB_00000004) {
            local_9c0 = (undefined4 *******)&SUB_00000004;
            goto LAB_014e9304;
          }
          FUN_01bed4e2(&local_2d0,&uStack_908,0x84);
          FUN_01bed4e2(auStack_478,&local_2d0,0x84);
          local_9d4 = local_a04;
          local_9c0 = unaff_r4;
          local_9d0 = unaff_r4;
          goto LAB_014e8998;
        }
        local_3ec = local_9dc;
        local_3f0 = local_9d8;
        local_47c = local_9d4;
        local_480 = local_9d0;
        local_50c = local_9cc;
        local_510 = local_9c8;
        local_35c = local_9f4;
        local_90c = &DAT_0132b6a0;
        local_910 = &local_2d0;
        local_360 = local_9e0;
        local_2cc = 0xd;
        local_2d0 = (undefined4 *******)0x4a54d3;
        iVar4 = FUN_019676ac(&DAT_005ab34f,&local_910);
        break;
      case 2:
        if (local_9bc == (undefined4 *******)&SUB_00000004) {
          FUN_014d5228(&local_910,&local_768);
          local_a00 = local_90c;
          unaff_r4 = local_910;
          if (local_910 == (undefined4 *******)&SUB_00000004) {
            local_9bc = (undefined4 *******)&SUB_00000004;
            goto LAB_014e9304;
          }
          FUN_01bed4e2(&local_2d0,&uStack_908,0x84);
          FUN_01bed4e2(auStack_3e8,&local_2d0,0x84);
          local_9dc = local_a00;
          local_9bc = unaff_r4;
          local_9d8 = unaff_r4;
          goto LAB_014e8998;
        }
        local_3ec = local_9dc;
        local_3f0 = local_9d8;
        local_47c = local_9d4;
        local_480 = local_9d0;
        local_50c = local_9cc;
        local_510 = local_9c8;
        local_35c = local_9f4;
        local_90c = &DAT_0132b6a0;
        local_910 = &local_2d0;
        local_360 = local_9e0;
        local_2cc = 0xb;
        local_2d0 = (undefined4 *******)0x4a54e0;
        iVar4 = FUN_019676ac(&DAT_005ab34f,&local_910);
        break;
      case 3:
        if (local_9c4 != (undefined4 *******)&SUB_00000004) {
          local_3ec = local_9dc;
          local_3f0 = local_9d8;
          local_47c = local_9d4;
          local_480 = local_9d0;
          local_50c = local_9cc;
          local_510 = local_9c8;
          local_35c = local_9f4;
          local_90c = &DAT_0132b6a0;
          local_910 = &local_2d0;
          local_360 = local_9e0;
          local_2cc = 0xe;
          local_2d0 = (undefined4 *******)0x4a54eb;
          iVar4 = FUN_019676ac(&DAT_005ab34f,&local_910);
          break;
        }
        FUN_014d5228(&local_910,&local_768);
        unaff_r4 = local_910;
        if (local_910 != (undefined4 *******)&SUB_00000004) goto code_r0x014e8c50;
        local_3ec = local_9dc;
        local_3f0 = local_9d8;
        local_47c = local_9d4;
        local_480 = local_9d0;
        local_50c = local_9cc;
        local_510 = local_9c8;
        *param_1 = 4;
        param_1[1] = (int)local_90c;
LAB_014e932c:
        if (local_9bc < &DAT_00000003) {
          FUN_014c9d44(&local_3f0);
        }
        if (local_9c0 < &DAT_00000003) {
          FUN_014c9d44(&local_480);
        }
        if (local_9b8 < &DAT_00000003) {
          FUN_014c9d44(&local_510);
        }
        FUN_014c9c60(&local_768);
        goto LAB_014e8ff8;
      case 4:
switchD_014e8b20_caseD_4:
        local_3ec = local_9dc;
        local_3f0 = local_9d8;
        local_47c = local_9d4;
        local_480 = local_9d0;
        local_50c = local_9cc;
        local_510 = local_9c8;
        pppppppuVar14 = (undefined4 *******)&DAT_00000003;
        if (local_9b8 != (undefined4 *******)&SUB_00000004) {
          FUN_01bed4e2(auStack_248,auStack_508,0x84);
          pppppppuVar14 = local_9b8;
        }
        pppppppuVar12 = (undefined4 *******)&DAT_00000003;
        if (local_9c0 != (undefined4 *******)&SUB_00000004) {
          FUN_01bed4e2(auStack_1c0,auStack_478,0x84);
          pppppppuVar12 = local_9c0;
        }
        pppppppuVar11 = (undefined4 *******)&DAT_00000003;
        if (local_9bc != (undefined4 *******)&SUB_00000004) {
          FUN_01bed4e2(auStack_138,auStack_3e8,0x84);
          pppppppuVar11 = local_9bc;
        }
        pppppppuVar6 = (undefined4 *******)&DAT_00000003;
        if (local_9c4 != (undefined4 *******)&SUB_00000004) {
          FUN_01bed4e2(auStack_b0,auStack_358,0x84);
          pppppppuVar6 = local_9c4;
        }
        *param_1 = (int)pppppppuVar14;
        param_1[1] = (int)local_a08;
        FUN_01bed4e2(param_1 + 2,auStack_248,0x84);
        param_1[0x23] = (int)pppppppuVar12;
        param_1[0x24] = (int)local_a04;
        FUN_01bed4e2(param_1 + 0x25,auStack_1c0,0x84);
        param_1[0x47] = (int)local_a00;
        param_1[0x46] = (int)pppppppuVar11;
        FUN_01bed4e2(param_1 + 0x48,auStack_138,0x84);
        param_1[0x6a] = (int)local_9f4;
        param_1[0x69] = (int)pppppppuVar6;
        FUN_01bed4e2(param_1 + 0x6b,auStack_b0,0x84);
        FUN_01bed4e2(auStack_740,param_1,0x230);
        iVar4 = FUN_014c9cac(&local_768);
        if (iVar4 != 0) {
          *param_1 = 4;
          param_1[1] = iVar4;
          FUN_014c9f0c(auStack_740);
        }
        goto LAB_014e8ff8;
      }
      *param_1 = 4;
      param_1[1] = iVar4;
    }
    else {
      *param_1 = 4;
      param_1[1] = (int)local_90c;
      local_3ec = local_9dc;
      local_3f0 = local_9d8;
      local_47c = local_9d4;
      local_480 = local_9d0;
      local_50c = local_9cc;
      local_510 = local_9c8;
      local_35c = local_9f4;
      local_360 = local_9e0;
    }
LAB_014e9308:
    if ((undefined1 *)0x1 < (undefined1 *)((int)local_9c4 + -3)) {
      FUN_014c9d44(&local_360);
    }
    goto LAB_014e932c;
  }
  local_9a4 = param_2[1];
  local_9ac = param_2[2];
  local_9a0 = local_9ac + param_2[3] * 0x10;
  local_99c = 0;
  local_9a8 = local_9ac;
  FUN_014d5288(&local_910,&local_9ac);
  puVar5 = local_90c;
  pppppppuVar14 = local_910;
  if (local_910 == (undefined4 *******)&DAT_00000005) {
LAB_014e8d5c:
    *param_1 = 4;
    param_1[1] = (int)puVar5;
  }
  else {
    FUN_01bed4e2(auStack_998,&uStack_908,0x84);
    if (pppppppuVar14 == (undefined4 *******)&SUB_00000004) {
      puVar5 = (undefined2 *)FUN_014dee0c(0,&DAT_01cf9fb4,&DAT_01d064b8);
      goto LAB_014e8d5c;
    }
    FUN_01bed4e2(auStack_478,auStack_998,0x84);
    local_47c = puVar5;
    local_480 = pppppppuVar14;
    FUN_014d5288(&local_910,&local_9ac);
    puVar5 = local_90c;
    pppppppuVar12 = local_910;
    if (local_910 == (undefined4 *******)&DAT_00000005) {
LAB_014e8f44:
      *param_1 = 4;
      param_1[1] = (int)puVar5;
LAB_014e8fdc:
      if (pppppppuVar14 != (undefined4 *******)&DAT_00000003) {
        FUN_014c9d44(&local_480);
      }
    }
    else {
      FUN_01bed4e2(&local_2d0,&uStack_908,0x84);
      if (pppppppuVar12 == (undefined4 *******)&SUB_00000004) {
        puVar5 = (undefined2 *)FUN_014dee0c(1,&DAT_01cf9fb4,&DAT_01d064b8);
        goto LAB_014e8f44;
      }
      FUN_01bed4e2(auStack_3e8,&local_2d0,0x84);
      local_3ec = puVar5;
      local_3f0 = pppppppuVar12;
      FUN_014d5288(&local_910,&local_9ac);
      puVar5 = local_90c;
      pppppppuVar11 = local_910;
      if (local_910 == (undefined4 *******)&DAT_00000005) {
LAB_014e8fb8:
        *param_1 = 4;
        param_1[1] = (int)puVar5;
LAB_014e8fc0:
        if (pppppppuVar12 != (undefined4 *******)&DAT_00000003) {
          FUN_014c9d44(&local_3f0);
        }
        goto LAB_014e8fdc;
      }
      FUN_01bed4e2(auStack_b0,&uStack_908,0x84);
      if (pppppppuVar11 == (undefined4 *******)&SUB_00000004) {
        puVar5 = (undefined2 *)FUN_014dee0c(2,&DAT_01cf9fb4,&DAT_01d064b8);
        goto LAB_014e8fb8;
      }
      FUN_01bed4e2(auStack_358,auStack_b0,0x84);
      local_35c = puVar5;
      local_360 = pppppppuVar11;
      FUN_014d5288(&local_910,&local_9ac);
      puVar5 = local_90c;
      pppppppuVar6 = local_910;
      if (local_910 == (undefined4 *******)&DAT_00000005) {
LAB_014e9080:
        *param_1 = 4;
        param_1[1] = (int)puVar5;
        if (pppppppuVar11 != (undefined4 *******)&DAT_00000003) {
          FUN_014c9d44(&local_360);
        }
        goto LAB_014e8fc0;
      }
      FUN_01bed4e2(&local_510,&uStack_908,0x84);
      if (pppppppuVar6 == (undefined4 *******)&SUB_00000004) {
        puVar5 = (undefined2 *)FUN_014dee0c(3,&DAT_01cf9fb4,&DAT_01d064b8);
        goto LAB_014e9080;
      }
      FUN_01bed4e2(param_1 + 0x6b,&local_510,0x84);
      FUN_01bed4e2(&local_910,&local_480,0x8c);
      FUN_01bed4e2(auStack_884,&local_3f0,0x8c);
      FUN_01bed4e2(auStack_7f8,&local_360,0x8c);
      FUN_01bed4e2(param_1,&local_910,0x1a4);
      param_1[0x6a] = (int)puVar5;
      param_1[0x69] = (int)pppppppuVar6;
      if (*param_1 != 4) {
        FUN_01bed4e2(auStack_740,param_1,0x230);
        iVar4 = FUN_014ca838(&local_9ac);
        if (iVar4 != 0) {
          *param_1 = 4;
          param_1[1] = iVar4;
          FUN_014c9f0c(auStack_740);
        }
        goto LAB_014e8ff8;
      }
    }
  }
  FUN_014deb6c(&local_9ac);
LAB_014e8ff8:
  if ((uVar7 < 0x80000000) || ((undefined1 *)(uVar7 & 0xfffffffe) == &DAT_80000014)) {
    return;
  }
  FUN_014c81b0(param_2);
  return;
code_r0x014e8c50:
  local_9f4 = local_90c;
  FUN_01bed4e2(auStack_358,&uStack_908,0x84);
  local_9e0 = unaff_r4;
  local_9c4 = unaff_r4;
  goto LAB_014e8998;
}

