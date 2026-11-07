// FUN_00f5a274 @ 00f5a274 size=2752 calls_out=19 calls_in=0
// strings: public_group_maximal_reconnection_interval_s | public_group_stable_connection_duration_s | private_group_stable_connection_duration_sstruct TunerConfigstruct SessionConfigstruct ApiUsageConfigstruct TelemetryConfig | private_group_maximal_reconnection_interval_s | private_group_stable_connection_duration_sstruct TunerConfigstruct SessionConfigstruct ApiUsageConfigstruct TelemetryConfig | public_group_maximal_reconnection_interval_s

void FUN_00f5a274(undefined2 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  ushort uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint local_88;
  uint local_84;
  uint local_6c;
  char *local_68;
  ushort local_64;
  undefined4 local_62;
  undefined2 local_5e;
  char *local_5c;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 local_52;
  char *local_50;
  undefined4 local_4c;
  undefined2 local_46;
  undefined4 local_44;
  undefined4 *local_40;
  undefined2 *local_3c;
  code *local_38;
  undefined1 *local_34;
  code *local_30;
  undefined *local_2c;
  code *local_28;
  
  uVar10 = *(uint *)(param_2 + 0x10);
  uVar16 = *(uint *)(param_2 + 0x14);
  if (uVar16 < uVar10) {
    do {
      uVar18 = *(byte *)(*(int *)(param_2 + 0xc) + uVar16) - 9;
      if ((0x17 < uVar18) || ((1 << (uVar18 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*(int *)(param_2 + 0xc) + uVar16) != 0x6e) goto LAB_00f5a2dc;
        uVar17 = uVar16 + 1;
        *(uint *)(param_2 + 0x14) = uVar17;
        uVar18 = uVar10;
        if (uVar10 < uVar17) {
          uVar18 = uVar17;
        }
        if (uVar17 < uVar10) {
          iVar13 = *(int *)(param_2 + 0xc);
          cVar1 = *(char *)(iVar13 + uVar17);
          uVar10 = uVar16 + 2;
          *(uint *)(param_2 + 0x14) = uVar10;
          if (cVar1 == 'u') {
            if (uVar10 == uVar18) goto LAB_00f5a80c;
            cVar1 = *(char *)(iVar13 + uVar10);
            uVar10 = uVar16 + 3;
            *(uint *)(param_2 + 0x14) = uVar10;
            if (cVar1 == 'l') {
              if (uVar10 == uVar18) goto LAB_00f5a80c;
              cVar1 = *(char *)(iVar13 + uVar10);
              *(uint *)(param_2 + 0x14) = uVar16 + 4;
              if (cVar1 == 'l') {
                param_1[1] = 0;
                *param_1 = 0;
                return;
              }
            }
          }
          local_44 = (char **)0x9;
        }
        else {
LAB_00f5a80c:
          local_44 = (char **)0x5;
        }
        uVar11 = FUN_00f4c908(param_2,&local_44);
        goto LAB_00f5ab9c;
      }
      uVar16 = uVar16 + 1;
      *(uint *)(param_2 + 0x14) = uVar16;
    } while (uVar10 != uVar16);
  }
  else {
LAB_00f5a2dc:
    if (uVar16 < uVar10) {
      do {
        uVar18 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar16);
        if ((0x17 < uVar18 - 9) || ((1 << (uVar18 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar18 == 0x5b) {
            cVar1 = param_2[0x1c];
            param_2[0x1c] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar16 + 1;
              local_58 = 1;
              local_5c = param_2;
              FUN_00f4df24(&local_44,&local_5c);
              if ((char)local_44 == '\x01') {
                puVar12 = local_40;
LAB_00f5a780:
                bVar2 = true;
                local_6c = 0;
                uVar10 = 0;
              }
              else {
                if (local_44._1_1_ != '\x01') {
                  puVar12 = (undefined4 *)FUN_00f2c2f0(0,&DAT_0187f240,&DAT_018ab990);
                  goto LAB_00f5a780;
                }
                FUN_00f4ecfc(&local_44,local_5c);
                if ((short)local_44 == 1) {
LAB_00f5a774:
                  puVar12 = local_40;
                  goto LAB_00f5a780;
                }
                uVar10 = (uint)local_44 >> 0x10;
                FUN_00f4df24(&local_44,&local_5c);
                if ((char)local_44 == '\x01') goto LAB_00f5a774;
                if (local_44._1_1_ != '\x01') {
                  puVar12 = (undefined4 *)FUN_00f2c2f0(1,&DAT_0187f240,&DAT_018ab990);
                  goto LAB_00f5a780;
                }
                FUN_00f4ecfc(&local_44,local_5c);
                if ((short)local_44 == 1) goto LAB_00f5a774;
                uVar7 = local_44._2_2_;
                FUN_00f4df24(&local_44,&local_5c);
                if ((char)local_44 == '\x01') goto LAB_00f5a774;
                if (local_44._1_1_ != '\x01') {
                  uVar11 = 2;
LAB_00f5ac80:
                  puVar12 = (undefined4 *)FUN_00f2c2f0(uVar11,&DAT_0187f240,&DAT_018ab990);
                  goto LAB_00f5a780;
                }
                FUN_00f4ecfc(&local_44,local_5c);
                if ((short)local_44 == 1) goto LAB_00f5a774;
                uVar8 = local_44._2_2_;
                FUN_00f4df24(&local_44,&local_5c);
                if ((char)local_44 == '\x01') goto LAB_00f5a774;
                if (local_44._1_1_ != '\x01') {
                  uVar11 = 3;
                  goto LAB_00f5ac80;
                }
                FUN_00f4ecfc(&local_44,local_5c);
                if ((short)local_44 == 1) goto LAB_00f5a774;
                puVar12 = (undefined4 *)CONCAT22(uVar8,uVar7);
                local_6c = (uint)local_44 >> 0x10;
                bVar2 = false;
              }
              param_2[0x1c] = param_2[0x1c] + '\x01';
              puVar15 = (undefined4 *)FUN_00f4cc54(param_2);
              if (!bVar2) goto LAB_00f5a8b0;
              if (puVar15 == (undefined4 *)0x0) goto LAB_00f5ab90;
              FUN_005c3974();
              goto LAB_00f5ab88;
            }
          }
          else {
            if (uVar18 != 0x7b) {
              puVar15 = (undefined4 *)FUN_00f4db6c(param_2,&local_50,&DAT_0187f2a8);
              goto LAB_00f5ab94;
            }
            cVar1 = param_2[0x1c];
            param_2[0x1c] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar16 + 1;
              local_64 = CONCAT11(local_64._1_1_,1);
              bVar4 = false;
              local_6c = 0;
              uVar10 = 0;
              bVar5 = false;
              bVar2 = false;
              bVar3 = false;
              local_68 = param_2;
              goto LAB_00f5a3d0;
            }
          }
          local_44 = (char **)0x18;
          goto LAB_00f5a318;
        }
        uVar16 = uVar16 + 1;
        *(uint *)(param_2 + 0x14) = uVar16;
      } while (uVar10 != uVar16);
    }
  }
  local_44 = (char **)0x5;
LAB_00f5a318:
  uVar11 = FUN_01143ab8(param_2,&local_44);
  goto LAB_00f5ab9c;
LAB_00f5a3d0:
  do {
    FUN_00f4d74c(&local_44,&local_68);
    pcVar6 = local_68;
    if ((char)local_44 == '\x01') goto LAB_00f5a7b4;
    if (local_44._1_1_ != '\x01') {
      if (bVar2) {
        if (bVar3) {
          if (!bVar5) {
            local_58 = 0x2d;
            local_5c = "private_group_maximal_reconnection_interval_s";
          }
          else {
            if (bVar4) {
              bVar2 = false;
              puVar12 = (undefined4 *)((local_88 & 0xffff) + local_84 * 0x10000);
              goto LAB_00f5a894;
            }
            local_58 = 0x2a;
            local_5c = 
            "private_group_stable_connection_duration_sstruct TunerConfigstruct SessionConfigstruct ApiUsageConfigstruct TelemetryConfig"
            ;
          }
        }
        else {
          local_58 = 0x29;
          local_5c = "public_group_stable_connection_duration_s";
        }
        uStack_56 = 0;
        uStack_57 = 0;
        local_40 = &DAT_0157d360;
        local_44 = &local_5c;
        puVar12 = (undefined4 *)FUN_00f56780(&DAT_0057a25d,&local_44);
        bVar2 = true;
        goto LAB_00f5a894;
      }
      puVar14 = &DAT_0057a25d;
LAB_00f5a85c:
      local_58 = 0x2c;
      local_5c = "public_group_maximal_reconnection_interval_s";
LAB_00f5a870:
      uStack_56 = 0;
      uStack_57 = 0;
      local_40 = &DAT_0157d360;
      local_44 = &local_5c;
      puVar12 = (undefined4 *)FUN_00f56780(puVar14,&local_44);
      break;
    }
    iVar13 = *(int *)(local_68 + 0x14);
    local_68[8] = '\0';
    local_68[9] = '\0';
    local_68[10] = '\0';
    local_68[0xb] = '\0';
    *(int *)(local_68 + 0x14) = iVar13 + 1;
    FUN_0157e5fc(&local_44,local_68 + 0xc,local_68);
    puVar12 = local_40;
    if (local_44 == (char **)&SUB_00000002) goto LAB_00f5a888;
    switch(local_3c) {
    case (undefined2 *)0x29:
      iVar13 = thunk_FUN_016dd50a(local_40,"public_group_stable_connection_duration_s",0x29);
      if (iVar13 == 0) {
        if (bVar3) {
          local_58 = 0x29;
          puVar14 = &DAT_00582dbd;
          local_5c = "public_group_stable_connection_duration_s";
          goto LAB_00f5a870;
        }
        puVar12 = (undefined4 *)FUN_00f4d8b4(pcVar6);
        if (puVar12 != (undefined4 *)0x0) goto LAB_00f5a884;
        FUN_00f4ecfc(&local_44,pcVar6);
        if ((short)local_44 == 1) {
LAB_00f5a7b4:
          puVar12 = local_40;
          goto LAB_00f5a888;
        }
        local_88 = (uint)local_44 >> 0x10;
        bVar3 = true;
        goto LAB_00f5a3d0;
      }
      break;
    case (undefined2 *)0x2a:
      iVar13 = thunk_FUN_016dd50a(local_40,
                                  "private_group_stable_connection_duration_sstruct TunerConfigstruct SessionConfigstruct ApiUsageConfigstruct TelemetryConfig"
                                  ,0x2a);
      if (iVar13 == 0) {
        if (bVar4) {
          local_58 = 0x2a;
          puVar14 = &DAT_00582dbd;
          local_5c = 
          "private_group_stable_connection_duration_sstruct TunerConfigstruct SessionConfigstruct ApiUsageConfigstruct TelemetryConfig"
          ;
          goto LAB_00f5a870;
        }
        puVar12 = (undefined4 *)FUN_00f4d8b4(pcVar6);
        if (puVar12 != (undefined4 *)0x0) goto LAB_00f5a884;
        FUN_00f4ecfc(&local_44,pcVar6);
        if ((short)local_44 == 1) goto LAB_00f5a7b4;
        local_6c = (uint)local_44 >> 0x10;
        bVar4 = true;
        goto LAB_00f5a3d0;
      }
      break;
    case (undefined2 *)0x2c:
      iVar13 = thunk_FUN_016dd50a(local_40,"public_group_maximal_reconnection_interval_s",0x2c);
      if (iVar13 == 0) {
        if (bVar2) {
          puVar14 = &DAT_00582dbd;
          goto LAB_00f5a85c;
        }
        puVar12 = (undefined4 *)FUN_00f4d8b4(pcVar6);
        if (puVar12 != (undefined4 *)0x0) goto LAB_00f5a884;
        FUN_00f4ecfc(&local_44,pcVar6);
        if ((short)local_44 == 1) goto LAB_00f5a7b4;
        uVar10 = (uint)local_44 >> 0x10;
        bVar2 = true;
        goto LAB_00f5a3d0;
      }
      break;
    case (undefined2 *)0x2d:
      iVar13 = thunk_FUN_016dd50a(local_40,"private_group_maximal_reconnection_interval_s",0x2d);
      if (iVar13 == 0) {
        if (bVar5) {
          local_58 = 0x2d;
          puVar14 = &DAT_00582dbd;
          local_5c = "private_group_maximal_reconnection_interval_s";
          goto LAB_00f5a870;
        }
        puVar12 = (undefined4 *)FUN_00f4d8b4(pcVar6);
        if (puVar12 != (undefined4 *)0x0) goto LAB_00f5a884;
        FUN_00f4ecfc(&local_44,pcVar6);
        if ((short)local_44 == 1) goto LAB_00f5a7b4;
        local_84 = (uint)local_44 >> 0x10;
        bVar5 = true;
        goto LAB_00f5a3d0;
      }
    }
    puVar12 = (undefined4 *)FUN_00f4e360(pcVar6);
  } while (puVar12 == (undefined4 *)0x0);
LAB_00f5a884:
LAB_00f5a888:
  bVar2 = true;
LAB_00f5a894:
  param_2[0x1c] = param_2[0x1c] + '\x01';
  puVar15 = (undefined4 *)FUN_00f4cfec(param_2);
  if (bVar2) {
    if (puVar15 != (undefined4 *)0x0) {
      FUN_005c3974();
LAB_00f5ab88:
      thunk_FUN_016d3fb4(puVar15);
    }
LAB_00f5ab90:
    puVar15 = puVar12;
  }
  else {
LAB_00f5a8b0:
    if (puVar15 == (undefined4 *)0x0) {
      local_46 = (undefined2)uVar10;
      local_50 = "public_group_maximal_reconnection_interval_s";
      local_4c = 0x2c;
      if (uVar10 - 1 >> 4 < 0xe1) {
LAB_00f5a950:
        local_46 = SUB42(puVar12,0);
        local_50 = "public_group_stable_connection_duration_s";
        local_4c = 0x29;
        if (((uint)puVar12 & 0xffff) - 1 >> 4 < 0xe1) {
          uVar16 = (uint)puVar12 & 0xffff;
        }
        else {
          local_3c = &local_46;
          local_2c = &DAT_0035c464;
          local_28 = FUN_00fac370;
          local_30 = FUN_00fac370;
          local_38 = FUN_00fac370;
          local_44 = &local_50;
          local_34 = &DAT_0059a1e0;
          local_40 = &DAT_0157d360;
          FUN_00600d2c(&local_5c,&DAT_005900bf,&local_44);
          uVar9 = CONCAT11(uStack_57,local_58);
          uVar16 = (uint)uVar9;
          if (local_5c != (char *)0x80000000) goto LAB_00f5ab54;
        }
        uVar18 = (uint)puVar12 >> 0x10;
        local_46 = (undefined2)((uint)puVar12 >> 0x10);
        local_50 = "private_group_maximal_reconnection_interval_s";
        local_4c = 0x2d;
        if (0xe0 < ((uint)puVar12 >> 0x10) - 1 >> 4) {
          local_3c = &local_46;
          local_2c = &DAT_0035c464;
          local_28 = FUN_00fac370;
          local_30 = FUN_00fac370;
          local_38 = FUN_00fac370;
          local_44 = &local_50;
          local_34 = &DAT_0059a1e0;
          local_40 = &DAT_0157d360;
          FUN_00600d2c(&local_5c,&DAT_005900bf,&local_44);
          uVar9 = CONCAT11(uStack_57,local_58);
          uVar18 = (uint)uVar9;
          if (local_5c != (char *)0x80000000) goto LAB_00f5ab54;
        }
        local_46 = (undefined2)local_6c;
        local_50 = 
        "private_group_stable_connection_duration_sstruct TunerConfigstruct SessionConfigstruct ApiUsageConfigstruct TelemetryConfig"
        ;
        local_4c = 0x2a;
        if (local_6c - 1 >> 4 < 0xe1) {
LAB_00f5ab2c:
          *(uint *)(param_1 + 3) = uVar16 | uVar18 << 0x10;
          param_1[5] = (short)local_6c;
          param_1[1] = 1;
          param_1[2] = (short)uVar10;
          *param_1 = 0;
          return;
        }
        local_3c = &local_46;
        local_2c = &DAT_0035c464;
        local_28 = FUN_00fac370;
        local_30 = FUN_00fac370;
        local_38 = FUN_00fac370;
        local_44 = &local_50;
        local_34 = &DAT_0059a1e0;
        local_40 = &DAT_0157d360;
        FUN_00600d2c(&local_5c,&DAT_005900bf,&local_44);
        uVar9 = CONCAT11(uStack_57,local_58);
        local_6c = (uint)uVar9;
        if (local_5c == (char *)0x80000000) goto LAB_00f5ab2c;
      }
      else {
        local_3c = &local_46;
        local_2c = &DAT_0035c464;
        local_28 = FUN_00fac370;
        local_30 = FUN_00fac370;
        local_38 = FUN_00fac370;
        local_44 = &local_50;
        local_34 = &DAT_0059a1e0;
        local_40 = &DAT_0157d360;
        FUN_00600d2c(&local_5c,&DAT_005900bf,&local_44);
        uVar9 = CONCAT11(uStack_57,local_58);
        uVar10 = (uint)uVar9;
        if (local_5c == (char *)0x80000000) goto LAB_00f5a950;
      }
LAB_00f5ab54:
      local_62 = CONCAT22(uStack_54,uStack_56);
      local_5e = local_52;
      local_68 = local_5c;
      local_64 = uVar9;
      uVar11 = FUN_00f57eb4(&local_68);
      goto LAB_00f5ab9c;
    }
  }
LAB_00f5ab94:
  uVar11 = FUN_011257e4(puVar15,param_2);
LAB_00f5ab9c:
  *(undefined4 *)(param_1 + 2) = uVar11;
  *param_1 = 1;
  return;
}

