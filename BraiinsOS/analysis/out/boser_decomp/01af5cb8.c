// FUN_01af5cb8 @ 01af5cb8 size=1212 calls_out=5 calls_in=1
// strings: 

void FUN_01af5cb8(int *param_1,undefined1 *param_2,int param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,int param_7)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined *puVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  uint local_ec;
  uint local_e8;
  byte local_cc [4];
  int local_c8 [2];
  undefined1 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined1 *local_98;
  uint local_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 local_78;
  uint local_74;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  local_bc = param_5;
  local_c0 = 1;
  iVar15 = *(int *)(param_7 + 8);
  uVar1 = *param_2;
  bVar2 = param_2[1];
  uVar14 = *(uint *)(param_2 + 8);
  iVar12 = *(int *)(param_2 + 4);
  local_b8 = param_6;
  local_cc[0] = 0;
  iVar8 = 0;
  local_c8[0] = param_3;
  local_c8[1] = param_4;
  do {
    bVar3 = local_cc[iVar8 * 0xc];
    if (bVar3 == 2) break;
    local_b4 = local_c8[iVar8 * 3];
    if (local_b4 != 0) {
      local_b0 = local_c8[iVar8 * 3 + 1];
      local_ac = 0;
      if (local_b0 != 0) {
        local_e8 = 0;
        local_ec = 0;
        do {
          if (iVar15 == 0) {
            puVar11 = &DAT_80000014;
            goto LAB_01af6080;
          }
          iVar15 = iVar15 + -1;
          *(int *)(param_7 + 8) = iVar15;
          FUN_01af347c(&local_48,&local_b4,0x30);
          if (local_48 != -0x7fffffd3) {
            local_a8 = local_38;
            iStack_a4 = iStack_34;
            iStack_a0 = iStack_30;
            iStack_9c = iStack_2c;
            local_74 = local_44;
LAB_01af60c8:
            *param_1 = local_48;
            param_1[1] = local_74;
            param_1[2] = local_40;
            param_1[3] = local_3c;
            param_1[4] = local_a8;
            param_1[5] = iStack_a4;
            param_1[6] = iStack_a0;
            param_1[7] = iStack_9c;
            return;
          }
          local_78 = 0x8000001d;
          local_74 = CONCAT31(local_74._1_3_,0xc);
          local_4c = 0;
          local_50 = local_40;
          local_54 = local_44;
          FUN_01af61c4(&local_48,&local_54);
          uVar5 = local_3c;
          iVar7 = local_40;
          uVar10 = local_44;
          iVar6 = local_48;
          if (local_48 != -0x7fffffd3) {
            local_a8 = local_38;
            iStack_a4 = iStack_34;
            iStack_a0 = iStack_30;
            iStack_9c = iStack_2c;
            FUN_01aeb5f4(&local_78);
            local_48 = iVar6;
            local_74 = local_44;
            goto LAB_01af60c8;
          }
          if (local_4c != local_50) {
            local_48 = -0x7fffffe3;
            goto LAB_01af60c8;
          }
          FUN_01aeb5f4(&local_78);
          uVar9 = uVar10 & 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar1) {
          case 0:
            if (uVar9 == 0) {
              FUN_01af7458(&local_98,iVar12,uVar14,2,iVar7,uVar5);
              bVar16 = local_98 == (undefined1 *)0x8000002d;
LAB_01af5ff0:
              if ((bVar3 & 1) == 0) {
                if (!bVar16) goto LAB_01af60f8;
                uVar10 = local_94 & 0xff;
                goto LAB_01af601c;
              }
              if (!bVar16) {
LAB_01af60f8:
                *param_1 = (int)local_98;
                param_1[1] = local_94;
                param_1[2] = iStack_90;
                param_1[3] = iStack_8c;
                param_1[4] = local_88;
                param_1[5] = iStack_84;
                param_1[6] = iStack_80;
                param_1[7] = iStack_7c;
                return;
              }
              if ((char)local_94 != '\0') goto LAB_01af6114;
            }
            break;
          case 1:
            if (uVar9 == 1) {
              local_98 = (undefined1 *)0x8000002d;
              local_94 = CONCAT31(local_94._1_3_,bVar3) & 0xffffff01;
              uVar10 = 0;
              if ((bVar3 & 1) != 0) goto LAB_01af6114;
LAB_01af601c:
              local_ec = uVar10 | local_ec;
              local_e8 = uVar10 ^ 1 | local_e8;
            }
            break;
          case 2:
            if (uVar9 == 2) {
              if (uVar14 == 4) {
                if (uVar5 == 8) goto LAB_01af5f14;
                if (uVar5 == 0x20) goto LAB_01af5efc;
LAB_01af5fe4:
                local_98 = &DAT_8000000c;
              }
              else {
                if (uVar14 == 0x10) {
                  if (uVar5 == 8) {
LAB_01af5efc:
                    local_98 = (undefined1 *)0x8000002d;
                    local_94 = local_94 & 0xffffff00;
                    bVar16 = true;
                    goto LAB_01af5ff0;
                  }
                  if (uVar5 != 0x20) goto LAB_01af5fe4;
LAB_01af5f14:
                  local_48 = -0x80000000;
                  if ((uVar5 & 0xfffffffe) < uVar5 >> 1) {
                    /* WARNING: Subroutine does not return */
                    FUN_013073dc(&DAT_00533467,0x2b,&local_78,&DAT_01d303b4,&DAT_01d303c4);
                  }
                  if ((uVar5 & 0xfffffffe) == uVar5) {
                    FUN_01aeb5f4(&local_48);
                    uVar10 = 0;
                    bVar16 = false;
                    do {
                      if (uVar14 == uVar10) {
                        puVar13 = &DAT_01d30558;
LAB_01af6150:
                    /* WARNING: Subroutine does not return */
                        FUN_013073dc(&DAT_00533467,0x2b,&local_78,&DAT_01d30548,puVar13);
                      }
                      if (uVar5 >> 1 == uVar10) {
                        puVar13 = &DAT_01d30568;
                        goto LAB_01af6150;
                      }
                      bVar4 = *(byte *)(iVar7 + (uVar5 >> 1) + uVar10);
                      uVar9 = (uint)bVar4;
                      if (((LZCOUNT(uVar9 ^ 0xff) +
                           LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                    bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                                  bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                                bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                                   0x800000)) - 0x18U & 0xff) != 8) goto LAB_01af5fe4;
                      if (bVar16) {
                        if (uVar9 != 0) goto LAB_01af5fe4;
LAB_01af5fb0:
                        bVar16 = true;
                      }
                      else {
                        if (uVar9 != 0xff) goto LAB_01af5fb0;
                        bVar16 = false;
                      }
                      if ((bVar4 & (*(byte *)(iVar7 + uVar10) ^ *(byte *)(iVar12 + uVar10))) != 0)
                      goto LAB_01af5efc;
                      uVar10 = uVar10 + 1;
                    } while (uVar14 != uVar10);
                    local_98 = (undefined1 *)0x8000002d;
                    bVar16 = true;
                    local_94 = CONCAT31(local_94._1_3_,1);
                    goto LAB_01af5ff0;
                  }
                }
                local_98 = (undefined1 *)0x80000000;
              }
              bVar16 = false;
              goto LAB_01af5ff0;
            }
            break;
          case 4:
            uVar5 = uVar9;
            if (uVar9 == 4) {
              uVar5 = (uint)bVar2;
            }
            if (uVar9 == 4 && uVar5 == (uVar10 & 0xffff) >> 8) {
              local_98 = &DAT_80000018;
              goto LAB_01af60f8;
            }
          }
        } while (local_ac != local_b0);
        if (((local_e8 & 1) != 0) && ((local_ec & 1) == 0)) {
LAB_01af6114:
          puVar11 = &DAT_80000018;
          goto LAB_01af6080;
        }
      }
    }
    bVar16 = iVar8 == 0;
    iVar8 = 1;
  } while (bVar16);
  puVar11 = (undefined1 *)0x8000002e;
LAB_01af6080:
  *param_1 = (int)puVar11;
  return;
}

