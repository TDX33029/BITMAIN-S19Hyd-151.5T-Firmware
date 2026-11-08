// FUN_014af050 @ 014af050 size=2184 calls_out=29 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014af050(uint *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 uVar7;
  uint extraout_r2;
  uint uVar8;
  uint extraout_r3;
  int iVar9;
  bool bVar10;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint local_dc;
  uint uStack_d8;
  uint local_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0;
  int local_a8;
  undefined1 local_a4;
  undefined4 local_a0 [2];
  undefined4 local_98;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined4 local_50;
  uint local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  
  uVar8 = *(uint *)(param_2 + 0x14);
  if (*(uint *)(param_2 + 0x10) <= uVar8) {
LAB_014af0a4:
    local_c8 = 5;
LAB_014af0a8:
    uVar8 = FUN_012c6b30(param_2,&local_c8);
LAB_014af38c:
    param_1[1] = uVar8;
    *(undefined1 *)param_1 = 6;
    return;
  }
  while( true ) {
    uVar4 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar8);
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x800013U) == 0)) break;
    uVar8 = uVar8 + 1;
    *(uint *)(param_2 + 0x14) = uVar8;
    if (*(uint *)(param_2 + 0x10) == uVar8) goto LAB_014af0a4;
  }
  if (uVar4 < 0x66) {
    if (uVar4 == 0x22) {
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0x14) = uVar8 + 1;
      FUN_01968828(&local_c8,param_2 + 0xc,param_2);
      if (local_c8 == 2) {
        param_1[1] = local_c4;
        goto LAB_014af3d4;
      }
      if ((local_c8 & 1) == 0) {
        FUN_012739c4(&local_f8,local_c4,local_c0);
      }
      else {
        FUN_01273944(&local_f8);
      }
      goto LAB_014af59c;
    }
    if (uVar4 != 0x2d) {
      if (uVar4 != 0x5b) goto LAB_014af320;
      cVar1 = *(char *)(param_2 + 0x1c) + -1;
      *(char *)(param_2 + 0x1c) = cVar1;
      if (cVar1 == '\0') {
        local_c8 = 0x18;
        uVar8 = FUN_012c6b30(param_2,&local_c8);
        *(undefined1 *)param_1 = 6;
        param_1[1] = uVar8;
        return;
      }
      *(uint *)(param_2 + 0x14) = uVar8 + 1;
      local_30 = CONCAT31(local_30._1_3_,1);
      local_fc = 8;
      local_64 = 8;
      iVar9 = 0;
      local_60 = 0;
      local_68 = 0;
      local_34 = param_2;
      goto LAB_014af1a8;
    }
    *(uint *)(param_2 + 0x14) = uVar8 + 1;
    uVar7 = 0;
LAB_014af3b0:
    FUN_012c751c(&local_c8,param_2,uVar7);
    if (!(local_c8 != 3 || local_c4 != 0)) goto LAB_014af3cc;
    FUN_01964e98(&local_f8,&local_c8);
    goto LAB_014af59c;
  }
  if (uVar4 < 0x74) {
    if (uVar4 == 0x66) {
      *(uint *)(param_2 + 0x14) = uVar8 + 1;
      uVar8 = FUN_012c6b8c(param_2,&DAT_0056efac,4);
      if (uVar8 == 0) {
        uVar3 = 1;
        goto LAB_014af484;
      }
      goto LAB_014af38c;
    }
    if (uVar4 == 0x6e) {
      *(uint *)(param_2 + 0x14) = uVar8 + 1;
      uVar8 = FUN_012c6b8c(param_2,"ull",3);
      if (uVar8 != 0) goto LAB_014af38c;
      local_f8 = local_f8 & 0xffffff00;
      goto LAB_014af5a8;
    }
LAB_014af320:
    if (9 < uVar4 - 0x30) {
      local_c8 = 10;
      uVar8 = FUN_012c6b30(param_2,&local_c8);
      goto LAB_014af89c;
    }
    uVar7 = 1;
    goto LAB_014af3b0;
  }
  if (uVar4 == 0x74) {
    *(uint *)(param_2 + 0x14) = uVar8 + 1;
    uVar8 = FUN_012c6b8c(param_2,"rue",3);
    if (uVar8 != 0) goto LAB_014af38c;
    uVar3 = 0x101;
LAB_014af484:
    local_f8 = CONCAT22(local_f8._2_2_,uVar3);
    goto LAB_014af5a8;
  }
  if (uVar4 != 0x7b) goto LAB_014af320;
  cVar1 = *(char *)(param_2 + 0x1c) + -1;
  *(char *)(param_2 + 0x1c) = cVar1;
  if (cVar1 == '\0') {
    local_c8 = 0x18;
    goto LAB_014af0a8;
  }
  *(uint *)(param_2 + 0x14) = uVar8 + 1;
  local_a4 = 1;
  local_a8 = param_2;
  FUN_01278730(&local_c8,&local_a8);
  iVar9 = local_a8;
  if ((char)local_c8 == '\x01') {
    uVar8 = local_c4;
  }
  else {
    if (local_c8._1_1_ != '\x01') {
      local_d4 = 0;
      local_dc = 0;
      uVar2 = 5;
      goto LAB_014af518;
    }
    *(undefined4 *)(local_a8 + 8) = 0;
    *(int *)(local_a8 + 0x14) = *(int *)(local_a8 + 0x14) + 1;
    FUN_01968828(&local_c8,local_a8 + 0xc,local_a8);
    uVar8 = local_c4;
    if (local_c8 != 2) {
      FUN_01969b9c(&local_90,local_c4,local_c0);
      uVar8 = local_8c;
      uVar4 = local_90;
      if (local_90 != 0x80000001) {
        if (local_90 == 0x80000000) {
          FUN_014afc14(&local_c8,iVar9);
          uVar4 = local_c4;
          uVar8 = local_c8;
          if (local_c8 == 0) {
            local_dc = local_c4;
            uVar2 = 6;
            goto LAB_014af518;
          }
          FUN_019664a4(&local_c8,local_c8,local_c4);
          if ((char)local_c8 == '\x06') {
            local_dc = FUN_019677a8(local_c4);
            local_e0 = CONCAT31(local_e0._1_3_,6);
          }
          else {
            local_e0 = local_c8;
            local_dc = local_c4;
            uStack_d8 = local_c0;
            local_d4 = local_bc;
            uStack_d0 = uStack_b8;
            uStack_cc = uStack_b4;
          }
          if (uVar4 != 0) {
            thunk_FUN_01be4678(uVar8);
          }
          goto LAB_014af51c;
        }
        if (local_90 == 0x80000002) goto LAB_014af2d8;
        local_98 = 0;
        local_a0[0] = 0;
        FUN_014afd34(&local_e0,&local_a8);
        if ((char)local_e0 == '\x06') {
          FUN_019bb7e0(uVar4,uVar8);
          goto LAB_014af87c;
        }
        FUN_0196b484(&local_c8,local_a0,&local_90,&local_e0);
        if ((char)local_c8 != '\x06') {
          FUN_014a706c(&local_c8);
        }
        puVar5 = (uint *)((uint)&local_90 | 4);
        piVar6 = (int *)((uint)&local_c8 | 4);
        goto LAB_014af6b0;
      }
    }
  }
LAB_014af2d8:
  uVar2 = 6;
  local_dc = uVar8;
LAB_014af518:
  local_e0 = CONCAT31(local_e0._1_3_,uVar2);
  goto LAB_014af51c;
LAB_014af1a8:
  uVar8 = local_60;
  FUN_014db6fc(&local_c8,&local_34);
  if ((char)local_c8 == '\x01') goto LAB_014af3ec;
  if (local_c8._1_1_ != '\x01') {
    uVar2 = 4;
    local_88 = local_64;
    local_84 = local_60;
    local_c4 = local_68;
    goto LAB_014af49c;
  }
  FUN_014af050(&local_c8,local_34);
  if ((char)local_c8 == '\x06') goto LAB_014af3ec;
  uVar2 = *(undefined1 *)((undefined2 *)((uint)&local_c8 | 1) + 1);
  uVar3 = *(undefined2 *)((uint)&local_c8 | 1);
  local_74 = CONCAT22(CONCAT11(local_74._3_1_,uVar2),uVar3);
  *(undefined1 *)((undefined2 *)((uint)&local_90 | 1) + 1) = uVar2;
  local_90 = CONCAT31(local_90._1_3_,(char)local_c8);
  *(undefined2 *)((uint)&local_90 | 1) = uVar3;
  local_8c = local_c4;
  local_88 = local_c0;
  local_84 = local_bc;
  uStack_80 = uStack_b8;
  uStack_7c = uStack_b4;
  if (uVar8 == local_68) {
    FUN_01969b6c(&local_68);
    local_fc = local_64;
  }
  local_60 = uVar8 + 1;
  puVar5 = (uint *)(local_fc + iVar9);
  iVar9 = iVar9 + 0x18;
  *puVar5 = local_90;
  puVar5[1] = local_8c;
  puVar5[2] = local_88;
  puVar5[3] = local_84;
  puVar5[4] = uStack_80;
  puVar5[5] = uStack_7c;
  goto LAB_014af1a8;
LAB_014af3ec:
  FUN_00949b70(&local_68);
  uVar2 = 6;
  local_88 = extraout_r2;
  local_84 = extraout_r3;
LAB_014af49c:
  *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
  local_90 = CONCAT31(local_90._1_3_,uVar2);
  local_8c = local_c4;
  local_b0 = FUN_014d9568(param_2);
  local_c4 = local_8c;
  local_c0 = local_88;
  local_bc = local_84;
  uStack_b8 = uStack_80;
  uStack_b4 = uStack_7c;
  local_c8._0_1_ = (char)local_90;
  bVar10 = (char)local_c8 != '\x06';
  local_c8 = local_90;
  if (bVar10) {
    if (local_b0 != 0) goto LAB_014af578;
    local_f8 = local_90;
    local_f4 = local_8c;
    uStack_f0 = local_88;
    uStack_ec = local_84;
    uStack_e8 = uStack_80;
    uStack_e4 = uStack_7c;
    goto LAB_014af598;
  }
  goto LAB_014af550;
LAB_014af6b0:
  FUN_01278730(&local_50,&local_a8);
  if ((char)local_50 != '\x01') {
    if (local_50._1_1_ != '\x01') {
LAB_014af810:
      FUN_01bed4e2((uint)&local_c8 | 3,local_a0,0xc);
      local_e0 = CONCAT31(local_e0._1_3_,5);
      FUN_01bed4e2((uint)&local_e0 | 1,&local_c8,0xf);
      goto LAB_014af51c;
    }
    *(undefined4 *)(local_a8 + 8) = 0;
    *(int *)(local_a8 + 0x14) = *(int *)(local_a8 + 0x14) + 1;
    FUN_01968828(&local_50,local_a8 + 0xc);
    uVar8 = local_4c;
    if (local_50 == 2) goto LAB_014af870;
    FUN_012c1060(&local_34,local_4c,local_48);
    uVar7 = local_2c;
    uVar8 = local_30;
    iVar9 = local_34;
    if (local_34 == -0x80000000) {
      goto LAB_014af870;
    }
    if (local_34 == -0x7fffffff) goto LAB_014af870;
    FUN_014afd34(&local_50,&local_a8);
    if ((char)local_50 == '\x06') {
      FUN_019bb7e0(iVar9,uVar8);
      uVar8 = local_4c;
      goto LAB_014af870;
    }
    *piVar6 = local_50;
    piVar6[1] = local_4c;
    piVar6[2] = local_48;
    piVar6[3] = iStack_44;
    piVar6[4] = iStack_40;
    piVar6[5] = iStack_3c;
    local_90 = local_c8;
    local_8c = local_c4;
    local_88 = local_c0;
    local_84 = local_bc;
    uStack_80 = uStack_b8;
    uStack_7c = uStack_b4;
    uStack_78 = local_b0;
    if (iVar9 == -0x80000000) goto LAB_014af810;
    if (iVar9 == -0x7fffffff) goto LAB_014af870;
    local_70 = uVar8;
    local_6c = uVar7;
    local_74 = iVar9;
    local_68 = *puVar5;
    local_64 = puVar5[1];
    local_60 = puVar5[2];
    uStack_5c = puVar5[3];
    uStack_58 = puVar5[4];
    uStack_54 = puVar5[5];
    FUN_0196b484(&local_c8,local_a0,&local_74);
    if ((char)local_c8 != '\x06') {
      FUN_014a706c(&local_c8);
    }
    goto LAB_014af6b0;
  }
  uVar8 = local_4c;
LAB_014af870:
  local_e0 = CONCAT31(local_e0._1_3_,6);
  local_dc = uVar8;
LAB_014af87c:
  FUN_0196afa8(local_a0);
LAB_014af51c:
  *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
  local_b0 = FUN_012c7b64(param_2);
  local_c8 = local_e0;
  uVar8 = local_c8;
  local_c4 = local_dc;
  local_c0 = uStack_d8;
  local_bc = local_d4;
  uStack_b8 = uStack_d0;
  uStack_b4 = uStack_cc;
  local_c8._0_1_ = (char)local_e0;
  bVar10 = (char)local_c8 != '\x06';
  local_c8 = uVar8;
  if (bVar10) {
    if (local_b0 != 0) {
LAB_014af578:
      local_f8 = CONCAT31(local_f8._1_3_,6);
      local_f4 = local_b0;
      FUN_00db4764(&local_c8);
      goto LAB_014af59c;
    }
    local_f8 = local_e0;
    local_f4 = local_dc;
    uStack_f0 = uStack_d8;
    uStack_ec = local_d4;
    uStack_e8 = uStack_d0;
    uStack_e4 = uStack_cc;
LAB_014af598:
    local_c8 = local_f8;
    local_c4 = local_f4;
    local_c0 = uStack_f0;
    local_bc = uStack_ec;
    uStack_b8 = uStack_e8;
    uStack_b4 = uStack_e4;
    goto LAB_014af59c;
  }
LAB_014af550:
  local_f4 = local_c4;
  local_f8 = CONCAT31(local_f8._1_3_,6);
  if (local_b0 != 0) {
    FUN_006c7e7c();
  }
LAB_014af59c:
  if ((char)local_f8 == '\x06') {
    uVar8 = local_f4;
LAB_014af89c:
    local_c0 = FUN_0127dee8(uVar8,param_2);
LAB_014af3cc:
    param_1[1] = local_c0;
LAB_014af3d4:
    *(undefined1 *)param_1 = 6;
  }
  else {
LAB_014af5a8:
    *param_1 = local_f8;
    param_1[1] = local_f4;
    param_1[2] = uStack_f0;
    param_1[3] = uStack_ec;
    param_1[4] = uStack_e8;
    param_1[5] = uStack_e4;
  }
  return;
}

