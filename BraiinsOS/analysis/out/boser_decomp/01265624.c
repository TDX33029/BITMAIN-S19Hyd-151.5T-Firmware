// FUN_01265624 @ 01265624 size=3436 calls_out=11 calls_in=2
// strings: 

void FUN_01265624(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  bool bVar20;
  int local_ac;
  uint local_98;
  undefined4 *local_90;
  int local_8c;
  uint local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  byte *local_64;
  int local_60;
  undefined1 local_5c;
  undefined2 local_48;
  undefined1 local_46;
  char *local_44;
  int local_40;
  int local_3c [5];
  undefined2 local_28;
  undefined1 local_26;
  
  if (0x20 < param_2) {
    local_ac = param_6;
    local_98 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_012685d8(param_1,local_98,param_3,param_4,1);
          return;
        }
        puVar9 = param_1 + (local_98 >> 3) * 0x31;
        puVar16 = param_1 + ((local_98 >> 3) * 8 - (local_98 >> 3)) * 4;
        if (local_98 < 0x40) {
          uVar15 = param_1[1];
          uVar17 = param_1[2];
          bVar2 = FUN_01268158(uVar15,uVar17,puVar16[1],puVar16[2]);
          if (bVar2 == 2) {
            if (*(byte *)(param_1 + 3) == *(byte *)(puVar16 + 3)) {
              local_64 = (byte *)param_1[5];
              local_60 = param_1[6];
              uVar14 = 0;
              local_26 = false;
              if (local_60 != 0) {
                uVar14 = LZCOUNT(*local_64 - 0x2f);
              }
              local_44 = (char *)puVar16[5];
              local_40 = puVar16[6];
              if (local_60 != 0) {
                uVar14 = uVar14 >> 5;
              }
              local_46 = (undefined1)uVar14;
              local_5c = 6;
              local_48 = 0x201;
              if (local_40 != 0) {
                local_26 = *local_44 == '/';
              }
              local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
              local_28 = 0x201;
              cVar4 = FUN_019af7b8(&local_64,&local_44);
              uVar15 = param_1[1];
              uVar17 = param_1[2];
              bVar2 = cVar4 < '\0';
            }
            else {
              bVar2 = 0;
              if (*(byte *)(param_1 + 3) < *(byte *)(puVar16 + 3)) {
                bVar2 = 1;
              }
            }
          }
          bVar3 = FUN_01268158(uVar15,uVar17,puVar9[1],puVar9[2]);
          if (bVar3 == 2) {
            if (*(byte *)(param_1 + 3) == *(byte *)(puVar9 + 3)) {
              local_64 = (byte *)param_1[5];
              local_60 = param_1[6];
              uVar14 = 0;
              local_26 = false;
              if (local_60 != 0) {
                uVar14 = LZCOUNT(*local_64 - 0x2f);
              }
              local_44 = (char *)puVar9[5];
              local_40 = puVar9[6];
              if (local_60 != 0) {
                uVar14 = uVar14 >> 5;
              }
              local_46 = (undefined1)uVar14;
              local_5c = 6;
              local_48 = 0x201;
              if (local_40 != 0) {
                local_26 = *local_44 == '/';
              }
              local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
              local_28 = 0x201;
              cVar4 = FUN_019af7b8(&local_64,&local_44);
              bVar3 = cVar4 < '\0';
            }
            else {
              bVar3 = 0;
              if (*(byte *)(param_1 + 3) < *(byte *)(puVar9 + 3)) {
                bVar3 = 1;
              }
            }
          }
          puVar6 = param_1;
          if (((bVar2 ^ bVar3) & 1) == 0) {
            bVar3 = FUN_01268158(puVar16[1],puVar16[2],puVar9[1],puVar9[2]);
            if (bVar3 == 2) {
              if (*(byte *)(puVar16 + 3) == *(byte *)(puVar9 + 3)) {
                local_64 = (byte *)puVar16[5];
                local_60 = puVar16[6];
                uVar14 = 0;
                local_26 = false;
                if (local_60 != 0) {
                  uVar14 = LZCOUNT(*local_64 - 0x2f);
                }
                local_44 = (char *)puVar9[5];
                local_40 = puVar9[6];
                if (local_60 != 0) {
                  uVar14 = uVar14 >> 5;
                }
                local_46 = (undefined1)uVar14;
                local_5c = 6;
                local_48 = 0x201;
                if (local_40 != 0) {
                  local_26 = *local_44 == '/';
                }
                local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
                local_28 = 0x201;
                cVar4 = FUN_019af7b8(&local_64,&local_44);
                bVar3 = cVar4 < '\0';
              }
              else {
                bVar3 = 0;
                if (*(byte *)(puVar16 + 3) < *(byte *)(puVar9 + 3)) {
                  bVar3 = 1;
                }
              }
            }
            puVar6 = puVar16;
            if (((bVar2 ^ bVar3) & 1) != 0) {
              puVar6 = puVar9;
            }
          }
        }
        else {
          puVar6 = (undefined4 *)FUN_0126cd4c(param_1,puVar16,puVar9);
        }
        param_5 = param_5 + -1;
        uVar14 = ((uint)((int)puVar6 - (int)param_1) >> 2) * -0x49249249;
        local_80 = *puVar6;
        uStack_7c = puVar6[1];
        uStack_78 = puVar6[2];
        local_74 = puVar6[3];
        uStack_70 = puVar6[4];
        uStack_6c = puVar6[5];
        uStack_68 = puVar6[6];
        if (local_ac == 0) break;
        bVar2 = FUN_01268158(*(undefined4 *)(local_ac + 4),*(undefined4 *)(local_ac + 8),puVar6[1],
                             puVar6[2]);
        if (bVar2 != 2) {
          if ((bVar2 & 1) == 0) goto LAB_01265d18;
          break;
        }
        if (*(byte *)(local_ac + 0xc) == *(byte *)(puVar6 + 3)) {
          local_64 = *(byte **)(local_ac + 0x14);
          local_60 = *(int *)(local_ac + 0x18);
          uVar13 = 0;
          local_26 = false;
          if (local_60 != 0) {
            uVar13 = LZCOUNT(*local_64 - 0x2f);
          }
          local_44 = (char *)puVar6[5];
          local_40 = puVar6[6];
          if (local_60 != 0) {
            uVar13 = uVar13 >> 5;
          }
          local_46 = (undefined1)uVar13;
          local_5c = 6;
          local_48 = 0x201;
          if (local_40 != 0) {
            local_26 = *local_44 == '/';
          }
          local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
          local_28 = 0x201;
          cVar4 = FUN_019af7b8(&local_64,&local_44);
          if (0x7fffffff < (uint)(int)cVar4) break;
        }
        else if (*(byte *)(local_ac + 0xc) < *(byte *)(puVar6 + 3)) break;
LAB_01265d18:
        if (param_4 < local_98) goto LAB_01266378;
        uVar13 = 0;
        puVar16 = param_3 + local_98 * 7;
        puVar9 = param_1;
        while( true ) {
          if (puVar9 < param_1 + uVar14 * 7) {
            iVar5 = 0;
            iVar10 = 0;
            do {
              puVar12 = (undefined4 *)((int)puVar9 - iVar10);
              uVar8 = FUN_01268158(puVar6[1],puVar6[2],puVar12[1],puVar12[2]);
              uVar8 = uVar8 & 0xff;
              if (uVar8 == 2) {
                if (*(byte *)(puVar6 + 3) == *(byte *)(puVar12 + 3)) {
                  local_64 = (byte *)puVar6[5];
                  local_60 = puVar6[6];
                  uVar8 = 0;
                  local_26 = false;
                  if (local_60 != 0) {
                    uVar8 = LZCOUNT(*local_64 - 0x2f);
                  }
                  local_44 = (char *)puVar12[5];
                  local_40 = puVar12[6];
                  if (local_60 != 0) {
                    uVar8 = uVar8 >> 5;
                  }
                  local_46 = (undefined1)uVar8;
                  local_5c = 6;
                  local_48 = 0x201;
                  if (local_40 != 0) {
                    local_26 = *local_44 == '/';
                  }
                  local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
                  local_28 = 0x201;
                  cVar4 = FUN_019af7b8(&local_64,&local_44);
                  uVar8 = (uint)(cVar4 < '\0');
                }
                else {
                  uVar8 = 0;
                  if (*(byte *)(puVar6 + 3) < *(byte *)(puVar12 + 3)) {
                    uVar8 = 1;
                  }
                }
              }
              iVar5 = iVar5 + 0x1c;
              puVar11 = param_3;
              if ((uVar8 & 1) != 0) {
                puVar11 = (undefined4 *)((int)puVar16 + iVar10 + -0x1c);
              }
              iVar10 = iVar10 + -0x1c;
              puVar11 = puVar11 + uVar13 * 7;
              uVar15 = puVar12[1];
              uVar17 = puVar12[2];
              *puVar11 = *puVar12;
              puVar11[1] = uVar15;
              puVar11[2] = uVar17;
              uVar15 = puVar12[4];
              uVar17 = puVar12[5];
              uVar18 = puVar12[6];
              puVar11[3] = puVar12[3];
              puVar11[4] = uVar15;
              puVar11[5] = uVar17;
              puVar11[6] = uVar18;
              uVar13 = uVar13 + (~uVar8 & 1);
            } while ((undefined4 *)((int)puVar9 + iVar5) < param_1 + uVar14 * 7);
            puVar16 = (undefined4 *)((int)puVar16 + iVar10);
            puVar9 = (undefined4 *)((int)puVar9 + iVar5);
          }
          if (uVar14 == local_98) break;
          uVar15 = puVar9[1];
          uVar17 = puVar9[2];
          puVar12 = param_3 + uVar13 * 7;
          uVar13 = uVar13 + 1;
          *puVar12 = *puVar9;
          puVar12[1] = uVar15;
          puVar12[2] = uVar17;
          uVar15 = puVar9[4];
          uVar17 = puVar9[5];
          uVar18 = puVar9[6];
          puVar16 = puVar16 + -7;
          puVar12[3] = puVar9[3];
          puVar12[4] = uVar15;
          puVar12[5] = uVar17;
          puVar12[6] = uVar18;
          uVar14 = local_98;
          puVar9 = puVar9 + 7;
        }
        FUN_01bed4e2(param_1,param_3,uVar13 * 0x1c);
        param_2 = local_98 - uVar13;
        if (param_2 == 0) {
          return;
        }
        puVar9 = param_3 + local_98 * 7 + -7;
        puVar16 = param_1 + uVar13 * 7;
        uVar14 = param_2;
        do {
          uVar15 = puVar9[1];
          uVar17 = puVar9[2];
          uVar14 = uVar14 - 1;
          *puVar16 = *puVar9;
          puVar16[1] = uVar15;
          puVar16[2] = uVar17;
          uVar15 = puVar9[4];
          uVar17 = puVar9[5];
          uVar18 = puVar9[6];
          puVar16[3] = puVar9[3];
          puVar16[4] = uVar15;
          puVar16[5] = uVar17;
          puVar16[6] = uVar18;
          puVar9 = puVar9 + -7;
          puVar16 = puVar16 + 7;
        } while (uVar14 != 0);
        if (local_98 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar13,local_98,local_98,&DAT_01d30598);
        }
        param_1 = param_1 + uVar13 * 7;
        local_ac = 0;
        local_98 = param_2;
        if (param_2 < 0x21) goto LAB_01265648;
      }
      if (param_4 < local_98) goto LAB_01266378;
      param_2 = 0;
      local_90 = param_3 + local_98 * 7;
      uVar13 = uVar14;
      puVar9 = param_1;
      while( true ) {
        if (puVar9 < param_1 + uVar13 * 7) {
          iVar5 = 0;
          iVar10 = 0;
          uVar8 = param_2;
          do {
            puVar16 = (undefined4 *)((int)puVar9 - iVar10);
            uVar7 = FUN_01268158(puVar16[1],puVar16[2],puVar6[1],puVar6[2]);
            uVar7 = uVar7 & 0xff;
            if (uVar7 == 2) {
              if (*(byte *)(puVar16 + 3) == *(byte *)(puVar6 + 3)) {
                local_64 = (byte *)puVar16[5];
                local_60 = puVar16[6];
                uVar7 = 0;
                local_26 = false;
                if (local_60 != 0) {
                  uVar7 = LZCOUNT(*local_64 - 0x2f);
                }
                local_44 = (char *)puVar6[5];
                local_40 = puVar6[6];
                if (local_60 != 0) {
                  uVar7 = uVar7 >> 5;
                }
                local_46 = (undefined1)uVar7;
                local_5c = 6;
                local_48 = 0x201;
                if (local_40 != 0) {
                  local_26 = *local_44 == '/';
                }
                local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
                local_28 = 0x201;
                cVar4 = FUN_019af7b8(&local_64,&local_44);
                uVar7 = (uint)(cVar4 < '\0');
              }
              else {
                uVar7 = 0;
                if (*(byte *)(puVar16 + 3) < *(byte *)(puVar6 + 3)) {
                  uVar7 = 1;
                }
              }
            }
            iVar5 = iVar5 + 0x1c;
            puVar12 = param_3;
            if ((uVar7 & 1) == 0) {
              puVar12 = (undefined4 *)((int)local_90 + iVar10 + -0x1c);
            }
            param_2 = uVar8 + (uVar7 & 1);
            puVar12 = puVar12 + uVar8 * 7;
            uVar15 = puVar16[1];
            uVar17 = puVar16[2];
            iVar10 = iVar10 + -0x1c;
            *puVar12 = *puVar16;
            puVar12[1] = uVar15;
            puVar12[2] = uVar17;
            uVar15 = puVar16[4];
            uVar17 = puVar16[5];
            uVar18 = puVar16[6];
            puVar12[3] = puVar16[3];
            puVar12[4] = uVar15;
            puVar12[5] = uVar17;
            puVar12[6] = uVar18;
            uVar8 = param_2;
          } while ((undefined4 *)((int)puVar9 + iVar5) < param_1 + uVar13 * 7);
          local_90 = (undefined4 *)((int)local_90 + iVar10);
          puVar9 = (undefined4 *)((int)puVar9 + iVar5);
        }
        if (uVar13 == local_98) break;
        local_90 = local_90 + -7;
        puVar16 = local_90 + param_2 * 7;
        uVar15 = puVar9[1];
        uVar17 = puVar9[2];
        *puVar16 = *puVar9;
        puVar16[1] = uVar15;
        puVar16[2] = uVar17;
        uVar15 = puVar9[4];
        uVar17 = puVar9[5];
        uVar18 = puVar9[6];
        puVar16[3] = puVar9[3];
        puVar16[4] = uVar15;
        puVar16[5] = uVar17;
        puVar16[6] = uVar18;
        uVar13 = local_98;
        puVar9 = puVar9 + 7;
      }
      FUN_01bed4e2(param_1,param_3,param_2 * 0x1c);
      iVar5 = local_98 - param_2;
      if (iVar5 != 0) {
        puVar9 = param_1 + param_2 * 7;
        iVar10 = iVar5;
        puVar16 = param_3 + local_98 * 7 + -7;
        do {
          uVar15 = puVar16[1];
          uVar17 = puVar16[2];
          iVar10 = iVar10 + -1;
          *puVar9 = *puVar16;
          puVar9[1] = uVar15;
          puVar9[2] = uVar17;
          uVar15 = puVar16[4];
          uVar17 = puVar16[5];
          uVar18 = puVar16[6];
          puVar9[3] = puVar16[3];
          puVar9[4] = uVar15;
          puVar9[5] = uVar17;
          puVar9[6] = uVar18;
          puVar9 = puVar9 + 7;
          puVar16 = puVar16 + -7;
        } while (iVar10 != 0);
      }
      if (param_2 == 0) goto LAB_01265d18;
      if (local_98 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_01265624(param_1 + param_2 * 7,iVar5,param_3,param_4,param_5,&local_80);
      local_98 = param_2;
    } while (0x20 < param_2);
  }
LAB_01265648:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    local_84 = param_2 >> 1;
    iVar5 = local_84 * 8 - (param_2 >> 1);
    puVar16 = param_3 + iVar5;
    puVar9 = param_1 + iVar5;
    if (param_2 < 8) {
      uVar15 = param_1[1];
      uVar17 = param_1[2];
      *param_3 = *param_1;
      param_3[1] = uVar15;
      param_3[2] = uVar17;
      uVar15 = param_1[4];
      uVar17 = param_1[5];
      uVar18 = param_1[6];
      param_3[3] = param_1[3];
      param_3[4] = uVar15;
      param_3[5] = uVar17;
      param_3[6] = uVar18;
      uVar15 = puVar9[1];
      uVar17 = puVar9[2];
      *puVar16 = *puVar9;
      puVar16[1] = uVar15;
      puVar16[2] = uVar17;
      uVar15 = puVar9[4];
      uVar17 = puVar9[5];
      uVar18 = puVar9[6];
      puVar16[3] = puVar9[3];
      puVar16[4] = uVar15;
      puVar16[5] = uVar17;
      puVar16[6] = uVar18;
      uVar14 = 1;
    }
    else {
      FUN_0126490c(param_1,param_3);
      FUN_0126490c(puVar9,puVar16);
      uVar14 = 4;
    }
    local_3c[0] = 0;
    iVar5 = 0;
    local_3c[1] = local_84;
    do {
      iVar10 = local_3c[iVar5];
      uVar13 = local_84;
      if (iVar10 != 0) {
        uVar13 = param_2 - local_84;
      }
      if (uVar14 < uVar13) {
        iVar19 = uVar13 - uVar14;
        puVar6 = param_1 + uVar14 * 7 + iVar10 * 7;
        puVar9 = param_3 + uVar14 * 7 + iVar10 * 7;
        do {
          uVar15 = puVar6[1];
          uVar17 = puVar6[2];
          *puVar9 = *puVar6;
          puVar9[1] = uVar15;
          puVar9[2] = uVar17;
          uVar15 = puVar6[4];
          uVar17 = puVar6[5];
          uVar18 = puVar6[6];
          puVar9[3] = puVar6[3];
          puVar9[4] = uVar15;
          puVar9[5] = uVar17;
          puVar9[6] = uVar18;
          FUN_012646a0(param_3 + iVar10 * 7,puVar9);
          puVar6 = puVar6 + 7;
          puVar9 = puVar9 + 7;
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
      bVar20 = iVar5 == 0;
      iVar5 = 1;
    } while (bVar20);
    puVar9 = param_3 + param_2 * 7;
    puVar6 = puVar16 + -7;
    local_8c = 0;
    do {
      uVar14 = FUN_01268158(puVar16[1],puVar16[2],param_3[1],param_3[2]);
      uVar14 = uVar14 & 0xff;
      if (uVar14 == 2) {
        if (*(byte *)(puVar16 + 3) == *(byte *)(param_3 + 3)) {
          local_64 = (byte *)puVar16[5];
          local_60 = puVar16[6];
          uVar14 = 0;
          local_26 = false;
          if (local_60 != 0) {
            uVar14 = LZCOUNT(*local_64 - 0x2f);
          }
          local_44 = (char *)param_3[5];
          local_40 = param_3[6];
          if (local_60 != 0) {
            uVar14 = uVar14 >> 5;
          }
          local_46 = (undefined1)uVar14;
          local_5c = 6;
          local_48 = 0x201;
          if (local_40 != 0) {
            local_26 = *local_44 == '/';
          }
          local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
          local_28 = 0x201;
          cVar4 = FUN_019af7b8(&local_64,&local_44);
          uVar14 = (uint)(cVar4 < '\0');
        }
        else {
          uVar14 = 0;
          if (*(byte *)(puVar16 + 3) < *(byte *)(param_3 + 3)) {
            uVar14 = 1;
          }
        }
      }
      puVar11 = (undefined4 *)((int)param_1 + local_8c);
      puVar12 = param_3;
      if ((uVar14 & 1) != 0) {
        puVar12 = puVar16;
      }
      uVar15 = puVar12[1];
      uVar17 = puVar12[2];
      *puVar11 = *puVar12;
      puVar11[1] = uVar15;
      puVar11[2] = uVar17;
      uVar15 = puVar12[4];
      uVar17 = puVar12[5];
      uVar18 = puVar12[6];
      puVar11[3] = puVar12[3];
      puVar11[4] = uVar15;
      puVar11[5] = uVar17;
      puVar11[6] = uVar18;
      uVar13 = FUN_01268158(puVar9[-6],puVar9[-5],puVar6[1],puVar6[2]);
      uVar13 = uVar13 & 0xff;
      if (uVar13 == 2) {
        if (*(byte *)(puVar9 + -4) == *(byte *)(puVar6 + 3)) {
          local_64 = (byte *)puVar9[-2];
          local_60 = puVar9[-1];
          uVar13 = 0;
          local_26 = false;
          if (local_60 != 0) {
            uVar13 = LZCOUNT(*local_64 - 0x2f);
          }
          local_44 = (char *)puVar6[5];
          local_40 = puVar6[6];
          if (local_60 != 0) {
            uVar13 = uVar13 >> 5;
          }
          local_46 = (undefined1)uVar13;
          local_5c = 6;
          local_48 = 0x201;
          if (local_40 != 0) {
            local_26 = *local_44 == '/';
          }
          local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
          local_28 = 0x201;
          cVar4 = FUN_019af7b8(&local_64,&local_44);
          uVar13 = (uint)(cVar4 < '\0');
        }
        else {
          uVar13 = 0;
          if (*(byte *)(puVar9 + -4) < *(byte *)(puVar6 + 3)) {
            uVar13 = 1;
          }
        }
      }
      uVar13 = uVar13 & 1;
      puVar11 = (undefined4 *)((int)param_1 + ((param_2 * 0x1c + -0x1c) - local_8c));
      local_8c = local_8c + 0x1c;
      param_3 = param_3 + (~uVar14 & 1) * 7;
      puVar16 = puVar16 + (uVar14 & 1) * 7;
      puVar12 = puVar9 + -7;
      if (uVar13 != 0) {
        puVar12 = puVar6;
      }
      uVar15 = puVar12[1];
      uVar17 = puVar12[2];
      *puVar11 = *puVar12;
      puVar11[1] = uVar15;
      puVar11[2] = uVar17;
      uVar15 = puVar12[4];
      uVar17 = puVar12[5];
      uVar18 = puVar12[6];
      puVar11[3] = puVar12[3];
      puVar11[4] = uVar15;
      puVar11[5] = uVar17;
      puVar11[6] = uVar18;
      puVar6 = puVar6 + uVar13 * -7;
      puVar9 = puVar9 + -7 + uVar13 * 7;
      local_84 = local_84 - 1;
    } while (local_84 != 0);
    puVar6 = puVar6 + 7;
    if ((param_2 & 1) != 0) {
      bVar20 = puVar6 <= param_3;
      puVar12 = puVar16;
      if (!bVar20) {
        puVar12 = param_3;
      }
      uVar15 = puVar12[1];
      uVar17 = puVar12[2];
      param_1 = (undefined4 *)((int)param_1 + local_8c);
      *param_1 = *puVar12;
      param_1[1] = uVar15;
      param_1[2] = uVar17;
      uVar15 = puVar12[4];
      uVar17 = puVar12[5];
      uVar18 = puVar12[6];
      param_1[3] = puVar12[3];
      param_1[4] = uVar15;
      param_1[5] = uVar17;
      param_1[6] = uVar18;
      puVar16 = puVar16 + (uint)bVar20 * 7;
      param_3 = param_3 + (uint)!bVar20 * 7;
    }
    puVar12 = puVar6;
    if (param_3 == puVar6) {
      puVar12 = puVar9;
    }
    if (param_3 == puVar6 && puVar16 == puVar12) {
      return;
    }
    FUN_01307140();
  }
LAB_01266378:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1266378);
  (*pcVar1)();
}

