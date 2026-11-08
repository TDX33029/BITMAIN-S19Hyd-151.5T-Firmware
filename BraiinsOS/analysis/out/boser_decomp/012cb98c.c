// FUN_012cb98c @ 012cb98c size=2088 calls_out=22 calls_in=1
// strings: remote_ip | remote_portevent open/utils-rs/connection-notifier/src/client.rs:58 | state | struct ConnectionEvent with 3 elements | remote_ip | remote_ip

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012cb98c(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  undefined2 *puVar10;
  int **ppiVar11;
  uint uVar12;
  byte unaff_r6;
  uint uVar13;
  int *piVar14;
  undefined2 *unaff_r8;
  bool bVar15;
  uint local_104;
  uint local_100;
  uint local_f4;
  uint local_ec;
  uint local_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int *local_d8;
  int *piStack_d4;
  undefined2 local_d0;
  int local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  undefined4 local_b0;
  char local_ac;
  int *local_a8;
  int *piStack_a4;
  undefined2 local_a0;
  int *local_98;
  undefined2 *puStack_94;
  undefined2 local_90;
  int *local_88;
  undefined2 *puStack_84;
  undefined2 local_80;
  undefined2 local_78;
  undefined1 uStack_76;
  undefined1 uStack_75;
  byte bStack_74;
  int *local_70;
  undefined2 *local_6c;
  undefined2 local_68;
  int *local_60;
  undefined2 *puStack_5c;
  undefined2 local_58;
  undefined4 local_50;
  undefined2 *local_4c;
  undefined2 local_48;
  undefined4 local_40;
  undefined2 *local_3c;
  int *local_38;
  undefined2 *puStack_34;
  undefined2 local_30;
  undefined1 auStack_29 [5];
  
  FUN_01a3bee8(&local_c8);
  uVar12 = local_c0;
  uVar2 = local_c4;
  if (local_c8 == 1) {
    *param_1 = local_c4;
    param_1[1] = local_c0;
    uVar4 = 3;
LAB_012cba88:
    *(undefined1 *)((int)param_1 + 0x13) = uVar4;
    return;
  }
  if (local_c4 == 0) {
    uVar4 = 2;
    goto LAB_012cba88;
  }
  bVar15 = local_c0 != 0;
  local_e8 = local_c4;
  uStack_e4 = local_c0;
  uStack_e0 = local_bc;
  uStack_dc = local_b8;
  local_bc = local_c4;
  local_b8 = local_c0;
  local_b4 = 0;
  local_ac = -0x80;
  local_b0 = 0;
  local_c0 = 0;
  local_c4 = 1;
  local_c8 = 0;
  if (bVar15) {
    do {
      unaff_r6 = *(byte *)(uVar2 + local_b4);
      uVar13 = (uint)unaff_r6;
      if ((0x17 < uVar13 - 9) || ((1 << (uVar13 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar13 != 0x5b) {
          if (uVar13 == 0x7b) {
            local_b4 = local_b4 + 1;
            local_ac = '\x7f';
            local_6c = (undefined2 *)CONCAT31(local_6c._1_3_,1);
            local_ec = 2;
            local_f4 = 2;
            bVar15 = false;
            bVar5 = false;
            piVar14 = (int *)0x7b;
            local_70 = &local_c8;
            goto LAB_012cbb1c;
          }
          puVar10 = (undefined2 *)FUN_012c7788(&local_c8,auStack_29,&DAT_01ce2c4c);
          goto LAB_012cc078;
        }
        local_b4 = local_b4 + 1;
        local_78 = SUB42(&local_c8,0);
        uStack_76 = (undefined1)((uint)&local_c8 >> 0x10);
        uStack_75 = (undefined1)((uint)&local_c8 >> 0x18);
        local_ac = '\x7f';
        bStack_74 = 1;
        FUN_014db6fc(&local_40,&local_78);
        if ((char)local_40 == '\x01') {
LAB_012cbd5c:
          puVar10 = unaff_r8;
          puVar6 = local_3c;
LAB_012cbe7c:
          local_f4 = 2;
          unaff_r8 = puVar10;
        }
        else {
          if (local_40._1_1_ == '\0') {
            local_50 = local_70;
            local_4c = local_6c;
            local_48 = local_68;
            puVar10 = unaff_r8;
LAB_012cbe60:
            local_70 = local_50;
            local_6c = local_4c;
            local_68 = local_48;
            puVar6 = (undefined2 *)
                     FUN_012cc2c0(0,&PTR_s_struct_ConnectionEvent_with_3_el_01ce2c24,&DAT_01d064b8);
            goto LAB_012cbe7c;
          }
          FUN_012cc54c(&local_40,CONCAT13(uStack_75,CONCAT12(uStack_76,local_78)));
          puVar10 = local_3c;
          if (((uint)local_40 & 1) != 0) goto LAB_012cbd5c;
          uVar12 = (uint)local_40 >> 8 & 0xff;
          uVar2 = (uint)local_40 >> 0x10;
          unaff_r6 = local_40._3_1_;
          local_70 = local_38;
          local_6c = puStack_34;
          local_68 = local_30;
          local_50 = local_38;
          local_4c = puStack_34;
          local_48 = local_30;
          if (uVar12 == 2) goto LAB_012cbe60;
          local_40 = local_38;
          local_3c = puStack_34;
          local_38 = (int *)CONCAT22(local_38._2_2_,local_30);
          FUN_014db6fc(&local_50,&local_78);
          if ((char)local_50 == '\x01') goto LAB_012cbe44;
          if (local_50._1_1_ != '\x01') {
            uVar9 = 1;
LAB_012cc0f4:
            puVar6 = (undefined2 *)
                     FUN_012cc2c0(uVar9,&PTR_s_struct_ConnectionEvent_with_3_el_01ce2c24,
                                  &DAT_01d064b8);
            goto LAB_012cbe7c;
          }
          FUN_012c79a4(&local_50,CONCAT13(uStack_75,CONCAT12(uStack_76,local_78)));
          if ((short)local_50 == 1) {
LAB_012cbe44:
            puVar6 = local_4c;
            goto LAB_012cbe7c;
          }
          uVar13 = (uint)local_50 >> 0x10;
          FUN_014db6fc(&local_50,&local_78);
          if ((char)local_50 == '\x01') goto LAB_012cbe44;
          uVar9 = 2;
          if (local_50._1_1_ != '\x01') goto LAB_012cc0f4;
          FUN_012cc6c0(&local_50,CONCAT13(uStack_75,CONCAT12(uStack_76,local_78)));
          if ((char)local_50 == '\x01') goto LAB_012cbe44;
          local_f4 = (uint)local_50 >> 8 & 0xff;
          puVar6 = (undefined2 *)(uVar2 << 0x18 | uVar12 << 0x10 | uVar13);
          local_98 = local_40;
          puStack_94 = local_3c;
          local_90 = local_38._0_2_;
          unaff_r8 = puVar10;
        }
        local_ac = local_ac + '\x01';
        puVar8 = (undefined2 *)FUN_014d9568(&local_c8);
        if (local_f4 == 2) {
          if (puVar8 == (undefined2 *)0x0) {
            puVar8 = puVar6;
          }
          else {
            FUN_01674208(puVar8);
            puVar8 = puVar6;
          }
          goto LAB_012cc07c;
        }
        if (puVar8 != (undefined2 *)0x0) goto LAB_012cc07c;
        ppiVar11 = &local_98;
        goto LAB_012cc098;
      }
      local_b4 = local_b4 + 1;
    } while (uVar12 != local_b4);
  }
  local_40 = (int *)&DAT_00000005;
  puVar6 = (undefined2 *)FUN_012c6b30(&local_c8,&local_40);
  goto LAB_012cba54;
LAB_012cbb1c:
LAB_012cbb20:
  while( true ) {
    FUN_01278730(&local_40,&local_70);
    piVar3 = local_70;
    if ((char)local_40 == '\x01') goto LAB_012cc038;
    if (local_40._1_1_ != '\x01') {
      if (local_ec == 2) {
        local_4c = (undefined2 *)0x9;
        local_3c = &DAT_0132b6a0;
        local_50 = (int *)0x4207ad;
        local_40 = &local_50;
        puVar6 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_40);
        goto LAB_012cc03c;
      }
      if (!bVar15) {
        local_4c = (undefined2 *)0xb;
        local_3c = &DAT_0132b6a0;
        local_50 = (int *)0x4207b6;
        local_40 = &local_50;
        puVar6 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_40);
        goto LAB_012cc03c;
      }
      if (local_f4 == 2) {
        local_4c = (undefined2 *)0x5;
        local_3c = &DAT_0132b6a0;
        local_50 = (int *)0x50bf33;
        local_40 = &local_50;
        puVar6 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_40);
        piVar14 = (int *)0x2;
        goto LAB_012cc03c;
      }
      local_f4 = local_f4 & 1;
      local_88 = local_60;
      puStack_84 = puStack_5c;
      local_80 = local_58;
      uStack_75 = (undefined1)local_100;
      bStack_74 = (byte)(local_100 >> 8);
      uStack_76 = (undefined1)local_ec;
      local_78 = (undefined2)local_104;
      puVar6 = (undefined2 *)CONCAT13(uStack_75,CONCAT12(uStack_76,local_78));
      unaff_r6 = bStack_74;
      goto LAB_012cc044;
    }
    piVar1 = local_70 + 5;
    local_70[2] = 0;
    piVar3[5] = *piVar1 + 1;
    FUN_01968828(&local_40,piVar3 + 3);
    puVar6 = local_3c;
    if (local_40 == (int *)0x2) goto LAB_012cc03c;
    if (local_38 != (int *)&DAT_00000005) break;
    iVar7 = thunk_FUN_01bed842(local_3c,"state",5);
    piVar3 = local_70;
    if (iVar7 == 0) {
      if (local_f4 != 2) {
        local_4c = (undefined2 *)0x5;
        local_3c = &DAT_0132b6a0;
        local_50 = (int *)0x50bf33;
        local_40 = &local_50;
        puVar6 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_40);
        goto LAB_012cc03c;
      }
      puVar6 = (undefined2 *)FUN_0167459c(local_70);
      if (puVar6 != (undefined2 *)0x0) goto LAB_012cc034;
      FUN_012cc6c0(&local_40,piVar3);
      if ((char)local_40 != '\0') goto LAB_012cc038;
      local_f4 = (uint)local_40 >> 8 & 0xff;
    }
    else {
LAB_012cbc68:
      piVar14 = local_70;
      puVar6 = (undefined2 *)FUN_0167459c(local_70);
      if ((puVar6 != (undefined2 *)0x0) ||
         (puVar6 = (undefined2 *)FUN_012c6c4c(piVar14), puVar6 != (undefined2 *)0x0))
      goto LAB_012cc03c;
    }
  }
  if (local_38 != (int *)&DAT_0000000b) {
    if (local_38 != (int *)&DAT_00000009) goto LAB_012cbc68;
    iVar7 = thunk_FUN_01bed842(local_3c,"remote_ip",9);
    piVar3 = local_70;
    if (iVar7 != 0) goto LAB_012cbc68;
    if (local_ec != 2) {
      local_4c = (undefined2 *)0x9;
      local_3c = &DAT_0132b6a0;
      local_50 = (int *)0x4207ad;
      local_40 = &local_50;
      puVar6 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_40);
      goto LAB_012cc03c;
    }
    puVar6 = (undefined2 *)FUN_0167459c(local_70);
    if (puVar6 != (undefined2 *)0x0) goto LAB_012cc034;
    FUN_012cc54c(&local_40,piVar3);
    if (((uint)local_40 & 1) != 0) goto LAB_012cc038;
    local_100 = (uint)local_40 >> 0x10;
    local_ec = (uint)local_40 >> 8 & 0xff;
    local_60 = local_38;
    puStack_5c = puStack_34;
    local_58 = local_30;
    unaff_r8 = local_3c;
    local_50 = local_60;
    local_4c = puStack_5c;
    local_48 = local_58;
    goto LAB_012cbb20;
  }
  iVar7 = thunk_FUN_01bed842(local_3c,
                             "remote_portevent open/utils-rs/connection-notifier/src/client.rs:58",
                             0xb);
  piVar3 = local_70;
  if (iVar7 != 0) goto LAB_012cbc68;
  if (bVar5) {
    local_4c = (undefined2 *)0xb;
    local_3c = &DAT_0132b6a0;
    local_50 = (int *)0x4207b6;
    local_40 = &local_50;
    puVar6 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_40);
    goto LAB_012cc03c;
  }
  puVar6 = (undefined2 *)FUN_0167459c(local_70);
  if (puVar6 == (undefined2 *)0x0) {
    FUN_012c79a4(&local_40,piVar3);
    if ((short)local_40 != 0) goto LAB_012cc038;
    local_104 = (uint)local_40 >> 0x10;
    bVar5 = true;
    bVar15 = true;
    goto LAB_012cbb1c;
  }
LAB_012cc034:
  local_3c = puVar6;
LAB_012cc038:
  puVar6 = local_3c;
LAB_012cc03c:
  local_78 = SUB42(puVar6,0);
  uStack_76 = (undefined1)((uint)puVar6 >> 0x10);
  uStack_75 = (undefined1)((uint)puVar6 >> 0x18);
  local_f4 = 2;
  unaff_r6 = (byte)piVar14;
LAB_012cc044:
  local_ac = local_ac + '\x01';
  puVar10 = (undefined2 *)FUN_012c7b64(&local_c8);
  if (local_f4 == 2) {
    puVar8 = puVar6;
    if (puVar10 != (undefined2 *)0x0) {
      FUN_01674208();
    }
  }
  else {
    if (puVar10 == (undefined2 *)0x0) {
      ppiVar11 = &local_88;
LAB_012cc098:
      local_d8 = *ppiVar11;
      piStack_d4 = ppiVar11[1];
      local_a8 = local_d8;
      piStack_a4 = piStack_d4;
      local_d0 = *(undefined2 *)(ppiVar11 + 2);
      local_a0 = local_d0;
      puVar10 = (undefined2 *)FUN_012c6abc(&local_c8);
      if (puVar10 != (undefined2 *)0x0) {
        local_f4 = 2;
        puVar6 = puVar10;
      }
      goto LAB_012cba5c;
    }
LAB_012cc078:
    puVar8 = puVar10;
  }
LAB_012cc07c:
  puVar6 = (undefined2 *)FUN_0127dee8(puVar8,&local_c8);
LAB_012cba54:
  local_f4 = 2;
LAB_012cba5c:
  FUN_019bb7e0(local_c8,local_c4);
  if (local_f4 == 2) {
    *(undefined1 *)((int)param_1 + 0x13) = 3;
    *param_1 = 4;
    param_1[1] = (uint)puVar6;
  }
  else {
    *(undefined2 **)((int)param_1 + 5) = unaff_r8;
    *(byte *)(param_1 + 1) = unaff_r6;
    FUN_01bed4e2((int)param_1 + 9,&local_d8,10);
    *(char *)((int)param_1 + 0x13) = (char)local_f4;
    *param_1 = (uint)puVar6;
  }
  FUN_012840cc(&local_e8);
  return;
}

