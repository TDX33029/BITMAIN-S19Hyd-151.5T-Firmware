// FUN_010a04e8 @ 010a04e8 size=4280 calls_out=25 calls_in=1
// strings: current header name

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010a04e8(uint *param_1,uint *param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint **ppuVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  uint uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  undefined *puVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  undefined4 extraout_r1;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  uint uVar26;
  undefined4 *puVar27;
  uint uVar28;
  uint uVar29;
  byte bVar30;
  undefined4 *puVar31;
  bool bVar32;
  bool bVar33;
  undefined8 uVar34;
  int *local_190;
  int local_18c;
  undefined4 *local_188;
  undefined4 *local_184;
  uint local_168;
  uint local_150;
  uint local_12c;
  uint *local_118;
  undefined1 *local_114;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined2 local_e0;
  uint local_d8;
  uint local_d4;
  undefined4 *local_d0;
  undefined4 *local_cc;
  uint local_c8;
  int iStack_c4;
  int local_bc;
  int *local_b8;
  int local_b4;
  int local_b0;
  uint local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  uint uStack_a0;
  undefined4 local_9c;
  undefined3 uStack_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 *local_84;
  int local_80;
  byte *local_7c;
  undefined4 *local_78;
  undefined4 *puStack_74;
  int iStack_70;
  int local_68;
  byte *pbStack_64;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  int iStack_58;
  uint local_50;
  uint local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  uint local_40;
  uint uStack_3c;
  byte *pbStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  
  puVar24 = (undefined4 *)param_2[4];
  uVar5 = (uint)*(ushort *)(puVar24 + 0x11);
  if (uVar5 == 0x65) {
    bVar4 = 1;
    local_12c = 0;
LAB_010a05e8:
    local_150 = 0;
  }
  else {
    if ((uVar5 - 200 < 100) && (*(char *)param_2[5] == '\a')) {
      local_12c = 1;
      bVar4 = 1;
      goto LAB_010a05e8;
    }
    if (99 < uVar5 - 100) {
      bVar4 = (byte)param_2[6] ^ 1;
      local_12c = 0;
      goto LAB_010a05e8;
    }
    FUN_0071227c(puVar24);
    *param_2 = 2;
    param_2[1] = 0;
    *(undefined1 *)((int)puVar24 + 0x46) = 2;
    puVar24[6] = 2;
    local_12c = 0;
    *(undefined2 *)(puVar24 + 0x11) = 500;
    puVar24[9] = 4;
    puVar24[0xc] = 4;
    *puVar24 = 0;
    puVar24[1] = 0;
    puVar24[0x10] = 0;
    *(undefined2 *)(puVar24 + 0xe) = 0;
    puVar24[7] = 0;
    puVar24[8] = 0;
    puVar24[10] = 0;
    puVar24[0xb] = 0;
    puVar24[0xd] = 0;
    bVar4 = 1;
    local_150 = FUN_01427b74(1,5);
  }
  uVar26 = param_3[2];
  uVar5 = (puVar24[0xd] + puVar24[10]) * 0x1e + 0x1e;
  if (*param_3 - uVar26 < uVar5) {
    FUN_016092cc(param_3,uVar26,uVar5,1,1);
  }
  uVar5 = FUN_01420304(puVar24[0x10]);
  cVar1 = *(char *)((int)puVar24 + 0x46);
  if (cVar1 == '\x01') {
    puVar16 = &DAT_00477be9;
LAB_010a0680:
    FUN_01ac6cbc(param_3,puVar16,9);
    FUN_01ac6cbc(param_3,"ConnectFailedMissingHostProxyAuthRequiredProxyHeadersTooLongTunnelUnexpectedEofTunnelUnsuccessful100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131132133134135136137138139140141142143144145146147148149150151152153154155156157158159160161162163164165166167168169170171172173174175176177178179180181182183184185186187188189190191192193194195196197198199200201202203204205206207208209210211212213214215216217218219220221222223224225226227228229230231232233234235236237238239240241242243244245246247248249250251252253254255"
                         + (*(ushort *)(puVar24 + 0x11) - 100 & 0xffff) * 2 +
                           (*(ushort *)(puVar24 + 0x11) - 100 & 0xffff) + 0x61,3);
    FUN_01ac6cbc(param_3,&DAT_005319c3,1);
    if (uVar5 == 0) {
      uVar34 = FUN_014136b4(*(undefined2 *)(puVar24 + 0x11));
      if ((int)uVar34 == 0) {
        uVar34 = 0x600477bfb;
      }
    }
    else {
      uVar34 = *(undefined8 *)(uVar5 + 4);
    }
    FUN_01ac6cbc(param_3,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20));
    uVar19 = 2;
    puVar16 = &DAT_00531047;
  }
  else {
    if (cVar1 == '\x03') {
      puVar16 = &DAT_00477bf2;
      goto LAB_010a0680;
    }
    if (cVar1 != '\x02') {
      local_50 = CONCAT31(local_50._1_3_,cVar1);
      local_118 = &local_50;
      local_114 = &LAB_0141457c;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005960ec,&local_118,&DAT_01cf4550);
    }
    uVar6 = uVar5;
    if (uVar5 == 0) {
      uVar6 = (uint)*(ushort *)(puVar24 + 0x11);
    }
    puVar16 = &DAT_00477bf2;
    if (uVar5 != 0 || uVar6 != 200) goto LAB_010a0680;
    uVar19 = 0x11;
    puVar16 = &DAT_00477c01;
  }
  FUN_01ac6cbc(param_3,puVar16,uVar19);
  uVar19 = puVar24[0x10];
  puVar24[0x10] = 0;
  ppuVar7 = (uint **)FUN_014204a4();
  bVar30 = ppuVar7 == (uint **)0x0 & *(byte *)((int)param_2 + 0x19);
  if (bVar30 == 0) {
    if (ppuVar7 == (uint **)0x0) {
      uVar5 = *param_2;
      uVar6 = param_2[1];
      puVar8 = (undefined4 *)param_2[2];
      puVar9 = (undefined4 *)param_2[3];
      local_d8 = 1;
      bVar30 = *(byte *)((int)param_2 + 0x1a);
      pcVar10 = (char *)param_2[5];
      iVar20 = puVar24[7];
      local_bc = -0x80000000;
      local_cc = (undefined4 *)0x0;
      local_d0 = (undefined4 *)0x0;
      local_c8 = local_c8 & 0xffffff00;
      local_b0 = 0;
      if (iVar20 != 0) {
        puVar17 = (undefined4 *)puVar24[6];
        puVar31 = puVar17;
        do {
          puVar27 = puVar31 + 1;
          *puVar31 = 0xffff;
          puVar31 = puVar27;
        } while (puVar27 != puVar17 + iVar20);
      }
      local_84 = puVar24 + 0xb;
      uVar11 = (uint)&local_d8 | 4;
      local_8c = puVar24[9];
      local_90 = puVar24[10];
      local_78 = (undefined4 *)0x0;
      puVar16 = &DAT_00531047;
      local_168 = 0;
      puVar24[10] = 0;
      puVar31 = (undefined4 *)0x0;
      local_94 = 0;
      local_9c = 0;
      bVar3 = false;
      bVar33 = false;
      puStack_74 = puVar24;
      local_88 = local_90;
LAB_010a0908:
      bVar32 = (local_168 & 1) != 0;
      puVar12 = puVar16;
      if (bVar32) {
        puVar12 = &DAT_00477b65;
      }
      uVar13 = 2;
      if (bVar32) {
        uVar13 = 0xb;
      }
      puVar17 = local_78;
      puVar27 = puStack_74;
      puVar25 = puVar31;
      do {
        FUN_0141e75c(&local_50,&local_9c);
        puVar22 = puStack_34;
        if (local_50 == 2) {
          FUN_0141e6c4(&local_9c);
          if (puVar25 != (undefined4 *)0x0) {
            FUN_01ac6cbc(param_3,puVar12,uVar13);
          }
          if (local_12c == 0) {
            if (uVar5 == 2 && uVar6 == 0) {
LAB_010a0fe0:
              uVar5 = (uint)*(ushort *)(puVar24 + 0x11);
              if ((uVar5 - 100 < 100) ||
                 (((uVar5 - 200 < 100 && (*pcVar10 == '\a')) || (uVar5 == 0xcc || uVar5 == 0x130))))
              {
LAB_010a1178:
                uVar26 = 1;
                puVar17 = (undefined4 *)0x0;
                puVar27 = (undefined4 *)0x0;
              }
              else if (*pcVar10 == '\x05') {
LAB_010a1500:
                uVar26 = 1;
                puVar17 = (undefined4 *)0x0;
                puVar27 = (undefined4 *)0x0;
              }
              else {
                FUN_01ac6cbc(param_3,&DAT_00477b75,0x13);
                uVar26 = 1;
                puVar17 = (undefined4 *)0x0;
                puVar27 = (undefined4 *)0x0;
              }
            }
            else {
              if ((uVar5 & 1) == 0) {
                if (puVar8 == (undefined4 *)0x0 && puVar9 == (undefined4 *)0x0) goto LAB_010a0fe0;
                uVar5 = (uint)*(ushort *)(puVar24 + 0x11);
                if ((99 < uVar5 - 100) && ((99 < uVar5 - 200 || (*pcVar10 != '\a')))) {
                  if (uVar5 != 0xcc) {
                    uVar26 = 1;
                    puVar17 = (undefined4 *)0x0;
                    puVar27 = (undefined4 *)0x0;
                    if (uVar5 != 0x130) {
                      FUN_01ac6cbc(param_3,&DAT_005694d8,0x10);
                      uVar34 = FUN_01415f98(&local_50,extraout_r1,puVar8,puVar9);
                      FUN_01ac6cbc(param_3,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20));
                      uVar26 = 1;
                      FUN_01ac6cbc(param_3,&DAT_00531047,2);
                      puVar17 = puVar9;
                      puVar27 = puVar8;
                    }
                    goto LAB_010a1180;
                  }
                  goto LAB_010a1500;
                }
                goto LAB_010a1178;
              }
              if ((*(char *)((int)puVar24 + 0x46) == '\x01') || (*pcVar10 == '\x05')) {
LAB_010a1080:
                uVar26 = 2;
              }
              else {
                uVar5 = (uint)*(ushort *)(puVar24 + 0x11);
                if (*pcVar10 == '\a') {
                  if (uVar5 - 100 < 200) goto LAB_010a1080;
                }
                else if (uVar5 - 100 < 100) goto LAB_010a1080;
                if (uVar5 == 0xcc) {
                  uVar26 = 2;
                }
                else {
                  uVar26 = 2;
                  if (uVar5 != 0x130) {
                    FUN_01ac6cbc(param_3,&DAT_00477b93,0x1c);
                    uVar26 = 0;
                  }
                }
              }
            }
LAB_010a1180:
            if ((local_d8 == 0) && (local_d4 != 0x80000000)) {
              FUN_0141a4fc(uVar11);
            }
            local_d4 = 0x80000000;
            local_c8 = local_c8 & 0xffffff00;
            local_d8 = uVar26;
            local_d0 = puVar27;
            local_cc = puVar17;
          }
          if (*pcVar10 == '\x05') {
LAB_010a1204:
            if ((local_d8 == 0) && (local_d4 != 0x80000000)) {
              FUN_0141a4fc(uVar11);
            }
            local_c8 = local_c8 & 0xffffff00;
            local_d0 = (undefined4 *)0x0;
            local_cc = (undefined4 *)0x0;
            local_d8 = 1;
          }
          else {
            uVar5 = (uint)*(ushort *)(puVar24 + 0x11);
            if (*pcVar10 != '\a') {
              if (99 < uVar5 - 100) goto LAB_010a11f8;
              goto LAB_010a1204;
            }
            if (uVar5 - 100 < 200) goto LAB_010a1204;
LAB_010a11f8:
            if (uVar5 == 0x130 || uVar5 == 0xcc) goto LAB_010a1204;
          }
          uVar13 = 2;
          if ((!bVar33) && ((bVar30 & 1) != 0)) {
            if ((uint)(*param_3 - param_3[2]) < 0x25) {
              FUN_016092cc(param_3,param_3[2],0x25,1,1);
            }
            FUN_01ac6cbc(param_3,&DAT_00477baf,6);
            FUN_01420ea4(param_3);
            uVar13 = 4;
            puVar16 = &DAT_0056eb54;
          }
          FUN_01ac6cbc(param_3,puVar16,uVar13);
          bVar33 = local_d8 != 0;
          bVar3 = local_bc == -0x80000000;
          if (!bVar33 && !bVar3) {
            FUN_01428bac(&local_50,&local_d8,&local_bc);
            local_d8 = local_50;
            local_d4 = local_4c;
            local_d0 = local_48;
            local_cc = local_44;
            local_c8 = local_40;
            iStack_c4 = uStack_3c;
          }
          puVar8 = local_cc;
          puVar24 = local_d0;
          uVar6 = local_d4;
          uVar26 = local_d8;
          uVar5 = 0;
          if (local_b0 != 0) {
            uVar5 = local_ac;
          }
          if (local_b0 != 0 && uVar5 != 0) {
            (**(code **)(uVar5 + 0x10))(&uStack_a0,local_a8,local_a4);
          }
          if ((bVar33 || bVar3) && !bVar3) {
            FUN_0141a4fc(&local_bc);
          }
          bVar30 = 0;
          if (uVar26 == 3) goto LAB_010a1364;
          local_40._0_1_ = bVar4 & 1;
          local_9c._0_3_ = local_c8._1_3_;
          local_9c._3_1_ = (undefined1)iStack_c4;
          uStack_98 = (undefined3)((uint)iStack_c4 >> 8);
          goto LAB_010a13b4;
        }
        local_80 = uStack_3c;
        local_7c = pbStack_38;
        local_78 = puStack_34;
        puStack_74 = puStack_30;
        iStack_70 = iStack_2c;
        if ((local_50 & 1) == 0) {
LAB_010a09d8:
          if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("current header name",0x13,&DAT_01cf4488);
          }
        }
        else {
          uVar14 = 0;
          if (local_b0 != 0) {
            uVar14 = local_ac;
          }
          if (local_b0 != 0 && uVar14 != 0) {
            (**(code **)(uVar14 + 0x10))(&uStack_a0,local_a8,local_a4);
          }
          local_b0 = 1;
          bVar32 = puVar25 != (undefined4 *)0x0;
          local_ac = local_4c;
          local_a8 = local_48;
          local_a4 = local_44;
          uStack_a0 = local_40;
          puVar25 = (undefined4 *)0x0;
          if (bVar32) {
            FUN_01ac6cbc(param_3,puVar12,uVar13);
            puVar25 = (undefined4 *)0x0;
            goto LAB_010a09d8;
          }
        }
        if (local_ac == 0) {
          uVar14 = (uint)local_a8 & 0xff;
          puVar31 = puVar25;
          if (uVar14 < 0x20) {
            if (uVar14 == 0x18) {
              if ((~local_12c & 1) == 0 && puVar25 == (undefined4 *)0x0) goto LAB_010a1088;
              if (uVar5 != 2 || uVar6 != 0) {
                if ((uVar5 & 1) == 0) {
                  puVar31 = (undefined4 *)&DAT_00000001;
                  if (puVar25 == (undefined4 *)0x0) {
                    if ((local_d8 == 0) && (local_d4 != 0x80000000)) {
                      FUN_0141a4fc(uVar11);
                    }
                    local_d8 = 1;
                    local_c8 = local_c8 & 0xffffff00;
                    local_d0 = puVar8;
                    local_cc = puVar9;
                    FUN_01ac6cbc(param_3,&DAT_005694d8,0x10);
                    FUN_01ac6cbc(param_3,local_7c,local_78);
                    local_12c = 1;
                    puVar31 = (undefined4 *)&DAT_00000001;
                  }
                  goto LAB_010a0d80;
                }
                if (local_78 == (undefined4 *)0x0) goto LAB_010a1088;
                puVar22 = (undefined4 *)0x0;
                puVar27 = (undefined4 *)0x0;
                puVar17 = local_78;
                pbVar18 = local_7c;
                goto LAB_010a0bec;
              }
              if (*pcVar10 != '\x05') goto LAB_010a0d7c;
              local_12c = 1;
            }
            else if (uVar14 == 0x14) {
              bVar2 = bVar4 & 1;
              bVar4 = 1;
              if (bVar2 == 0) {
                bVar4 = FUN_01429a28(local_7c,local_78,&DAT_005319a4,5);
              }
              if (puVar25 == (undefined4 *)0x0) {
                FUN_01ac6cbc(param_3,&DAT_00477bb5,0xc);
              }
              else {
                FUN_01ac6cbc(param_3,&DAT_00533bc1,2);
              }
              FUN_01ac6cbc(param_3,local_7c,local_78);
              puVar31 = (undefined4 *)&DAT_00000001;
              goto LAB_010a0d80;
            }
          }
          else if (uVar14 == 0x20) {
            bVar33 = true;
          }
          else {
            if (uVar14 == 0x44) {
              if ((*(char *)((int)puVar24 + 0x46) == '\x01') || (*pcVar10 == '\x05'))
              goto LAB_010a0d7c;
              uVar14 = (uint)*(ushort *)(puVar24 + 0x11);
              if (*pcVar10 == '\a') {
                if (uVar14 - 100 < 200) goto LAB_010a0d7c;
              }
              else if (uVar14 - 100 < 100) goto LAB_010a0d7c;
              if (uVar14 == 0xcc || uVar14 == 0x130) goto LAB_010a0d7c;
              if (puVar25 == (undefined4 *)0x0) {
                FUN_01ac6cbc(param_3,&DAT_00477bc1,9);
              }
              else {
                FUN_01ac6cbc(param_3,&DAT_00533bc1,2);
              }
              FUN_01ac6cbc(param_3,local_7c,local_78);
              if (local_bc == -0x80000000) {
                local_190 = (int *)thunk_FUN_01be5118(0x14);
                if (local_190 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(4,0x14);
                }
                *local_190 = local_80;
                local_190[1] = (int)local_7c;
                local_190[2] = (int)local_78;
                local_190[3] = (int)puStack_74;
                local_190[4] = iStack_70;
                local_b4 = 1;
                local_bc = 1;
                local_b8 = local_190;
              }
              else {
                local_68 = local_80;
                pbStack_64 = local_7c;
                puStack_60 = local_78;
                puStack_5c = puStack_74;
                iStack_58 = iStack_70;
                if (local_18c == local_bc) {
                  FUN_01429324(&local_bc);
                  local_190 = local_b8;
                }
                local_b4 = local_18c + 1;
                piVar15 = local_190 + local_18c * 5;
                *piVar15 = local_68;
                piVar15[1] = (int)pbStack_64;
                piVar15[2] = (int)puStack_60;
                piVar15[3] = (int)puStack_5c;
                piVar15[4] = iStack_58;
                local_78 = puStack_60;
                puStack_74 = puStack_5c;
              }
              puVar31 = (undefined4 *)&DAT_00000001;
              local_18c = local_b4;
              goto LAB_010a0908;
            }
            if (uVar14 == 0x45) goto LAB_010a0b74;
          }
        }
        uVar34 = FUN_00f80570(&local_ac);
        FUN_01ac6cbc(param_3,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20));
        FUN_01ac6cbc(param_3,0x5312dd,2);
        FUN_01ac6cbc(param_3,local_7c,local_78);
        FUN_01ac6cbc(param_3,&DAT_00531047,2);
        (**(code **)(local_80 + 0x10))(&puStack_74,local_7c,local_78);
        puVar17 = puVar22;
        puVar27 = puVar25;
      } while( true );
    }
  }
  else {
    local_114 = (undefined1 *)0x0;
    local_118 = (uint *)0x0;
    local_e0 = 0;
    local_e4 = 0;
    local_ec = 0;
    local_f0 = 0;
    local_f8 = 0;
    local_fc = 0;
    local_100 = 2;
    ppuVar7 = &local_118;
    local_e8 = 4;
    local_f4 = 4;
  }
  FUN_0141aa10(&local_50,param_2,param_3,bVar4 & 1,uVar26,local_12c,ppuVar7);
  uVar6 = local_4c;
  if (local_50 != 3) {
    local_9c._0_3_ = local_40._1_3_;
    local_9c._3_1_ = (undefined1)uStack_3c;
    uStack_98 = (undefined3)(uStack_3c >> 8);
    uVar26 = local_50;
    puVar8 = local_44;
    puVar24 = local_48;
LAB_010a13b4:
    local_40 = CONCAT31((undefined3)local_9c,(byte)local_40);
    uStack_3c = CONCAT31(uStack_98,local_9c._3_1_);
    local_50 = uVar26;
    local_4c = uVar6;
    local_48 = puVar24;
    local_44 = puVar8;
    if (local_150 == 0) {
      *param_1 = uVar26;
      param_1[1] = uVar6;
      param_1[2] = (uint)puVar24;
      param_1[3] = (uint)puVar8;
      param_1[4] = local_40;
      param_1[5] = uStack_3c;
    }
    else {
      *param_1 = 3;
      param_1[1] = local_150;
      if ((uVar26 == 0) && (uVar6 != 0x80000000)) {
        FUN_0141a4fc((uint)&local_50 | 4);
      }
    }
    FUN_0178e884(uVar19);
    if (bVar30 == 0) {
      return;
    }
    FUN_0142e18c(&local_118);
    return;
  }
LAB_010a1364:
  *param_1 = 3;
  param_1[1] = uVar6;
  FUN_0178e884(uVar19);
  if (bVar30 != 0) {
    FUN_0142e18c(&local_118);
  }
  FUN_0141bde0(local_150);
  return;
LAB_010a0bec:
  if (puVar17 == (undefined4 *)0x0) goto LAB_010a0cf8;
  uVar14 = *pbVar18 - 0x30 & 0xff;
  if (9 < uVar14) goto LAB_010a1088;
  uVar21 = (uint)(ZEXT48(puVar22) * 10);
  uVar23 = (uint)(ZEXT48(puVar22) * 10 >> 0x20);
  uVar28 = (uint)(ZEXT48(puVar27) * 10);
  uVar29 = uVar23 + uVar28;
  if ((int)(ZEXT48(puVar27) * 10 >> 0x20) != 0 || CARRY4(uVar23,uVar28)) goto LAB_010a1088;
  puVar22 = (undefined4 *)(uVar21 + uVar14);
  puVar17 = (undefined4 *)((int)puVar17 + -1);
  puVar27 = (undefined4 *)(uVar29 + CARRY4(uVar21,uVar14));
  pbVar18 = pbVar18 + 1;
  if (CARRY4(uVar29,(uint)CARRY4(uVar21,uVar14))) goto LAB_010a1088;
  goto LAB_010a0bec;
LAB_010a0cf8:
  if (bVar3) {
    bVar3 = true;
    if (local_184 != puVar22 || local_188 != puVar27) goto LAB_010a1088;
  }
  else {
    if ((local_d8 == 0) && (local_d4 != 0x80000000)) {
      FUN_0141a4fc(uVar11);
    }
    local_d8 = 1;
    local_c8 = local_c8 & 0xffffff00;
    local_d0 = puVar22;
    local_cc = puVar27;
    FUN_01ac6cbc(param_3,&DAT_005694d8,0x10);
    bVar3 = true;
    FUN_01ac6cbc(param_3,local_7c,local_78);
    local_12c = 1;
    puVar31 = (undefined4 *)&DAT_00000001;
    local_188 = puVar27;
    local_184 = puVar22;
  }
  goto LAB_010a0d80;
LAB_010a0b74:
  if ((~local_12c & 1) == 0 && puVar25 == (undefined4 *)0x0) goto LAB_010a1088;
  if ((*(char *)((int)puVar24 + 0x46) != '\x01') && (*pcVar10 != '\x05')) {
    uVar14 = (uint)*(ushort *)(puVar24 + 0x11);
    if (*pcVar10 == '\a') {
      if (199 < uVar14 - 100) goto LAB_010a0d70;
    }
    else if (99 < uVar14 - 100) {
LAB_010a0d70:
      if (uVar14 != 0xcc && uVar14 != 0x130) {
        local_168 = FUN_0142994c(local_7c,local_78);
        if (puVar25 == (undefined4 *)0x0) {
          if ((local_d8 == 0) && (local_d4 != 0x80000000)) {
            FUN_0141a4fc(uVar11);
          }
          local_c8 = local_c8 & 0xffffff00;
          local_d4 = 0x80000000;
          local_d8 = 0;
          FUN_01ac6cbc(param_3,&DAT_00477bca,0x13);
        }
        else {
          FUN_01ac6cbc(param_3,&DAT_00533bc1,2);
        }
        FUN_01ac6cbc(param_3,local_7c,local_78);
        local_168 = local_168 ^ 1;
        local_12c = 1;
        puVar31 = (undefined4 *)&DAT_00000001;
        goto LAB_010a0d80;
      }
    }
  }
LAB_010a0d7c:
LAB_010a0d80:
  (**(code **)(local_80 + 0x10))(&puStack_74,local_7c,local_78);
  local_78 = puVar22;
  puStack_74 = puVar25;
  goto LAB_010a0908;
LAB_010a1088:
  if (uVar26 <= (uint)param_3[2]) {
    param_3[2] = uVar26;
  }
  uVar6 = FUN_01427b74(1,4);
  (**(code **)(local_80 + 0x10))(&puStack_74,local_7c,local_78);
  FUN_0141e6c4(&local_9c);
  uVar5 = 0;
  if (local_b0 != 0) {
    uVar5 = local_ac;
  }
  if (local_b0 != 0 && uVar5 != 0) {
    (**(code **)(uVar5 + 0x10))(&uStack_a0,local_a8,local_a4);
  }
  if (local_bc != -0x80000000) {
    FUN_0141a4fc(&local_bc);
  }
  bVar30 = 0;
  if ((local_d8 == 0) && (local_d4 != 0x80000000)) {
    FUN_0141a4fc(uVar11);
  }
  goto LAB_010a1364;
}

