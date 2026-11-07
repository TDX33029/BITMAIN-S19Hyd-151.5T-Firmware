// FUN_019bd4b8 @ 019bd4b8 size=1048 calls_out=6 calls_in=1
// strings: 

void FUN_019bd4b8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte *local_90;
  int local_88;
  undefined8 *local_84;
  int local_80;
  undefined4 local_7c;
  int local_78;
  int iStack_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined1 local_64;
  int local_60;
  int local_5c;
  undefined2 local_58;
  int local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 uStack_44;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34;
  int local_30;
  undefined2 local_2c;
  int local_28;
  
  puVar4 = (undefined8 *)thunk_FUN_01be5118(0x1a0);
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x1a0);
  }
  local_80 = 0;
  local_88 = 0x34;
  local_60 = 0;
  local_70 = 0;
  local_54 = 1;
  local_58 = 1;
  local_64 = 1;
  local_68 = 0x20;
  local_7c = 0x20;
  local_84 = puVar4;
  local_78 = param_2;
  iStack_74 = param_3;
  local_6c = param_3;
  local_5c = param_3;
  uVar14 = FUN_00b156d4(&local_7c);
  uVar15 = CONCAT44(local_4c._4_4_,(int)local_4c);
  if ((int)uVar14 != 0) {
    *puVar4 = uVar14;
    local_80 = 1;
    uVar15 = CONCAT44(local_4c._4_4_,(int)local_4c);
    if (local_54 != 0) {
      if (local_54 == 1) {
        uVar15 = CONCAT44(local_4c._4_4_,(int)local_4c);
        if ((local_58._1_1_ != '\0') ||
           (((char)local_58 != '\x01' &&
            (uVar15 = CONCAT44(local_4c._4_4_,(int)local_4c), local_5c == local_60))))
        goto LAB_019bd60c;
        uVar14 = CONCAT44(local_5c - local_60,local_78 + local_60);
      }
      else {
        local_54 = local_54 + -1;
        uVar14 = FUN_00b156d4(&local_7c);
        uVar15 = CONCAT44(local_4c._4_4_,(int)local_4c);
        if ((int)uVar14 == 0) goto LAB_019bd60c;
      }
      local_40 = (int)((ulonglong)uVar14 >> 0x20);
      local_28 = 1;
      local_2c = 1;
      local_38 = 1;
      local_34 = 0;
      local_3c = 0x29;
      uStack_44 = 0;
      local_50 = 0x29;
      local_30 = local_40;
      local_4c = uVar14;
      uVar15 = FUN_019bfa68(&local_50);
      pbVar6 = (byte *)((ulonglong)uVar15 >> 0x20);
      pbVar5 = (byte *)uVar15;
      iVar1 = 0;
      if (pbVar5 != (byte *)0x0) {
        iVar1 = local_28;
      }
      uVar15 = local_4c;
      if (pbVar5 != (byte *)0x0 && iVar1 != 0) {
        if (iVar1 == 1) {
          if ((local_2c._1_1_ == '\0') && (((char)local_2c == '\x01' || (local_30 != local_34)))) {
            uVar14 = CONCAT44(local_30 - local_34,(int)local_4c + local_34);
LAB_019bd69c:
            puVar4[1] = uVar14;
            pbVar10 = (byte *)0x0;
            local_90 = (byte *)0x0;
            local_80 = 2;
            pbVar12 = pbVar5;
            bVar3 = false;
            do {
              iVar1 = local_80;
              pbVar13 = local_90;
              bVar2 = bVar3;
              do {
                pbVar7 = pbVar13;
                if (bVar3) {
                  if ((*(int *)((int)local_84 + 0xc) != 0) && (**(char **)(local_84 + 1) == '(')) {
                    *(char **)(local_84 + 1) = *(char **)(local_84 + 1) + 1;
                    *(int *)((int)local_84 + 0xc) = *(int *)((int)local_84 + 0xc) + -1;
                  }
                  *param_1 = local_88;
                  param_1[1] = (int)local_84;
                  param_1[2] = local_80;
                  return;
                }
                do {
                  while( true ) {
                    while( true ) {
                      do {
                        pbVar11 = pbVar10;
                        if (pbVar12 == pbVar5 + (int)pbVar6) {
                          bVar3 = true;
                          bVar2 = true;
                          pbVar13 = pbVar7;
                          pbVar10 = pbVar11;
                          pbVar11 = pbVar6;
                          goto LAB_019bd818;
                        }
                        pbVar13 = pbVar12 + 1;
                        uVar8 = (uint)*pbVar12;
                        if (0x7fffffff < (uint)(int)(char)*pbVar12) {
                          if (uVar8 < 0xe0) {
                            uVar8 = pbVar12[1] & 0x3f | (uVar8 & 0x1f) << 6;
                            pbVar13 = pbVar12 + 2;
                          }
                          else {
                            uVar9 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
                            if (uVar8 < 0xf0) {
                              uVar8 = uVar9 | (uVar8 & 0x1f) << 0xc;
                              pbVar13 = pbVar12 + 3;
                            }
                            else {
                              pbVar13 = pbVar12 + 4;
                              uVar8 = pbVar12[3] & 0x3f | uVar9 << 6 | (uVar8 & 7) << 0x12;
                            }
                          }
                        }
                        pbVar10 = pbVar13 + ((int)pbVar11 - (int)pbVar12);
                        bVar3 = false;
                        pbVar12 = pbVar13;
                        if ((uVar8 - 9 < 0x18) && ((1 << (uVar8 - 9 & 0xff) & 0x80001fU) != 0))
                        goto LAB_019bd7fc;
                      } while (uVar8 < 0x80);
                      uVar9 = uVar8 >> 8;
                      if (0x1f < uVar9) break;
                      if (uVar9 == 0) {
                        if (((&DAT_00533bcd)[uVar8 & 0xff] & 1) != 0) goto LAB_019bd7fc;
                      }
                      else if ((uVar9 == 0x16) && (uVar8 == 0x1680)) goto LAB_019bd7fc;
                    }
                    if (uVar9 == 0x20) break;
                    if ((uVar9 == 0x30) && (uVar8 == 0x3000)) goto LAB_019bd7fc;
                  }
                } while (((&DAT_00533bcd)[uVar8 & 0xff] & 2) == 0);
LAB_019bd7fc:
                pbVar13 = pbVar10;
                local_90 = pbVar10;
LAB_019bd818:
              } while (pbVar11 == pbVar7);
              if (local_80 == local_88) {
                FUN_006520b4(&local_88,local_80,1,4,8);
                puVar4 = local_84;
              }
              *(byte **)(puVar4 + iVar1) = pbVar5 + (int)pbVar7;
              local_80 = iVar1 + 1;
              *(int *)((int)(puVar4 + iVar1) + 4) = (int)pbVar11 - (int)pbVar7;
              bVar3 = bVar2;
            } while( true );
          }
        }
        else {
          local_28 = iVar1 + -1;
          uVar14 = FUN_019bfa68(&local_50);
          uVar15 = local_4c;
          if ((int)uVar14 != 0) goto LAB_019bd69c;
        }
      }
    }
  }
LAB_019bd60c:
  *param_1 = -0x80000000;
  local_4c = uVar15;
  FUN_0134aee0(0x34,puVar4,4,8);
  return;
}

