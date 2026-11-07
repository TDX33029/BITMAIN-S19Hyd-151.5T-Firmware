// FUN_01939768 @ 01939768 size=4212 calls_out=13 calls_in=3
// strings: -----BEGIN 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01939768(undefined4 *param_1,undefined4 param_2,code *param_3,code *param_4)

{
  byte bVar2;
  byte bVar1;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined1 uVar16;
  byte *pbVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  byte bVar21;
  byte bVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  undefined4 uVar27;
  byte bVar28;
  bool bVar29;
  bool bVar30;
  uint *local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint *local_c8;
  int local_c4;
  uint *local_c0;
  uint *local_bc;
  uint *local_b8;
  int local_b0;
  undefined4 local_9c;
  byte *local_98;
  int local_94;
  int local_90;
  uint *local_8c;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  undefined4 local_74;
  uint *local_70;
  uint *local_6c;
  int local_68;
  undefined4 local_64;
  uint *local_60;
  uint *local_5c;
  uint *puStack_58;
  uint *puStack_54;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  int local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  undefined1 local_2e;
  byte local_2d;
  undefined1 *local_2c;
  undefined1 *local_28;
  
  local_98 = (byte *)thunk_FUN_01be5118(0x400);
  if (local_98 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x400);
  }
  local_90 = -0x80000000;
  local_9c = 0x400;
  local_94 = 0;
  local_70 = (uint *)thunk_FUN_01be5118(0x50);
  if (local_70 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1);
  }
  local_74 = 0x50;
  local_b0 = 0;
  do {
    puVar18 = (uint *)0x0;
    local_6c = (uint *)0x0;
    do {
      (*param_3)(&local_68,param_2);
      if (local_68 == 1) {
        do {
          puVar19 = local_60;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((uint)local_64 & 0xff) {
          case 0:
            if (local_60 != (uint *)&SUB_00000004) goto LAB_0193995c;
            goto LAB_019398b8;
          case 1:
            bVar8 = local_64._1_1_;
            break;
          case 2:
            bVar8 = (byte)local_60[2];
            break;
          case 3:
            if ((byte)local_60[2] == 0x23) {
              puVar23 = (undefined4 *)local_60[1];
              uVar15 = *local_60;
              pcVar9 = (code *)*puVar23;
              if (pcVar9 != (code *)0x0) {
                (*pcVar9)(uVar15);
              }
              if (puVar23[1] != 0) {
                thunk_FUN_01be4678(uVar15);
              }
              thunk_FUN_01be4678(puVar19);
              goto LAB_019398b8;
            }
            goto LAB_0193995c;
          }
          if (bVar8 != 0x23) {
LAB_0193995c:
            puVar18 = local_60;
            if (((uint)local_64 & 0xff) == 4) goto LAB_01939974;
            uVar27 = 1;
            iVar6 = 0xc;
            iVar20 = 8;
            local_3c = (uint *)&DAT_00000003;
            iVar5 = 4;
            local_bc = local_64;
            local_c0 = local_60;
            goto LAB_0193a6f0;
          }
LAB_019398b8:
          (*param_3)(&local_68,param_2);
        } while (local_68 != 0);
      }
      puVar19 = local_60;
      if (local_60 != (uint *)0x0) {
        puVar13 = (uint *)0x0;
        do {
          if (*(byte *)((int)local_64 + (int)puVar13) == 10 ||
              *(byte *)((int)local_64 + (int)puVar13) == 0xd) {
            if (local_60 <= puVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,puVar13,local_60,&DAT_01d25b20);
            }
            pbVar17 = (byte *)((int)puVar13 + 1);
            FUN_01ac6cbc(&local_74,local_64,pbVar17);
            (*param_4)(param_2,pbVar17);
            puVar18 = (uint *)(pbVar17 + (int)puVar18);
            goto LAB_01939974;
          }
          puVar13 = (uint *)((int)puVar13 + 1);
        } while (local_60 != puVar13);
      }
      FUN_01ac6cbc(&local_74,local_64,local_60);
      (*param_4)(param_2,puVar19);
      puVar18 = (uint *)((int)puVar19 + (int)puVar18);
    } while (puVar19 != (uint *)0x0);
LAB_01939974:
    puVar4 = local_6c;
    puVar19 = local_70;
    puVar3 = local_7c;
    puVar26 = local_80;
    puVar13 = local_84;
    iVar5 = local_90;
    if (puVar18 == (uint *)0x0) {
      bVar29 = local_90 == -0x80000000;
      local_90 = -0x80000000;
      puVar18 = (uint *)&DAT_80000000;
      if (bVar29) goto LAB_01939a08;
      FUN_0134bd64(iVar5,local_8c);
      local_b0 = 0;
      local_38 = puVar26;
      local_3c = puVar13;
      local_34 = puVar3;
      goto LAB_0193a6b8;
    }
    if ((local_6c < &DAT_0000000b) ||
       (iVar5 = thunk_FUN_01bed842("-----BEGIN ",local_70,0xb), iVar5 != 0)) {
      puVar18 = (uint *)&DAT_80000001;
      if (local_90 == -0x80000000) goto LAB_01939a08;
      if (puVar4 < local_7c) {
LAB_019399dc:
        FUN_01ac6cbc(&local_9c,puVar19,puVar4);
        goto LAB_01939a08;
      }
      iVar6 = thunk_FUN_01bed842(local_80,puVar19);
      iVar5 = local_94;
      if (iVar6 != 0) goto LAB_019399dc;
      switch(local_88) {
      case (uint *)0x8:
        if ((byte)*local_8c != 0x58) break;
        bVar8 = *(byte *)((int)local_8c + 1);
        bVar29 = bVar8 != 0x35;
        if (!bVar29) {
          bVar8 = *(byte *)((int)local_8c + 2);
        }
        if (bVar29 || bVar8 != 0x30) break;
        bVar8 = *(byte *)((int)local_8c + 3);
        bVar29 = bVar8 != 0x39;
        if (!bVar29) {
          bVar8 = (byte)local_8c[1];
        }
        if (bVar29 || bVar8 != 0x20) break;
        bVar8 = *(byte *)((int)local_8c + 5);
        bVar29 = bVar8 != 0x43;
        if (!bVar29) {
          bVar8 = *(byte *)((int)local_8c + 6);
        }
        if (bVar29 || bVar8 != 0x52) break;
        iVar6 = 7;
        local_c4 = 5;
        bVar8 = 0x4c;
LAB_01939fe8:
        if (*(byte *)((int)local_8c + iVar6) != bVar8) break;
        FUN_018a7af8(&local_50,(local_94 + 3U >> 2) * 3);
        puVar13 = local_4c;
        local_bc = local_4c;
        puVar18 = (uint *)(local_c4 + -2);
        bVar8 = (byte)local_d4;
        if (puVar18 < (uint *)0x3) {
          local_d8 = (uint *)0x0;
          local_d0 = 0x2a;
          uVar15 = 0;
          local_c0 = (uint *)0x0;
          local_cc = 0;
          local_c8 = (uint *)0x0;
          pbVar17 = local_98;
          while( true ) {
            bVar28 = (byte)((uint)local_c8 >> 8);
            bVar1 = (byte)(local_cc >> 0x18);
            bVar2 = (byte)(local_cc >> 0x10);
            if (pbVar17 == local_98 + iVar5) break;
            pbVar7 = pbVar17 + 1;
            bVar21 = *pbVar17;
            bVar12 = 0;
            if (bVar21 == 0x2b) {
              bVar12 = 0x3e;
            }
            if (bVar21 == 0x2f) {
              bVar12 = 0x3f;
            }
            if (bVar21 == 0x3d) {
              bVar12 = bVar12 | 0xf1;
            }
            if ((byte)(bVar21 + 0x9f) < 0x1a) {
              bVar12 = bVar12 | bVar21 + 0xb9;
            }
            puVar18 = (uint *)(uint)(byte)(bVar21 - 0x30);
            if ((byte)(bVar21 + 0xbf) < 0x1a) {
              bVar12 = bVar12 | bVar21 + 0xbf;
            }
            if (puVar18 < &DAT_0000000a) {
              bVar12 = bVar12 | bVar21 + 4;
            }
            bVar29 = (byte)(bVar21 - 9) < 5;
            if (bVar21 == 0x20 || bVar29) {
              bVar12 = bVar12 | 0xf0;
            }
            bVar22 = bVar12;
            if (0x19 < (byte)(bVar21 + 0xbf)) {
              bVar22 = bVar12 | 0xf2;
            }
            if ((byte)(bVar21 + 0x9f) < 0x1a) {
              bVar22 = bVar12;
            }
            if (puVar18 < &DAT_0000000a) {
              bVar22 = bVar12;
            }
            if (bVar21 == 0x2b) {
              bVar22 = bVar12;
            }
            if (bVar21 == 0x2f) {
              bVar22 = bVar12;
            }
            if (bVar21 == 0x3d) {
              bVar22 = bVar12;
            }
            if (bVar21 == 0x20 || bVar29) {
              bVar22 = bVar12;
            }
            pbVar17 = pbVar7;
            if (bVar22 != 0xf0) {
              if (bVar22 == 0xf1) {
                iVar6 = 1;
                bVar22 = 0;
              }
              else {
                if (bVar22 == 0xf2) goto LAB_0193a7b8;
                iVar6 = 0;
              }
              if (uVar15 == 8) {
                if (local_c0 != (uint *)0x0) goto LAB_0193a80c;
                uVar16 = 3;
                bVar30 = &DAT_fffffff8 < local_d8;
                bVar29 = local_d8 == (uint *)0xfffffff9;
                if (local_d8 < (uint *)0xfffffffa) {
                  puVar18 = (uint *)((int)local_d8 + 6);
                  bVar30 = local_48 <= puVar18;
                  bVar29 = puVar18 == local_48;
                }
                bVar21 = 0;
                if (bVar30 && !bVar29) goto switchD_0193a478_caseD_1;
                uVar15 = 0;
                pbVar7 = (byte *)((int)local_4c + (int)local_d8);
                *pbVar7 = bVar28;
                pbVar7[1] = (byte)local_c8;
                local_c8 = (uint *)0x0;
                pbVar7[5] = (byte)local_cc;
                pbVar7[4] = (byte)(local_cc >> 8);
                pbVar7[3] = bVar2;
                pbVar7[2] = bVar1;
                local_c0 = (uint *)0x0;
                local_cc = 0;
                local_d0 = 0x2a;
                local_d8 = puVar18;
              }
              uVar10 = uVar15 & 0x1f;
              uVar15 = uVar15 + 1;
              local_c0 = (uint *)((uint)local_c0 | iVar6 << uVar10);
              uVar11 = local_d0 & 0x3f;
              local_d0 = local_d0 - 6;
              uVar24 = uVar11 - 0x20;
              uVar10 = (uint)bVar22 << uVar11;
              if (-1 < (int)uVar24) {
                uVar10 = 0;
              }
              local_cc = uVar10 | local_cc;
              uVar10 = (uint)(bVar22 >> (0x20 - uVar11 & 0xff));
              if (-1 < (int)uVar24) {
                uVar10 = (uint)bVar22 << (uVar24 & 0xff);
              }
              local_c8 = (uint *)(uVar10 | (uint)local_c8);
            }
          }
          if ((int)uVar15 < 5) {
            local_cc = local_cc >> 0x18;
          }
          else {
            if (((uint)local_c0 & 0xf) != 0) goto LAB_0193a80c;
            uVar16 = 3;
            bVar21 = 0;
            if (((uint *)0xfffffffc < local_d8) || (local_48 < (uint *)((int)local_d8 + 3)))
            goto switchD_0193a478_caseD_1;
            local_c0 = (uint *)((int)local_c0 >> 4);
            uVar15 = uVar15 - 4;
            pbVar17 = (byte *)((int)local_4c + (int)local_d8);
            *pbVar17 = bVar28;
            pbVar17[2] = bVar1;
            pbVar17[1] = (byte)local_c8;
            local_c8 = (uint *)(local_cc >> 8);
            local_d8 = (uint *)((int)local_d8 + 3);
            bVar28 = bVar2;
          }
          uVar16 = 2;
          if (4 < uVar15) goto LAB_0193a810;
          puVar18 = &switchD_0193a478::switchdataD_0193a47c;
          bVar21 = bVar8;
          switch(uVar15) {
          case 0:
            local_c8 = local_d8;
            goto joined_r0x0193a4e4;
          case 2:
            bVar29 = local_c0 == (uint *)0x0;
LAB_0193a51c:
            if (bVar29) {
              if (local_d8 < local_48) {
                *(byte *)((int)local_4c + (int)local_d8) = bVar28;
                local_c0 = (uint *)((int)local_d8 + 1);
                goto joined_r0x0193a66c;
              }
LAB_0193a824:
              uVar16 = 3;
              bVar21 = 0;
            }
            break;
          case 3:
            if (local_c0 == (uint *)0x0) {
LAB_0193a540:
              bVar30 = (uint *)0xfffffffc < local_d8;
              bVar29 = local_d8 == (uint *)0xfffffffd;
              uVar16 = 3;
              puVar19 = (uint *)(&switchD_0193a478::switchdataD_0193a47c)[uVar15];
              if (local_d8 < (uint *)0xfffffffe) {
                puVar18 = (uint *)((int)local_d8 + 2);
                puVar19 = local_48;
              }
              if (local_d8 < (uint *)0xfffffffe) {
                bVar30 = puVar19 <= puVar18;
                bVar29 = puVar18 == puVar19;
              }
              bVar21 = 0;
              if (!bVar30 || bVar29) {
                *(byte *)((int)local_4c + (int)local_d8) = bVar28;
LAB_0193a60c:
                ((byte *)((int)local_4c + (int)local_d8))[1] = (byte)local_c8;
                local_c0 = puVar18;
                goto joined_r0x0193a66c;
              }
            }
            break;
          case 4:
            if (local_c0 != (uint *)0x0) {
              puVar18 = local_c0;
              if (local_c0 == (uint *)&DAT_00000008) goto LAB_0193a540;
              bVar29 = local_c0 == (uint *)&DAT_0000000c;
              goto LAB_0193a51c;
            }
            bVar30 = (uint *)0xfffffffb < local_d8;
            bVar29 = local_d8 == (uint *)0xfffffffc;
            uVar16 = 3;
            puVar19 = (uint *)(&switchD_0193a478::switchdataD_0193a47c)[uVar15];
            if (local_d8 < (uint *)0xfffffffd) {
              puVar18 = (uint *)((int)local_d8 + 3);
              puVar19 = local_48;
            }
            if (local_d8 < (uint *)0xfffffffd) {
              bVar30 = puVar19 <= puVar18;
              bVar29 = puVar18 == puVar19;
            }
            bVar21 = 0;
            if (!bVar30 || bVar29) {
              *(byte *)((int)local_4c + (int)local_d8) = bVar28;
              ((byte *)((int)local_4c + (int)local_d8))[2] = (byte)local_cc;
              goto LAB_0193a60c;
            }
          }
        }
        else {
          uVar11 = 0x2a;
          puVar26 = (uint *)0x0;
          uVar10 = 0;
          uVar15 = 0;
          local_c8 = (uint *)0x0;
          local_c0 = (uint *)0x0;
          pbVar17 = local_98;
          while( true ) {
            bVar28 = (byte)(uVar15 >> 8);
            bVar2 = (byte)((uint)local_c0 >> 0x18);
            bVar1 = (byte)((uint)local_c0 >> 0x10);
            if (pbVar17 == local_98 + iVar5) break;
            pbVar7 = pbVar17 + 1;
            bVar21 = *pbVar17;
            puVar19 = (uint *)(uint)(byte)(&DAT_00523b89)[bVar21];
            pbVar17 = pbVar7;
            if (puVar19 != (uint *)&DAT_000000f0) {
              if (puVar19 == (uint *)0xf1) {
                iVar6 = 1;
                puVar19 = (uint *)0x0;
              }
              else {
                if (puVar19 == (uint *)0xf2) goto LAB_0193a7b8;
                iVar6 = 0;
              }
              if (uVar10 == 8) {
                if (puVar26 != (uint *)0x0) goto LAB_0193a80c;
                uVar16 = 3;
                bVar30 = &DAT_fffffff8 < local_c8;
                bVar29 = local_c8 == (uint *)0xfffffff9;
                puVar18 = (uint *)&DAT_00000008;
                if (local_c8 < (uint *)0xfffffffa) {
                  puVar18 = (uint *)((int)local_c8 + 6);
                  bVar30 = local_48 <= puVar18;
                  bVar29 = puVar18 == local_48;
                }
                bVar21 = 0;
                if (bVar30 && !bVar29) goto switchD_0193a478_caseD_1;
                puVar26 = (uint *)0x0;
                pbVar7 = (byte *)((int)local_4c + (int)local_c8);
                *pbVar7 = bVar28;
                pbVar7[1] = (byte)uVar15;
                uVar15 = 0;
                uVar10 = 0;
                pbVar7[5] = (byte)local_c0;
                pbVar7[4] = (byte)((uint)local_c0 >> 8);
                pbVar7[3] = bVar1;
                pbVar7[2] = bVar2;
                uVar11 = 0x2a;
                local_c0 = (uint *)0x0;
                local_c8 = puVar18;
              }
              uVar24 = uVar10 & 0x1f;
              uVar14 = uVar11 & 0x3f;
              uVar10 = uVar10 + 1;
              uVar11 = uVar11 - 6;
              puVar26 = (uint *)((uint)puVar26 | iVar6 << uVar24);
              uVar24 = (int)puVar19 << uVar14;
              uVar25 = uVar14 - 0x20;
              if (-1 < (int)uVar25) {
                uVar24 = 0;
              }
              local_c0 = (uint *)(uVar24 | (uint)local_c0);
              puVar18 = (uint *)((uint)puVar19 >> (0x20 - uVar14 & 0xff));
              if (-1 < (int)uVar25) {
                puVar18 = (uint *)((int)puVar19 << (uVar25 & 0xff));
              }
              uVar15 = (uint)puVar18 | uVar15;
            }
          }
          if ((int)uVar10 < 5) {
            local_c0 = (uint *)((uint)local_c0 >> 0x18);
          }
          else {
            if (((uint)puVar26 & 0xf) != 0) {
LAB_0193a80c:
              uVar16 = 1;
              goto LAB_0193a810;
            }
            uVar16 = 3;
            bVar30 = (uint *)0xfffffffb < local_c8;
            bVar29 = local_c8 == (uint *)0xfffffffc;
            if (local_c8 < (uint *)0xfffffffd) {
              puVar18 = (uint *)((int)local_c8 + 3);
              bVar30 = local_48 <= puVar18;
              bVar29 = puVar18 == local_48;
              puVar19 = local_c8;
            }
            local_c8 = puVar18;
            bVar21 = 0;
            if (bVar30 && !bVar29) goto switchD_0193a478_caseD_1;
            uVar10 = uVar10 - 4;
            puVar26 = (uint *)((int)puVar26 >> 4);
            pbVar17 = (byte *)((int)local_4c + (int)puVar19);
            *pbVar17 = bVar28;
            pbVar17[2] = bVar2;
            pbVar17[1] = (byte)uVar15;
            uVar15 = (uint)local_c0 >> 8;
            bVar28 = bVar1;
          }
          uVar16 = 2;
          if (uVar10 < 5) {
            puVar18 = &switchD_0193a4c4::switchdataD_0193a4c8;
            bVar21 = bVar8;
            switch(uVar10) {
            case 0:
              local_c0 = puVar26;
joined_r0x0193a4e4:
              uVar16 = 2;
              bVar29 = local_c0 == (uint *)0x0;
              bVar21 = bVar8;
              local_c0 = local_c8;
              if (bVar29) {
joined_r0x0193a66c:
                if (local_48 < local_c0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012faff4(0,local_c0,local_48,&DAT_01d25b40);
                }
                local_d4 = (uint)local_c0 >> 8;
                local_b0 = local_c4;
                puVar18 = local_50;
                goto LAB_01939a08;
              }
              break;
            case 2:
              bVar29 = puVar26 == (uint *)0x0;
LAB_0193a594:
              if (bVar29) {
                if (local_48 <= local_c8) goto LAB_0193a824;
                *(byte *)((int)local_4c + (int)local_c8) = bVar28;
                local_c0 = (uint *)((int)local_c8 + 1);
                goto joined_r0x0193a66c;
              }
              break;
            case 3:
              if (puVar26 == (uint *)0x0) {
LAB_0193a5b8:
                bVar30 = (uint *)0xfffffffc < local_c8;
                bVar29 = local_c8 == (uint *)0xfffffffd;
                uVar16 = 3;
                puVar19 = (uint *)(&switchD_0193a4c4::switchdataD_0193a4c8)[uVar10];
                if (local_c8 < (uint *)0xfffffffe) {
                  puVar18 = (uint *)((int)local_c8 + 2);
                  puVar19 = local_48;
                }
                if (local_c8 < (uint *)0xfffffffe) {
                  bVar30 = puVar19 <= puVar18;
                  bVar29 = puVar18 == puVar19;
                }
                bVar21 = 0;
                if (!bVar30 || bVar29) {
                  *(byte *)((int)local_4c + (int)local_c8) = bVar28;
LAB_0193a658:
                  ((byte *)((int)local_4c + (int)local_c8))[1] = (byte)uVar15;
                  local_c0 = puVar18;
                  goto joined_r0x0193a66c;
                }
              }
              break;
            case 4:
              if (puVar26 != (uint *)0x0) {
                if (puVar26 == (uint *)0x8) goto LAB_0193a5b8;
                bVar29 = puVar26 == (uint *)0xc;
                goto LAB_0193a594;
              }
              bVar30 = (uint *)0xfffffffb < local_c8;
              bVar29 = local_c8 == (uint *)0xfffffffc;
              uVar16 = 3;
              puVar19 = (uint *)(&switchD_0193a4c4::switchdataD_0193a4c8)[uVar10];
              if (local_c8 < (uint *)0xfffffffd) {
                puVar18 = (uint *)((int)local_c8 + 3);
                puVar19 = local_48;
              }
              if (local_c8 < (uint *)0xfffffffd) {
                bVar30 = puVar19 <= puVar18;
                bVar29 = puVar18 == puVar19;
              }
              bVar21 = 0;
              if (!bVar30 || bVar29) {
                *(byte *)((int)local_4c + (int)local_c8) = bVar28;
                ((byte *)((int)local_4c + (int)local_c8))[2] = (byte)local_c0;
                goto LAB_0193a658;
              }
            }
          }
          else {
LAB_0193a810:
            bVar21 = bVar8;
          }
        }
        goto switchD_0193a478_caseD_1;
      case (uint *)0x9:
        bVar8 = (byte)*local_8c;
        bVar29 = bVar8 == 0x45;
        if (bVar29) {
          bVar8 = *(byte *)((int)local_8c + 1);
        }
        if (bVar29 && bVar8 == 0x43) {
          bVar8 = *(byte *)((int)local_8c + 2);
          bVar29 = bVar8 == 0x48;
          if (bVar29) {
            bVar8 = *(byte *)((int)local_8c + 3);
          }
          if (bVar29 && bVar8 == 0x43) {
            bVar8 = (byte)local_8c[1];
            bVar29 = bVar8 == 0x4f;
            if (bVar29) {
              bVar8 = *(byte *)((int)local_8c + 5);
            }
            if (bVar29 && bVar8 == 0x4e) {
              bVar8 = *(byte *)((int)local_8c + 6);
              bVar29 = bVar8 == 0x46;
              if (bVar29) {
                bVar8 = *(byte *)((int)local_8c + 7);
              }
              if (bVar29 && bVar8 == 0x49) {
                iVar6 = 8;
                local_c4 = 7;
                bVar8 = 0x47;
                goto LAB_01939fe8;
              }
            }
          }
        }
        break;
      case (uint *)0xa:
        if ((byte)*local_8c == 0x50) {
          bVar8 = *(byte *)((int)local_8c + 1);
          bVar29 = bVar8 == 0x55;
          if (bVar29) {
            bVar8 = *(byte *)((int)local_8c + 2);
          }
          if (bVar29 && bVar8 == 0x42) {
            bVar8 = *(byte *)((int)local_8c + 3);
            bVar29 = bVar8 == 0x4c;
            if (bVar29) {
              bVar8 = (byte)local_8c[1];
            }
            if (bVar29 && bVar8 == 0x49) {
              bVar8 = *(byte *)((int)local_8c + 5);
              bVar29 = bVar8 == 0x43;
              if (bVar29) {
                bVar8 = *(byte *)((int)local_8c + 6);
              }
              if (bVar29 && bVar8 == 0x20) {
                bVar8 = *(byte *)((int)local_8c + 7);
                bVar29 = bVar8 == 0x4b;
                if (bVar29) {
                  bVar8 = (byte)local_8c[2];
                }
                if (bVar29 && bVar8 == 0x45) {
                  local_c4 = 1;
                  iVar6 = 9;
LAB_01939fe0:
                  bVar8 = 0x59;
                  goto LAB_01939fe8;
                }
              }
            }
          }
        }
        break;
      case (uint *)0xb:
        bVar8 = (byte)*local_8c;
        if (bVar8 == 0x50) {
          if (*(byte *)((int)local_8c + 1) == 0x52) {
            bVar8 = *(byte *)((int)local_8c + 2);
            bVar29 = bVar8 == 0x49;
            if (bVar29) {
              bVar8 = *(byte *)((int)local_8c + 3);
            }
            if (bVar29 && bVar8 == 0x56) {
              bVar8 = (byte)local_8c[1];
              bVar29 = bVar8 == 0x41;
              if (bVar29) {
                bVar8 = *(byte *)((int)local_8c + 5);
              }
              if (bVar29 && bVar8 == 0x54) {
                bVar8 = *(byte *)((int)local_8c + 6);
                bVar29 = bVar8 == 0x45;
                if (bVar29) {
                  bVar8 = *(byte *)((int)local_8c + 7);
                }
                if (bVar29 && bVar8 == 0x20) {
                  bVar8 = (byte)local_8c[2];
                  bVar29 = bVar8 == 0x4b;
                  if (bVar29) {
                    bVar8 = *(byte *)((int)local_8c + 9);
                  }
                  if (bVar29 && bVar8 == 0x45) {
                    local_c4 = 3;
                    iVar6 = 10;
                    goto LAB_01939fe0;
                  }
                }
              }
            }
          }
        }
        else {
          bVar29 = bVar8 == 0x43;
          if (bVar29) {
            bVar8 = *(byte *)((int)local_8c + 1);
          }
          if (bVar29 && bVar8 == 0x45) {
            bVar8 = *(byte *)((int)local_8c + 2);
            bVar29 = bVar8 == 0x52;
            if (bVar29) {
              bVar8 = *(byte *)((int)local_8c + 3);
            }
            if (bVar29 && bVar8 == 0x54) {
              bVar8 = (byte)local_8c[1];
              bVar29 = bVar8 == 0x49;
              if (bVar29) {
                bVar8 = *(byte *)((int)local_8c + 5);
              }
              if (bVar29 && bVar8 == 0x46) {
                bVar8 = *(byte *)((int)local_8c + 6);
                bVar29 = bVar8 == 0x49;
                if (bVar29) {
                  bVar8 = *(byte *)((int)local_8c + 7);
                }
                if (bVar29 && bVar8 == 0x43) {
                  bVar8 = (byte)local_8c[2];
                  bVar29 = bVar8 == 0x41;
                  if (bVar29) {
                    bVar8 = *(byte *)((int)local_8c + 9);
                  }
                  if (bVar29 && bVar8 == 0x54) {
                    iVar6 = 10;
                    local_c4 = 0;
                    bVar8 = 0x45;
                    goto LAB_01939fe8;
                  }
                }
              }
            }
          }
        }
        break;
      case (uint *)0xe:
        if ((byte)*local_8c == 0x45) {
          bVar8 = *(byte *)((int)local_8c + 1);
          bVar29 = bVar8 == 0x43;
          if (bVar29) {
            bVar8 = *(byte *)((int)local_8c + 2);
          }
          if (bVar29 && bVar8 == 0x20) {
            bVar8 = *(byte *)((int)local_8c + 3);
            bVar29 = bVar8 == 0x50;
            if (bVar29) {
              bVar8 = (byte)local_8c[1];
            }
            if (bVar29 && bVar8 == 0x52) {
              bVar8 = *(byte *)((int)local_8c + 5);
              bVar29 = bVar8 == 0x49;
              if (bVar29) {
                bVar8 = *(byte *)((int)local_8c + 6);
              }
              if (bVar29 && bVar8 == 0x56) {
                bVar8 = *(byte *)((int)local_8c + 7);
                bVar29 = bVar8 == 0x41;
                if (bVar29) {
                  bVar8 = (byte)local_8c[2];
                }
                if (bVar29 && bVar8 == 0x54) {
                  bVar8 = *(byte *)((int)local_8c + 9);
                  bVar29 = bVar8 == 0x45;
                  if (bVar29) {
                    bVar8 = *(byte *)((int)local_8c + 10);
                  }
                  if (bVar29 && bVar8 == 0x20) {
                    bVar8 = *(byte *)((int)local_8c + 0xb);
                    bVar29 = bVar8 == 0x4b;
                    if (bVar29) {
                      bVar8 = (byte)local_8c[3];
                    }
                    if (bVar29 && bVar8 == 0x45) {
                      local_c4 = 4;
                      iVar6 = 0xd;
                      goto LAB_01939fe0;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (uint *)0xf:
        bVar8 = (byte)*local_8c;
        bVar29 = bVar8 == 0x52;
        if (bVar29) {
          bVar8 = *(byte *)((int)local_8c + 1);
        }
        if (bVar29 && bVar8 == 0x53) {
          bVar8 = *(byte *)((int)local_8c + 2);
          bVar29 = bVar8 == 0x41;
          if (bVar29) {
            bVar8 = *(byte *)((int)local_8c + 3);
          }
          if (bVar29 && bVar8 == 0x20) {
            bVar8 = (byte)local_8c[1];
            bVar29 = bVar8 == 0x50;
            if (bVar29) {
              bVar8 = *(byte *)((int)local_8c + 5);
            }
            if (bVar29 && bVar8 == 0x52) {
              bVar8 = *(byte *)((int)local_8c + 6);
              bVar29 = bVar8 == 0x49;
              if (bVar29) {
                bVar8 = *(byte *)((int)local_8c + 7);
              }
              if (bVar29 && bVar8 == 0x56) {
                bVar8 = (byte)local_8c[2];
                bVar29 = bVar8 == 0x41;
                if (bVar29) {
                  bVar8 = *(byte *)((int)local_8c + 9);
                }
                if (bVar29 && bVar8 == 0x54) {
                  bVar8 = *(byte *)((int)local_8c + 10);
                  bVar29 = bVar8 == 0x45;
                  if (bVar29) {
                    bVar8 = *(byte *)((int)local_8c + 0xb);
                  }
                  if (bVar29 && bVar8 == 0x20) {
                    bVar8 = (byte)local_8c[3];
                    bVar29 = bVar8 == 0x4b;
                    if (bVar29) {
                      bVar8 = *(byte *)((int)local_8c + 0xd);
                    }
                    if (bVar29 && bVar8 == 0x45) {
                      local_c4 = 2;
                      iVar6 = 0xe;
                      goto LAB_01939fe0;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (uint *)0x13:
        bVar8 = (byte)*local_8c;
        bVar29 = bVar8 == 0x43;
        if (bVar29) {
          bVar8 = *(byte *)((int)local_8c + 1);
        }
        if (bVar29 && bVar8 == 0x45) {
          bVar8 = *(byte *)((int)local_8c + 2);
          bVar29 = bVar8 == 0x52;
          if (bVar29) {
            bVar8 = *(byte *)((int)local_8c + 3);
          }
          if (bVar29 && bVar8 == 0x54) {
            bVar8 = (byte)local_8c[1];
            bVar29 = bVar8 == 0x49;
            if (bVar29) {
              bVar8 = *(byte *)((int)local_8c + 5);
            }
            if (bVar29 && bVar8 == 0x46) {
              bVar8 = *(byte *)((int)local_8c + 6);
              bVar29 = bVar8 == 0x49;
              if (bVar29) {
                bVar8 = *(byte *)((int)local_8c + 7);
              }
              if (bVar29 && bVar8 == 0x43) {
                bVar8 = (byte)local_8c[2];
                bVar29 = bVar8 == 0x41;
                if (bVar29) {
                  bVar8 = *(byte *)((int)local_8c + 9);
                }
                if (bVar29 && bVar8 == 0x54) {
                  bVar8 = *(byte *)((int)local_8c + 10);
                  bVar29 = bVar8 == 0x45;
                  if (bVar29) {
                    bVar8 = *(byte *)((int)local_8c + 0xb);
                  }
                  if (bVar29 && bVar8 == 0x20) {
                    bVar8 = (byte)local_8c[3];
                    bVar29 = bVar8 == 0x52;
                    if (bVar29) {
                      bVar8 = *(byte *)((int)local_8c + 0xd);
                    }
                    if (bVar29 && bVar8 == 0x45) {
                      bVar8 = *(byte *)((int)local_8c + 0xe);
                      bVar29 = bVar8 == 0x51;
                      if (bVar29) {
                        bVar8 = *(byte *)((int)local_8c + 0xf);
                      }
                      if (bVar29 && bVar8 == 0x55) {
                        bVar8 = (byte)local_8c[4];
                        bVar29 = bVar8 == 0x45;
                        if (bVar29) {
                          bVar8 = *(byte *)((int)local_8c + 0x11);
                        }
                        if (bVar29 && bVar8 == 0x53) {
                          iVar6 = 0x12;
                          local_c4 = 6;
                          bVar8 = 0x54;
                          goto LAB_01939fe8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_01939684(&local_90);
      local_94 = 0;
      local_90 = -0x80000000;
    }
    else {
      puVar13 = (uint *)((int)puVar19 + (int)puVar4);
      iVar5 = 0;
      puVar18 = puVar4;
      do {
        while( true ) {
          puVar13 = (uint *)((int)puVar13 + -1);
          uVar15 = *(byte *)puVar13 - 10;
          if ((0x16 < uVar15) || ((1 << (uVar15 & 0xff) & 0x400009U) == 0)) break;
          if (puVar13 == puVar19) goto LAB_01939a78;
        }
        if (*(byte *)puVar13 != 0x2d) goto LAB_01939a78;
        puVar18 = (uint *)((int)puVar13 - (int)puVar19);
        iVar5 = iVar5 + 1;
      } while (puVar18 != (uint *)0x0);
      puVar18 = (uint *)0x0;
LAB_01939a78:
      if (iVar5 != 5) {
        if ((int)puVar4 < 0) {
          uVar27 = 0;
LAB_0193a734:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar27,local_b8);
        }
        uVar27 = 1;
        local_38 = (uint *)FUN_01298504(puVar4,1);
        if (local_38 == (uint *)0x0) {
          local_b8 = puVar4;
          goto LAB_0193a734;
        }
        FUN_01bed4e2(local_38,puVar19,puVar4);
        local_b0 = 1;
        local_3c = puVar4;
        local_34 = puVar4;
        goto LAB_0193a6b8;
      }
      if ((puVar18 < &DAT_0000000b) || (puVar4 < puVar18)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0xb,puVar18,puVar4,&DAT_01d25b30);
      }
      puVar13 = (uint *)((int)puVar18 + 3);
      uVar27 = 0;
      if ((int)puVar13 < 0) goto LAB_0193a734;
      if (puVar13 == (uint *)0x0) {
        local_b8 = (uint *)&DAT_00000001;
        puVar13 = (uint *)0x0;
      }
      else {
        uVar27 = 1;
        local_b8 = (uint *)FUN_01298504(puVar13,1);
        if (local_b8 == (uint *)0x0) {
          local_b8 = puVar13;
          goto LAB_0193a734;
        }
      }
      local_48 = (uint *)0x0;
      local_50 = puVar13;
      local_4c = local_b8;
      FUN_01ac6cbc(&local_50,&DAT_00523b40,9);
      FUN_01ac6cbc(&local_50,(byte *)((int)puVar19 + 0xb),(byte *)((int)puVar18 + -0xb));
      FUN_01ac6cbc(&local_50,&DAT_00523b49,5);
      FUN_0193a93c(&local_40,(byte *)((int)puVar19 + 0xb),(byte *)((int)puVar18 + -0xb));
      local_5c = local_50;
      puStack_58 = local_4c;
      puStack_54 = local_48;
      local_68 = local_40;
      local_64 = local_3c;
      local_60 = local_38;
      FUN_01939684(&local_90);
      local_90 = local_68;
      local_8c = local_64;
      local_88 = local_60;
      local_84 = local_5c;
      local_80 = puStack_58;
      local_7c = puStack_54;
      puVar18 = (uint *)&DAT_80000001;
    }
LAB_01939a08:
  } while (puVar18 == (uint *)&DAT_80000001);
  uVar27 = 0;
  local_3c = puVar18;
LAB_0193a6c0:
  param_1[1] = local_b0;
  iVar6 = 0x10;
  iVar20 = 0xc;
  iVar5 = 8;
LAB_0193a6f0:
  *(uint **)((int)param_1 + iVar5) = local_3c;
  *(uint **)((int)param_1 + iVar20) = local_bc;
  *(uint **)((int)param_1 + iVar6) = local_c0;
  *param_1 = uVar27;
  FUN_0134bd64(local_74,local_70);
  FUN_01939684(&local_90);
  FUN_0134bd64(local_9c,local_98);
  return;
LAB_0193a7b8:
  uVar16 = 0;
switchD_0193a478_caseD_1:
  local_28 = &LAB_019396ac;
  local_2c = &local_2e;
  local_2e = uVar16;
  local_2d = bVar21;
  FUN_00664898(&local_3c,&DAT_00590e5f,&local_2c);
  FUN_0134bd64(local_50,puVar13);
  local_b0 = 2;
LAB_0193a6b8:
  uVar27 = 1;
  local_bc = local_38;
  local_c0 = local_34;
  goto LAB_0193a6c0;
}

