// FUN_014f218c @ 014f218c size=1232 calls_out=16 calls_in=1
// strings: sysupgrade_emmc_stm32mp157c_ii3_bmc1 | sysupgrade_emmc_stm32mp157c_ii3_bmc1

void FUN_014f218c(undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char ***pppcVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  char *unaff_r4;
  uint uVar8;
  uint uVar9;
  char **ppcVar10;
  bool bVar11;
  uint *local_2bc;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  int local_2a0;
  undefined4 local_29c;
  char **local_298;
  uint *puStack_294;
  uint uStack_290;
  uint uStack_28c;
  uint *local_288;
  uint *local_284;
  uint local_280;
  uint *local_27c;
  int local_278;
  char **local_270 [36];
  char **local_1e0;
  uint *local_1dc;
  undefined1 auStack_1d8 [136];
  char **local_150;
  uint *local_14c;
  uint local_148;
  uint local_144;
  undefined1 auStack_c0 [136];
  char *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined1 uStack_25;
  
  uVar8 = *param_2;
  uVar2 = 0x15;
  if ((int)uVar8 < 0) {
    uVar2 = uVar8 ^ 0x80000000;
  }
  if (uVar2 == 0x14) {
    local_2a4 = param_2[1];
    local_2ac = param_2[2];
    local_2a0 = local_2ac + param_2[3] * 0x10;
    local_29c = 0;
    local_2a8 = local_2ac;
    FUN_014d5288(&local_150,&local_2ac);
    puVar7 = local_14c;
    ppcVar10 = local_150;
    if (local_150 != (char **)&DAT_00000005) {
      FUN_01bed4e2(local_270,&local_148,0x84);
      if (ppcVar10 != (char **)&SUB_00000004) {
        FUN_01bed4e2(param_1 + 2,local_270,0x84);
        *param_1 = ppcVar10;
        param_1[1] = puVar7;
        FUN_01bed4e2(&local_1e0,param_1,0x8c);
        iVar6 = FUN_014ca838(&local_2ac);
        if (iVar6 == 0) goto LAB_014f2570;
        *param_1 = 4;
        param_1[1] = iVar6;
        if (local_1e0 == (char **)&DAT_00000003) goto LAB_014f2570;
        pppcVar4 = &local_1e0;
        goto LAB_014f256c;
      }
      puVar7 = (uint *)FUN_014dee0c(0,&DAT_01cf9fbc,&DAT_01d064b8);
    }
    *param_1 = 4;
    param_1[1] = puVar7;
    FUN_014deb6c(&local_2ac);
  }
  else {
    if (uVar2 != 0x15) {
      uVar5 = FUN_014c8278(param_2,&uStack_25,&DAT_01cf9d44);
      *param_1 = 4;
      param_1[1] = uVar5;
      return;
    }
    local_278 = 0;
    local_298 = (char **)0x80000015;
    ppcVar10 = (char **)&SUB_00000004;
    local_288 = (uint *)param_2[1];
    puVar7 = (uint *)((uint)&local_38 | 4);
    local_27c = local_288 + param_2[2] * 8;
    local_284 = local_288;
    local_280 = uVar8;
    while( true ) {
      puVar1 = local_284;
      bVar11 = local_284 == local_27c;
      if (!bVar11) {
        unaff_r4 = (char *)*local_284;
        local_284 = local_284 + 8;
      }
      if (bVar11 || unaff_r4 == (char *)0x80000015) break;
      local_278 = local_278 + 1;
      uVar2 = puVar1[2];
      uVar9 = puVar1[3];
      *puVar7 = puVar1[1];
      puVar7[1] = uVar2;
      puVar7[2] = uVar9;
      local_150 = (char **)puVar1[4];
      local_14c = (uint *)puVar1[5];
      local_148 = puVar1[6];
      local_144 = puVar1[7];
      local_38 = unaff_r4;
      if (local_298 != (char **)0x80000015) {
        FUN_014c81b0(&local_298);
      }
      uVar9 = local_30;
      uVar2 = local_34;
      local_298 = local_150;
      puStack_294 = local_14c;
      uStack_290 = local_148;
      uStack_28c = local_144;
      uVar3 = 0x15;
      if ((int)unaff_r4 < 0) {
        uVar3 = (uint)unaff_r4 ^ 0x80000000;
      }
      switch(uVar3) {
      case 1:
        iVar6 = 0;
        if ((local_34 & 0xff) != 0) {
          local_148 = local_34 & 0xff;
          local_144 = 0;
          local_150 = (char **)CONCAT31(local_150._1_3_,1);
          iVar6 = FUN_01967740(&local_150,&DAT_01cfa484,&DAT_01d064b8);
        }
        break;
      default:
        iVar6 = FUN_014c8278(&local_38,&uStack_25,&DAT_01cf9ed4);
        goto LAB_014f2658;
      case 4:
        iVar6 = 0;
        if (!(local_30 == 0 && local_2c == 0)) {
          local_148 = local_30;
          local_144 = local_2c;
          local_150 = (char **)CONCAT31(local_150._1_3_,1);
          iVar6 = FUN_01967740(&local_150,&DAT_01cfa484,&DAT_01d064b8);
        }
        break;
      case 0xc:
        iVar6 = FUN_014f36e8(local_30);
        goto LAB_014f238c;
      case 0xd:
        iVar6 = FUN_014f36e8(local_34,local_30);
        break;
      case 0xe:
        iVar6 = FUN_014ef7a8(local_30);
LAB_014f238c:
        FUN_019bb7e0(uVar2,uVar9);
        goto LAB_014f239c;
      case 0xf:
        iVar6 = FUN_014ef7a8(local_34,local_30);
      }
      FUN_014c81b0(&local_38);
LAB_014f239c:
      if (iVar6 != 0) {
LAB_014f2658:
        local_1dc = local_2bc;
        local_1e0 = ppcVar10;
LAB_014f2664:
        *param_1 = 4;
        param_1[1] = iVar6;
        if ((undefined1 *)0x1 < (undefined1 *)((int)ppcVar10 + -3)) {
          FUN_014c9d44(&local_1e0);
        }
        goto LAB_014f2684;
      }
      if (ppcVar10 != (char **)&SUB_00000004) {
        local_14c = (uint *)&DAT_0132b6a0;
        local_150 = &local_38;
        local_1dc = local_2bc;
        local_34 = 0x24;
        local_38 = "sysupgrade_emmc_stm32mp157c_ii3_bmc1";
        local_1e0 = ppcVar10;
        iVar6 = FUN_019676ac(&DAT_005ab34f,&local_150);
        goto LAB_014f2664;
      }
      unaff_r4 = (char *)0x4;
      FUN_014d5228(&local_150,&local_298);
      ppcVar10 = local_150;
      if (local_150 == (char **)&SUB_00000004) goto LAB_014f2594;
      local_2bc = local_14c;
      FUN_01bed4e2(auStack_1d8,&local_148,0x84);
    }
    if (ppcVar10 == (char **)&SUB_00000004) {
      ppcVar10 = (char **)&DAT_00000003;
      local_2bc = puVar1;
    }
    else {
      FUN_01bed4e2(auStack_c0,auStack_1d8,0x84);
    }
    *param_1 = ppcVar10;
    param_1[1] = local_2bc;
    FUN_01bed4e2(param_1 + 2,auStack_c0,0x84);
    FUN_01bed4e2(local_270,param_1,0x8c);
    iVar6 = FUN_014c9cac(&local_298);
    if (iVar6 == 0) goto LAB_014f2570;
    *param_1 = 4;
    param_1[1] = iVar6;
    if (local_270[0] == (char **)0x3) goto LAB_014f2570;
    pppcVar4 = local_270;
LAB_014f256c:
    FUN_014c9d44(pppcVar4);
  }
LAB_014f2570:
  if ((uVar8 < 0x80000000) || ((undefined1 *)(uVar8 & 0xfffffffe) == &DAT_80000014)) {
    return;
  }
  FUN_014c81b0(param_2);
  return;
LAB_014f2594:
  *param_1 = 4;
  param_1[1] = local_14c;
LAB_014f2684:
  FUN_014c9c60(&local_298);
  goto LAB_014f2570;
}

