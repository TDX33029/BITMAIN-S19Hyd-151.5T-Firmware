// FUN_014e1a18 @ 014e1a18 size=3752 calls_out=28 calls_in=1
// strings: unexpected map keystruct Metadata with 5 elementsstruct Metadata with 6 elementsstruct Metadata with 7 elementsstruct IndexVariant with 4 elementsstruct Assets with 5 elementsstruct Metadata with 3 elements | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014e1a18(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined4 ******ppppppuVar10;
  undefined4 *puVar11;
  uint ******unaff_r4;
  uint ******ppppppuVar12;
  int iVar13;
  uint *****pppppuVar14;
  uint ******ppppppuVar15;
  undefined4 uVar16;
  undefined4 ******ppppppuVar17;
  uint *****pppppuVar18;
  undefined4 uVar19;
  bool bVar20;
  int iVar21;
  bool bVar22;
  uint ******ppppppuVar23;
  bool bVar24;
  undefined8 uVar25;
  undefined2 *local_acf4;
  uint ******local_ac90;
  undefined2 *local_ac8c;
  uint ******local_ac84;
  uint ******local_ac80;
  undefined4 local_ac7c;
  uint ******local_ac78;
  int local_ac74;
  uint local_ac70;
  uint uStack_ac6c;
  uint uStack_ac68;
  undefined4 ******local_ac60;
  uint local_ac5c;
  undefined4 ******local_ac58;
  uint ******local_ac50;
  undefined2 *puStack_ac4c;
  undefined1 local_ac48;
  undefined1 auStack_ac40 [4384];
  uint ******local_9b20;
  undefined2 *local_9b1c;
  undefined1 auStack_9b18 [4379];
  undefined2 *local_89fd;
  undefined1 auStack_89f9 [9];
  uint ******local_89f0;
  undefined2 *puStack_89ec;
  undefined1 local_89e8;
  undefined1 auStack_89e0 [4384];
  undefined4 ******local_78c0;
  int local_78bc;
  int iStack_78b8;
  int local_78b0;
  undefined4 local_78ac;
  undefined4 local_78a8;
  undefined4 local_78a4;
  int local_78a0;
  int local_789c;
  undefined4 ******local_7898;
  int iStack_7894;
  undefined4 uStack_7890;
  uint ******local_7888;
  undefined2 *local_7884;
  undefined1 auStack_7880 [4379];
  undefined2 *local_6765;
  undefined1 auStack_6761 [9];
  uint ******local_6758;
  undefined2 *puStack_6754;
  undefined1 local_6750;
  undefined2 local_6748;
  undefined1 local_6746;
  int local_6744;
  int local_6740;
  int local_673c;
  uint ******local_6738;
  undefined2 *puStack_6734;
  undefined1 local_6730;
  undefined2 local_672c;
  undefined1 local_672a;
  uint ******local_6728;
  undefined2 *local_6724;
  undefined1 auStack_6720 [4376];
  uint *****local_5608 [1094];
  undefined8 local_44f0;
  int local_33d8;
  int local_33d4;
  int iStack_33d0;
  int local_33cc;
  uint *****local_22c0;
  undefined4 local_22bc;
  undefined4 local_22b8;
  undefined4 uStack_22b4;
  int local_22b0;
  int local_22ac;
  undefined *local_22a8;
  undefined4 local_22a4;
  undefined *local_22a0;
  undefined4 local_229c;
  undefined *local_2298;
  undefined4 local_2294;
  uint *****local_2290;
  undefined4 uStack_228c;
  undefined4 local_2288;
  undefined4 uStack_2284;
  uint ******local_2280;
  undefined2 *local_227c;
  uint ******local_2278;
  undefined2 *puStack_2274;
  int local_2270;
  undefined4 uStack_226c;
  undefined4 uStack_2268;
  undefined4 uStack_2264;
  undefined4 local_1160;
  undefined2 *local_115c;
  uint ******local_1158;
  undefined2 *puStack_1154;
  int local_1150;
  undefined4 local_114c;
  undefined4 local_1148;
  undefined4 local_1144;
  undefined2 local_48;
  undefined1 local_46;
  uint *****local_40;
  undefined4 uStack_3c;
  undefined1 auStack_29 [5];
  
  if ((undefined1 *)*param_2 != &DAT_80000014) {
    uVar8 = FUN_014c8278(param_2,auStack_29,&DAT_01cf9c84);
    *param_1 = 0x80000000;
    param_1[1] = uVar8;
    return;
  }
  local_ac7c = param_2[1];
  ppppppuVar15 = (uint ******)param_2[2];
  iVar21 = 0;
  ppppppuVar10 = (undefined4 ******)param_2[3];
  local_ac74 = 0;
  ppppppuVar23 = ppppppuVar15 + (int)ppppppuVar10 * 4;
  ppppppuVar17 = ppppppuVar10;
  if (&DAT_000000ed < ppppppuVar10) {
    ppppppuVar17 = (undefined4 ******)0xee;
  }
  local_ac84 = ppppppuVar15;
  local_ac80 = ppppppuVar15;
  local_ac78 = ppppppuVar23;
  if (ppppppuVar10 == (undefined4 ******)0x0) {
    local_ac5c = 4;
    ppppppuVar17 = (undefined4 ******)0x0;
  }
  else {
    local_ac5c = FUN_01298504((int)ppppppuVar17 * 0x1130,4);
    if (local_ac5c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,(int)ppppppuVar17 * 0x1130);
    }
  }
  puVar3 = (undefined4 *)((uint)&local_40 | 4);
  puVar4 = (undefined4 *)((uint)&local_22c0 | 4);
  puVar5 = (undefined2 *)((uint)&local_1160 | 1);
  puVar11 = (undefined4 *)((uint)&local_78c0 | 4);
  ppppppuVar10 = &local_ac60;
  local_ac58 = (undefined4 ******)0x0;
  local_ac60 = ppppppuVar17;
  while( true ) {
    ppppppuVar12 = unaff_r4;
    if (ppppppuVar15 != ppppppuVar23) {
      ppppppuVar12 = ppppppuVar15 + 4;
      ppppppuVar10 = (undefined4 ******)*ppppppuVar15;
      local_ac80 = ppppppuVar12;
    }
    if (ppppppuVar15 == ppppppuVar23 || ppppppuVar10 == (undefined4 ******)0x80000015) {
      *param_1 = (uint)local_ac60;
      param_1[1] = local_ac5c;
      param_1[2] = (uint)local_ac58;
      if (*param_1 != 0x80000000) {
        local_ac70 = *param_1;
        uStack_ac6c = param_1[1];
        uStack_ac68 = param_1[2];
        uVar8 = FUN_014ca838(&local_ac84);
        if (uVar8 == 0) {
          return;
        }
        *param_1 = 0x80000000;
        param_1[1] = uVar8;
        FUN_014ca978(&local_ac70);
        return;
      }
      goto LAB_014e26ac;
    }
    iVar21 = iVar21 + 1;
    pppppuVar14 = ppppppuVar15[2];
    pppppuVar18 = ppppppuVar15[3];
    *puVar11 = ppppppuVar15[1];
    puVar11[1] = pppppuVar14;
    puVar11[2] = pppppuVar18;
    local_ac74 = iVar21;
    local_78c0 = ppppppuVar10;
    if ((int)ppppppuVar10 < 0) {
      puVar7 = (undefined2 *)FUN_014c8278(&local_78c0,auStack_29,&DAT_01cf9c54);
      goto LAB_014e2698;
    }
    local_78b0 = -0x7fffffeb;
    iStack_7894 = local_78bc + iStack_78b8 * 0x20;
    local_78a0 = local_78bc;
    local_789c = local_78bc;
    iVar13 = 0;
    uStack_7890 = 0;
    bVar22 = false;
    bVar20 = false;
    local_ac90 = (uint ******)0x8;
    local_6744 = 0;
    local_6740 = 8;
    local_673c = 0;
    local_7898 = ppppppuVar10;
    while( true ) {
      while( true ) {
        FUN_014c96ec(&local_1160,&local_78b0);
        iVar1 = local_78b0;
        puVar9 = local_115c;
        if (local_1160 == (uint ******)0x80000017) goto LAB_014e2680;
        if (local_1160 != (uint ******)0x80000015) break;
        if (bVar22) {
          local_1160 = (uint ******)&local_2280;
          local_2280 = (uint ******)&DAT_0056d618;
          local_227c = (undefined2 *)0x4;
          local_115c = &DAT_0132b6a0;
          puVar9 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_1160);
          goto LAB_014e2680;
        }
        FUN_014c9a5c(&local_1160,&local_78b0);
        if (((uint)local_1160 & 1) != 0) {
          puVar9 = local_115c;
          goto LAB_014e2680;
        }
        local_ac8c = local_115c;
        local_6746 = *(undefined1 *)(puVar5 + 1);
        bVar22 = true;
        local_6748 = *puVar5;
        bVar20 = true;
        local_6758 = local_1158;
        puStack_6754 = puStack_1154;
        local_2280 = local_1158;
        local_227c = puStack_1154;
        local_6750 = (undefined1)local_1150;
        local_2278 = (uint ******)CONCAT31(local_2278._1_3_,(undefined1)local_1150);
      }
      if (local_1160 == (uint ******)&DAT_80000016) break;
      local_2280 = local_1160;
      bVar24 = local_78b0 == -0x7fffffeb;
      local_2278 = local_1158;
      puStack_2274 = puStack_1154;
      local_78b0 = -0x7fffffeb;
      local_227c = local_115c;
      if (bVar24) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                     ,0x2c,&DAT_01cfa02c);
      }
      local_1150 = iVar1;
      local_1148 = local_78a8;
      local_1144 = local_78a4;
      local_114c = local_78ac;
      if (iVar13 == local_6744) {
        FUN_00a20ed0(&local_6744);
        local_ac90 = (uint ******)local_6740;
      }
      puVar6 = (undefined4 *)((int)local_ac90 + iVar13 * 0x20);
      iVar13 = iVar13 + 1;
      *puVar6 = local_1160;
      puVar6[1] = local_115c;
      puVar6[2] = local_1158;
      puVar6[3] = puStack_1154;
      puVar6[4] = local_1150;
      puVar6[5] = local_114c;
      puVar6[6] = local_1148;
      puVar6[7] = local_1144;
      local_673c = iVar13;
    }
    if (!bVar20) break;
    local_672a = local_6746;
    local_672c = local_6748;
    local_6738 = local_6758;
    puStack_6734 = puStack_6754;
    local_6730 = local_6750;
    local_22ac = (int)local_ac90 + iVar13 * 0x20;
    local_22c0 = (uint *****)0x80000015;
    local_22b0 = (int)local_ac90;
    local_22a8 = &DAT_01cfa50c;
    local_22a4 = 2;
    local_22a0 = &DAT_00567828;
    local_229c = 0x10;
    local_2298 = &DAT_0056fe10;
    local_2294 = 8;
    FUN_014dc6c8(&local_1160,&local_22c0,&local_22a0);
    pppppuVar14 = local_22c0;
    if ((char)local_1160 == '\x01') goto LAB_014e1e84;
    if (local_1160._1_1_ == '\x02') {
      local_2280 = (uint ******)&DAT_00567828;
      local_227c = (undefined2 *)0x10;
      local_1160 = (uint ******)&local_2280;
      local_115c = &DAT_0132b6a0;
      puVar9 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_1160);
      goto LAB_014e236c;
    }
    if (((uint)local_1160 & 0x100) == 0) {
      FUN_014dcf8c(&local_1160,&local_22c0);
      if ((char)local_1160 == '\0') {
        cVar2 = local_1160._1_1_;
        FUN_014dc6c8(&local_1160,&local_22c0,&local_22a0);
        pppppuVar14 = local_22c0;
        if ((char)local_1160 != '\x01') {
          if (local_1160._1_1_ == '\x02') {
            if (cVar2 == '\0') {
              local_2280 = (uint ******)&DAT_0056fe10;
              local_227c = (undefined2 *)0x8;
              local_1160 = (uint ******)&local_2280;
              local_115c = &DAT_0132b6a0;
              puVar9 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_1160);
            }
            else {
              local_2280 = (uint ******)&DAT_0056fe10;
              local_227c = (undefined2 *)0x8;
              local_1160 = (uint ******)&local_2280;
              local_115c = &DAT_0132b6a0;
              puVar9 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_1160);
            }
          }
          else {
            if (((uint)local_1160 & 0x100) != 0) {
              local_22c0 = (uint *****)0x80000015;
              if (pppppuVar14 == (uint *****)0x80000015) {
                local_115c = (undefined2 *)FUN_019678c0(&DAT_0056ad38,0x10);
                puVar7 = local_115c;
              }
              else {
                uVar16 = puVar4[1];
                uVar19 = puVar4[2];
                *puVar3 = *puVar4;
                puVar3[1] = uVar16;
                puVar3[2] = uVar19;
                local_40 = pppppuVar14;
                FUN_014eb6a8(&local_1160,cVar2);
                puVar9 = local_115c;
                local_ac90 = local_1160;
                if (local_1160 == (uint ******)&DAT_00000003) {
                  puVar7 = local_115c;
                }
                else {
                  FUN_01bed4e2(&local_2278,&local_1158,0x1118);
                  local_2280 = local_ac90;
                  local_227c = puVar9;
                  FUN_014dc6c8(&local_1160,&local_22c0,&local_22a0);
                  puVar7 = local_115c;
                  if ((char)local_1160 == '\0') {
                    if (local_1160._1_1_ == '\x02') {
                      FUN_01bed4e2(&local_33d8,&local_2278,0x1118);
                    }
                    else {
                      uStack_3c = 0x10;
                      local_40 = (uint *****)&DAT_00567828;
                      if (((uint)local_1160 & 0x100) != 0) {
                        uStack_3c = 8;
                        local_40 = (uint *****)&DAT_0056fe10;
                      }
                      local_1160 = &local_40;
                      local_115c = &DAT_0132b6a0;
                      puVar9 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_1160);
                      FUN_014eb5fc(&local_2280);
                      local_ac90 = (uint ******)&DAT_00000003;
                    }
                    goto LAB_014e2370;
                  }
                  FUN_014eb5fc(&local_2280);
                }
              }
              goto LAB_014e1e88;
            }
            local_2280 = (uint ******)&DAT_00567828;
            local_227c = (undefined2 *)0x10;
            local_1160 = (uint ******)&local_2280;
            local_115c = &DAT_0132b6a0;
            puVar9 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_1160);
          }
LAB_014e236c:
          local_ac90 = (uint ******)&DAT_00000003;
          goto LAB_014e2370;
        }
      }
LAB_014e1e84:
      puVar7 = local_115c;
LAB_014e1e88:
      local_ac90 = (uint ******)&DAT_00000003;
      puVar9 = puVar7;
      if (local_22c0 == (uint *****)0x80000015) goto LAB_014e1f30;
LAB_014e1e98:
      FUN_014eb4dc(&local_22c0);
LAB_014e1ea4:
      puVar7 = puVar9;
      if (local_ac90 == (uint ******)&DAT_00000003) goto LAB_014e1f34;
      FUN_01bed4e2(&local_44f0,&local_33d8,0x1118);
      FUN_01bed4e2(local_5608,&local_44f0,0x1118);
      local_acf4 = puVar9;
      if (local_ac90 == (uint ******)&SUB_00000004) goto LAB_014e2680;
    }
    else {
      local_22c0 = (uint *****)0x80000015;
      if (pppppuVar14 != (uint *****)0x80000015) {
        local_2290 = pppppuVar14;
        uStack_228c = local_22bc;
        local_2288 = local_22b8;
        uStack_2284 = uStack_22b4;
        FUN_014dc6c8(&local_1160,&local_22c0,&local_22a0);
        if ((char)local_1160 == '\x01') {
LAB_014e228c:
          puVar7 = local_115c;
          FUN_014eb4dc(&local_2290);
          goto LAB_014e1e88;
        }
        if (local_1160._1_1_ == '\x02') {
          local_2280 = (uint ******)&DAT_00567828;
          local_227c = (undefined2 *)0x10;
          local_1160 = (uint ******)&local_2280;
          local_115c = &DAT_0132b6a0;
          puVar9 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_1160);
        }
        else {
          if (((uint)local_1160 & 0x100) == 0) {
            FUN_014dcf8c(&local_1160,&local_22c0);
            if ((char)local_1160 == '\0') {
              FUN_014eb6a8(&local_1160,local_1160._1_1_,&local_2290);
              puVar9 = local_115c;
              local_ac90 = local_1160;
              puVar7 = local_115c;
              if (local_1160 != (uint ******)&DAT_00000003) {
                FUN_01bed4e2(&local_2278,&local_1158,0x1118);
                local_2280 = local_ac90;
                local_227c = puVar9;
                FUN_014dc6c8(&local_1160,&local_22c0,&local_22a0);
                puVar7 = local_115c;
                if ((char)local_1160 == '\0') {
                  if (local_1160._1_1_ == '\x02') {
                    FUN_01bed4e2(&local_33d8,&local_2278,0x1118);
                    goto LAB_014e2370;
                  }
                  uStack_3c = 0x10;
                  local_40 = (uint *****)&DAT_00567828;
                  if (((uint)local_1160 & 0x100) != 0) {
                    uStack_3c = 8;
                    local_40 = (uint *****)&DAT_0056fe10;
                  }
                  local_1160 = &local_40;
                  local_115c = &DAT_0132b6a0;
                  puVar9 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_1160);
                  FUN_014eb5fc(&local_2280);
                  goto LAB_014e236c;
                }
                FUN_014eb5fc(&local_2280);
              }
              goto LAB_014e1e88;
            }
            goto LAB_014e228c;
          }
          local_2280 = (uint ******)&DAT_0056fe10;
          local_227c = (undefined2 *)0x8;
          local_1160 = (uint ******)&local_2280;
          local_115c = &DAT_0132b6a0;
          puVar9 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_1160);
        }
        FUN_014eb4dc(&local_2290);
        local_ac90 = (uint ******)&DAT_00000003;
LAB_014e2370:
        if (local_22c0 != (uint *****)0x80000015) goto LAB_014e1e98;
        goto LAB_014e1ea4;
      }
      puVar7 = (undefined2 *)FUN_019678c0(&DAT_0056ad38,0x10);
LAB_014e1f30:
      local_ac90 = (uint ******)&DAT_00000003;
LAB_014e1f34:
      FUN_00d47b64(puVar7);
      FUN_01bed4e2(local_5608,&local_44f0,0x1118);
    }
    FUN_01bed4e2(auStack_6720,local_5608,0x1118);
    local_33cc = local_6740 + local_673c * 0x20;
    local_33d8 = local_6740;
    local_33d4 = local_6740;
    iStack_33d0 = local_6744;
    local_6728 = local_ac90;
    local_6724 = local_acf4;
    FUN_014ddf5c(&local_1160,&local_33d8);
    if (local_1160 != (uint ******)&DAT_80000016) {
      local_2280 = local_1160;
      local_227c = local_115c;
      local_2278 = local_1158;
      puStack_2274 = puStack_1154;
      local_2270 = local_1150;
      uStack_226c = local_114c;
      uStack_2268 = local_1148;
      uStack_2264 = local_1144;
      if ((undefined1 *)0x1 < (undefined1 *)((int)local_1160 + 0x7fffffeb)) {
        uVar25 = FUN_01962cb0(&local_2280);
        if ((int)uVar25 == 0) {
          puVar9 = (undefined2 *)
                   FUN_019676ac("unexpected map keystruct Metadata with 5 elementsstruct Metadata with 6 elementsstruct Metadata with 7 elementsstruct IndexVariant with 4 elementsstruct Assets with 5 elementsstruct Metadata with 3 elements"
                                ,0x25);
        }
        else {
          local_5608[0] = (uint *****)&local_44f0;
          local_1160 = local_5608;
          local_115c = (undefined2 *)&LAB_01963050;
          local_44f0 = uVar25;
          puVar9 = (undefined2 *)FUN_019676ac(&DAT_005bc768,&local_1160);
        }
        FUN_014c81b0(&local_2280);
        FUN_014c81b0(&local_2270);
        FUN_014debf8(&local_33d8);
        FUN_014c9f5c(&local_6728);
        goto LAB_014e268c;
      }
    }
    FUN_014debf8(&local_33d8);
    puVar9 = local_6724;
    unaff_r4 = local_6728;
    FUN_01bed4e2(&local_1160,auStack_6720,0x1118);
    local_48 = local_672c;
    local_46 = local_672a;
    local_89f0 = local_6738;
    puStack_89ec = puStack_6734;
    local_89e8 = local_6730;
    FUN_01bed4e2(auStack_89e0,&local_1160,0x111b);
    if (unaff_r4 == (uint ******)&SUB_00000004) goto LAB_014e268c;
    local_7888 = unaff_r4;
    local_7884 = puVar9;
    FUN_01bed4e2(auStack_7880,auStack_89e0,0x111b);
    local_6765 = local_ac8c;
    FUN_01bed4e2(auStack_6761,&local_89f0,9);
    puVar7 = (undefined2 *)FUN_014c9cac(&local_78b0);
    if (puVar7 != (undefined2 *)0x0) {
      FUN_014c9f5c(&local_7888);
      goto LAB_014e2698;
    }
    FUN_01bed4e2(auStack_ac40,auStack_89e0,0x111b);
    local_ac50 = local_89f0;
    puStack_ac4c = puStack_89ec;
    local_ac48 = local_89e8;
    if (unaff_r4 == (uint ******)&DAT_00000005) {
      puVar7 = puVar9;
LAB_014e2698:
      *param_1 = 0x80000000;
      param_1[1] = (uint)puVar7;
      FUN_014ca978(&local_ac60);
LAB_014e26ac:
      FUN_014deb6c(&local_ac84);
      return;
    }
    local_9b20 = unaff_r4;
    local_9b1c = puVar9;
    FUN_01bed4e2(auStack_9b18,auStack_ac40,0x111b);
    local_89fd = local_ac8c;
    FUN_01bed4e2(auStack_89f9,&local_ac50,9);
    ppppppuVar10 = local_ac58;
    if (local_ac58 == local_ac60) {
      FUN_014f8afc(&local_ac60);
    }
    FUN_01bed4e2((int)ppppppuVar10 * 0x1130 + local_ac5c,&local_9b20,0x1130);
    ppppppuVar10 = (undefined4 ******)((int)ppppppuVar10 + 1);
    ppppppuVar15 = ppppppuVar12;
    local_ac58 = ppppppuVar10;
  }
  local_1160 = (uint ******)&local_2280;
  local_2280 = (uint ******)&DAT_0056d618;
  local_227c = (undefined2 *)0x4;
  local_115c = &DAT_0132b6a0;
  puVar9 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_1160);
LAB_014e2680:
  FUN_014c9bdc(&local_6744);
LAB_014e268c:
  FUN_014c9c60(&local_78b0);
  puVar7 = puVar9;
  goto LAB_014e2698;
}

