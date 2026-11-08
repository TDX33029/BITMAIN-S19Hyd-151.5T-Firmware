// FUN_00b904d4 @ 00b904d4 size=4364 calls_out=7 calls_in=2
// strings: 

void FUN_00b904d4(uint *param_1,uint *param_2,uint *param_3,int param_4)

{
  code *pcVar1;
  char cVar2;
  byte *pbVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  byte *pbVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  bool bVar25;
  bool bVar26;
  uint local_500 [5];
  uint local_4ec;
  uint local_4e8 [4];
  uint uStack_4d8;
  uint uStack_4d4;
  uint auStack_4d0 [264];
  uint *local_b0;
  int local_ac;
  int local_a8;
  uint *local_a4;
  byte *local_a0;
  uint *local_9c;
  byte *local_98;
  uint *local_94;
  uint local_90;
  uint *local_8c;
  uint *local_88;
  uint *local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint *local_74;
  uint *local_70;
  uint *local_6c;
  byte *local_68;
  uint local_64;
  undefined1 local_60;
  undefined2 local_4c;
  byte local_4a;
  byte *local_48;
  uint *local_44;
  uint local_40 [5];
  undefined2 local_2c;
  undefined1 local_2a;
  
  if (&DAT_00000020 < param_2) {
    do {
      if (param_4 == 0) {
        puVar19 = (uint *)((int)param_2 + ((uint)param_2 >> 1));
        local_74 = param_2;
        do {
          puVar23 = local_74;
          puVar19 = (uint *)((int)puVar19 + -1);
          if (puVar19 < local_74) {
            local_48 = (byte *)*param_1;
            local_44 = (uint *)param_1[1];
            local_40[0] = param_1[2];
            local_40[1] = param_1[3];
            local_40[2] = param_1[4];
            local_40[3] = param_1[5];
            puVar18 = param_1 + (int)puVar19 * 6;
            FUN_01bed864(param_1,puVar18,0x18);
            puVar22 = (uint *)0x0;
            *puVar18 = (uint)local_48;
            puVar18[1] = (uint)local_44;
            puVar18[2] = local_40[0];
            puVar18[3] = local_40[1];
            puVar18[4] = local_40[2];
            puVar18[5] = local_40[3];
          }
          else {
            puVar22 = (uint *)((int)puVar19 - (int)local_74);
          }
          puVar18 = (uint *)((int)puVar22 << 1 | 1);
          puVar6 = puVar19;
          if (puVar23 < puVar19) {
            puVar6 = puVar23;
          }
          local_70 = puVar19;
          if (puVar18 < puVar6) {
            local_6c = puVar6;
            do {
              puVar23 = puVar18;
              puVar19 = (uint *)((int)puVar22 * 2 + 2);
              if (puVar19 < puVar6) {
                puVar19 = param_1 + (int)puVar19 * 6;
                uVar10 = *puVar19;
                puVar18 = param_1 + (int)puVar23 * 6;
                uVar20 = *puVar18;
                uVar8 = puVar19[1];
                uVar5 = puVar18[1];
                if (uVar20 == uVar10 && uVar5 == uVar8) {
                  local_68 = (byte *)puVar18[3];
                  local_64 = puVar18[4];
                  bVar25 = local_64 != 0;
                  uVar10 = 0;
                  uVar20 = 0;
                  if (bVar25) {
                    uVar20 = (uint)*local_68;
                  }
                  local_44 = (uint *)puVar19[4];
                  if (bVar25) {
                    uVar20 = uVar20 - 0x2f;
                  }
                  local_48 = (byte *)puVar19[3];
                  local_4a = bVar25 && uVar20 == 0;
                  bVar25 = local_44 != (uint *)0x0;
                  if (bVar25) {
                    uVar10 = (uint)*local_48;
                  }
                  local_2c = 0x201;
                  if (bVar25) {
                    uVar10 = LZCOUNT(uVar10 - 0x2f);
                  }
                  local_60 = 6;
                  if (bVar25) {
                    uVar10 = uVar10 >> 5;
                  }
                  local_4c = 0x201;
                  local_2a = (undefined1)uVar10;
                  local_40[0] = CONCAT31(local_40[0]._1_3_,6);
                  cVar2 = FUN_019af7b8(&local_68,&local_48);
                  uVar9 = (uint)(cVar2 < '\0');
                  puVar6 = local_6c;
                }
                else {
                  uVar9 = 0;
                  if ((int)(uVar5 - (uVar8 + (uVar20 < uVar10))) < 0 !=
                      (SBORROW4(uVar5,uVar8) != SBORROW4(uVar5 - uVar8,(uint)(uVar20 < uVar10)))) {
                    uVar9 = 1;
                  }
                }
                puVar23 = (uint *)((int)puVar23 + uVar9);
              }
              puVar19 = param_1 + (int)puVar23 * 6;
              uVar10 = *puVar19;
              puVar22 = param_1 + (int)puVar22 * 6;
              uVar20 = *puVar22;
              uVar5 = puVar19[1];
              uVar8 = puVar22[1];
              if (uVar20 == uVar10 && uVar8 == uVar5) {
                local_68 = (byte *)puVar22[3];
                local_64 = puVar22[4];
                local_4a = 0;
                uVar10 = 0;
                if (local_64 != 0) {
                  local_4a = *local_68;
                }
                local_48 = (byte *)puVar19[3];
                local_44 = (uint *)puVar19[4];
                if (local_64 != 0) {
                  local_4a = local_4a == 0x2f;
                }
                bVar25 = local_44 != (uint *)0x0;
                if (bVar25) {
                  uVar10 = *local_48 - 0x2f;
                }
                local_60 = 6;
                if (bVar25) {
                  uVar10 = LZCOUNT(uVar10);
                }
                local_4c = 0x201;
                if (bVar25) {
                  uVar10 = uVar10 >> 5;
                }
                local_2a = (undefined1)uVar10;
                local_40[0] = CONCAT31(local_40[0]._1_3_,6);
                local_2c = 0x201;
                cVar2 = FUN_019af7b8(&local_68,&local_48);
                puVar6 = local_6c;
                if ((uint)(int)cVar2 < 0x80000000) break;
              }
              else if ((int)(uVar8 - (uVar5 + (uVar20 < uVar10))) < 0 ==
                       (SBORROW4(uVar8,uVar5) != SBORROW4(uVar8 - uVar5,(uint)(uVar20 < uVar10))))
              break;
              iVar15 = 0;
              do {
                uVar10 = puVar22[iVar15];
                puVar22[iVar15] = puVar19[iVar15];
                puVar19[iVar15] = uVar10;
                iVar15 = iVar15 + 1;
              } while (iVar15 != 6);
              puVar18 = (uint *)((int)puVar23 << 1 | 1);
              puVar22 = puVar23;
            } while (puVar18 < puVar6);
          }
          puVar19 = local_70;
          if (local_70 == (uint *)0x0) {
            return;
          }
        } while( true );
      }
      puVar19 = param_1 + ((uint)param_2 >> 3) * 0x2a;
      puVar23 = param_1 + ((uint)param_2 >> 3) * 0x18;
      local_a4 = param_2;
      local_84 = param_1;
      if (&DAT_0000003f < param_2) {
        puVar23 = (uint *)FUN_00b90234(param_1,puVar23);
      }
      else {
        local_88 = (uint *)puVar23[1];
        uVar20 = *param_1;
        puVar22 = (uint *)param_1[1];
        uVar10 = *puVar23;
        local_8c = puVar23;
        if (uVar20 == uVar10 && puVar22 == local_88) {
          local_64 = param_1[4];
          uVar5 = 0;
          local_68 = (byte *)param_1[3];
          local_2a = false;
          if (local_64 != 0) {
            uVar5 = *local_68 - 0x2f;
          }
          local_48 = (byte *)puVar23[3];
          local_44 = (uint *)puVar23[4];
          if (local_64 != 0) {
            uVar5 = (uint)(uVar5 == 0);
          }
          local_4a = (byte)uVar5;
          local_60 = 6;
          local_4c = 0x201;
          if (local_44 != (uint *)0x0) {
            local_2a = *local_48 == 0x2f;
          }
          local_40[0] = CONCAT31(local_40[0]._1_3_,6);
          local_2c = 0x201;
          cVar2 = FUN_019af7b8(&local_68,&local_48);
          bVar25 = cVar2 < '\0';
        }
        else {
          bVar25 = false;
          if ((int)((int)puVar22 - ((int)local_88 + (uint)(uVar20 < uVar10))) < 0 !=
              (SBORROW4((int)puVar22,(int)local_88) !=
              SBORROW4((int)puVar22 - (int)local_88,(uint)(uVar20 < uVar10)))) {
            bVar25 = true;
          }
        }
        param_2 = local_a4;
        uVar5 = *puVar19;
        puVar18 = (uint *)puVar19[1];
        if (uVar20 == uVar5 && puVar22 == puVar18) {
          local_64 = local_84[4];
          uVar20 = 0;
          local_68 = (byte *)local_84[3];
          local_2a = false;
          if (local_64 != 0) {
            uVar20 = *local_68 - 0x2f;
          }
          local_48 = (byte *)puVar19[3];
          local_44 = (uint *)puVar19[4];
          if (local_64 != 0) {
            uVar20 = (uint)(uVar20 == 0);
          }
          local_4a = (byte)uVar20;
          local_60 = 6;
          local_4c = 0x201;
          if (local_44 != (uint *)0x0) {
            local_2a = *local_48 == 0x2f;
          }
          local_40[0] = CONCAT31(local_40[0]._1_3_,6);
          local_2c = 0x201;
          cVar2 = FUN_019af7b8(&local_68,&local_48);
          bVar26 = cVar2 < '\0';
        }
        else {
          bVar26 = false;
          if ((int)((int)puVar22 - ((int)puVar18 + (uint)(uVar20 < uVar5))) < 0 !=
              (SBORROW4((int)puVar22,(int)puVar18) !=
              SBORROW4((int)puVar22 - (int)puVar18,(uint)(uVar20 < uVar5)))) {
            bVar26 = true;
          }
        }
        puVar23 = local_84;
        if (bVar25 == bVar26) {
          if (uVar10 == uVar5 && local_88 == puVar18) {
            uVar10 = 0;
            local_64 = local_8c[4];
            local_68 = (byte *)local_8c[3];
            local_2a = false;
            if (local_64 != 0) {
              uVar10 = LZCOUNT(*local_68 - 0x2f);
            }
            local_48 = (byte *)puVar19[3];
            local_44 = (uint *)puVar19[4];
            if (local_64 != 0) {
              uVar10 = uVar10 >> 5;
            }
            local_4a = (byte)uVar10;
            local_60 = 6;
            local_4c = 0x201;
            if (local_44 != (uint *)0x0) {
              local_2a = *local_48 == 0x2f;
            }
            local_40[0] = CONCAT31(local_40[0]._1_3_,6);
            local_2c = 0x201;
            cVar2 = FUN_019af7b8(&local_68,&local_48);
            bVar26 = cVar2 < '\0';
          }
          else {
            bVar26 = false;
            if ((int)((int)local_88 - ((int)puVar18 + (uint)(uVar10 < uVar5))) < 0 !=
                (SBORROW4((int)local_88,(int)puVar18) !=
                SBORROW4((int)local_88 - (int)puVar18,(uint)(uVar10 < uVar5)))) {
              bVar26 = true;
            }
          }
          puVar23 = local_8c;
          if (bVar25 != bVar26) {
            puVar23 = puVar19;
          }
        }
      }
      iVar15 = (int)puVar23 - (int)local_84;
      local_a8 = param_4 + -1;
      if (param_3 == (uint *)0x0) {
LAB_00b90bcc:
        local_48 = (byte *)*local_84;
        local_44 = (uint *)local_84[1];
        local_40[0] = local_84[2];
        local_40[1] = local_84[3];
        local_40[2] = local_84[4];
        local_40[3] = local_84[5];
        puVar17 = (undefined4 *)((int)local_84 + iVar15);
        local_b0 = param_3;
        FUN_01bed864(local_84,puVar17,0x18);
        puVar19 = (uint *)0x0;
        *puVar17 = local_48;
        puVar17[1] = local_44;
        puVar17[2] = local_40[0];
        puVar17[3] = local_40[1];
        puVar17[4] = local_40[2];
        puVar17[5] = local_40[3];
        local_8c = local_84 + 6;
        local_80 = *local_8c;
        uStack_7c = local_84[7];
        uStack_78 = local_84[8];
        local_74 = (uint *)local_84[9];
        local_70 = (uint *)local_84[10];
        local_6c = (uint *)local_84[0xb];
        local_9c = local_84 + (int)param_2 * 6;
        local_ac = (int)param_2 * 0x18;
        local_a0 = (byte *)local_84[3];
        local_88 = (uint *)local_84[4];
        local_90 = *local_84;
        local_94 = (uint *)local_84[1];
        uVar10 = 0;
        uVar20 = 0x18;
        do {
          uVar8 = uVar20;
          uVar5 = uVar10;
          puVar23 = local_84;
          puVar22 = (uint *)((int)local_84 + uVar5 + 0x30);
          uVar10 = *puVar22;
          pbVar3 = (byte *)((int)local_84 + uVar5 + 0x18);
          pbVar7 = *(byte **)((int)local_84 + uVar5 + 0x34);
          if (uVar10 == local_90 && (uint *)pbVar7 == local_94) {
            local_68 = *(byte **)((int)local_84 + uVar5 + 0x3c);
            local_64 = *(uint *)((int)local_84 + uVar5 + 0x40);
            local_4a = false;
            if (local_64 != 0) {
              local_4a = *local_68 == 0x2f;
            }
            local_60 = 6;
            local_4c = 0x201;
            pbVar7 = pbVar3;
            if (local_88 != (uint *)0x0) {
              pbVar7 = (byte *)(uint)*local_a0;
            }
            local_48 = local_a0;
            local_2a = local_88 != (uint *)0x0 && pbVar7 == &DAT_0000002f;
            local_40[0] = CONCAT31(local_40[0]._1_3_,6);
            local_44 = local_88;
            local_2c = 0x201;
            local_98 = pbVar3;
            cVar2 = FUN_019af7b8(&local_68,&local_48);
            uVar20 = (uint)(cVar2 < '\0');
            pbVar3 = local_98;
          }
          else {
            uVar20 = 0;
            if ((int)pbVar7 - (int)((int)local_94 + (uint)(uVar10 < local_90)) < 0 !=
                (SBORROW4((int)pbVar7,(int)local_94) !=
                SBORROW4((int)pbVar7 - (int)local_94,(uint)(uVar10 < local_90)))) {
              uVar20 = 1;
            }
          }
          puVar18 = local_8c + (int)puVar19 * 6;
          FUN_01bed864(pbVar3,puVar18,0x18);
          uVar10 = *(uint *)((int)puVar23 + uVar5 + 0x34);
          uVar9 = *(uint *)((int)puVar23 + uVar5 + 0x38);
          uVar13 = *(uint *)((int)puVar23 + uVar5 + 0x3c);
          uVar12 = *(uint *)((int)puVar23 + uVar5 + 0x40);
          uVar11 = *(uint *)((int)puVar23 + uVar5 + 0x44);
          puVar19 = (uint *)((int)puVar19 + uVar20);
          *puVar18 = *puVar22;
          puVar18[1] = uVar10;
          puVar18[2] = uVar9;
          puVar18[3] = uVar13;
          puVar18[4] = uVar12;
          puVar18[5] = uVar11;
          uVar10 = uVar5 + 0x18;
          uVar20 = uVar8 + 0x18;
        } while ((uint *)((int)local_84 + uVar5 + 0x48) < local_9c);
        local_9c = (uint *)(local_ac - 0x30);
        do {
          puVar23 = (uint *)((int)local_84 + uVar8 + 0x30);
          pbVar3 = (byte *)((int)local_84 + uVar8 + 0x18);
          puVar22 = puVar23;
          if (local_9c == (uint *)uVar8) {
            puVar22 = &local_80;
          }
          uVar10 = *puVar22;
          pbVar7 = (byte *)puVar22[1];
          if (uVar10 == local_90 && (uint *)pbVar7 == local_94) {
            local_4a = false;
            if (local_9c == (uint *)uVar8) {
              puVar23 = &local_80;
            }
            local_98 = pbVar3;
            local_68 = (byte *)puVar23[3];
            local_64 = puVar23[4];
            if (local_64 != 0) {
              local_4a = *local_68 == 0x2f;
            }
            local_60 = 6;
            local_4c = 0x201;
            if (local_88 != (uint *)0x0) {
              pbVar3 = (byte *)(uint)*local_a0;
            }
            local_48 = local_a0;
            local_2a = local_88 != (uint *)0x0 && pbVar3 == &DAT_0000002f;
            local_40[0] = CONCAT31(local_40[0]._1_3_,6);
            local_44 = local_88;
            local_2c = 0x201;
            cVar2 = FUN_019af7b8(&local_68,&local_48);
            uVar20 = (uint)(cVar2 < '\0');
            pbVar3 = local_98;
          }
          else {
            uVar20 = 0;
            if ((int)pbVar7 - (int)((int)local_94 + (uint)(uVar10 < local_90)) < 0 !=
                (SBORROW4((int)pbVar7,(int)local_94) !=
                SBORROW4((int)pbVar7 - (int)local_94,(uint)(uVar10 < local_90)))) {
              uVar20 = 1;
            }
          }
          puVar18 = local_8c + (int)puVar19 * 6;
          FUN_01bed864(pbVar3,puVar18,0x18);
          puVar23 = local_84;
          param_2 = local_a4;
          uVar10 = puVar22[1];
          uVar9 = puVar22[2];
          uVar13 = puVar22[3];
          uVar12 = puVar22[4];
          uVar11 = puVar22[5];
          puVar19 = (uint *)((int)puVar19 + uVar20);
          uVar8 = uVar8 + 0x18;
          uVar5 = uVar5 + 0x18;
          *puVar18 = *puVar22;
          puVar18[1] = uVar10;
          puVar18[2] = uVar9;
          puVar18[3] = uVar13;
          puVar18[4] = uVar12;
          puVar18[5] = uVar11;
        } while (local_9c != (uint *)uVar5);
        if (local_a4 <= puVar19) goto LAB_00b90f60;
        local_48 = (byte *)*local_84;
        local_44 = (uint *)local_84[1];
        local_40[0] = local_84[2];
        local_40[1] = local_84[3];
        local_40[2] = local_84[4];
        local_40[3] = local_84[5];
        param_3 = local_84 + (int)puVar19 * 6;
        FUN_01bed864(local_84,param_3,0x18);
        param_4 = local_a8;
        *param_3 = (uint)local_48;
        param_3[1] = (uint)local_44;
        param_3[2] = local_40[0];
        param_3[3] = local_40[1];
        param_3[4] = local_40[2];
        param_3[5] = local_40[3];
        FUN_00b904d4(puVar23,puVar19,local_b0,local_a8);
        param_2 = (uint *)((int)param_2 + ~(uint)puVar19);
        param_1 = param_3;
      }
      else {
        uVar5 = *param_3;
        puVar19 = (uint *)((int)local_84 + iVar15);
        uVar10 = *puVar19;
        uVar20 = param_3[1];
        uVar8 = puVar19[1];
        if (uVar5 == uVar10 && uVar20 == uVar8) {
          local_68 = (byte *)param_3[3];
          local_64 = param_3[4];
          uVar10 = 0;
          local_2a = false;
          if (local_64 != 0) {
            uVar10 = LZCOUNT(*local_68 - 0x2f);
          }
          local_48 = (byte *)puVar19[3];
          local_44 = (uint *)puVar19[4];
          if (local_64 != 0) {
            uVar10 = uVar10 >> 5;
          }
          local_4a = (byte)uVar10;
          local_60 = 6;
          local_4c = 0x201;
          if (local_44 != (uint *)0x0) {
            local_2a = *local_48 == 0x2f;
          }
          local_40[0] = CONCAT31(local_40[0]._1_3_,6);
          local_2c = 0x201;
          cVar2 = FUN_019af7b8(&local_68,&local_48);
          if (cVar2 < '\0') goto LAB_00b90bcc;
        }
        else if ((int)(uVar20 - (uVar8 + (uVar5 < uVar10))) < 0 !=
                 (SBORROW4(uVar20,uVar8) != SBORROW4(uVar20 - uVar8,(uint)(uVar5 < uVar10))))
        goto LAB_00b90bcc;
        local_48 = (byte *)*local_84;
        local_44 = (uint *)local_84[1];
        local_40[0] = local_84[2];
        local_40[1] = local_84[3];
        local_40[2] = local_84[4];
        local_40[3] = local_84[5];
        FUN_01bed864(local_84,puVar19,0x18);
        puVar23 = (uint *)0x0;
        *puVar19 = (uint)local_48;
        puVar19[1] = (uint)local_44;
        puVar19[2] = local_40[0];
        puVar19[3] = local_40[1];
        puVar19[4] = local_40[2];
        puVar19[5] = local_40[3];
        local_88 = local_84 + 6;
        local_80 = *local_88;
        uStack_7c = local_84[7];
        uStack_78 = local_84[8];
        local_74 = (uint *)local_84[9];
        local_70 = (uint *)local_84[10];
        local_6c = (uint *)local_84[0xb];
        local_94 = local_84 + (int)param_2 * 6;
        local_98 = (byte *)local_84[3];
        local_9c = (uint *)local_84[4];
        local_a0 = (byte *)((int)param_2 * 0x18);
        local_8c = (uint *)*local_84;
        local_90 = local_84[1];
        pbVar3 = (byte *)0x0;
        pbVar7 = &DAT_00000018;
        do {
          pbVar16 = pbVar7;
          pbVar21 = pbVar3;
          pbVar3 = (byte *)((int)local_84 + (int)pbVar21);
          puVar19 = *(uint **)(pbVar3 + 0x30);
          uVar10 = *(uint *)(pbVar3 + 0x34);
          if (local_8c == puVar19 && local_90 == uVar10) {
            uVar10 = 0;
            uVar20 = 0;
            bVar25 = local_9c != (uint *)0x0;
            if (bVar25) {
              uVar10 = (uint)*local_98;
            }
            local_68 = local_98;
            if (bVar25) {
              uVar10 = uVar10 - 0x2f;
            }
            local_44 = *(uint **)(pbVar3 + 0x40);
            if (bVar25) {
              uVar10 = LZCOUNT(uVar10);
            }
            local_48 = *(byte **)(pbVar3 + 0x3c);
            local_64 = (uint)local_9c;
            if (bVar25) {
              uVar10 = uVar10 >> 5;
            }
            local_4a = (byte)uVar10;
            local_60 = 6;
            local_4c = 0x201;
            if (local_44 != (uint *)0x0) {
              uVar20 = LZCOUNT(*local_48 - 0x2f);
            }
            local_2c = 0x201;
            if (local_44 != (uint *)0x0) {
              uVar20 = uVar20 >> 5;
            }
            local_2a = (undefined1)uVar20;
            local_40[0] = CONCAT31(local_40[0]._1_3_,6);
            cVar2 = FUN_019af7b8(&local_68,&local_48);
            uVar20 = (uint)(cVar2 < '\0');
          }
          else {
            uVar20 = 0;
            if ((int)(local_90 - (uVar10 + (local_8c < puVar19))) < 0 !=
                (SBORROW4(local_90,uVar10) != SBORROW4(local_90 - uVar10,(uint)(local_8c < puVar19))
                )) {
              uVar20 = 1;
            }
          }
          puVar19 = local_88 + (int)puVar23 * 6;
          FUN_01bed864(pbVar3 + 0x18,puVar19,0x18);
          uVar10 = *(uint *)(pbVar3 + 0x34);
          uVar5 = *(uint *)(pbVar3 + 0x38);
          uVar8 = *(uint *)(pbVar3 + 0x3c);
          uVar9 = *(uint *)(pbVar3 + 0x40);
          uVar13 = *(uint *)(pbVar3 + 0x44);
          *puVar19 = *(uint *)(pbVar3 + 0x30);
          puVar19[1] = uVar10;
          puVar19[2] = uVar5;
          puVar19[3] = uVar8;
          puVar19[4] = uVar9;
          puVar19[5] = uVar13;
          puVar23 = (uint *)((int)puVar23 + (uVar20 ^ 1));
          pbVar3 = pbVar21 + 0x18;
          pbVar7 = pbVar16 + 0x18;
        } while ((byte *)((int)local_84 + (int)(pbVar21 + 0x18)) + 0x30 < local_94);
        local_94 = (uint *)(local_a0 + -0x30);
        do {
          pbVar3 = (byte *)((int)local_84 + (int)pbVar16);
          puVar19 = (uint *)(pbVar3 + 0x30);
          puVar22 = puVar19;
          if (local_94 == (uint *)pbVar16) {
            puVar22 = &local_80;
          }
          puVar18 = (uint *)*puVar22;
          uVar10 = puVar22[1];
          if (local_8c == puVar18 && local_90 == uVar10) {
            uVar10 = 0;
            uVar20 = 0;
            bVar25 = local_9c != (uint *)0x0;
            if (bVar25) {
              uVar10 = (uint)*local_98;
            }
            local_68 = local_98;
            if (bVar25) {
              uVar10 = uVar10 - 0x2f;
            }
            local_64 = (uint)local_9c;
            if (bVar25) {
              uVar10 = (uint)(uVar10 == 0);
            }
            local_4a = (byte)uVar10;
            if (local_94 == (uint *)pbVar16) {
              puVar19 = &local_80;
            }
            local_60 = 6;
            local_44 = (uint *)puVar19[4];
            local_48 = (byte *)puVar19[3];
            local_4c = 0x201;
            if (local_44 != (uint *)0x0) {
              uVar20 = LZCOUNT(*local_48 - 0x2f);
            }
            local_2c = 0x201;
            if (local_44 != (uint *)0x0) {
              uVar20 = uVar20 >> 5;
            }
            local_2a = (undefined1)uVar20;
            local_40[0] = CONCAT31(local_40[0]._1_3_,6);
            cVar2 = FUN_019af7b8(&local_68,&local_48);
            uVar20 = (uint)(cVar2 < '\0');
          }
          else {
            uVar20 = 0;
            if ((int)(local_90 - (uVar10 + (local_8c < puVar18))) < 0 !=
                (SBORROW4(local_90,uVar10) != SBORROW4(local_90 - uVar10,(uint)(local_8c < puVar18))
                )) {
              uVar20 = 1;
            }
          }
          puVar19 = local_88 + (int)puVar23 * 6;
          FUN_01bed864(pbVar3 + 0x18,puVar19,0x18);
          param_2 = local_a4;
          uVar10 = puVar22[1];
          uVar5 = puVar22[2];
          uVar8 = puVar22[3];
          uVar9 = puVar22[4];
          uVar13 = puVar22[5];
          pbVar16 = pbVar16 + 0x18;
          pbVar21 = pbVar21 + 0x18;
          *puVar19 = *puVar22;
          puVar19[1] = uVar10;
          puVar19[2] = uVar5;
          puVar19[3] = uVar8;
          puVar19[4] = uVar9;
          puVar19[5] = uVar13;
          puVar23 = (uint *)((int)puVar23 + (uVar20 ^ 1));
        } while (local_94 != (uint *)pbVar21);
        if (local_a4 <= puVar23) {
LAB_00b90f60:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xb90f60);
          (*pcVar1)();
        }
        local_48 = (byte *)*local_84;
        local_44 = (uint *)local_84[1];
        local_40[0] = local_84[2];
        local_40[1] = local_84[3];
        local_40[2] = local_84[4];
        local_40[3] = local_84[5];
        param_1 = local_84 + (int)puVar23 * 6;
        FUN_01bed864(local_84,param_1,0x18);
        *param_1 = (uint)local_48;
        param_1[1] = (uint)local_44;
        param_1[2] = local_40[0];
        param_1[3] = local_40[1];
        param_1[4] = local_40[2];
        param_1[5] = local_40[3];
        param_2 = (uint *)(~(uint)puVar23 + (int)param_2);
        param_3 = (uint *)0x0;
        param_4 = local_a8;
      }
      param_1 = param_1 + 6;
    } while (&DAT_00000020 < param_2);
  }
  local_4ec = (uint)param_2 >> 1;
  if (local_4ec != 0) {
    puVar19 = local_4e8 + local_4ec * 6;
    puVar23 = param_1 + local_4ec * 6;
    if (param_2 < &DAT_00000008) {
      local_4e8[0] = *param_1;
      local_4e8[1] = param_1[1];
      local_4e8[2] = param_1[2];
      local_4e8[3] = param_1[3];
      uStack_4d8 = param_1[4];
      uStack_4d4 = param_1[5];
      uVar10 = puVar23[1];
      uVar20 = puVar23[2];
      uVar5 = puVar23[3];
      uVar8 = puVar23[4];
      uVar9 = puVar23[5];
      *puVar19 = *puVar23;
      local_4e8[local_4ec * 6 + 1] = uVar10;
      local_4e8[local_4ec * 6 + 2] = uVar20;
      local_4e8[local_4ec * 6 + 3] = uVar5;
      local_4e8[local_4ec * 6 + 4] = uVar8;
      local_4e8[local_4ec * 6 + 5] = uVar9;
      uVar10 = 1;
    }
    else {
      FUN_00b8cf64(param_1,local_4e8);
      FUN_00b8cf64(puVar23,puVar19);
      uVar10 = 4;
    }
    local_40[1] = local_4ec;
    local_40[0] = 0;
    iVar15 = 0;
    do {
      uVar5 = local_40[iVar15];
      uVar20 = local_4ec;
      if (uVar5 != 0) {
        uVar20 = (int)param_2 - local_4ec;
      }
      if (uVar10 < uVar20) {
        iVar14 = uVar20 - uVar10;
        puVar22 = param_1 + uVar10 * 6 + uVar5 * 6;
        puVar23 = local_4e8 + uVar10 * 6 + uVar5 * 6;
        do {
          uVar20 = puVar22[1];
          uVar8 = puVar22[2];
          uVar9 = puVar22[3];
          uVar13 = puVar22[4];
          uVar12 = puVar22[5];
          *puVar23 = *puVar22;
          puVar23[1] = uVar20;
          puVar23[2] = uVar8;
          puVar23[3] = uVar9;
          puVar23[4] = uVar13;
          puVar23[5] = uVar12;
          FUN_00b8cd44(local_4e8 + uVar5 * 6,puVar23);
          puVar22 = puVar22 + 6;
          puVar23 = puVar23 + 6;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      bVar25 = iVar15 == 0;
      iVar15 = 1;
    } while (bVar25);
    puVar18 = local_4e8;
    iVar15 = 0;
    puVar23 = puVar18 + (int)param_2 * 6;
    puVar22 = local_500 + local_4ec * 6;
    do {
      puVar6 = puVar23 + -6;
      uVar10 = *puVar18;
      uVar20 = puVar18[1];
      uVar5 = *puVar19;
      uVar8 = puVar19[1];
      if (uVar5 == uVar10 && uVar8 == uVar20) {
        local_64 = puVar19[4];
        local_4a = 0;
        local_68 = (byte *)puVar19[3];
        if (local_64 != 0) {
          local_4a = *(byte *)puVar19[3];
        }
        local_2a = false;
        if (local_64 != 0) {
          local_4a = local_4a == 0x2f;
        }
        local_60 = 6;
        local_4c = 0x201;
        local_48 = (byte *)puVar18[3];
        local_44 = (uint *)puVar18[4];
        if (local_44 != (uint *)0x0) {
          local_2a = *local_48 == 0x2f;
        }
        local_40[0] = CONCAT31(local_40[0]._1_3_,6);
        local_2c = 0x201;
        cVar2 = FUN_019af7b8(&local_68,&local_48);
        bVar25 = cVar2 < '\0';
      }
      else {
        bVar25 = false;
        if ((int)(uVar8 - (uVar20 + (uVar5 < uVar10))) < 0 !=
            (SBORROW4(uVar8,uVar20) != SBORROW4(uVar8 - uVar20,(uint)(uVar5 < uVar10)))) {
          bVar25 = true;
        }
      }
      puVar24 = puVar18;
      if (bVar25) {
        puVar24 = puVar19;
      }
      uVar10 = puVar24[1];
      uVar20 = puVar24[2];
      uVar5 = puVar24[3];
      uVar8 = puVar24[4];
      uVar9 = puVar24[5];
      if (bVar25) {
        puVar19 = puVar19 + 6;
      }
      puVar4 = (uint *)((int)param_1 + iVar15);
      if (!bVar25) {
        puVar18 = puVar18 + 6;
      }
      *puVar4 = *puVar24;
      puVar4[1] = uVar10;
      puVar4[2] = uVar20;
      puVar4[3] = uVar5;
      puVar4[4] = uVar8;
      puVar4[5] = uVar9;
      uVar10 = *puVar22;
      uVar20 = puVar22[1];
      uVar5 = *puVar6;
      uVar8 = puVar23[-5];
      if (uVar5 == uVar10 && uVar8 == uVar20) {
        local_68 = (byte *)puVar23[-3];
        local_64 = puVar23[-2];
        local_4a = 0;
        if (local_64 != 0) {
          local_4a = *local_68;
        }
        local_2a = false;
        if (local_64 != 0) {
          local_4a = local_4a == 0x2f;
        }
        local_60 = 6;
        local_4c = 0x201;
        local_48 = (byte *)puVar22[3];
        local_44 = (uint *)puVar22[4];
        if (local_44 != (uint *)0x0) {
          local_2a = *local_48 == 0x2f;
        }
        local_40[0] = CONCAT31(local_40[0]._1_3_,6);
        local_2c = 0x201;
        cVar2 = FUN_019af7b8(&local_68,&local_48);
        uVar9 = (uint)(cVar2 < '\0');
      }
      else {
        uVar9 = 0;
        if ((int)(uVar8 - (uVar20 + (uVar5 < uVar10))) < 0 !=
            (SBORROW4(uVar8,uVar20) != SBORROW4(uVar8 - uVar20,(uint)(uVar5 < uVar10)))) {
          uVar9 = 1;
        }
      }
      puVar23 = puVar6;
      if (uVar9 != 0) {
        puVar23 = puVar22;
      }
      puVar24 = (uint *)((int)param_1 + (((int)param_2 * 0x18 + -0x18) - iVar15));
      uVar10 = puVar23[1];
      uVar20 = puVar23[2];
      uVar5 = puVar23[3];
      uVar8 = puVar23[4];
      uVar13 = puVar23[5];
      iVar15 = iVar15 + 0x18;
      *puVar24 = *puVar23;
      puVar24[1] = uVar10;
      puVar24[2] = uVar20;
      puVar24[3] = uVar5;
      puVar24[4] = uVar8;
      puVar24[5] = uVar13;
      puVar23 = puVar6 + (uVar9 | uVar9 << 1) * 2;
      puVar22 = puVar22 + uVar9 * -6;
      local_4ec = local_4ec - 1;
    } while (local_4ec != 0);
    puVar22 = puVar22 + 6;
    if (((uint)param_2 & 1) != 0) {
      if (puVar22 <= puVar18) {
        puVar6 = puVar19;
        puVar19 = puVar19 + 6;
      }
      else {
        puVar6 = puVar18;
      }
      param_1 = (uint *)((int)param_1 + iVar15);
      uVar10 = puVar6[1];
      uVar20 = puVar6[2];
      uVar5 = puVar6[3];
      uVar8 = puVar6[4];
      uVar9 = puVar6[5];
      if (puVar22 > puVar18) {
        puVar18 = puVar18 + 6;
      }
      *param_1 = *puVar6;
      param_1[1] = uVar10;
      param_1[2] = uVar20;
      param_1[3] = uVar5;
      param_1[4] = uVar8;
      param_1[5] = uVar9;
    }
    if (puVar18 == puVar22) {
      param_2 = puVar23;
    }
    if (puVar18 != puVar22 || puVar19 != param_2) {
      FUN_01307140();
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb8d7d8);
      (*pcVar1)();
    }
  }
  return;
}

