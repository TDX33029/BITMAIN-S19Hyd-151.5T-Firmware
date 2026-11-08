// FUN_0133c708 @ 0133c708 size=3196 calls_out=19 calls_in=10
// strings: async | assertion failed: index_by_name_or_json_name.insert(f.proto().get_name().to_owned();         i).is_none() | assertion failed: index_by_name.insert(f.proto().get_name().to_owned(); i).is_none() | assertion failed: index_by_number.insert(f.proto().get_number() as u32; i).is_none() | assertion failed: index_by_name_or_json_name.insert(json_name; i).is_none()

/* WARNING: Type propagation algorithm not settling */

void FUN_0133c708(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,undefined4 *param_4,
                 uint param_5,undefined4 param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint ***pppuVar4;
  undefined4 *puVar5;
  int ***pppiVar6;
  int **ppiVar7;
  int iVar8;
  int ***pppiVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  int ***pppiVar17;
  int **ppiVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  int ***pppiVar22;
  int iVar23;
  undefined *puVar24;
  int **ppiVar25;
  int iVar26;
  uint uVar27;
  uint *puVar28;
  int *piVar29;
  int ***pppiVar30;
  int *piVar31;
  uint *puVar32;
  int *piVar33;
  char *pcVar34;
  int iVar35;
  int ***pppiVar36;
  bool bVar37;
  undefined8 uVar38;
  int ***local_130;
  int ***local_12c;
  int ***local_128;
  undefined4 *local_110;
  uint local_10c;
  undefined4 local_108;
  int local_104;
  int **local_100;
  uint uStack_fc;
  int **local_f8;
  uint local_f4;
  int ****local_f0;
  uint local_ec;
  undefined4 local_e8;
  int local_e4;
  uint local_e0;
  uint uStack_dc;
  uint local_d8;
  uint local_d4;
  uint ***local_d0;
  int ***local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  uint uStack_bc;
  uint local_b8;
  uint local_b4;
  uint ***local_b0;
  int ***local_ac;
  int ***local_a8;
  int ***local_a4;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  uint local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  undefined4 *local_74;
  undefined4 **local_70;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  int ***local_58;
  int ***local_54;
  int ***local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_f0 = (int ****)&local_d0;
  local_c8 = 0;
  local_cc = (int ***)&DAT_00000004;
  local_d0 = (uint ***)0x0;
  local_50 = (int ***)0x0;
  local_54 = (int ***)&DAT_00000004;
  local_58 = (int ***)0x0;
  local_4c = param_5;
  FUN_01330710(&local_58,&local_f0);
  pppiVar30 = local_cc;
  pppuVar4 = local_d0;
  local_a8 = (int ***)local_d0;
  local_128 = local_cc + local_c8 * 5;
  local_b0 = (uint ***)local_cc;
  local_ac = local_cc;
  local_a4 = local_128;
  if (local_c8 != 0) {
    uVar27 = local_c8 * 0x14;
    local_130 = &local_100;
    pppiVar17 = local_cc + 6;
    pppiVar22 = local_cc;
LAB_0133c7f8:
    uVar27 = uVar27 - 0x14;
    ppiVar7 = *pppiVar22;
    ppiVar25 = pppiVar22[4];
    ppiVar18 = pppiVar22[1];
    pppiVar36 = pppiVar22 + 2;
    pppiVar22 = pppiVar22 + 5;
    FUN_0132ff88(&local_58,ppiVar18,*pppiVar36);
    pppiVar36 = local_50;
    if (local_50 == (int ***)0x0) {
      piVar29 = (int *)0x1;
      piVar31 = (int *)0x0;
      iVar26 = 0;
      if (*(char *)(ppiVar25 + 3) == '\x01') {
        piVar29 = ppiVar25[1];
        piVar31 = ppiVar25[2];
      }
      do {
        if ((*(int **)((int)&DAT_01890e94 - iVar26) == piVar31) &&
           (iVar8 = thunk_FUN_016dd50a(*(undefined4 *)((int)&DAT_01890e90 - iVar26),piVar29,piVar31)
           , iVar8 == 0)) {
          pppiVar9 = (int ***)0x0;
          if (local_58 < &DAT_00000008) {
            FUN_0132f8cc(&local_58,0,8,1,1);
            pppiVar9 = local_50;
          }
          pppiVar36 = pppiVar9 + 2;
          *(undefined4 *)((int)local_54 + (int)pppiVar9) = 0x7373656d;
          ((undefined4 *)((int)local_54 + (int)pppiVar9))[1] = 0x5f656761;
          local_50 = pppiVar36;
          goto LAB_0133c8d4;
        }
        bVar37 = iVar26 != -0x1b0;
        iVar26 = iVar26 + -8;
      } while (bVar37);
      pppiVar36 = (int ***)0x0;
    }
LAB_0133c8d4:
    bVar37 = false;
    piVar29 = (int *)0x1;
    if (*(char *)(ppiVar25 + 3) == '\0') {
      piVar31 = (int *)0x0;
    }
    else {
      piVar29 = ppiVar25[1];
      piVar31 = ppiVar25[2];
      if ((int *)((int)local_58 - (int)pppiVar36) < piVar31) {
        FUN_0132f8cc(&local_58,pppiVar36,piVar31,1,1);
        pppiVar36 = local_50;
      }
    }
    pppiVar6 = local_54;
    pppiVar9 = local_58;
    FUN_016dd1aa((undefined1 *)((int)local_54 + (int)pppiVar36),piVar29,piVar31);
    if ((undefined1 *)((int)pppiVar36 + (int)piVar31) == param_3) {
      iVar26 = thunk_FUN_016dd50a(pppiVar6,param_2,param_3);
      bVar37 = iVar26 == 0;
    }
    if (pppiVar9 != (int ***)0x0) {
      thunk_FUN_016d3fb4(pppiVar6);
    }
    if (bVar37) {
      if (ppiVar7 != (int **)0x80000000) {
        for (uVar27 = uVar27 / 0x14; uVar27 != 0; uVar27 = uVar27 - 1) {
          if (pppiVar17[-1] != (int **)0x0) {
            thunk_FUN_016d3fb4(*pppiVar17);
          }
          pppiVar17 = pppiVar17 + 5;
        }
        uVar10 = 0;
        if (pppuVar4 != (uint ***)0x0) {
          uVar10 = thunk_FUN_016d3fb4(pppiVar30);
        }
        uVar38 = thunk_FUN_016de0ee(uVar10,0x2c0);
        puVar32 = (uint *)((int)uVar38 + (int)((ulonglong)uVar38 >> 0x20));
        if ((char)puVar32[4] == '\0') {
          FUN_015f62e4(&local_58);
          *puVar32 = (uint)local_58;
          puVar32[1] = (uint)local_54;
          puVar32[2] = (uint)local_50;
          puVar32[3] = local_4c;
          *(undefined1 *)(puVar32 + 4) = 1;
        }
        local_100 = (int **)*puVar32;
        uStack_fc = puVar32[1];
        local_f4 = puVar32[3];
        puVar28 = puVar32 + 2;
        local_f8 = (int **)*puVar28;
        piVar31 = ppiVar25[6];
        piVar29 = ppiVar25[7];
        *puVar32 = (int)local_100 + 1;
        puVar32[1] = uStack_fc + ((uint *)0xfffffffe < local_100);
        uVar27 = 0;
        uVar10 = 0;
        iVar26 = 0;
        local_110 = &DAT_005674cc;
        local_10c = uVar27;
        local_108 = uVar10;
        local_104 = iVar26;
        if (piVar31 < piVar29) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,piVar29,piVar31,&DAT_0188f948);
        }
        piVar31 = ppiVar25[5];
        piVar33 = piVar31 + 5;
        for (iVar8 = (int)piVar29 * 0x74; iVar8 != 0; iVar8 = iVar8 + -0x74) {
          if ((char)piVar31[7] == '\0') {
            iVar19 = 1;
            iVar23 = 0;
          }
          else {
            iVar19 = *piVar33;
            iVar23 = piVar33[1];
          }
          piVar33 = piVar33 + 0x1d;
          piVar31 = piVar31 + 0x1d;
          FUN_013364f4(&local_110,iVar19,iVar23);
        }
        if ((char)puVar32[4] == '\0') {
          FUN_015f62e4(&local_58);
          *puVar32 = (uint)local_58;
          puVar32[1] = (uint)local_54;
          *puVar28 = (uint)local_50;
          puVar32[3] = local_4c;
          *(undefined1 *)(puVar32 + 4) = 1;
        }
        local_e0 = *puVar32;
        uStack_dc = puVar32[1];
        local_c0 = local_e0 + 1;
        local_d8 = *puVar28;
        uStack_bc = uStack_dc + (0xfffffffe < local_e0);
        local_d4 = puVar32[3];
        *puVar32 = local_c0;
        puVar32[1] = uStack_bc;
        local_f0 = (int ****)&DAT_005674cc;
        local_a0 = local_e0 + 2;
        uStack_9c = uStack_dc + (0xfffffffd < local_e0);
        *puVar32 = local_a0;
        puVar32[1] = uStack_9c;
        *puVar32 = local_e0 + 3;
        puVar32[1] = uStack_dc + (0xfffffffc < local_e0);
        iVar23 = 0;
        iVar19 = 1;
        iVar8 = 0;
        uVar20 = 1;
        local_ec = uVar27;
        local_e8 = uVar10;
        local_e4 = iVar26;
        local_d0 = (uint ***)local_f0;
        local_cc = (int ***)uVar27;
        local_c8 = uVar10;
        local_c4 = iVar26;
        local_b8 = local_d8;
        local_b4 = local_d4;
        local_b0 = (uint ***)local_f0;
        local_ac = (int ***)uVar27;
        local_a8 = (int ***)uVar10;
        local_a4 = (int ***)iVar26;
        local_98 = local_d8;
        local_94 = local_d4;
        if (*(char *)(param_5 + 0x1c) != '\0') {
          iVar23 = *(int *)(param_5 + 0x18);
          if (iVar23 < 0) {
            uVar10 = 0;
LAB_0133cbcc:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar10,iVar23);
          }
          uVar20 = *(undefined4 *)(param_5 + 0x14);
          if (iVar23 == 0) {
            iVar23 = 0;
          }
          else {
            iVar19 = thunk_FUN_016d4a50(iVar23,1);
            if (iVar19 == 0) {
              uVar10 = 1;
              goto LAB_0133cbcc;
            }
          }
        }
        FUN_016dd1aa(iVar19,uVar20,iVar23);
        local_90 = iVar23;
        local_8c = iVar19;
        local_88 = iVar23;
        if (iVar23 != 0) {
          FUN_0132f8cc(&local_90,iVar23,1,1,1);
          iVar8 = iVar23 + 1;
          *(undefined1 *)(local_8c + local_88) = 0x2e;
          local_88 = iVar8;
        }
        uVar10 = 0;
        piVar29 = (int *)0x1;
        if (*(char *)(ppiVar25 + 3) == '\0') {
          piVar31 = (int *)0x0;
        }
        else {
          piVar29 = ppiVar25[1];
          piVar31 = ppiVar25[2];
          if ((int *)(local_90 - iVar8) < piVar31) {
            FUN_0132f8cc(&local_90,iVar8,piVar31,1,1);
            iVar8 = local_88;
          }
        }
        FUN_016dd1aa(local_8c + iVar8,piVar29,piVar31);
        local_78 = *param_4;
        local_80 = (undefined4 *)param_4[1];
        uVar27 = param_4[2];
        local_88 = iVar8 + (int)piVar31;
        local_74 = local_80 + uVar27 * 4;
        local_7c = local_80;
        local_70 = &local_110;
        if (0x3ffffff < uVar27) {
LAB_0133cd50:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar10,uVar27 << 5);
        }
        iVar26 = 0;
        if (uVar27 == 0) {
          iVar8 = 4;
          uVar27 = 0;
        }
        else {
          iVar8 = thunk_FUN_016d4a50(uVar27 << 5);
          if (iVar8 == 0) {
            uVar10 = 4;
            goto LAB_0133cd50;
          }
        }
        puVar5 = local_74;
        local_5c = local_74;
        local_60 = local_78;
        local_64 = local_7c;
        local_68 = local_80;
        if (local_7c != local_74) {
          iVar26 = 0;
          puVar16 = local_7c;
LAB_0133cdd0:
          puVar21 = puVar16 + 4;
          if (local_104 != 0) {
            local_128 = (int ***)*puVar16;
            iVar19 = puVar16[1];
            uVar11 = FUN_01333c64(local_100,uStack_fc,local_f8,local_f4,local_128,iVar19);
            uVar3 = local_10c;
            puVar2 = local_110;
            uVar1 = uVar11 >> 0x19;
            iVar23 = 0;
            while( true ) {
              uVar11 = uVar3 & uVar11;
              uVar12 = *(uint *)((int)puVar2 + uVar11);
              uVar13 = uVar12 ^ uVar1 * 0x1010101;
              for (uVar13 = ~uVar13 & 0x80808080 & uVar13 + 0xfefefeff; uVar13 != 0;
                  uVar13 = uVar13 - 1 & uVar13) {
                uVar14 = uVar11 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                                 (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3
                                  ) & uVar3;
                if ((iVar19 == (puVar2 + uVar14 * -3 + -3)[1]) &&
                   (iVar15 = thunk_FUN_016dd50a(local_128,puVar2[uVar14 * -3 + -3],iVar19),
                   iVar15 == 0)) {
                  local_38 = *puVar16;
                  uStack_34 = puVar16[1];
                  uStack_30 = puVar16[2];
                  uStack_2c = puVar16[3];
                  FUN_01339d3c(&local_58,&local_38,puVar2[uVar14 * -3 + -1]);
                  puVar16 = (undefined4 *)(iVar8 + iVar26 * 0x20);
                  *puVar16 = local_58;
                  puVar16[1] = local_54;
                  puVar16[2] = local_50;
                  puVar16[3] = local_4c;
                  iVar26 = iVar26 + 1;
                  puVar16[4] = local_48;
                  puVar16[5] = uStack_44;
                  puVar16[6] = uStack_40;
                  puVar16[7] = uStack_3c;
                  puVar16 = puVar21;
                  if (puVar21 != puVar5) goto LAB_0133cdd0;
                  local_64 = puVar21;
                  goto LAB_0133cf6c;
                }
              }
              if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) break;
              iVar23 = iVar23 + 4;
              uVar11 = uVar11 + iVar23;
            }
          }
          local_64 = puVar21;
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01890e70);
        }
LAB_0133cf6c:
        FUN_00ee3edc(&local_68);
        if (iVar26 == 0) {
LAB_0133d218:
          param_1[0x1f] = iVar8;
          param_1[0x1b] = local_90;
          param_1[0x1c] = local_8c;
          param_1[0x1d] = local_88;
          param_1[0x1e] = uVar27;
          param_1[0x20] = iVar26;
          *param_1 = local_f0;
          param_1[1] = local_ec;
          param_1[2] = local_e8;
          param_1[3] = local_e4;
          param_1[4] = local_e0;
          param_1[5] = uStack_dc;
          param_1[6] = local_d8;
          param_1[7] = local_d4;
          param_1[8] = local_d0;
          param_1[9] = local_cc;
          param_1[10] = local_c8;
          param_1[0xb] = local_c4;
          param_1[0xc] = local_c0;
          param_1[0xd] = uStack_bc;
          param_1[0xe] = local_b8;
          param_1[0xf] = local_b4;
          param_1[0x10] = local_b0;
          param_1[0x11] = local_ac;
          param_1[0x12] = local_a8;
          param_1[0x13] = local_a4;
          param_1[0x14] = local_a0;
          param_1[0x15] = uStack_9c;
          param_1[0x16] = local_98;
          param_1[0x17] = local_94;
          param_1[0x19] = param_6;
          param_1[0x18] = 1;
          param_1[0x1a] = ppiVar25;
          iVar26 = 0;
          if (local_10c != 0) {
            ppiVar25 = (int **)(local_10c * 3);
            iVar26 = local_10c * 0xd;
          }
          if (local_10c != 0 && iVar26 != -0x11) {
            thunk_FUN_016d3fb4(local_110 + (-3 - (int)ppiVar25));
          }
          if (ppiVar7 != (int **)0x0) {
            thunk_FUN_016d3fb4(ppiVar18);
          }
          return;
        }
        iVar19 = iVar26 << 5;
        iVar23 = 0;
        local_12c = &local_f8;
        do {
          iVar35 = iVar8 + iVar23 * 0x20;
          iVar15 = 0;
          if (**(int **)(iVar35 + 0xc) != 0) {
            iVar15 = (*(int **)(iVar35 + 0xc))[1];
          }
          iVar15 = FUN_01336cac(&local_b0,iVar15,iVar23);
          uVar10 = 0x54;
          if (iVar15 != 0) {
            pcVar34 = 
            "assertion failed: index_by_number.insert(f.proto().get_number() as u32, i).is_none()";
            puVar24 = &DAT_01891f18;
LAB_0133d340:
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(pcVar34,uVar10,puVar24);
          }
          iVar15 = *(int *)(iVar35 + 0xc);
          if (*(char *)(iVar15 + 0x1c) == '\0') {
            local_128 = (int ***)&DAT_00000001;
            pppiVar30 = (int ***)0x0;
            uVar20 = 1;
          }
          else {
            pppiVar30 = *(int ****)(iVar15 + 0x18);
            uVar20 = 0;
            pppiVar22 = local_128;
            if ((int)pppiVar30 < 0) goto LAB_0133d378;
            uVar20 = *(undefined4 *)(iVar15 + 0x14);
            if (pppiVar30 == (int ***)0x0) {
              pppiVar30 = (int ***)0x0;
              local_128 = (int ***)&DAT_00000001;
            }
            else {
              local_128 = (int ***)thunk_FUN_016d4a50(pppiVar30,local_128);
              if (local_128 == (int ***)0x0) {
                uVar20 = 1;
                pppiVar22 = pppiVar30;
                goto LAB_0133d378;
              }
            }
          }
          pcVar34 = 
          "assertion failed: index_by_name_or_json_name.insert(f.proto().get_name().to_owned(),\n        i).is_none()"
          ;
          FUN_016dd1aa(local_128,uVar20,pppiVar30);
          local_58 = pppiVar30;
          local_54 = local_128;
          local_50 = pppiVar30;
          iVar15 = FUN_0133740c(&local_f0,&local_58,iVar23);
          if (iVar15 != 0) {
            pcVar34 = 
            "assertion failed: index_by_name.insert(f.proto().get_name().to_owned(), i).is_none()";
            puVar24 = &DAT_01891f28;
            goto LAB_0133d340;
          }
          iVar15 = *(int *)(iVar35 + 0xc);
          if (*(char *)(iVar15 + 0x1c) == '\x01') {
            pppiVar30 = *(int ****)(iVar15 + 0x18);
            uVar20 = 0;
            pppiVar22 = local_130;
            if ((int)pppiVar30 < 0) goto LAB_0133d378;
            uVar10 = *(undefined4 *)(iVar15 + 0x14);
            if (pppiVar30 == (int ***)0x0) {
              local_130 = (int ***)&DAT_00000001;
              pppiVar30 = (int ***)0x0;
            }
            else {
              local_130 = (int ***)thunk_FUN_016d4a50(pppiVar30,local_130);
              if (local_130 == (int ***)0x0) {
                uVar20 = 1;
                pppiVar22 = pppiVar30;
                goto LAB_0133d378;
              }
            }
          }
          else {
            local_130 = (int ***)&DAT_00000001;
            pppiVar30 = (int ***)0x0;
            uVar10 = 1;
          }
          FUN_016dd1aa(local_130,uVar10,pppiVar30);
          local_58 = pppiVar30;
          local_54 = local_130;
          local_50 = pppiVar30;
          iVar15 = FUN_0133740c(&local_d0,&local_58,iVar23);
          if (iVar15 != 0) {
            uVar10 = 0x69;
            puVar24 = &DAT_01891f38;
            goto LAB_0133d340;
          }
          pppiVar30 = *(int ****)(iVar35 + 8);
          uVar20 = 0;
          pppiVar22 = local_12c;
          if ((int)pppiVar30 < 0) {
LAB_0133d378:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar20,pppiVar22);
          }
          uVar20 = *(undefined4 *)(iVar35 + 4);
          pppiVar36 = (int ***)0x0;
          uVar10 = 1;
          pppiVar17 = (int ***)&DAT_00000001;
          pppiVar22 = (int ***)0x0;
          if (pppiVar30 != (int ***)0x0) {
            pppiVar17 = (int ***)thunk_FUN_016d4a50(pppiVar30,local_12c);
            if (pppiVar17 == (int ***)0x0) {
              uVar20 = 1;
              pppiVar22 = pppiVar30;
              goto LAB_0133d378;
            }
            pppiVar22 = pppiVar30;
          }
          FUN_016dd1aa(pppiVar17,uVar20,pppiVar30);
          iVar15 = *(int *)(iVar35 + 0xc);
          if (*(char *)(iVar15 + 0x1c) == '\x01') {
            uVar10 = *(undefined4 *)(iVar15 + 0x14);
            pppiVar36 = *(int ****)(iVar15 + 0x18);
          }
          if ((pppiVar30 == pppiVar36) &&
             (iVar15 = thunk_FUN_016dd50a(pppiVar17,uVar10,pppiVar30), iVar15 == 0)) {
            if (pppiVar22 != (int ***)0x0) {
              thunk_FUN_016d3fb4(pppiVar17);
            }
          }
          else {
            local_58 = pppiVar22;
            local_54 = pppiVar17;
            local_50 = pppiVar30;
            iVar15 = FUN_0133740c(&local_d0,&local_58,iVar23);
            if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464("assertion failed: index_by_name_or_json_name.insert(json_name, i).is_none()"
                           ,0x4b,&DAT_01891f48);
            }
          }
          iVar23 = iVar23 + 1;
          iVar19 = iVar19 + -0x20;
          local_12c = pppiVar17;
          if (iVar19 == 0) goto LAB_0133d218;
        } while( true );
      }
    }
    else if (ppiVar7 != (int **)0x0) {
      thunk_FUN_016d3fb4(ppiVar18);
    }
    pppiVar17 = pppiVar17 + 5;
    if (pppiVar22 == local_128) goto LAB_0133cc34;
    goto LAB_0133c7f8;
  }
LAB_0133cc3c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(&DAT_01890690);
LAB_0133cc34:
  local_ac = local_128;
  goto LAB_0133cc3c;
}

