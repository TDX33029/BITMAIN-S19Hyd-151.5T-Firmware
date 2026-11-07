// FUN_00fc144c @ 00fc144c size=1268 calls_out=7 calls_in=1
// strings: 

void FUN_00fc144c(int *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  uint local_adc;
  int local_ac4;
  int local_ab8;
  int local_ab4;
  int local_ab0;
  char local_aa8 [536];
  undefined1 auStack_890 [504];
  undefined1 auStack_698 [536];
  int local_480;
  int local_47c;
  undefined1 auStack_478 [28];
  undefined *local_45c;
  undefined4 local_458;
  undefined1 auStack_268 [512];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_2 != -0x7ffffff2) {
    FUN_00fc0dd4((uint)&local_480 | 4,param_2);
    local_45c = (undefined *)CONCAT31(local_45c._1_3_,2);
    FUN_016dd1aa(param_1 + 2,auStack_478,0x208);
    iVar3 = 8;
    goto LAB_00fc15ac;
  }
  iVar3 = param_2[3];
  if (iVar3 != 4) {
    *param_1 = 6;
    param_1[1] = 4;
    param_1[2] = iVar3;
    return;
  }
  iVar3 = param_2[2];
  FUN_00fc8130(&local_480,iVar3);
  if (local_480 != 0x10) {
    FUN_016dd1aa(param_1 + 2,auStack_478,0x208);
    *param_1 = local_480;
    param_1[1] = local_47c;
    return;
  }
  if (*(int *)(iVar3 + 0x20) == -0x7fffffff) {
    cVar1 = *(char *)(iVar3 + 0x30);
    if (cVar1 != '\0') {
      uVar14 = 0;
      iVar4 = 1;
      if (cVar1 != '\x01') {
        iVar4 = *(int *)(iVar3 + 0x2c);
      }
      if (cVar1 != '\x01' && iVar4 != 0) {
        iVar4 = iVar4 * 4;
        if (0xfffffffa < iVar4 - 9U) {
          iVar12 = 0;
          uVar7 = 0;
          puVar6 = *(uint **)(iVar3 + 0x28);
          do {
            uVar13 = *puVar6;
            uVar11 = uVar7 & 0xff;
            uVar5 = (uVar7 & 0xff) - 0x20;
            uVar7 = uVar7 + 0x20;
            uVar8 = uVar13 >> (0x20 - uVar11 & 0xff);
            if (-1 < (int)uVar5) {
              uVar8 = uVar13 << (uVar5 & 0xff);
            }
            uVar13 = uVar13 << uVar11;
            if (-1 < (int)uVar5) {
              uVar13 = 0;
            }
            bVar15 = CARRY4(uVar13,uVar14);
            uVar14 = uVar13 + uVar14;
            iVar12 = uVar8 + iVar12 + (uint)bVar15;
            iVar4 = iVar4 + -4;
            puVar6 = puVar6 + 1;
          } while (iVar4 != 0);
          if (iVar12 == 0) goto LAB_00fc14d0;
        }
      }
      else {
LAB_00fc14d0:
        if (*(int *)(iVar3 + 0x40) != -0x7fffffff) goto LAB_00fc1600;
        cVar1 = *(char *)(iVar3 + 0x50);
        if (cVar1 != '\0') {
          iVar4 = 1;
          if (cVar1 != '\x01') {
            iVar4 = *(int *)(iVar3 + 0x4c);
          }
          local_adc = 0;
          if (cVar1 == '\x01' || iVar4 == 0) {
LAB_00fc1504:
            local_ab4 = 8;
            local_ab0 = 0;
            local_ab8 = 0;
            if (*(int *)(iVar3 + 0x60) != -0x7ffffff2) {
              FUN_00fc0dd4((uint)&local_480 | 4);
              local_45c = (undefined *)CONCAT31(local_45c._1_3_,2);
              local_480 = 8;
              FUN_016dd1aa(param_1 + 2,auStack_478,0x208);
              *param_1 = 8;
              local_ac4 = 8;
              param_1[1] = local_47c;
LAB_00fc17a8:
              if (local_ab8 == 0) {
                return;
              }
              thunk_FUN_016d3fb4(local_ac4);
              return;
            }
            if (*(int *)(iVar3 + 0x6c) != 0) {
              iVar4 = *(int *)(iVar3 + 0x6c) << 5;
              iVar3 = *(int *)(iVar3 + 0x68);
              iVar12 = 0;
              local_ac4 = 8;
              do {
                iVar10 = local_ab0;
                FUN_00fc0dd4(&local_48,iVar3);
                local_68 = local_48;
                uStack_64 = uStack_44;
                uStack_60 = uStack_40;
                uStack_5c = uStack_3c;
                local_58 = local_38;
                uStack_54 = uStack_34;
                uStack_50 = uStack_30;
                uStack_4c = uStack_2c;
                FUN_00fc1a14(&local_480);
                cVar1 = (char)local_480;
                if ((char)local_480 == '\x0e') {
                  FUN_016dd1aa((uint)auStack_698 | 7,auStack_478,0x210);
                  FUN_016dd1aa(param_1,(uint)auStack_698 | 7,0x210);
                  FUN_00fbd084(&local_68);
                  if (iVar10 != 0) {
                    piVar9 = (int *)(local_ac4 + 4);
                    do {
                      bVar2 = *(byte *)(piVar9 + -1);
                      if (((bVar2 < 9) && (bVar2 == 7 || bVar2 == 1)) && (*piVar9 != 0)) {
                        thunk_FUN_016d3fb4(piVar9[1]);
                      }
                      piVar9 = piVar9 + 0x104;
                      iVar10 = iVar10 + -1;
                    } while (iVar10 != 0);
                  }
                  goto LAB_00fc17a8;
                }
                FUN_016dd1aa(auStack_698,(uint)&local_480 | 1,0x217);
                FUN_016dd1aa(auStack_890,auStack_268,0x1f8);
                FUN_016dd1aa((uint)local_aa8 | 1,auStack_698,0x217);
                local_aa8[0] = cVar1;
                FUN_00fbd084(&local_68);
                if (iVar10 == local_ab8) {
                  FUN_00fc4a38(&local_ab8);
                  local_ac4 = local_ab4;
                }
                iVar3 = iVar3 + 0x20;
                FUN_016dd1aa(local_ac4 + iVar12,local_aa8,0x410);
                local_ab0 = iVar10 + 1;
                iVar12 = iVar12 + 0x410;
                iVar4 = iVar4 + -0x20;
              } while (iVar4 != 0);
            }
            param_1[8] = 0;
            *param_1 = 0x10;
            param_1[1] = local_ab8;
            param_1[2] = local_ab4;
            param_1[3] = local_ab0;
            param_1[4] = local_47c;
            param_1[5] = uVar14;
            param_1[6] = local_adc;
            param_1[7] = (int)(param_2 + 8);
            return;
          }
          iVar4 = iVar4 * 4;
          if (0xfffffffa < iVar4 - 9U) {
            local_adc = 0;
            iVar12 = 0;
            uVar7 = 0;
            puVar6 = *(uint **)(iVar3 + 0x48);
            do {
              uVar13 = *puVar6;
              uVar11 = uVar7 & 0xff;
              uVar5 = (uVar7 & 0xff) - 0x20;
              uVar7 = uVar7 + 0x20;
              uVar8 = uVar13 >> (0x20 - uVar11 & 0xff);
              if (-1 < (int)uVar5) {
                uVar8 = uVar13 << (uVar5 & 0xff);
              }
              uVar13 = uVar13 << uVar11;
              if (-1 < (int)uVar5) {
                uVar13 = 0;
              }
              bVar15 = CARRY4(uVar13,local_adc);
              local_adc = uVar13 + local_adc;
              iVar12 = uVar8 + iVar12 + (uint)bVar15;
              iVar4 = iVar4 + -4;
              puVar6 = puVar6 + 1;
            } while (iVar4 != 0);
            if (iVar12 == 0) goto LAB_00fc1504;
          }
        }
      }
    }
    FUN_00fc0dd4((uint)&local_480 | 4);
    iVar3 = 9;
    local_458 = 3;
    local_45c = &DAT_00410f5a;
  }
  else {
LAB_00fc1600:
    FUN_00fc0dd4((uint)&local_480 | 4);
    iVar3 = 8;
    local_45c = (undefined *)((uint)local_45c & 0xffffff00);
  }
  FUN_016dd1aa(param_1 + 2,auStack_478,0x208);
LAB_00fc15ac:
  *param_1 = iVar3;
  param_1[1] = local_47c;
  return;
}

