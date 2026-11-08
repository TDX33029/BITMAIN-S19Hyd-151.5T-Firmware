// FUN_0101de8c @ 0101de8c size=4404 calls_out=15 calls_in=1
// strings: 

void FUN_0101de8c(undefined4 *param_1,byte *param_2,uint *param_3,undefined4 param_4)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  undefined4 *puVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  undefined8 uVar24;
  uint *local_2bc;
  undefined4 local_2b0;
  uint *local_280;
  undefined4 *local_27c;
  undefined4 *local_278;
  uint *local_274;
  undefined2 local_270;
  undefined1 auStack_26e [98];
  byte local_20c;
  undefined2 local_20b;
  undefined1 local_209;
  uint *local_208;
  int local_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 local_1f4;
  undefined4 *local_1f0;
  uint *local_1ec;
  uint *local_1e8;
  uint local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  int local_1d8;
  undefined4 local_1d4;
  undefined4 *local_1d0;
  uint *local_1cc;
  uint *local_1c8;
  uint *local_1c0;
  uint local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 *local_1a8;
  uint *puStack_1a4;
  uint *puStack_1a0;
  undefined4 local_198;
  uint *local_194;
  uint *local_190;
  uint auStack_18c [31];
  undefined4 *local_110;
  uint *local_10c;
  uint *puStack_108;
  uint uStack_104;
  undefined1 auStack_100 [16];
  undefined4 local_f0;
  uint *local_ec;
  uint *local_e8;
  uint local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 *puStack_d0;
  uint *puStack_cc;
  uint *puStack_c8;
  undefined4 *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 *local_b0;
  uint *local_ac;
  undefined4 local_a8;
  uint local_a4;
  uint uStack_a0;
  uint local_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 *local_30;
  
  FUN_010a55c4(&local_b0);
  FUN_016dd1aa(&local_278,&local_b0,0x88);
  local_280 = local_274;
  local_27c = local_278;
  uVar17 = (undefined1)local_1f4;
  FUN_016dd1aa(&local_b0,&local_270,0x7c);
  uVar6 = (uint)local_278 ^ 3;
  local_198._0_3_ = (undefined3)((uint)local_1f4 >> 8);
  if (uVar6 != 0 || local_274 != (uint *)0x0) {
    FUN_016dd1aa(&local_b0,&local_270,0x7c);
    uVar17 = 3;
    local_198._0_3_ = (undefined3)((uint)local_1f4 >> 8);
  }
  FUN_016dd1aa(&local_270,&local_b0,0x7c);
  bVar19 = *param_2;
  puVar7 = (uint *)(uint)bVar19;
  uVar5 = CONCAT31((int3)local_198,uVar17);
  local_1f4 = uVar5;
  if (puVar7 != (uint *)&DAT_0000000b) {
    local_2bc = *(uint **)(param_2 + 4);
    iVar10 = *(int *)(param_2 + 8);
    local_198 = (undefined4 *)CONCAT22(CONCAT11(local_198._3_1_,local_209),local_20b);
    local_f0 = (undefined4 *)
               CONCAT22(CONCAT11(local_f0._3_1_,param_2[3]),*(undefined2 *)(param_2 + 1));
    local_2b0 = *(undefined4 *)(param_2 + 0xc);
    uVar16 = *(undefined4 *)(param_2 + 0x10);
    FUN_016dd1aa(&local_b0,&local_270,100);
    if (uVar6 == 0 && local_280 == (uint *)0x0) {
      if ((&DAT_00000009 < puVar7) && (iVar10 != 0)) {
        thunk_FUN_016d3fb4(local_2bc);
      }
      local_2b0 = local_200;
      puVar13 = local_208;
      uVar16 = uStack_1fc;
      iVar10 = local_204;
      bVar19 = local_20c;
    }
    else {
      if ((9 < local_20c) && (local_204 != 0)) {
        thunk_FUN_016d3fb4(local_208);
      }
      FUN_016dd1aa(&local_b0,&local_270,100);
      local_198._0_3_ = SUB43(local_f0,0);
      puVar13 = local_2bc;
    }
    FUN_016dd1aa(&local_270,&local_b0,100);
    local_200 = local_2b0;
    puVar18 = *(undefined4 **)(param_2 + 0x44);
    local_20c = bVar19;
    local_208 = puVar13;
    local_204 = iVar10;
    uStack_1fc = uVar16;
    if (puVar18 == (undefined4 *)0x0) {
      local_1f4 = uVar5;
      goto LAB_0101e574;
    }
    if (puVar7 == (uint *)&DAT_00000007) {
      local_1f4 = uVar5;
      FUN_016dd1aa(&local_198,&local_270,0x80);
      local_bc = *(undefined4 *)(param_2 + 0x48);
      local_b8 = *(undefined4 *)(param_2 + 0x4c);
      uStack_b4 = *(undefined4 *)(param_2 + 0x50);
      local_c0 = puVar18;
      if (uVar6 != 0 || local_280 != (uint *)0x0) {
        FUN_016dd1aa(&local_a8,&local_270,0x80);
        local_ac = local_280;
        local_1ec = *(uint **)(param_2 + 0x48);
        local_1e8 = *(uint **)(param_2 + 0x4c);
        local_1e4 = *(uint *)(param_2 + 0x50);
        local_b0 = local_27c;
        local_1f0 = puVar18;
        if (local_30 == (undefined4 *)0x0) {
          local_30 = (undefined4 *)thunk_FUN_016d4a50(0x10);
          if (local_30 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x10);
          }
          *local_30 = &DAT_005674cc;
          local_30[1] = 0;
          local_30[2] = 0;
          local_30[3] = 0;
        }
        puVar14 = local_30;
        local_f0 = local_1f0;
        local_ec = local_1ec;
        local_e8 = local_1e8;
        local_e4 = local_1e4;
        puVar11 = (uint *)thunk_FUN_016d4a50(0x10);
        if (puVar11 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        *puVar11 = (uint)local_1f0;
        puVar11[1] = (uint)local_1ec;
        puVar11[2] = (uint)local_1e8;
        puVar11[3] = local_1e4;
        if (puVar14[2] == 0) {
          FUN_0109f6b4(puVar14);
        }
        bVar23 = false;
        puVar13 = (uint *)*puVar14;
        uVar6 = puVar14[1];
        uVar12 = uVar6 & 0x5e18756f;
        iVar10 = 0;
        do {
          uVar8 = *(uint *)((int)puVar13 + uVar12);
          uVar9 = uVar8 & 0x80808080;
          uVar21 = (uVar9 ^ 0x80808080) & (uVar8 ^ 0x2f2f2f2f) + 0xfefefeff;
          while (uVar21 != 0) {
            uVar15 = uVar12 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                             (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) &
                     uVar6;
            uVar21 = uVar21 - 1 & uVar21;
            if ((puVar13[uVar15 * -6 + -6] == 0x80228a29 && puVar13[uVar15 * -6 + -4] == 0x5e18756f)
                && (puVar13[uVar15 * -6 + -5] == 0x2fcf1d9b &&
                   puVar13[uVar15 * -6 + -3] == 0xaecae402)) {
              uVar6 = puVar13[uVar15 * -6 + -2];
              uVar12 = puVar13[uVar15 * -6 + -1];
              puVar13[uVar15 * -6 + -2] = (uint)puVar11;
              puVar13[uVar15 * -6 + -1] = (uint)&DAT_01882de0;
              uVar24 = (**(code **)(uVar12 + 0x1c))(uVar6);
              puVar14 = (undefined4 *)((ulonglong)uVar24 >> 0x20);
              puVar11 = (uint *)uVar24;
              (*(code *)puVar14[3])(&local_f0,puVar11);
              puVar13 = puVar11;
              if ((local_f0 != (undefined4 *)0x80228a29 || local_e8 != (uint *)0x5e18756f) ||
                  (local_ec != (uint *)0x2fcf1d9b || local_e4 != 0xaecae402)) {
                puVar13 = (uint *)0x0;
                if ((code *)*puVar14 != (code *)0x0) {
                  (*(code *)*puVar14)(puVar11);
                }
                if (puVar14[1] != 0) {
                  thunk_FUN_016d3fb4(puVar11);
                }
              }
              if (puVar13 != (uint *)0x0) {
                local_f0 = (undefined4 *)*puVar11;
                local_ec = (uint *)puVar11[1];
                local_e8 = (uint *)puVar11[2];
                local_e4 = puVar11[3];
                thunk_FUN_016d3fb4(puVar13);
                if (local_f0 != (undefined4 *)0x0) {
                  (*(code *)local_f0[4])(&local_e4,local_ec,local_e8);
                }
              }
              goto LAB_0101e530;
            }
          }
          if (bVar23) {
LAB_0101e3f8:
            if ((uVar9 & uVar8 << 1) != 0) goto LAB_0101eed4;
            bVar23 = true;
          }
          else {
            if (uVar9 != 0) {
              local_2bc = (uint *)(uVar12 + ((uint)LZCOUNT(uVar9 << 0x18 |
                                                           (uVar9 >> 8 & 0xff) << 0x10 |
                                                           (uVar9 >> 0x10 & 0xff) << 8 |
                                                           uVar9 >> 0x18) >> 3) & uVar6);
              goto LAB_0101e3f8;
            }
            bVar23 = false;
          }
          iVar10 = iVar10 + 4;
          uVar12 = iVar10 + uVar12 & uVar6;
        } while( true );
      }
      (*(code *)puVar18[4])(&uStack_b4,local_bc,local_b8);
      local_280 = (uint *)0x0;
      local_27c = (undefined4 *)0x3;
      puVar13 = (uint *)&local_270;
      goto LAB_0101e550;
    }
    bVar23 = true;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[3] = param_4;
    param_1[4] = 1;
    local_1f4 = uVar5;
    goto LAB_0101e5c4;
  }
  bVar23 = true;
  *param_1 = 3;
  param_1[1] = 0;
  param_1[3] = param_4;
  param_1[4] = 1;
  *(undefined2 *)(param_1 + 2) = 0x100;
LAB_0101e5cc:
  bVar4 = true;
  bVar19 = 1;
  bVar3 = true;
LAB_0101e5d0:
  if (local_27c != (undefined4 *)0x3 || local_280 != (uint *)0x0) {
    FUN_0101dd68(&local_278);
  }
  goto LAB_0101e5ec;
LAB_0101eed4:
  uVar12 = (uint)*(char *)((int)puVar13 + (int)local_2bc);
  if (-1 < (int)uVar12) {
    uVar12 = *puVar13 & 0x80808080;
    uVar8 = LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                    (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18);
    uVar12 = (uint)*(byte *)((int)puVar13 + (uVar8 >> 3));
    local_2bc = (uint *)(uVar8 >> 3);
  }
  iVar20 = puVar14[2];
  iVar10 = puVar14[3];
  *(char *)((int)puVar13 + (int)local_2bc) = '/';
  puVar14[2] = iVar20 - (uVar12 & 1);
  puVar14[3] = iVar10 + 1;
  *(char *)((int)puVar13 + (uVar6 & (uint)(local_2bc + -1)) + 4) = '/';
  puVar13[(int)local_2bc * -6 + -6] = 0x80228a29;
  puVar13[(int)local_2bc * -6 + -4] = 0x5e18756f;
  puVar13[(int)local_2bc * -6 + -5] = 0x2fcf1d9b;
  puVar13[(int)local_2bc * -6 + -1] = (uint)&DAT_01882de0;
  puVar13[(int)local_2bc * -6 + -2] = (uint)puVar11;
  puVar13[(int)local_2bc * -6 + -3] = 0xaecae402;
LAB_0101e530:
  FUN_016dd1aa(&local_198,&local_a8,0x80);
LAB_0101e550:
  FUN_016dd1aa(&local_270,&local_198,0x80);
  local_278 = local_27c;
  local_274 = local_280;
LAB_0101e574:
  bVar23 = puVar18 == (undefined4 *)0x0;
  if (*(short *)(param_2 + 0x54) != 0) {
    *param_1 = 3;
    param_1[1] = 0;
    param_1[3] = param_4;
    param_1[4] = 1;
LAB_0101e5c4:
    *(undefined2 *)(param_1 + 2) = 0x100;
    goto LAB_0101e5cc;
  }
  uVar6 = *(uint *)(param_2 + 0x24);
  local_1d8 = 0;
  local_1e8 = (uint *)0x0;
  local_1f0 = (undefined4 *)CONCAT31(local_1f0._1_3_,3);
  bVar3 = uVar6 == 0;
  if (uVar6 != 0) {
    local_f0 = *(undefined4 **)(param_2 + 0x24);
    local_ec = *(uint **)(param_2 + 0x28);
    local_e8 = *(uint **)(param_2 + 0x2c);
    local_e4 = *(uint *)(param_2 + 0x30);
    (*(code *)*local_f0)(&local_110,&local_e4);
    local_194 = local_10c;
    local_190 = puStack_108;
    auStack_18c[0] = uStack_104;
    local_198 = (undefined4 *)0x0;
    if (local_110 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01882e00);
    }
    local_b0 = local_110;
    local_ac = local_10c;
    local_a8 = puStack_108;
    local_a4 = uStack_104;
    FUN_010a6934(&local_1c0,&local_b0);
    if (local_198 != (undefined4 *)0x0) {
      (*(code *)local_198[4])(auStack_18c,local_194,local_190);
    }
    if (local_1c0 != (uint *)0x0) {
      if (local_1e8 != (uint *)0x0) {
        (*(code *)local_1e8[4])(&local_1dc,local_1e4,local_1e0);
      }
      local_1e8 = local_1c0;
      local_1e4 = local_1bc;
      local_1e0 = local_1b8;
      local_1dc = local_1b4;
      (*(code *)local_f0[4])(&local_e4,local_ec,local_e8);
      puVar13 = local_1c0;
      goto LAB_0101e800;
    }
    *param_1 = 3;
    param_1[1] = 0;
    param_1[3] = param_4;
    param_1[4] = 1;
    *(undefined2 *)(param_1 + 2) = 0x100;
    (*(code *)local_f0[4])(&local_e4,local_ec,local_e8);
LAB_0101e920:
    bVar19 = 1;
    bVar4 = true;
LAB_0101ee44:
    puVar7 = local_1ec;
    if ((char)local_1f0 == '\x02') {
      (**(code **)(*local_1ec + 0x10))(local_1ec + 3,local_1ec[1],local_1ec[2]);
      thunk_FUN_016d3fb4(puVar7);
    }
    if (local_1e8 != (uint *)0x0) {
      (*(code *)local_1e8[4])(&local_1dc,local_1e4,local_1e0);
    }
    if (local_1d8 != 0) {
      (**(code **)(local_1d8 + 0x10))(&local_1cc,local_1d4,local_1d0);
    }
    local_27c = local_278;
    local_280 = local_274;
    goto LAB_0101e5d0;
  }
LAB_0101e800:
  puVar11 = (uint *)(param_2 + 0x14);
  bVar4 = *puVar11 == 0;
  if (*puVar11 == 0) {
    if (puVar18 == (undefined4 *)0x0) {
      puVar11 = puVar7;
    }
    if (puVar18 == (undefined4 *)0x0 && puVar11 == (uint *)&DAT_00000007) {
      if (*(uint *)(param_2 + 0x34) != 0) {
        local_b0 = *(undefined4 **)(param_2 + 0x34);
        local_ac = *(uint **)(param_2 + 0x38);
        local_a8 = *(uint **)(param_2 + 0x3c);
        local_a4 = *(uint *)(param_2 + 0x40);
        *param_1 = 3;
        param_1[1] = 0;
        param_1[3] = param_4;
        param_1[4] = 1;
        *(undefined2 *)(param_1 + 2) = 0x100;
        goto LAB_0101ee18;
      }
      bVar19 = 1;
      goto LAB_0101ec60;
    }
    *param_1 = 3;
    param_1[1] = 0;
    param_1[3] = param_4;
    param_1[4] = 1;
    *(undefined2 *)(param_1 + 2) = 0x100;
    goto LAB_0101e920;
  }
  local_f0 = (undefined4 *)*puVar11;
  local_ec = *(uint **)(param_2 + 0x18);
  local_e8 = *(uint **)(param_2 + 0x1c);
  local_e4 = *(uint *)(param_2 + 0x20);
  puVar11 = &local_f0;
  if (puVar18 == (undefined4 *)0x0) {
    puVar11 = puVar7;
  }
  if (puVar18 == (undefined4 *)0x0 && puVar11 == (uint *)&DAT_00000007) {
LAB_0101e9d0:
    param_1[3] = param_4;
    *(undefined2 *)(param_1 + 2) = 0x100;
    param_1[4] = 1;
    *param_1 = 3;
    param_1[1] = 0;
    (*(code *)local_f0[4])(&local_e4,local_ec,local_e8);
    bVar4 = false;
    bVar19 = 1;
    goto LAB_0101ee44;
  }
  if (local_e8 == (uint *)&DAT_00000005) {
    if ((char)*local_ec == 'h') {
      cVar2 = *(char *)((int)local_ec + 1);
      bVar22 = cVar2 == 't';
      if (bVar22) {
        cVar2 = *(char *)((int)local_ec + 2);
      }
      if (bVar22 && cVar2 == 't') {
        cVar2 = *(char *)((int)local_ec + 3);
        bVar22 = cVar2 == 'p';
        if (bVar22) {
          cVar2 = (char)local_ec[1];
        }
        if (bVar22 && cVar2 == 's') {
          uVar6 = 0x100;
          goto LAB_0101e97c;
        }
      }
    }
LAB_0101e990:
    puVar13 = (uint *)0x0;
    do {
      if (local_e8 == puVar13) {
        FUN_00f5eea8(&local_198);
        local_b0 = local_198;
        local_ac = local_194;
        local_a8 = local_190;
        local_a4 = auStack_18c[0];
        puVar13 = (uint *)thunk_FUN_016d4a50(0x10);
        if (puVar13 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        *puVar13 = (uint)local_198;
        puVar13[1] = (uint)local_194;
        puVar13[2] = (uint)local_190;
        puVar13[3] = auStack_18c[0];
        uVar6 = 0;
        uVar12 = 2;
        goto LAB_0101eabc;
      }
      pbVar1 = (byte *)((int)local_ec + (int)puVar13);
    } while ((""[*pbVar1] != '\0') && (puVar13 = (uint *)((int)puVar13 + 1), ""[*pbVar1] != ':'));
    goto LAB_0101e9d0;
  }
  if (local_e8 != (uint *)&DAT_00000004) {
    if (&DAT_00000041 <= local_e8) goto LAB_0101e9d0;
    goto LAB_0101e990;
  }
  cVar2 = (char)*local_ec;
  bVar22 = cVar2 != 'h';
  if (!bVar22) {
    cVar2 = *(char *)((int)local_ec + 1);
  }
  if (bVar22 || cVar2 != 't') goto LAB_0101e990;
  cVar2 = *(char *)((int)local_ec + 2);
  bVar22 = cVar2 != 't';
  if (!bVar22) {
    cVar2 = *(char *)((int)local_ec + 3);
  }
  if (bVar22 || cVar2 != 'p') goto LAB_0101e990;
  uVar6 = 0;
LAB_0101e97c:
  uVar12 = 1;
LAB_0101eabc:
  if (local_1e8 == (uint *)0x0) {
    FUN_010a3c20(uVar12,puVar13);
  }
  else {
    FUN_010c83b0((uint)local_1f0 & 0xff,local_1ec);
    local_1f0 = (undefined4 *)(uVar6 | uVar12);
    local_1ec = puVar13;
  }
  (*(code *)local_f0[4])(&local_e4,local_ec,local_e8);
  if (*(uint *)(param_2 + 0x34) != 0) {
    local_b0 = *(undefined4 **)(param_2 + 0x34);
    local_ac = *(uint **)(param_2 + 0x38);
    local_a8 = *(uint **)(param_2 + 0x3c);
    local_a4 = *(uint *)(param_2 + 0x40);
    if (local_a8 == (uint *)0x0) {
      *param_1 = 3;
      param_1[1] = 0;
      param_1[3] = param_4;
      param_1[4] = 1;
      *(undefined2 *)(param_1 + 2) = 0x100;
    }
    else {
      (*(code *)*local_b0)(auStack_100,&local_a4,local_ac);
      FUN_0102be9c(&local_1b0,auStack_100);
      if (local_1b0 != 0) {
        local_f0 = local_1a8;
        local_ec = puStack_1a4;
        local_e8 = puStack_1a0;
        if (local_1d8 != 0) {
          (**(code **)(local_1d8 + 0x10))(&local_1cc,local_1d4,local_1d0);
        }
        local_1d4 = local_1ac;
        local_1d8 = local_1b0;
        local_1d0 = local_f0;
        local_1cc = local_ec;
        local_1c8 = local_e8;
        (*(code *)local_b0[4])(&local_a4,local_ac,local_a8);
        bVar19 = 0;
        goto LAB_0101ec60;
      }
      local_f0 = local_198;
      local_ec = local_194;
      local_e8 = local_190;
      *param_1 = 3;
      param_1[1] = 0;
      *(undefined2 *)(param_1 + 2) = 0x100;
      param_1[4] = 1;
      param_1[3] = param_4;
      param_1[5] = local_198;
      param_1[6] = local_194;
      param_1[7] = local_190;
    }
LAB_0101ee18:
    (*(code *)local_b0[4])(&local_a4,local_ac,local_a8);
    bVar19 = 0;
    goto LAB_0101ee44;
  }
  bVar19 = 1;
  if ((puVar7 == (uint *)&DAT_00000007) && (puVar18 != (undefined4 *)0x0)) {
    bVar4 = false;
    param_1[3] = param_4;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[4] = 1;
    *(undefined2 *)(param_1 + 2) = 0x100;
    goto LAB_0101ee44;
  }
LAB_0101ec60:
  FUN_016dd1aa(&local_b0,&local_278,0x88);
  local_f0 = local_1f0;
  local_ec = local_1ec;
  local_e8 = local_1e8;
  local_e4 = local_1e4;
  uStack_e0 = local_1e0;
  local_dc = local_1dc;
  iStack_d8 = local_1d8;
  uStack_d4 = local_1d4;
  puStack_d0 = local_1d0;
  puStack_cc = local_1cc;
  puStack_c8 = local_1c8;
  FUN_010308b0(&local_198,&local_b0);
  FUN_016dd1aa(&local_278,&local_198,0x88);
  puVar7 = local_274;
  puVar14 = local_278;
  if (local_278 != (undefined4 *)0x3 || local_274 != (uint *)0x0) {
    FUN_016dd1aa((int)&local_a8 + 2,auStack_26e,0x7e);
    local_ac = puVar7;
    local_b0 = puVar14;
    local_a8 = (uint *)CONCAT22(local_a8._2_2_,local_270);
    FUN_01015c1c(&local_b0);
    local_b0 = (undefined4 *)*param_3;
    local_ac = (uint *)param_3[1];
    local_a8 = (uint *)param_3[2];
    local_a4 = param_3[3];
    uStack_a0 = param_3[4];
    local_9c = param_3[5];
    uStack_98 = param_3[6];
    uStack_94 = param_3[7];
    uStack_90 = param_3[8];
    uStack_8c = param_3[9];
    local_88 = param_3[10];
    uStack_84 = param_3[0xb];
    uStack_80 = param_3[0xc];
    uStack_7c = param_3[0xd];
    uStack_78 = param_3[0xe];
    uStack_74 = param_3[0xf];
    FUN_016dd1aa(param_1,&local_b0,0x88);
    if (puVar18 != (undefined4 *)0x0) {
      return;
    }
    iVar10 = *(int *)(param_2 + 0x44);
    bVar23 = iVar10 == 0;
    goto joined_r0x0101ed84;
  }
  *param_1 = 3;
  param_1[1] = 0;
  param_1[3] = param_4;
  param_1[4] = 1;
  *(undefined2 *)(param_1 + 2) = 0x100;
LAB_0101e5ec:
  FUN_01015c1c(param_3);
  if ((bool)(bVar4 & *(int *)(param_2 + 0x14) != 0)) {
    (**(code **)(*(int *)(param_2 + 0x14) + 0x10))
              (param_2 + 0x20,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
  }
  if ((bool)(bVar3 & *(int *)(param_2 + 0x24) != 0)) {
    (**(code **)(*(int *)(param_2 + 0x24) + 0x10))
              (param_2 + 0x30,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  }
  if ((bool)(bVar19 & *(int *)(param_2 + 0x34) != 0)) {
    (**(code **)(*(int *)(param_2 + 0x34) + 0x10))
              (param_2 + 0x40,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
  }
  iVar10 = *(int *)(param_2 + 0x44);
  bVar23 = !(bool)(bVar23 & iVar10 != 0);
joined_r0x0101ed84:
  if (bVar23) {
    return;
  }
  (**(code **)(iVar10 + 0x10))
            (param_2 + 0x50,*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x4c));
  return;
}

