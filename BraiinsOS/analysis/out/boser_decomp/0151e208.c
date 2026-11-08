// FUN_0151e208 @ 0151e208 size=2068 calls_out=21 calls_in=1
// strings: additionalProperties | patternProperties | properties | properties | properties | properties

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0151e208(undefined4 *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined8 uVar16;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  uint local_1c8;
  undefined **local_1c4;
  uint local_1c0;
  uint local_1bc;
  undefined **local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  undefined4 local_18c;
  undefined4 local_188;
  uint local_180;
  undefined **local_17c;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  undefined8 local_a4;
  uint uStack_9c;
  undefined1 local_40;
  uint local_38;
  undefined **local_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar13 = *param_3;
  uVar14 = param_3[1];
  pcVar4 = (char *)FUN_0196b3a8(uVar13,uVar14,"additionalProperties",0x14);
  if (pcVar4 != (char *)0x0) {
    uVar10 = 0;
    if (*pcVar4 == '\x01') {
      if (pcVar4[1] == '\0') goto LAB_0151e6f0;
    }
    else if (*pcVar4 == '\x05') goto LAB_0151e6f0;
  }
  if (*param_4 != '\x05') {
    uVar16 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                          "properties",10);
    uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
    piVar8 = (int *)uVar16;
    do {
      iVar5 = *piVar8;
      bVar15 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar15);
    *piVar8 = iVar5 + 1;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x151ea28);
      (*pcVar1)();
    }
    uVar16 = FUN_015321a0();
    uVar13 = FUN_015956e0(piVar8,uVar13,piVar8,uVar13,uVar16,param_4,0x20);
    param_1[1] = 0;
    param_1[2] = uVar13;
    uVar10 = 1;
    goto LAB_0151e6f0;
  }
  uVar12 = *(uint *)(param_4 + 0xc);
  if (0xe < uVar12) {
    FUN_01526248(&local_168,param_2,"properties",10);
    FUN_0153bf58(&local_1f8,uVar12);
    local_1c0 = *(uint *)(param_4 + 4);
    local_1bc = *(uint *)(param_4 + 8);
    if (local_1c0 == 0) {
      uVar12 = 0;
    }
    local_1c8 = (uint)(local_1c0 != 0);
    local_1b4 = 0;
    local_1c4 = (undefined **)0x0;
    local_1b8 = (undefined **)local_1c8;
    local_1b0 = local_1c0;
    local_1ac = local_1bc;
    local_1a8 = uVar12;
    while( true ) {
      uVar16 = FUN_01a41998(&local_1c8);
      uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
      iVar5 = (int)uVar16;
      if (iVar5 == 0) break;
      FUN_01526248(&local_c8,&local_168,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
      FUN_006666fc(&local_18c,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
      uVar3 = FUN_016731b0(local_40,uVar13);
      FUN_0156aca8(&local_180,&local_c8,uVar13,uVar3);
      if (local_180 == 0) {
        FUN_019bb7e0(local_18c,local_188);
        FUN_014ff9e0(&local_c8);
        FUN_0152aae0(&local_1f8);
        puVar9 = (uint *)0x0;
        goto LAB_0151e528;
      }
      local_30 = local_178;
      uStack_2c = uStack_174;
      uStack_28 = uStack_170;
      local_34 = local_17c;
      local_38 = local_180;
      FUN_01541508(&local_1a0,&local_1f8,&local_18c,&local_38);
      if (local_1a0 != 0) {
        FUN_014fdb74(&local_1a0);
      }
      FUN_014ff9e0(&local_c8);
    }
    local_c8 = local_1f8;
    local_c4 = local_1f4;
    local_c0 = local_1f0;
    local_bc = local_1ec;
    local_b8 = local_1e8;
    local_b4 = local_1e4;
    local_b0 = local_1e0;
    local_ac = local_1dc;
    local_a8 = local_1d8;
    local_a4._0_4_ = uStack_1d4;
    local_a4._4_4_ = uStack_1d0;
    uStack_9c = uStack_1cc;
    puVar9 = (uint *)thunk_FUN_01be5118(0x30);
    if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x30);
    }
    local_17c = &PTR_LAB_01cfaa50;
    *puVar9 = local_1f8;
    puVar9[1] = local_1f4;
    puVar9[2] = local_1f0;
    puVar9[3] = local_1ec;
    puVar9[4] = local_1e8;
    puVar9[5] = local_1e4;
    puVar9[6] = local_1e0;
    puVar9[7] = local_1dc;
    puVar9[8] = local_1d8;
    puVar9[9] = uStack_1d4;
    puVar9[10] = uStack_1d0;
    puVar9[0xb] = uStack_1cc;
LAB_0151e528:
    FUN_014ff9e0(&local_168);
    uVar10 = 1;
    param_1[1] = puVar9;
    param_1[2] = local_17c;
    goto LAB_0151e6f0;
  }
  iVar5 = FUN_0196b3a8(uVar13,uVar14,"patternProperties",0x11);
  if ((iVar5 == 0) &&
     (pbVar6 = (byte *)FUN_0196b3a8(uVar13,uVar14,&DAT_0056fdb8,8), pbVar6 != (byte *)0x0)) {
    uVar11 = (uint)*pbVar6;
    bVar15 = uVar11 == 4;
    if (bVar15) {
      uVar11 = *(uint *)(pbVar6 + 0xc);
    }
    if (!bVar15 || uVar11 != 2) goto LAB_0151e2d8;
    pcVar4 = *(char **)(pbVar6 + 8);
    cVar2 = *pcVar4;
    bVar15 = cVar2 != '\x03';
    if (!bVar15) {
      cVar2 = pcVar4[0x18];
    }
    if (bVar15 || cVar2 != '\x03') goto LAB_0151e2d8;
    FUN_006666fc(&local_168,*(undefined4 *)(pcVar4 + 8),*(undefined4 *)(pcVar4 + 0xc));
    FUN_006666fc(&local_c8,*(undefined4 *)(pcVar4 + 0x20),*(undefined4 *)(pcVar4 + 0x24));
    if (local_168 == 0x80000000) goto LAB_0151e2d8;
    FUN_01526248(&local_168,param_2,"properties",10);
    uVar11 = 0;
    if (uVar12 == 0) {
      uVar7 = 4;
      local_1a0 = 0;
    }
    else {
      uVar7 = FUN_01298504(uVar12 << 5,4);
      if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,uVar12 << 5);
      }
      local_1a0 = uVar12;
    }
    local_1f0 = *(uint *)(param_4 + 4);
    local_198 = 0;
    local_1ec = *(uint *)(param_4 + 8);
    if (local_1f0 == 0) {
      uVar12 = 0;
    }
    local_1f8 = (uint)(local_1f0 != 0);
    local_1e4 = 0;
    local_1f4 = 0;
    local_1e8 = local_1f8;
    local_1e0 = local_1f0;
    local_1dc = local_1ec;
    local_1d8 = uVar12;
    local_19c = uVar7;
    while( true ) {
      uVar16 = FUN_01a41998(&local_1f8);
      uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
      iVar5 = (int)uVar16;
      if (iVar5 == 0) break;
      FUN_01526248(&local_c8,&local_168,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
      FUN_006666fc(&local_180,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
      uVar3 = FUN_016731b0(local_40,uVar13);
      FUN_0156aca8(&local_38,&local_c8,uVar13,uVar3);
      if (local_38 == 0) {
        FUN_019bb7e0(local_180,local_17c);
        FUN_014ff9e0(&local_c8);
        FUN_01501cbc(&local_1a0);
        FUN_014ff9e0(&local_168);
        FUN_019bb7e0(local_c8,local_c4);
        FUN_019bb7e0(local_168,local_164);
        puVar9 = (uint *)0x0;
        goto LAB_0151e6e0;
      }
      local_1b4 = local_30;
      local_1b0 = uStack_2c;
      local_1ac = uStack_28;
      local_1c8 = local_180;
      local_1c4 = local_17c;
      local_1c0 = local_178;
      local_1b8 = local_34;
      local_1bc = local_38;
      if (uVar11 == local_1a0) {
        FUN_0155dd20(&local_1a0);
        uVar7 = local_19c;
      }
      puVar9 = (uint *)(uVar7 + uVar11 * 0x20);
      uVar11 = uVar11 + 1;
      *puVar9 = local_1c8;
      puVar9[1] = (uint)local_1c4;
      puVar9[2] = local_1c0;
      puVar9[3] = local_1bc;
      puVar9[4] = (uint)local_1b8;
      puVar9[5] = local_1b4;
      puVar9[6] = local_1b0;
      puVar9[7] = local_1ac;
      local_198 = uVar11;
      FUN_014ff9e0(&local_c8);
    }
    local_a4 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                            &DAT_0056fdb8,8);
    local_a8 = local_c0;
    local_ac = local_c4;
    local_b0 = local_c8;
    local_b4 = local_160;
    local_b8 = local_164;
    local_bc = local_168;
    local_c8 = local_1a0;
    local_c4 = local_19c;
    local_c0 = local_198;
    puVar9 = (uint *)thunk_FUN_01be5118(0x2c);
    if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x2c);
    }
    *puVar9 = local_c8;
    puVar9[1] = local_c4;
    puVar9[2] = local_c0;
    puVar9[3] = local_bc;
    puVar9[4] = local_b8;
    puVar9[5] = local_b4;
    puVar9[6] = local_b0;
    puVar9[7] = local_ac;
    puVar9[8] = local_a8;
    *(undefined8 *)(puVar9 + 9) = local_a4;
    FUN_014ff9e0(&local_168);
    local_34 = (undefined **)&DAT_01cfaa90;
  }
  else {
LAB_0151e2d8:
    FUN_01526248(&local_168,param_2,"properties",10);
    uVar11 = 0;
    if (uVar12 == 0) {
      uVar7 = 4;
      local_d8 = 0;
    }
    else {
      uVar7 = FUN_01298504(uVar12 << 5,4);
      if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,uVar12 << 5);
      }
      local_d8 = uVar12;
    }
    local_1f0 = *(uint *)(param_4 + 4);
    local_1ec = *(uint *)(param_4 + 8);
    if (local_1f0 == 0) {
      uVar12 = 0;
    }
    local_1f8 = (uint)(local_1f0 != 0);
    local_d0 = 0;
    local_1e4 = 0;
    local_1f4 = 0;
    local_1e8 = local_1f8;
    local_1e0 = local_1f0;
    local_1dc = local_1ec;
    local_1d8 = uVar12;
    local_d4 = uVar7;
    while( true ) {
      uVar16 = FUN_01a41998(&local_1f8);
      uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
      iVar5 = (int)uVar16;
      if (iVar5 == 0) break;
      FUN_01526248(&local_c8,&local_168,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
      FUN_006666fc(&local_180,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
      uVar3 = FUN_016731b0(local_40,uVar13);
      FUN_0156aca8(&local_38,&local_c8,uVar13,uVar3);
      if (local_38 == 0) {
        FUN_019bb7e0(local_180,local_17c);
        FUN_014ff9e0(&local_c8);
        FUN_01501cbc(&local_d8);
        puVar9 = (uint *)0x0;
        goto LAB_0151e6d8;
      }
      local_1b4 = local_30;
      local_1b0 = uStack_2c;
      local_1ac = uStack_28;
      local_1c8 = local_180;
      local_1c4 = local_17c;
      local_1c0 = local_178;
      local_1b8 = local_34;
      local_1bc = local_38;
      if (uVar11 == local_d8) {
        FUN_0155dd20(&local_d8);
        uVar7 = local_d4;
      }
      puVar9 = (uint *)(uVar7 + uVar11 * 0x20);
      uVar11 = uVar11 + 1;
      *puVar9 = local_1c8;
      puVar9[1] = (uint)local_1c4;
      puVar9[2] = local_1c0;
      puVar9[3] = local_1bc;
      puVar9[4] = (uint)local_1b8;
      puVar9[5] = local_1b4;
      puVar9[6] = local_1b0;
      puVar9[7] = local_1ac;
      local_d0 = uVar11;
      FUN_014ff9e0(&local_c8);
    }
    puVar9 = (uint *)thunk_FUN_01be5118(0xc);
    if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    local_34 = &PTR_LAB_01cfaa70;
    *puVar9 = local_d8;
    puVar9[1] = local_d4;
    puVar9[2] = local_d0;
LAB_0151e6d8:
    FUN_014ff9e0(&local_168);
  }
LAB_0151e6e0:
  uVar10 = 1;
  param_1[1] = puVar9;
  param_1[2] = local_34;
LAB_0151e6f0:
  *param_1 = uVar10;
  return;
}

