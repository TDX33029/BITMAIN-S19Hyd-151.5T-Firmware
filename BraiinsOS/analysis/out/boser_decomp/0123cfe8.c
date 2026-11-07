// FUN_0123cfe8 @ 0123cfe8 size=2324 calls_out=24 calls_in=1
// strings: columns | chip_chain | connector_position | columns | approximatestruct Minerstruct MinerHashboardstruct MinerPerfVariantstruct HashboardTopology | heat_direction

void FUN_0123cfe8(undefined4 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined2 uVar13;
  byte bVar14;
  undefined2 uVar15;
  char *unaff_r8;
  char *pcVar16;
  char **ppcVar17;
  char *local_78;
  uint local_74;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  int *local_48;
  char *local_44;
  undefined1 local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  bVar14 = (byte)unaff_r8;
  uVar10 = *(uint *)(param_2 + 0x10);
  uVar11 = *(uint *)(param_2 + 0x14);
  if (uVar11 < uVar10) {
    do {
      uVar12 = *(byte *)(*(int *)(param_2 + 0xc) + uVar11) - 9;
      if ((0x17 < uVar12) || ((1 << (uVar12 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*(int *)(param_2 + 0xc) + uVar11) != 0x6e) goto LAB_0123d050;
        *(uint *)(param_2 + 0x14) = uVar11 + 1;
        iVar7 = FUN_01964c70(param_2,"ull",3);
        if (iVar7 == 0) {
          *param_1 = 0x80000000;
          return;
        }
        goto LAB_0123d7f0;
      }
      uVar11 = uVar11 + 1;
      *(uint *)(param_2 + 0x14) = uVar11;
    } while (uVar10 != uVar11);
  }
  else {
LAB_0123d050:
    if (uVar11 < uVar10) {
      do {
        uVar12 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar11);
        if ((0x17 < uVar12 - 9) || ((1 << (uVar12 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar12 == 0x5b) {
            cVar1 = param_2[0x24];
            param_2[0x24] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar11 + 1;
              local_2c = CONCAT31(local_2c._1_3_,1);
              local_30 = param_2;
              FUN_014b5ad4(&local_3c,&local_30);
              if ((short)local_3c != 0) goto LAB_0123d538;
              if (local_3c._2_2_ == 1) {
                uVar13 = SUB42(local_38,0);
                FUN_014b5ad4(&local_3c,&local_30);
                if ((short)local_3c != 0) goto LAB_0123d538;
                if (local_3c._2_2_ != 1) {
                  uVar9 = 1;
LAB_0123d6b4:
                  local_48 = (int *)FUN_014b5c7c(uVar9,&DAT_01c249b4,&DAT_01d064b8);
                  goto LAB_0123d548;
                }
                bVar14 = (byte)local_38;
                uVar15 = SUB42(local_38,0);
                FUN_01965170(&local_3c,&local_30);
                if ((char)local_3c == '\x01') goto LAB_0123d538;
                if (local_3c._1_1_ != '\x01') {
                  uVar9 = 2;
                  goto LAB_0123d6b4;
                }
                FUN_0123dd78(&local_3c,local_30);
                if ((char)local_3c == '\x01') {
LAB_0123d538:
                  local_48 = local_38;
                  goto LAB_0123d548;
                }
                local_60._0_1_ = local_3c._1_1_;
                FUN_01965170(&local_3c,&local_30);
                if ((char)local_3c == '\x01') goto LAB_0123d538;
                if (local_3c._1_1_ != '\x01') {
                  uVar9 = 3;
                  goto LAB_0123d6b4;
                }
                FUN_0123ca64(&local_3c,local_30);
                if ((char)local_3c == '\x01') goto LAB_0123d538;
                local_64._0_1_ = local_3c._1_1_;
                FUN_0122528c(&local_3c,&local_30);
                piVar8 = local_38;
                ppcVar17 = local_3c;
                if (local_3c == (char **)&DAT_80000001) goto LAB_0123d538;
                if (local_3c == (char **)&DAT_80000000) {
                  uVar9 = 4;
                  goto LAB_0123d6b4;
                }
                local_48 = local_38;
                local_4c = local_34;
                FUN_01643468(&local_3c,&local_30);
                piVar6 = local_38;
                if ((char)local_3c == '\0') {
                  bVar14 = (byte)((uint)local_3c >> 8) & 1;
                  local_54._0_2_ = uVar15;
                  local_50._0_2_ = uVar13;
                }
                else {
                  FUN_0132b958(ppcVar17,piVar8,2,4);
                  ppcVar17 = (char **)&DAT_80000000;
                  local_60._0_1_ = 0;
                  local_64._0_1_ = 0;
                  local_48 = piVar6;
                }
              }
              else {
                local_48 = (int *)FUN_014b5c7c(0,&DAT_01c249b4,&DAT_01d064b8);
LAB_0123d548:
                ppcVar17 = (char **)&DAT_80000000;
                local_60._0_1_ = 0;
                local_64._0_1_ = 0;
              }
              param_2[0x24] = param_2[0x24] + '\x01';
              piVar8 = (int *)FUN_01964fb0(param_2);
              goto LAB_0123d774;
            }
          }
          else {
            if (uVar12 != 0x7b) {
              local_48 = (int *)FUN_019659c8(param_2,&uStack_25,&DAT_01c24a7c);
              goto LAB_0123d7e4;
            }
            cVar1 = param_2[0x24];
            param_2[0x24] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar11 + 1;
              local_40 = 1;
              local_60 = 9;
              local_64 = 7;
              local_68 = 2;
              ppcVar17 = (char **)&DAT_80000000;
              local_78 = "columns";
              bVar5 = false;
              bVar2 = false;
              local_74 = 0;
              bVar4 = false;
              bVar3 = false;
              local_44 = param_2;
              goto LAB_0123d128;
            }
          }
          local_3c = (char **)0x18;
          goto LAB_0123d08c;
        }
        uVar11 = uVar11 + 1;
        *(uint *)(param_2 + 0x14) = uVar11;
      } while (uVar10 != uVar11);
    }
  }
  local_3c = (char **)0x5;
LAB_0123d08c:
  iVar7 = FUN_01964674(param_2,&local_3c);
  goto LAB_0123d7f0;
LAB_0123d128:
LAB_0123d12c:
  FUN_01965d20(&local_3c,&local_44);
  if ((char)local_3c == '\x01') goto LAB_0123d730;
  if (local_3c._1_1_ != '\x01') {
    if (!bVar3) {
      local_38 = (int *)&DAT_0132b6a0;
      local_3c = &local_30;
      local_2c = 7;
      local_30 = "columns";
      piVar8 = (int *)FUN_019676ac(&DAT_0057cd64,&local_3c);
      goto LAB_0123d674;
    }
    if (!bVar4) {
      local_38 = (int *)&DAT_0132b6a0;
      local_3c = &local_30;
      local_2c = 4;
      local_30 = &DAT_0056e7d0;
      piVar8 = (int *)FUN_019676ac(&DAT_0057cd64,&local_3c);
      goto LAB_0123d674;
    }
    if (ppcVar17 == (char **)&DAT_80000000) {
      local_38 = (int *)&DAT_0132b6a0;
      local_3c = &local_30;
      local_2c = 10;
      local_30 = "chip_chain";
      local_48 = (int *)FUN_019676ac(&DAT_0057cd64,&local_3c);
      pcVar16 = unaff_r8;
      goto LAB_0123d75c;
    }
    if (local_60 == 9) {
      local_60._0_1_ = 8;
    }
    bVar14 = (byte)local_74 & 1;
    if (local_64 == 7) {
      local_64._0_1_ = 6;
    }
    goto LAB_0123d760;
  }
  iVar7 = *(int *)(local_44 + 0x14);
  local_44[8] = '\0';
  local_44[9] = '\0';
  local_44[10] = '\0';
  local_44[0xb] = '\0';
  *(int *)(local_44 + 0x14) = iVar7 + 1;
  FUN_019686b4(&local_3c,local_44 + 0xc);
  piVar8 = local_38;
  if (local_3c == (char **)0x2) goto LAB_0123d734;
  switch(local_34) {
  case 4:
    if (*local_38 == 0x73776f72) {
      if (bVar5) {
        local_2c = 4;
        local_78 = &DAT_0056e7d0;
        goto LAB_0123d8ec;
      }
      FUN_014b5a98(&local_3c,local_44);
      if ((short)local_3c != 0) goto LAB_0123d730;
      local_54 = (uint)local_3c >> 0x10;
      bVar5 = true;
      bVar4 = true;
      goto LAB_0123d12c;
    }
    break;
  case 7:
    iVar7 = thunk_FUN_01bed842(local_38,"columns",7);
    if (iVar7 == 0) goto LAB_0123d3f0;
    break;
  case 10:
    iVar7 = thunk_FUN_01bed842(local_38,"chip_chain",10);
    pcVar16 = local_44;
    if (iVar7 == 0) {
      if (ppcVar17 != (char **)&DAT_80000000) {
        local_2c = 10;
        local_78 = "chip_chain";
        goto LAB_0123d8ec;
      }
      local_48 = (int *)FUN_01965c98(local_44);
      if (local_48 != (int *)0x0) {
        local_38 = local_48;
        goto LAB_0123d75c;
      }
      FUN_01252d08(&local_3c,pcVar16);
      local_48 = local_38;
      if (local_3c == (char **)&DAT_80000000) goto LAB_0123d75c;
      local_4c = local_34;
      unaff_r8 = pcVar16;
      ppcVar17 = local_3c;
      goto LAB_0123d12c;
    }
    break;
  case 0xb:
    iVar7 = thunk_FUN_01bed842(local_38,
                               "approximatestruct Minerstruct MinerHashboardstruct MinerPerfVariantstruct HashboardTopology"
                               ,0xb);
    if (iVar7 == 0) {
      if (local_68 != 2) {
        local_2c = 0xb;
        local_78 = 
        "approximatestruct Minerstruct MinerHashboardstruct MinerPerfVariantstruct HashboardTopology"
        ;
        goto LAB_0123d8ec;
      }
      FUN_016432a4(&local_3c,local_44);
      if ((char)local_3c != '\0') goto LAB_0123d730;
      local_74 = (uint)local_3c >> 8 & 0xff;
      local_68 = local_74;
      goto LAB_0123d12c;
    }
    break;
  case 0xe:
    iVar7 = thunk_FUN_01bed842(local_38,"heat_direction",0xe);
    pcVar16 = local_44;
    if (iVar7 == 0) {
      if (local_64 != 7) {
        local_2c = 0xe;
        local_78 = "heat_direction";
        goto LAB_0123d8ec;
      }
      piVar8 = (int *)FUN_01965c98(local_44);
      if (piVar8 != (int *)0x0) {
LAB_0123d72c:
        local_38 = piVar8;
        goto LAB_0123d730;
      }
      FUN_0123ca64(&local_3c,pcVar16);
      if ((char)local_3c != '\0') goto LAB_0123d730;
      local_64 = (uint)local_3c >> 8 & 0xff;
      goto LAB_0123d12c;
    }
    break;
  case 0x12:
    iVar7 = thunk_FUN_01bed842(local_38,"connector_position",0x12);
    pcVar16 = local_44;
    if (iVar7 != 0) break;
    if (local_60 == 9) {
      piVar8 = (int *)FUN_01965c98(local_44);
      if (piVar8 != (int *)0x0) goto LAB_0123d72c;
      FUN_0123dd78(&local_3c,pcVar16);
      if ((char)local_3c == '\0') goto code_r0x0123d2e0;
      goto LAB_0123d730;
    }
    local_2c = 0x12;
    local_78 = "connector_position";
    goto LAB_0123d8ec;
  }
  unaff_r8 = local_44;
  piVar8 = (int *)FUN_01965c98(local_44);
  if (piVar8 != (int *)0x0) goto LAB_0123d734;
  piVar8 = (int *)FUN_01965eac(unaff_r8);
  if (piVar8 != (int *)0x0) goto LAB_0123d734;
  goto LAB_0123d12c;
code_r0x0123d2e0:
  local_60 = (uint)local_3c >> 8 & 0xff;
  goto LAB_0123d12c;
LAB_0123d3f0:
  if (bVar2) {
    local_2c = 7;
LAB_0123d8ec:
    local_30 = local_78;
    local_3c = &local_30;
    local_38 = (int *)&DAT_0132b6a0;
    piVar8 = (int *)FUN_019676ac(&DAT_005ab34f,&local_3c);
LAB_0123d674:
    goto LAB_0123d734;
  }
  FUN_014b5a98(&local_3c,local_44);
  if ((short)local_3c != 0) goto LAB_0123d730;
  local_50 = (uint)local_3c >> 0x10;
  bVar3 = true;
  bVar2 = true;
  goto LAB_0123d128;
LAB_0123d730:
  piVar8 = local_38;
LAB_0123d734:
  if (ppcVar17 != (char **)&DAT_80000000) {
    FUN_0132b958(ppcVar17,local_48,2,4);
  }
  pcVar16 = unaff_r8;
  local_48 = piVar8;
LAB_0123d75c:
  bVar14 = (byte)pcVar16;
  ppcVar17 = (char **)&DAT_80000000;
  local_64._0_1_ = 0;
  local_60._0_1_ = 0;
LAB_0123d760:
  param_2[0x24] = param_2[0x24] + '\x01';
  piVar8 = (int *)FUN_019650c4(param_2);
LAB_0123d774:
  if (ppcVar17 == (char **)&DAT_80000000) {
    if (piVar8 != (int *)0x0) {
      FUN_01225578(piVar8);
    }
  }
  else {
    if (piVar8 == (int *)0x0) {
      *(undefined2 *)((int)param_1 + 0xe) = (undefined2)local_54;
      *(undefined2 *)(param_1 + 3) = (undefined2)local_50;
      param_1[1] = local_48;
      *(undefined1 *)((int)param_1 + 0x12) = (undefined1)local_60;
      *(undefined1 *)((int)param_1 + 0x11) = (undefined1)local_64;
      *(byte *)(param_1 + 4) = bVar14;
      *param_1 = ppcVar17;
      param_1[2] = local_4c;
      return;
    }
    FUN_0132b958(ppcVar17,local_48,2,4);
    local_48 = piVar8;
  }
LAB_0123d7e4:
  iVar7 = FUN_01966f00(local_48,param_2);
LAB_0123d7f0:
  *param_1 = 0x80000001;
  param_1[1] = iVar7;
  return;
}

