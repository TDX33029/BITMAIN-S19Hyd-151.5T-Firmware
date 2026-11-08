// FUN_014e2c00 @ 014e2c00 size=2900 calls_out=31 calls_in=1
// strings: description | description | assets | assets | toolbox_version | toolbox_version

undefined8 FUN_014e2c00(uint *param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *extraout_r1;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int *unaff_r6;
  undefined4 uVar14;
  int iVar15;
  char *unaff_r7;
  char *unaff_r8;
  int iVar16;
  int *unaff_r9;
  byte bVar17;
  bool bVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  int *local_90c;
  uint local_908;
  int *local_904;
  int local_900;
  uint local_8fc;
  int *local_8e8;
  int local_8e0;
  int *local_8dc;
  char *local_8d8;
  int *local_8d4;
  int *local_8d0;
  uint local_8cc;
  int *local_8c8;
  int local_8c4;
  char *local_8c0;
  undefined4 uStack_8bc;
  uint uStack_8b8;
  undefined4 uStack_8b4;
  undefined4 *local_8b0;
  undefined4 *local_8ac;
  uint local_8a8;
  undefined4 *local_8a4;
  int local_8a0;
  int local_898;
  int *local_894;
  undefined1 auStack_890 [692];
  char *local_5dc;
  int *local_5d8;
  uint local_5d4;
  int *local_5d0;
  int *local_5cc;
  byte local_5c8;
  uint local_5c7;
  int local_5c0;
  int *local_5bc;
  undefined1 auStack_5b8 [696];
  char local_300;
  byte bStack_2ff;
  ushort uStack_2fe;
  ushort local_2fc;
  undefined2 uStack_2fa;
  uint local_2f8;
  undefined4 uStack_2f4;
  char *local_40;
  uint local_3c;
  int *local_38;
  undefined4 local_34;
  undefined1 auStack_29 [5];
  
  uVar11 = *param_1;
  uVar6 = 0x15;
  if ((int)uVar11 < 0) {
    uVar6 = uVar11 ^ 0x80000000;
  }
  if (uVar6 != 0x14) {
    if (uVar6 == 0x15) {
      local_8e8 = (int *)0x0;
      local_8c0 = (char *)0x80000015;
      puVar9 = (undefined4 *)((uint)&local_40 | 4);
      puVar10 = (undefined4 *)((uint)&local_8c0 | 4);
      local_8b0 = (undefined4 *)param_1[1];
      local_8a4 = local_8b0 + param_1[2] * 8;
      bVar17 = 3;
      local_8d8 = (char *)0x80000000;
      local_900 = 4;
      local_8a0 = 0;
      local_8e0 = 4;
      bVar1 = false;
      local_8ac = local_8b0;
      local_8a8 = uVar11;
      do {
        puVar3 = local_8ac;
        bVar18 = local_8ac == local_8a4;
        if (!bVar18) {
          unaff_r7 = (char *)*local_8ac;
          local_8ac = local_8ac + 8;
        }
        pcVar8 = unaff_r8;
        if (bVar18 || unaff_r7 == (char *)0x80000015) goto switchD_014e2e84_caseD_5;
        local_8a0 = local_8a0 + 1;
        uVar12 = puVar3[2];
        uVar14 = puVar3[3];
        *puVar9 = puVar3[1];
        puVar9[1] = uVar12;
        puVar9[2] = uVar14;
        uVar12 = puVar3[4];
        local_2f8 = puVar3[6];
        uStack_2f4 = puVar3[7];
        local_300 = (char)uVar12;
        bStack_2ff = (byte)((uint)uVar12 >> 8);
        uStack_2fe = (ushort)((uint)uVar12 >> 0x10);
        local_2fc = (ushort)puVar3[5];
        uStack_2fa = (undefined2)((uint)puVar3[5] >> 0x10);
        local_40 = unaff_r7;
        if (local_8c0 != (char *)0x80000015) {
          FUN_014c81b0(&local_8c0);
        }
        piVar7 = local_38;
        uVar6 = local_3c;
        local_8c0 = (char *)CONCAT22(uStack_2fe,CONCAT11(bStack_2ff,local_300));
        uStack_8bc = CONCAT22(uStack_2fa,local_2fc);
        uStack_8b8 = local_2f8;
        uStack_8b4 = uStack_2f4;
        uVar13 = 0x15;
        if ((int)unaff_r7 < 0) {
          uVar13 = (uint)unaff_r7 ^ 0x80000000;
        }
        uVar12 = local_34;
        switch(uVar13) {
        case 1:
          piVar7 = (int *)(local_3c & 0xff);
          uVar12 = 0;
        case 4:
          FUN_014e87cc(&local_300,&switchD_014e2d60::switchdataD_014e2d64,piVar7,uVar12);
          goto LAB_014e2e40;
        default:
          uVar12 = FUN_014c8278(&local_40,auStack_29,&DAT_01cf9e04);
          local_300 = '\x01';
          local_2fc = (ushort)uVar12;
          uStack_2fa = (undefined2)((uint)uVar12 >> 0x10);
          goto LAB_014e2e54;
        case 0xc:
          FUN_014eefd8(&local_300,local_38,local_34);
          goto LAB_014e2e28;
        case 0xd:
          FUN_014eefd8(&local_300,local_3c,local_38);
          break;
        case 0xe:
          FUN_014e7390(&local_300,local_38,local_34);
LAB_014e2e28:
          FUN_019bb7e0(uVar6,piVar7);
LAB_014e2e40:
          if ((uVar13 | 2) != 0xe) break;
          goto LAB_014e2e54;
        case 0xf:
          FUN_014e7390(&local_300,local_3c,local_38);
        }
        FUN_014c81b0(&local_40);
LAB_014e2e54:
        pcVar2 = local_8c0;
        pcVar8 = (char *)(uint)bStack_2ff;
        if (local_300 != '\0') {
          local_5c0 = local_900;
          local_8dc = (int *)CONCAT22(uStack_2fa,local_2fc);
          pcVar8 = unaff_r8;
          local_5bc = unaff_r6;
          goto LAB_014e31b8;
        }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bStack_2ff) {
        case 0:
          if (bVar17 != 3) {
            local_2fc = 0xb6a0;
            uStack_2fa = 0x132;
            local_5c0 = local_900;
            local_3c = 0xf;
            local_40 = "toolbox_version";
            local_300 = (char)&local_40;
            bStack_2ff = (byte)((uint)&local_40 >> 8);
            uStack_2fe = (ushort)((uint)&local_40 >> 0x10);
            local_5bc = unaff_r6;
            local_8dc = (int *)FUN_019676ac(&DAT_005ab34f,&local_300);
            goto LAB_014e31b8;
          }
          FUN_014cf484(&local_300,&local_8c0);
          if (local_300 != '\0') {
            local_8dc = (int *)CONCAT22(uStack_2fa,local_2fc);
            local_5c0 = local_900;
            local_5bc = unaff_r6;
            goto LAB_014e31b8;
          }
          local_8fc = CONCAT22(local_2fc,uStack_2fe);
          bVar17 = bStack_2ff;
          break;
        case 1:
          if (bVar1) {
            local_2fc = 0xb6a0;
            uStack_2fa = 0x132;
            local_5c0 = local_900;
            local_3c = 6;
            local_40 = &DAT_004ba595;
            local_300 = (char)&local_40;
            bStack_2ff = (byte)((uint)&local_40 >> 8);
            uStack_2fe = (ushort)((uint)&local_40 >> 0x10);
            local_5bc = unaff_r6;
            local_8dc = (int *)FUN_019676ac(&DAT_005ab34f,&local_300);
            goto LAB_014e31b8;
          }
          uVar19 = FUN_014caf34(&local_8c0);
          local_90c = (int *)(uVar19 >> 0x20);
          if ((uVar19 & 1) != 0) {
            local_5c0 = local_900;
            local_5bc = unaff_r6;
LAB_014e3150:
            local_8dc = local_90c;
            goto LAB_014e31b8;
          }
          bVar1 = true;
          break;
        case 2:
          if (local_8e8 != (int *)0x0) {
            local_2fc = 0xb6a0;
            uStack_2fa = 0x132;
            local_5c0 = local_900;
            local_3c = 0xc;
            local_40 = "release_date";
            local_300 = (char)&local_40;
            bStack_2ff = (byte)((uint)&local_40 >> 8);
            uStack_2fe = (ushort)((uint)&local_40 >> 0x10);
            local_5bc = unaff_r6;
            local_8dc = (int *)FUN_019676ac(&DAT_005ab34f,&local_300);
            goto LAB_014e31b8;
          }
          uVar19 = FUN_014cacb4(&local_8c0);
          local_8dc = (int *)(uVar19 >> 0x20);
          local_8e8 = local_8dc;
          if ((uVar19 & 1) != 0) goto LAB_014e3564;
          break;
        case 3:
          if (local_8d8 != (char *)0x80000000) {
            local_2fc = 0xb6a0;
            uStack_2fa = 0x132;
            local_5c0 = local_900;
            local_3c = 0xb;
            local_40 = "description";
            local_300 = (char)&local_40;
            bStack_2ff = (byte)((uint)&local_40 >> 8);
            uStack_2fe = (ushort)((uint)&local_40 >> 0x10);
            local_5bc = unaff_r6;
            local_8dc = (int *)FUN_019676ac(&DAT_005ab34f,&local_300);
            goto LAB_014e31b8;
          }
          FUN_014cad14(&local_300,&local_8c0);
          local_8d8 = (char *)CONCAT22(uStack_2fe,CONCAT11(bStack_2ff,local_300));
          local_8dc = (int *)CONCAT22(uStack_2fa,local_2fc);
          if (local_8d8 == (char *)0x80000000) {
            local_8d8 = (char *)0x80000000;
            local_5c0 = local_900;
            local_5bc = unaff_r6;
            goto LAB_014e31b8;
          }
          local_908 = local_2f8;
          local_904 = local_8dc;
          break;
        case 4:
          if (local_8e0 != 4) {
            local_2fc = 0xb6a0;
            uStack_2fa = 0x132;
            local_5c0 = local_900;
            local_3c = 6;
            local_40 = "assets";
            local_300 = (char)&local_40;
            bStack_2ff = (byte)((uint)&local_40 >> 8);
            uStack_2fe = (ushort)((uint)&local_40 >> 0x10);
            local_5bc = unaff_r6;
            local_8dc = (int *)FUN_019676ac(&DAT_005ab34f,&local_300);
            goto LAB_014e31c4;
          }
          local_8c0 = (char *)0x80000015;
          if (pcVar2 == (char *)0x80000015) {
            local_5c0 = local_900;
            local_5bc = unaff_r6;
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                         ,0x2c,&DAT_01cfa02c);
          }
          uVar12 = puVar10[1];
          uVar14 = puVar10[2];
          *puVar9 = *puVar10;
          puVar9[1] = uVar12;
          puVar9[2] = uVar14;
          local_40 = pcVar2;
          FUN_014e9f5c(&local_300,&local_40);
          local_8e0 = CONCAT22(uStack_2fe,CONCAT11(bStack_2ff,local_300));
          local_8dc = (int *)CONCAT22(uStack_2fa,local_2fc);
          if (local_8e0 == 4) {
            local_5c0 = local_900;
            goto LAB_014e31cc;
          }
          FUN_01bed4e2(auStack_5b8,&local_2f8,0x2b4);
          unaff_r6 = local_8dc;
          local_900 = local_8e0;
          break;
        case 5:
switchD_014e2e84_caseD_5:
          local_5c0 = local_900;
          local_5bc = unaff_r6;
          piVar7 = local_8e8;
          if (bVar17 == 3) {
            FUN_014f548c(&local_300);
            if (local_300 != '\0') {
              local_8dc = (int *)CONCAT22(uStack_2fa,local_2fc);
              goto LAB_014e31b8;
            }
            local_8fc = CONCAT22(local_2fc,uStack_2fe);
            bVar17 = bStack_2ff;
          }
          if (!bVar1) {
            uVar19 = FUN_014ef270();
            local_90c = (int *)(uVar19 >> 0x20);
            if ((uVar19 & 1) != 0) goto LAB_014e3150;
          }
          if (local_8e8 == (int *)0x0) {
            FUN_014dbcc0();
            local_8dc = extraout_r1;
            goto LAB_014e31b8;
          }
          if (local_8d8 == (char *)0x80000000) {
            local_2fc = 0xb6a0;
            uStack_2fa = 0x132;
            local_3c = 0xb;
            local_40 = "description";
            local_300 = (char)&local_40;
            bStack_2ff = (byte)((uint)&local_40 >> 8);
            uStack_2fe = (ushort)((uint)&local_40 >> 0x10);
            local_8dc = (int *)FUN_019676ac(&DAT_0057cd64,&local_300);
            local_8d8 = (char *)0x80000000;
            goto LAB_014e31b8;
          }
          if (local_8e0 == 4) {
            local_2fc = 0xb6a0;
            uStack_2fa = 0x132;
            local_3c = 6;
            local_40 = "assets";
            local_300 = (char)&local_40;
            bStack_2ff = (byte)((uint)&local_40 >> 8);
            uStack_2fe = (ushort)((uint)&local_40 >> 0x10);
            local_8dc = (int *)FUN_019676ac(&DAT_0057cd64,&local_300);
            goto LAB_014e31d4;
          }
          FUN_01bed4e2(&local_300,auStack_5b8,0x2b4);
          local_898 = local_8e0;
          local_894 = unaff_r6;
          FUN_01bed4e2(auStack_890,&local_300,0x2b4);
          local_5c7 = local_8fc;
          local_5cc = local_90c;
          local_5d0 = local_8e8;
          local_5d4 = local_908;
          local_5d8 = local_904;
          local_5dc = local_8d8;
          local_5c8 = bVar17;
          piVar7 = (int *)FUN_014c9cac(&local_8c0);
          local_8dc = unaff_r6;
          if (piVar7 != (int *)0x0) {
            FUN_014c9e00(&local_898);
            local_8e0 = 4;
            local_8dc = piVar7;
          }
          pcVar8 = (char *)(local_8fc >> 0x10);
          goto LAB_014e31f8;
        }
        unaff_r7 = local_8d8;
        unaff_r8 = pcVar8;
      } while( true );
    }
    piVar7 = (int *)FUN_014c8278(param_1,auStack_29,&DAT_01cf9d24);
    uVar12 = 1;
    goto LAB_014e32c8;
  }
  local_8cc = param_1[1];
  local_8d4 = (int *)param_1[2];
  local_8c8 = local_8d4 + param_1[3] * 4;
  local_8c4 = 0;
  local_8d0 = local_8d4;
  FUN_014cf4e4(&local_300,&local_8d4);
  uVar5 = local_2fc;
  uVar4 = uStack_2fe;
  bVar17 = bStack_2ff;
  if (local_300 == '\x01') {
LAB_014e3068:
    local_8dc = (int *)CONCAT22(uStack_2fa,local_2fc);
    local_8d8 = unaff_r7;
    local_8e8 = unaff_r9;
    goto LAB_014e3110;
  }
  local_8e8 = unaff_r9;
  piVar7 = local_8d0;
  if (bStack_2ff == 3) {
    uVar12 = 0;
LAB_014e30f8:
    local_8d0 = piVar7;
    local_8dc = (int *)FUN_014dee0c(uVar12,&DAT_01cf9fd4,&DAT_01d064b8);
    local_8d8 = unaff_r7;
  }
  else {
    uVar12 = 1;
    if (local_8d0 == local_8c8) goto LAB_014e30f8;
    pcVar8 = (char *)(uint)local_2fc;
    uVar6 = (uint)uStack_2fe;
    iVar16 = *local_8d0;
    piVar7 = local_8d0 + 4;
    if (iVar16 == -0x7fffffeb) goto LAB_014e30f8;
    piVar7 = (int *)((uint)&local_300 | 4);
    iVar15 = local_8d0[2];
    unaff_r7 = (char *)local_8d0[3];
    *piVar7 = local_8d0[1];
    piVar7[1] = iVar15;
    piVar7[2] = (int)unaff_r7;
    local_300 = (char)iVar16;
    bStack_2ff = (byte)((uint)iVar16 >> 8);
    uStack_2fe = (ushort)((uint)iVar16 >> 0x10);
    local_8c4 = local_8c4 + 1;
    local_8d0 = local_8d0 + 4;
    uVar20 = FUN_014ef2c8(&local_300);
    piVar7 = (int *)((ulonglong)uVar20 >> 0x20);
    local_8dc = piVar7;
    local_8d8 = unaff_r7;
    if ((int)uVar20 != 1) {
      uVar19 = FUN_014caeb4(&local_8d4);
      local_8e8 = (int *)(uVar19 >> 0x20);
      if ((uVar19 & 1) == 0) {
        if (local_8e8 == (int *)0x0) {
          uVar12 = 2;
          piVar7 = local_8d0;
        }
        else {
          FUN_014ca8dc(&local_300,&local_8d4);
          uVar13 = local_2f8;
          local_8d8 = (char *)CONCAT22(uStack_2fe,CONCAT11(bStack_2ff,local_300));
          unaff_r7 = local_8d8;
          unaff_r9 = local_8e8;
          local_90c = piVar7;
          if (local_8d8 == (char *)0x80000001) goto LAB_014e3068;
          if (local_8d8 != (char *)0x80000000) {
            local_904 = (int *)CONCAT22(uStack_2fa,local_2fc);
            local_908 = local_2f8;
            FUN_014cf58c(&local_300,&local_8d4);
            local_8e0 = CONCAT22(uStack_2fe,CONCAT11(bStack_2ff,local_300));
            local_8dc = (int *)CONCAT22(uStack_2fa,local_2fc);
            if (local_8e0 != 5) {
              FUN_01bed4e2(&local_5c0,&local_2f8,0x2b4);
              if (local_8e0 != 4) {
                FUN_01bed4e2(&local_300,&local_5c0,0x2b4);
                local_898 = local_8e0;
                local_894 = local_8dc;
                FUN_01bed4e2(auStack_890,&local_300,0x2b4);
                local_5c8 = bVar17;
                local_5c7 = CONCAT22(uVar5,uVar4);
                local_5d4 = uVar13;
                local_5dc = local_8d8;
                local_5d8 = local_904;
                local_5d0 = local_8e8;
                local_5cc = piVar7;
                piVar7 = (int *)FUN_014ca838(&local_8d4);
                if (piVar7 != (int *)0x0) {
                  FUN_014c9e00(&local_898);
                  local_8e0 = 4;
                  local_8dc = piVar7;
                }
                local_8fc = uVar6;
                goto LAB_014e31f8;
              }
              local_8dc = (int *)FUN_014dee0c(4,&DAT_01cf9fd4,&DAT_01d064b8);
            }
            FUN_019bb7e0(local_8d8,local_904);
            goto LAB_014e3110;
          }
          uVar12 = 3;
          piVar7 = local_8d0;
        }
        goto LAB_014e30f8;
      }
      local_8dc = local_8e8;
    }
  }
LAB_014e3110:
  pcVar8 = &local_300;
  FUN_014deb6c(&local_8d4);
  bVar17 = 0;
  local_8e0 = 4;
  goto LAB_014e31f8;
LAB_014e3564:
  local_5c0 = local_900;
  local_5bc = unaff_r6;
LAB_014e31b8:
  if (local_8e0 != 4) {
LAB_014e31c4:
    FUN_014c9e20(&local_5c0);
  }
LAB_014e31cc:
  local_8e8 = piVar7;
  if (local_8d8 != (char *)0x80000000) {
LAB_014e31d4:
    FUN_019bb7e0(local_8d8,local_904);
  }
  FUN_014c9c60(&local_8c0);
  bVar17 = 0;
  local_8e0 = 4;
LAB_014e31f8:
  if ((0x7fffffff < uVar11) && ((undefined1 *)(uVar11 & 0xfffffffe) != &DAT_80000014)) {
    FUN_014c81b0(param_1);
  }
  uVar12 = 1;
  piVar7 = local_8dc;
  if (local_8e0 != 4) {
    local_898 = local_8e0;
    local_894 = local_8dc;
    FUN_01bed4e2(auStack_890,&local_300,0x2b4);
    iVar16 = (local_8fc & 0xffff) + (int)pcVar8 * 0x10000;
    local_5cc = local_90c;
    local_5d4 = local_908;
    local_5d8 = local_904;
    local_5dc = local_8d8;
    local_5d0 = local_8e8;
    local_5c8 = bVar17;
    local_5c7 = iVar16;
    piVar7 = (int *)thunk_FUN_01be5118(0x2d8);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x2d8);
    }
    *piVar7 = local_8e0;
    piVar7[1] = (int)local_8dc;
    FUN_01bed4e2(piVar7 + 2,&local_300,0x2b4);
    piVar7[0xb2] = (int)local_8e8;
    uVar12 = 0;
    *(int *)((int)piVar7 + 0x2d1) = iVar16;
    *(byte *)(piVar7 + 0xb4) = bVar17;
    piVar7[0xaf] = (int)local_8d8;
    piVar7[0xb0] = (int)local_904;
    piVar7[0xb1] = local_908;
    piVar7[0xb3] = (int)local_90c;
  }
LAB_014e32c8:
  return CONCAT44(piVar7,uVar12);
}

