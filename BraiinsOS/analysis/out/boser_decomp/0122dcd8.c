// FUN_0122dcd8 @ 0122dcd8 size=2176 calls_out=19 calls_in=2
// strings: hot_temp_c | dangerous_internal_temp_c | cooldown_chip_temperature | target_temp_c | cold_temp_c | target_temp_c

void FUN_0122dcd8(undefined4 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  undefined2 *puVar12;
  char *pcVar13;
  char *pcVar14;
  undefined *puVar15;
  uint uVar16;
  uint uVar17;
  char **unaff_r8;
  undefined2 *puVar18;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined2 *unaff_s24;
  undefined8 unaff_d13;
  undefined2 *local_b8;
  char **local_b4;
  char **local_98;
  char **local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 *local_6c;
  undefined2 *local_68;
  undefined4 uStack_64;
  char *local_60;
  undefined4 local_5c;
  
  uVar16 = *(uint *)(param_2 + 0x14);
  if (uVar16 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar17 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar16);
      if ((0x17 < uVar17 - 9) || ((1 << (uVar17 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar17 == 0x5b) {
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar16 + 1;
            local_5c = CONCAT31(local_5c._1_3_,1);
            local_60 = param_2;
            FUN_01225070(&local_70,&local_60);
            if (local_70 == (char **)0x2 && local_6c == (undefined2 *)0x0) {
LAB_0122e1f4:
              puVar18 = (undefined2 *)0x0;
              local_98 = (char **)0x2;
              local_78 = CONCAT44(local_78._4_4_,local_68);
            }
            else {
              if (((uint)local_70 & 1) == 0) {
                uVar10 = 0;
LAB_0122e56c:
                local_68 = (undefined2 *)FUN_014b5c7c(uVar10,&DAT_01c249d4,&DAT_01d064b8);
                goto LAB_0122e1f4;
              }
              unaff_d8 = CONCAT44(uStack_64,local_68);
              FUN_01225070(&local_70,&local_60);
              if (local_70 == (char **)0x2 && local_6c == (undefined2 *)0x0) goto LAB_0122e1f4;
              if (((uint)local_70 & 1) == 0) {
                uVar10 = 1;
                goto LAB_0122e56c;
              }
              unaff_d9 = CONCAT44(uStack_64,local_68);
              FUN_01225070(&local_70,&local_60);
              if (local_70 == (char **)0x2 && local_6c == (undefined2 *)0x0) goto LAB_0122e1f4;
              if (((uint)local_70 & 1) == 0) {
                uVar10 = 2;
                goto LAB_0122e56c;
              }
              unaff_d10 = CONCAT44(uStack_64,local_68);
              FUN_01225070(&local_70,&local_60);
              if (local_70 == (char **)0x2 && local_6c == (undefined2 *)0x0) goto LAB_0122e1f4;
              if (((uint)local_70 & 1) == 0) {
                uVar10 = 3;
                goto LAB_0122e56c;
              }
              unaff_d11 = CONCAT44(uStack_64,local_68);
              FUN_012251f8(&local_70,&local_60);
              puVar18 = local_6c;
              local_98 = local_70;
              if (local_70 == (char **)&DAT_00000003 && local_6c == (undefined2 *)0x0)
              goto LAB_0122e1f4;
              if (local_70 == (char **)0x2 && local_6c == (undefined2 *)0x0) {
                uVar10 = 4;
                goto LAB_0122e56c;
              }
              FUN_01224d78(&local_70,&local_60);
              unaff_r8 = local_70;
              if (local_70 == (char **)&DAT_00000003) {
                local_68 = local_6c;
                goto LAB_0122e1f4;
              }
              if (local_70 == (char **)0x2) {
                uVar10 = 5;
                goto LAB_0122e56c;
              }
              local_78 = CONCAT44(uStack_64,local_68);
              unaff_s24 = local_6c;
            }
            local_80._0_4_ = (char *)local_78;
            local_80._4_4_ = local_78._4_4_;
            param_2[0x24] = param_2[0x24] + '\x01';
            pcVar13 = (char *)FUN_01964fb0(param_2);
            goto LAB_0122e39c;
          }
        }
        else {
          if (uVar17 != 0x7b) {
            pcVar14 = (char *)FUN_019659c8(param_2,&local_70,&DAT_01c24a8c);
            goto LAB_0122e3ec;
          }
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar16 + 1;
            local_78 = CONCAT35(local_78._5_3_,0x100000000);
            local_90 = (char **)0x2;
            unaff_r8 = (char **)&local_78;
            local_b4 = (char **)0x2;
            local_b8 = (undefined2 *)0x0;
            bVar9 = false;
            puVar18 = (undefined2 *)0x0;
            bVar8 = false;
            bVar7 = false;
            bVar2 = false;
            local_98 = (char **)0x2;
            bVar3 = false;
            local_78 = CONCAT44(local_78._4_4_,param_2);
            bVar6 = false;
            bVar5 = false;
            bVar4 = false;
            goto LAB_0122dde0;
          }
        }
        local_70 = (char **)0x18;
        goto LAB_0122dd38;
      }
      uVar16 = uVar16 + 1;
      *(uint *)(param_2 + 0x14) = uVar16;
    } while (*(uint *)(param_2 + 0x10) != uVar16);
  }
  local_70 = (char **)0x5;
LAB_0122dd38:
  uVar10 = FUN_01964674(param_2,&local_70);
  goto LAB_0122e3f4;
LAB_0122dde0:
LAB_0122dde4:
  FUN_01965d20(&local_70,unaff_r8);
  puVar12 = local_6c;
  if ((char)local_70 == '\x01') goto LAB_0122e374;
  if (local_70._1_1_ != '\x01') {
    if (!bVar3) {
      puVar15 = &DAT_0057cd64;
      goto LAB_0122e2dc;
    }
    if (!bVar4) {
      puVar15 = &DAT_0057cd64;
LAB_0122e300:
      local_5c = 10;
      local_60 = "hot_temp_c";
      goto LAB_0122e358;
    }
    if (!bVar5) {
      puVar15 = &DAT_0057cd64;
      goto LAB_0122e324;
    }
    if (!bVar6) {
      puVar15 = &DAT_0057cd64;
LAB_0122e348:
      local_5c = 0x19;
      local_60 = "dangerous_internal_temp_c";
      goto LAB_0122e358;
    }
    unaff_r8 = (char **)0x0;
    if (local_90 != (char **)0x2) {
      unaff_r8 = local_90;
    }
    local_80 = unaff_d13;
    if (local_98 == (char **)0x2 && puVar18 == (undefined2 *)0x0) {
      local_98 = (char **)0x0;
      puVar18 = (undefined2 *)0x0;
    }
    goto LAB_0122e37c;
  }
  iVar11 = *(int *)((char *)local_78 + 0x14);
  ((char *)local_78)[8] = '\0';
  ((char *)local_78)[9] = '\0';
  ((char *)local_78)[10] = '\0';
  ((char *)local_78)[0xb] = '\0';
  *(int *)((char *)local_78 + 0x14) = iVar11 + 1;
  FUN_019686b4(&local_70,(char *)local_78 + 0xc);
  puVar12 = local_6c;
  if (local_70 == (char **)0x2) goto LAB_0122e374;
  switch(local_68) {
  case (undefined2 *)0xa:
    iVar11 = thunk_FUN_01bed842(local_6c,"hot_temp_c",10);
    if (iVar11 == 0) {
      if (bVar7) {
        puVar15 = &DAT_005ab34f;
        goto LAB_0122e300;
      }
      FUN_01224bb4(&local_70,(char *)local_78);
      puVar12 = local_6c;
      if (local_70 != (char **)0x0) goto LAB_0122e374;
      unaff_d9 = CONCAT44(uStack_64,local_68);
      bVar7 = true;
      bVar4 = true;
      goto LAB_0122dde4;
    }
    break;
  case (undefined2 *)0xb:
    iVar11 = thunk_FUN_01bed842(local_6c,"cold_temp_c",0xb);
    if (iVar11 == 0) {
      if (local_b4 != (char **)0x2 || local_b8 != (undefined2 *)0x0) {
        local_5c = 0xb;
        puVar15 = &DAT_005ab34f;
        local_60 = "cold_temp_c";
        goto LAB_0122e358;
      }
      pcVar13 = (char *)local_78;
      puVar12 = (undefined2 *)FUN_01965c98((char *)local_78);
      if (puVar12 != (undefined2 *)0x0) goto LAB_0122e374;
      FUN_0123ec50(&local_70,pcVar13);
      puVar12 = local_68;
      if (local_70 == (char **)0x2 && local_6c == (undefined2 *)0x0) goto LAB_0122e374;
      unaff_d13 = CONCAT44(uStack_64,local_68);
      local_b4 = local_70;
      local_98 = local_70;
      local_b8 = local_6c;
      puVar18 = local_6c;
      goto LAB_0122dde4;
    }
    break;
  case (undefined2 *)0xc:
  case (undefined2 *)0xe:
  case (undefined2 *)0xf:
    break;
  case (undefined2 *)0xd:
    iVar11 = thunk_FUN_01bed842(local_6c,"target_temp_c",0xd);
    if (iVar11 == 0) goto LAB_0122e0b8;
    break;
  case (undefined2 *)0x10:
    iVar11 = thunk_FUN_01bed842(local_6c,&DAT_00568ee8,0x10);
    if (iVar11 == 0) {
      if (bVar8) {
        puVar15 = &DAT_005ab34f;
LAB_0122e324:
        local_5c = 0x10;
        local_60 = &DAT_00568ee8;
        goto LAB_0122e358;
      }
      FUN_01224bb4(&local_70,(char *)local_78);
      puVar12 = local_6c;
      if (local_70 != (char **)0x0) goto LAB_0122e374;
      unaff_d10 = CONCAT44(uStack_64,local_68);
      bVar8 = true;
      bVar5 = true;
      goto LAB_0122dde4;
    }
    break;
  default:
    if (local_68 != (undefined2 *)0x19) break;
    iVar11 = thunk_FUN_01bed842(local_6c,"dangerous_internal_temp_c",0x19);
    if (iVar11 == 0) {
      if (bVar9) {
        puVar15 = &DAT_005ab34f;
        goto LAB_0122e348;
      }
      FUN_01224bb4(&local_70,(char *)local_78);
      puVar12 = local_6c;
      if (local_70 == (char **)0x0) goto code_r0x0122e09c;
      goto LAB_0122e374;
    }
    iVar11 = thunk_FUN_01bed842(puVar12,"cooldown_chip_temperature",0x19);
    if (iVar11 != 0) break;
    if (local_90 != (char **)0x2) {
      local_5c = 0x19;
      puVar15 = &DAT_005ab34f;
      local_60 = "cooldown_chip_temperature";
      goto LAB_0122e358;
    }
    pcVar13 = (char *)local_78;
    puVar12 = (undefined2 *)FUN_01965c98((char *)local_78);
    if (puVar12 != (undefined2 *)0x0) goto LAB_0122e374;
    FUN_0123e1f4(&local_70,pcVar13);
    local_90 = local_70;
    puVar12 = local_6c;
    if (local_70 == (char **)0x2) goto LAB_0122e374;
    unaff_s24 = local_6c;
    goto LAB_0122dde4;
  }
  pcVar13 = (char *)local_78;
  puVar12 = (undefined2 *)FUN_01965c98((char *)local_78);
  if (puVar12 != (undefined2 *)0x0) goto LAB_0122e374;
  puVar12 = (undefined2 *)FUN_01965eac(pcVar13);
  if (puVar12 != (undefined2 *)0x0) goto LAB_0122e374;
  goto LAB_0122dde4;
code_r0x0122e09c:
  unaff_d11 = CONCAT44(uStack_64,local_68);
  bVar9 = true;
  bVar6 = true;
  goto LAB_0122dde4;
LAB_0122e0b8:
  if (!bVar2) {
    FUN_01224bb4(&local_70,(char *)local_78);
    puVar12 = local_6c;
    if (local_70 != (char **)0x0) goto LAB_0122e374;
    unaff_d8 = CONCAT44(uStack_64,local_68);
    bVar3 = true;
    bVar2 = true;
    goto LAB_0122dde0;
  }
  puVar15 = &DAT_005ab34f;
LAB_0122e2dc:
  local_5c = 0xd;
  local_60 = "target_temp_c";
LAB_0122e358:
  local_6c = &DAT_0132b6a0;
  local_70 = &local_60;
  puVar12 = (undefined2 *)FUN_019676ac(puVar15,&local_70);
LAB_0122e374:
  local_80 = CONCAT44(local_80._4_4_,puVar12);
  puVar18 = (undefined2 *)0x0;
  local_98 = (char **)0x2;
LAB_0122e37c:
  param_2[0x24] = param_2[0x24] + '\x01';
  pcVar13 = (char *)FUN_019650c4(param_2);
LAB_0122e39c:
  if (local_98 == (char **)0x2 && puVar18 == (undefined2 *)0x0) {
    pcVar14 = (char *)local_80;
    if (pcVar13 != (char *)0x0) {
      FUN_01225578(pcVar13);
    }
  }
  else {
    pcVar14 = pcVar13;
    if (pcVar13 == (char *)0x0) {
      param_1[5] = unaff_s24;
      *param_1 = local_98;
      param_1[1] = puVar18;
      *(undefined8 *)(param_1 + 6) = unaff_d8;
      *(undefined8 *)(param_1 + 8) = unaff_d9;
      *(undefined8 *)(param_1 + 10) = unaff_d10;
      *(undefined8 *)(param_1 + 0xc) = unaff_d11;
      param_1[2] = (char *)local_80;
      param_1[3] = local_80._4_4_;
      param_1[4] = unaff_r8;
      return;
    }
  }
LAB_0122e3ec:
  uVar10 = FUN_01966f00(pcVar14,param_2);
LAB_0122e3f4:
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = uVar10;
  return;
}

