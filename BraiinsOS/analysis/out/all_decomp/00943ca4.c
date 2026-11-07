// FUN_00943ca4 @ 00943ca4 size=2576 calls_out=21 calls_in=1
// strings: approximate | chip_chain | connector_position | columns | approximate | heat_direction

void FUN_00943ca4(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char **ppcVar15;
  byte bVar16;
  undefined4 unaff_r10;
  int *local_6c;
  char *local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  char *local_44;
  undefined1 local_40;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  bVar16 = (byte)unaff_r10;
  uVar8 = *(uint *)(param_2 + 0x10);
  uVar12 = *(uint *)(param_2 + 0x14);
  if (uVar12 < uVar8) {
    do {
      uVar14 = *(byte *)(*(int *)(param_2 + 0xc) + uVar12) - 9;
      if ((0x17 < uVar14) || ((1 << (uVar14 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*(int *)(param_2 + 0xc) + uVar12) != 0x6e) goto LAB_00943d0c;
        uVar13 = uVar12 + 1;
        *(uint *)(param_2 + 0x14) = uVar13;
        uVar14 = uVar8;
        if (uVar8 < uVar13) {
          uVar14 = uVar13;
        }
        if (uVar13 < uVar8) {
          iVar10 = *(int *)(param_2 + 0xc);
          cVar1 = *(char *)(iVar10 + uVar13);
          uVar8 = uVar12 + 2;
          *(uint *)(param_2 + 0x14) = uVar8;
          if ((cVar1 == 'u') && (uVar8 != uVar14)) {
            cVar1 = *(char *)(iVar10 + uVar8);
            uVar8 = uVar12 + 3;
            *(uint *)(param_2 + 0x14) = uVar8;
            if ((cVar1 == 'l') &&
               ((uVar8 != uVar14 &&
                (cVar1 = *(char *)(iVar10 + uVar8), *(uint *)(param_2 + 0x14) = uVar12 + 4,
                cVar1 == 'l')))) {
              *param_1 = 0x80000000;
              return;
            }
          }
        }
        uVar9 = FUN_005b8c9c(param_2,&local_34);
        goto LAB_009443b4;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(param_2 + 0x14) = uVar12;
    } while (uVar8 != uVar12);
  }
  else {
LAB_00943d0c:
    if (uVar12 < uVar8) {
      do {
        uVar14 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar12);
        if ((0x17 < uVar14 - 9) || ((1 << (uVar14 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar14 == 0x5b) {
            cVar1 = param_2[0x24];
            param_2[0x24] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar12 + 1;
              local_38 = CONCAT31(local_38._1_3_,1);
              local_3c = param_2;
              FUN_005e5d80(&local_34,&local_3c);
              if ((char)local_34 == '\x01') goto LAB_00944260;
              if (local_34._1_1_ == '\x01') {
                FUN_008fb168(&local_34,local_3c);
                if ((short)local_34 == 1) {
LAB_00944260:
                  local_6c = local_30;
                  goto LAB_0094426c;
                }
                uVar2 = (undefined2)((uint)local_34 >> 0x10);
                FUN_005e5d80(&local_34,&local_3c);
                if ((char)local_34 == '\x01') goto LAB_00944260;
                if (local_34._1_1_ != '\x01') {
                  uVar9 = 1;
LAB_00944554:
                  local_6c = (int *)FUN_00f2c2f0(uVar9,&DAT_018673f0,&DAT_018ab990);
                  goto LAB_0094426c;
                }
                FUN_008fb168(&local_34,local_3c);
                if ((short)local_34 == 1) goto LAB_00944260;
                uVar3 = (undefined2)((uint)local_34 >> 0x10);
                FUN_005e5d80(&local_34,&local_3c);
                if ((char)local_34 == '\x01') goto LAB_00944260;
                if (local_34._1_1_ != '\x01') {
                  uVar9 = 2;
                  goto LAB_00944554;
                }
                FUN_009454a0(&local_34,local_3c);
                if ((char)local_34 == '\x01') goto LAB_00944260;
                local_5c._0_1_ = local_34._1_1_;
                FUN_005e5d80(&local_34,&local_3c);
                if ((char)local_34 == '\x01') goto LAB_00944260;
                if (local_34._1_1_ != '\x01') {
                  uVar9 = 3;
                  goto LAB_00944554;
                }
                FUN_00941850(&local_34,local_3c);
                if ((char)local_34 == '\x01') goto LAB_00944260;
                local_60._0_1_ = local_34._1_1_;
                FUN_005e5d80(&local_34,&local_3c);
                if ((char)local_34 == '\x01') goto LAB_00944260;
                local_4c._0_2_ = uVar3;
                local_48._0_2_ = uVar2;
                if (local_34._1_1_ != '\x01') {
                  uVar9 = 4;
                  goto LAB_00944554;
                }
                FUN_0094b638(&local_34,local_3c);
                local_6c = local_30;
                ppcVar15 = local_34;
                if (local_34 == (char **)&DAT_80000000) goto LAB_0094426c;
                local_50 = local_2c;
                FUN_005e5d80(&local_34,&local_3c);
                if ((char)local_34 == '\x01') {
LAB_009445c8:
                  piVar11 = local_30;
                  local_5c._0_1_ = 0;
                  if (ppcVar15 != (char **)0x0) {
                    thunk_FUN_016d3fb4(local_6c);
                  }
                  local_60._0_1_ = 0;
                  ppcVar15 = (char **)&DAT_80000000;
                  local_6c = piVar11;
                }
                else {
                  bVar7 = 0;
                  if (local_34._1_1_ == '\x01') {
                    FUN_009245c0(&local_34,local_3c);
                    if ((char)local_34 == '\x01') goto LAB_009445c8;
                    bVar7 = (byte)((uint)local_34 >> 8);
                  }
                  bVar16 = bVar7 & 1;
                }
              }
              else {
                local_6c = (int *)FUN_00f2c2f0(0,&DAT_018673f0,&DAT_018ab990);
LAB_0094426c:
                local_5c._0_1_ = 0;
                ppcVar15 = (char **)&DAT_80000000;
                local_60._0_1_ = 0;
              }
              param_2[0x24] = param_2[0x24] + '\x01';
              piVar11 = (int *)FUN_008fad50(param_2);
              if (ppcVar15 != (char **)&DAT_80000000) goto LAB_00944360;
              if (piVar11 == (int *)0x0) goto LAB_00944490;
              FUN_005c3974();
              goto LAB_00944488;
            }
          }
          else {
            if (uVar14 != 0x7b) {
              piVar11 = (int *)FUN_005b8238(param_2,&uStack_25,&DAT_018674d8);
              goto LAB_009443ac;
            }
            cVar1 = param_2[0x24];
            param_2[0x24] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar12 + 1;
              local_40 = 1;
              local_5c = 9;
              local_60 = 7;
              local_64 = 2;
              ppcVar15 = (char **)&DAT_80000000;
              local_68 = "approximate";
              bVar5 = false;
              bVar4 = false;
              local_44 = param_2;
              goto LAB_00943dcc;
            }
          }
          local_34 = (char **)0x18;
          goto LAB_00943d48;
        }
        uVar12 = uVar12 + 1;
        *(uint *)(param_2 + 0x14) = uVar12;
      } while (uVar8 != uVar12);
    }
  }
  local_34 = (char **)0x5;
LAB_00943d48:
  uVar9 = FUN_008f9984(param_2,&local_34);
  goto LAB_009443b4;
LAB_00943dcc:
  uVar9 = unaff_r10;
LAB_00943dd0:
  FUN_008fa450(&local_34,&local_44);
  pcVar6 = local_44;
  unaff_r10 = uVar9;
  if ((char)local_34 == '\x01') goto LAB_00944328;
  if (local_34._1_1_ != '\x01') {
    if (!bVar4) {
      local_30 = &DAT_0157d360;
      local_34 = &local_3c;
      local_38 = 7;
      local_3c = "columns";
      piVar11 = (int *)FUN_00f56780(&DAT_0057a25d,&local_34);
      goto LAB_009444d0;
    }
    if (!bVar5) {
      local_30 = &DAT_0157d360;
      local_34 = &local_3c;
      local_38 = 4;
      local_3c = &DAT_00568804;
      piVar11 = (int *)FUN_00f56780(&DAT_0057a25d,&local_34);
      goto LAB_009444d0;
    }
    if (ppcVar15 != (char **)&DAT_80000000) {
      if (local_5c == 9) {
        local_5c._0_1_ = 8;
      }
      bVar16 = (byte)local_64 & 1;
      if (local_60 == 7) {
        local_60._0_1_ = 6;
      }
      goto LAB_00944344;
    }
    local_30 = &DAT_0157d360;
    local_34 = &local_3c;
    local_38 = 10;
    local_3c = "chip_chain";
    local_6c = (int *)FUN_00f56780(&DAT_0057a25d,&local_34);
LAB_00944424:
LAB_00944428:
    bVar16 = (byte)unaff_r10;
    goto LAB_00944340;
  }
  iVar10 = *(int *)(local_44 + 0x14);
  local_44[8] = '\0';
  local_44[9] = '\0';
  local_44[10] = '\0';
  local_44[0xb] = '\0';
  *(int *)(local_44 + 0x14) = iVar10 + 1;
  FUN_0157e384(&local_34,local_44 + 0xc,local_44);
  unaff_r10 = local_2c;
  piVar11 = local_30;
  if (local_34 == (char **)&SUB_00000002) goto LAB_0094432c;
  uVar9 = unaff_r10;
  switch(local_2c) {
  case 4:
    if (*local_30 == 0x73776f72) {
      if (bVar5) {
        local_68 = &DAT_00568804;
        goto LAB_009446b8;
      }
      piVar11 = (int *)FUN_01114eb4(pcVar6);
      if (piVar11 != (int *)0x0) goto LAB_0094432c;
      FUN_008fb168(&local_34,pcVar6);
      if ((short)local_34 == 1) goto LAB_00944328;
      local_4c = (uint)local_34 >> 0x10;
      bVar5 = true;
      goto LAB_00943dd0;
    }
    break;
  case 7:
    iVar10 = thunk_FUN_016dd50a(local_30,"columns",7);
    if (iVar10 == 0) goto LAB_009440d0;
    break;
  case 10:
    iVar10 = thunk_FUN_016dd50a(local_30,"chip_chain",10);
    if (iVar10 == 0) {
      if (ppcVar15 != (char **)&DAT_80000000) {
        local_68 = "chip_chain";
        goto LAB_009446b8;
      }
      local_6c = (int *)FUN_01114eb4(pcVar6);
      if (local_6c != (int *)0x0) goto LAB_00944424;
      FUN_0094b638(&local_34,pcVar6);
      local_6c = local_30;
      if (local_34 == (char **)&DAT_80000000) goto LAB_00944428;
      local_50 = local_2c;
      ppcVar15 = local_34;
      goto LAB_00943dd0;
    }
    break;
  case 0xb:
    iVar10 = thunk_FUN_016dd50a(local_30,"approximate",0xb);
    if (iVar10 == 0) {
      if (local_64 != 2) goto LAB_009446b8;
      piVar11 = (int *)FUN_01114eb4(pcVar6);
      if (piVar11 != (int *)0x0) goto LAB_0094432c;
      FUN_009245c0(&local_34,pcVar6);
      if ((char)local_34 == '\x01') goto LAB_00944328;
      local_64 = (uint)local_34 >> 8 & 0xff;
      goto LAB_00943dd0;
    }
    break;
  case 0xe:
    iVar10 = thunk_FUN_016dd50a(local_30,"heat_direction",0xe);
    if (iVar10 == 0) {
      if (local_60 != 7) {
        local_68 = "heat_direction";
        goto LAB_009446b8;
      }
      piVar11 = (int *)FUN_01114eb4(pcVar6);
      if (piVar11 != (int *)0x0) goto LAB_0094432c;
      FUN_00941850(&local_34,pcVar6);
      if ((char)local_34 == '\x01') goto LAB_00944328;
      local_60 = (uint)local_34 >> 8 & 0xff;
      goto LAB_00943dd0;
    }
    break;
  case 0x12:
    iVar10 = thunk_FUN_016dd50a(local_30,"connector_position",0x12);
    if (iVar10 != 0) break;
    if (local_5c == 9) {
      piVar11 = (int *)FUN_01114eb4(pcVar6);
      if (piVar11 == (int *)0x0) {
        FUN_009454a0(&local_34,pcVar6);
        if ((char)local_34 != '\x01') goto code_r0x00943fa8;
        goto LAB_00944328;
      }
      goto LAB_0094432c;
    }
    local_68 = "connector_position";
    goto LAB_009446b8;
  }
  piVar11 = (int *)FUN_01114eb4(pcVar6);
  if (piVar11 != (int *)0x0) goto LAB_0094432c;
  piVar11 = (int *)FUN_008f9ac0(pcVar6);
  if (piVar11 != (int *)0x0) goto LAB_0094432c;
  goto LAB_00943dd0;
code_r0x00943fa8:
  local_5c = (uint)local_34 >> 8 & 0xff;
  goto LAB_00943dd0;
LAB_009440d0:
  if (bVar4) {
    local_68 = "columns";
LAB_009446b8:
    local_30 = &DAT_0157d360;
    local_34 = &local_3c;
    local_38 = unaff_r10;
    local_3c = local_68;
    piVar11 = (int *)FUN_00f56780(&DAT_00582dbd,&local_34);
LAB_009444d0:
    bVar16 = (byte)unaff_r10;
    if (((uint)ppcVar15 & 0x7fffffff) != 0) goto LAB_009444e4;
    goto LAB_0094433c;
  }
  piVar11 = (int *)FUN_01114eb4(pcVar6);
  if (piVar11 != (int *)0x0) goto LAB_0094432c;
  FUN_008fb168(&local_34,pcVar6);
  if ((short)local_34 == 1) goto LAB_00944328;
  local_48 = (uint)local_34 >> 0x10;
  bVar4 = true;
  goto LAB_00943dcc;
LAB_00944328:
  piVar11 = local_30;
  uVar9 = unaff_r10;
LAB_0094432c:
  bVar16 = (byte)uVar9;
  if (((uint)ppcVar15 & 0x7fffffff) != 0) {
LAB_009444e4:
    thunk_FUN_016d3fb4(local_6c);
  }
LAB_0094433c:
  local_6c = piVar11;
LAB_00944340:
  ppcVar15 = (char **)&DAT_80000000;
  local_60._0_1_ = 0;
  local_5c._0_1_ = 0;
LAB_00944344:
  param_2[0x24] = param_2[0x24] + '\x01';
  piVar11 = (int *)FUN_008fb5ec(param_2);
  if (ppcVar15 == (char **)&DAT_80000000) {
    if (piVar11 != (int *)0x0) {
      FUN_005c3974();
LAB_00944488:
      thunk_FUN_016d3fb4(piVar11);
    }
LAB_00944490:
    piVar11 = local_6c;
  }
  else {
LAB_00944360:
    if (piVar11 == (int *)0x0) {
      *(undefined2 *)((int)param_1 + 0xe) = (undefined2)local_4c;
      *(undefined2 *)(param_1 + 3) = (undefined2)local_48;
      *(undefined1 *)((int)param_1 + 0x12) = (undefined1)local_5c;
      *(undefined1 *)((int)param_1 + 0x11) = (undefined1)local_60;
      *(byte *)(param_1 + 4) = bVar16;
      *param_1 = ppcVar15;
      param_1[1] = local_6c;
      param_1[2] = local_50;
      return;
    }
    if (ppcVar15 != (char **)0x0) {
      thunk_FUN_016d3fb4(local_6c);
    }
  }
LAB_009443ac:
  uVar9 = FUN_00e959bc(piVar11,param_2);
LAB_009443b4:
  *param_1 = 0x80000001;
  param_1[1] = uVar9;
  return;
}

