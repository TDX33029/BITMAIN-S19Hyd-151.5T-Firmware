// FUN_01937294 @ 01937294 size=1324 calls_out=14 calls_in=2
// strings: SSL_CERT_FILE | SSL_CERT_DIR | SSL_CERT_FILE | SSL_CERT_DIR

void FUN_01937294(undefined4 param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *local_108;
  uint local_104;
  uint local_fc;
  uint *local_f8;
  uint local_f4;
  int local_e4;
  uint local_e0;
  uint *local_dc;
  uint local_d8;
  uint *local_d4;
  uint local_d0;
  uint local_c8;
  uint *local_c4;
  uint uStack_c0;
  uint local_bc;
  uint *puStack_b8;
  uint uStack_b4;
  uint local_b0;
  uint *local_ac;
  uint local_a8;
  uint local_a4;
  uint *local_a0;
  uint local_9c;
  uint local_98;
  uint *local_94;
  uint local_90;
  uint uStack_8c;
  uint *puStack_88;
  uint uStack_84;
  
  FUN_019a3070(&local_98,"SSL_CERT_FILE",0xd);
  puVar3 = local_94;
  uVar6 = local_98;
  FUN_019a3070(&local_e4,"SSL_CERT_DIR",0xc);
  if (local_e4 == -0x80000000) {
    puVar9 = (uint *)&SUB_00000004;
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    uVar5 = 0;
    local_d0 = local_d0 & 0xffffff00;
    local_d4 = local_dc;
    local_d8 = local_e0;
    FUN_019bb724(&local_c8,&local_d8);
    uVar8 = 0;
    puVar9 = (uint *)&SUB_00000004;
    if (local_c8 != 0x80000000) {
      puVar9 = (uint *)thunk_FUN_01be5118(0x30);
      if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x30);
      }
      *puVar9 = local_c8;
      puVar9[1] = (uint)local_c4;
      puVar9[2] = uStack_c0;
      local_fc = 4;
      local_f4 = 1;
      iVar7 = 0xc;
      local_b0 = local_d8;
      local_ac = local_d4;
      local_a8 = local_d0;
      local_f8 = puVar9;
      while (uVar5 = local_f4, FUN_019bb724(&local_98,&local_b0), local_98 != 0x80000000) {
        if (uVar5 == local_fc) {
          FUN_006520b4(&local_fc,uVar5,2 - (local_a8 & 0xff) & 0xff,4,0xc);
          puVar9 = local_f8;
        }
        puVar2 = (uint *)((int)puVar9 + iVar7);
        local_f4 = uVar5 + 1;
        iVar7 = iVar7 + 0xc;
        *puVar2 = local_98;
        puVar2[1] = (uint)local_94;
        puVar2[2] = local_90;
      }
      uVar8 = local_fc;
      puVar9 = local_f8;
    }
    FUN_0134bd64(local_e4,local_e0);
  }
  local_fc = uVar8;
  local_f8 = puVar9;
  local_f4 = uVar5;
  if (uVar5 != 0 || uVar6 != 0x80000000) {
    FUN_019378f0(param_1,&local_fc);
    goto LAB_01937794;
  }
  FUN_019a3070(&local_98,"SSL_CERT_FILE",0xd);
  uVar5 = local_90;
  puVar9 = local_94;
  uVar6 = local_98;
  if (local_98 == 0x80000000) {
LAB_019374bc:
    puVar9 = puVar3;
    uVar5 = uVar8;
    uVar6 = 0x80000000;
  }
  else {
    FUN_019adea8(&local_98,local_94,local_90);
    if (local_98 == 1) {
      FUN_0069263c(local_94,local_90);
      FUN_0134bd64(uVar6,puVar9);
      uVar8 = uVar5;
      puVar3 = puVar9;
      goto LAB_019374bc;
    }
  }
  FUN_019a3070(&local_98,"SSL_CERT_DIR",0xc);
  uVar1 = local_90;
  puVar3 = local_94;
  uVar8 = local_98;
  if (local_98 == 0x80000000) {
LAB_0193751c:
    local_108 = (uint *)&SUB_00000004;
    local_104 = 0;
  }
  else {
    FUN_019adea8(&local_98,local_94,local_90);
    if (local_98 == 1) {
      FUN_0069263c(local_94,local_90);
      FUN_0134bd64(uVar8,puVar3);
      goto LAB_0193751c;
    }
    local_108 = (uint *)thunk_FUN_01be5118(0xc);
    if (local_108 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    local_104 = 1;
    *local_108 = uVar8;
    local_108[1] = (uint)puVar3;
    local_108[2] = uVar1;
  }
  local_b0 = local_104;
  local_ac = local_108;
  local_a8 = local_104;
  local_a4 = uVar6;
  local_a0 = puVar9;
  local_9c = uVar5;
  if (uVar6 == 0x80000000) {
    puVar3 = &local_98;
    iVar7 = 0;
    do {
      uVar4 = *(undefined4 *)((int)&DAT_01d06804 + iVar7);
      uVar6 = *(uint *)((int)&DAT_01d06808 + iVar7);
      FUN_019adea8(puVar3,uVar4,uVar6);
      if (local_98 != 1) {
        uVar5 = 0;
        if ((int)uVar6 < 0) goto LAB_019375cc;
        if (uVar6 == 0) {
          puVar3 = (uint *)&DAT_00000001;
          uVar8 = 0;
        }
        else {
          uVar5 = 1;
          puVar3 = (uint *)FUN_01298504(uVar6,1);
          uVar8 = uVar6;
          if (puVar3 == (uint *)0x0) goto LAB_019375cc;
        }
        FUN_01bed4e2(puVar3,uVar4,uVar6);
        goto LAB_0193761c;
      }
      FUN_0069263c(local_94,local_90);
      iVar7 = iVar7 + 8;
    } while (iVar7 != 0x40);
    uVar8 = 0x80000000;
LAB_0193761c:
    local_a4 = uVar8;
    local_a0 = puVar3;
    local_9c = uVar6;
  }
  iVar7 = 0;
  uVar6 = local_9c;
  while (iVar7 != 0x18) {
    uVar4 = *(undefined4 *)((int)&DAT_01d067ec + iVar7);
    uVar8 = *(uint *)((int)&DAT_01d067f0 + iVar7);
    FUN_019adea8(&local_98,uVar4,uVar8);
    if (local_98 == 1) {
      iVar7 = iVar7 + 8;
      FUN_0069263c(local_94,local_90);
    }
    else {
      uVar5 = 0;
      if ((int)uVar8 < 0) goto LAB_019375cc;
      if (uVar8 == 0) {
        uVar6 = 1;
      }
      else {
        uVar5 = 1;
        uVar6 = FUN_01298504(uVar8,1);
        if (uVar6 == 0) {
          uVar6 = uVar8;
LAB_019375cc:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar5,uVar6);
        }
        uVar5 = uVar8;
      }
      FUN_01bed4e2(uVar6,uVar4,uVar8);
      FUN_019adea8(&local_98,uVar6,uVar8);
      iVar7 = iVar7 + 8;
      if (local_98 == 1) {
        FUN_0069263c(local_94,local_90);
        FUN_0134bd64(uVar5,uVar6);
      }
      else {
        if (local_104 == local_b0) {
          FUN_018c4418(&local_b0);
          local_108 = local_ac;
        }
        local_a8 = local_104 + 1;
        puVar3 = local_108 + local_104 * 3;
        *puVar3 = uVar5;
        puVar3[1] = uVar6;
        puVar3[2] = uVar8;
        local_104 = local_a8;
      }
    }
  }
  local_c8 = local_b0;
  local_c4 = local_ac;
  uStack_c0 = local_a8;
  local_bc = local_a4;
  puStack_b8 = local_a0;
  uStack_b4 = local_9c;
  uStack_8c = local_a4;
  puStack_88 = local_a0;
  uStack_84 = local_9c;
  local_98 = local_b0;
  local_94 = local_ac;
  local_90 = local_a8;
  FUN_019378f0(param_1,&local_98);
  FUN_0164c0dc(&local_98);
LAB_01937794:
  FUN_0164c0dc(&local_fc);
  return;
}

