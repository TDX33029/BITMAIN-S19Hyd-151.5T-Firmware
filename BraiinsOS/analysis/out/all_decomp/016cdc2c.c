// FUN_016cdc2c @ 016cdc2c size=1324 calls_out=5 calls_in=1
// strings: 

void FUN_016cdc2c(undefined4 *param_1,byte *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
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
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  uint local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  uint local_74;
  uint local_54;
  int local_50;
  int local_4c;
  undefined1 *local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_bc = param_5;
  local_c0 = 1;
  iVar13 = *(int *)(param_7 + 8);
  bVar1 = *param_2;
  bVar2 = param_2[1];
  uVar12 = *(uint *)(param_2 + 8);
  iVar11 = *(int *)(param_2 + 4);
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
LAB_016cdd28:
        do {
          if (iVar13 == 0) {
            *param_1 = 0x80000014;
            return;
          }
          iVar13 = iVar13 + -1;
          *(int *)(param_7 + 8) = iVar13;
          FUN_016c607c(&local_48,&local_b4,0x30);
          if (local_48 != (undefined1 *)0x8000002d) {
            local_a8 = local_38;
            uStack_a4 = uStack_34;
            uStack_a0 = uStack_30;
            uStack_9c = uStack_2c;
            local_74 = local_44;
LAB_016ce090:
            *param_1 = local_48;
            param_1[1] = local_74;
            param_1[2] = local_40;
            param_1[3] = local_3c;
            param_1[4] = local_a8;
            param_1[5] = uStack_a4;
            param_1[6] = uStack_a0;
            param_1[7] = uStack_9c;
            return;
          }
          local_78 = &DAT_8000001d;
          local_74 = CONCAT31(local_74._1_3_,0xc);
          local_4c = 0;
          local_50 = local_40;
          local_54 = local_44;
          FUN_016cd97c(&local_48,&local_54);
          uVar5 = local_3c;
          iVar7 = local_40;
          uVar10 = local_44;
          puVar6 = local_48;
          if (local_48 != (undefined1 *)0x8000002d) {
            local_a8 = local_38;
            uStack_a4 = uStack_34;
            uStack_a0 = uStack_30;
            uStack_9c = uStack_2c;
            FUN_016c3a1c(&local_78);
            local_48 = puVar6;
            local_74 = local_44;
            goto LAB_016ce090;
          }
          if (local_4c != local_50) {
            local_48 = &DAT_8000001d;
            goto LAB_016ce090;
          }
          FUN_016c3a1c(&local_78);
          if (bVar1 < 5) {
            uVar9 = uVar10 & 0xff;
            switch(bVar1) {
            case 0:
              if (uVar9 == 0) {
                FUN_016cf590(&local_98,iVar11,uVar12,2,iVar7,uVar5);
                bVar14 = local_98 == (undefined1 *)0x8000002d;
joined_r0x016cdeac:
                if ((bVar3 & 1) == 0) {
                  if (!bVar14) goto LAB_016ce0d4;
                  uVar10 = local_94 & 0xff;
                  goto LAB_016cdfe8;
                }
                if (!bVar14) {
LAB_016ce0d4:
                  *param_1 = local_98;
                  param_1[1] = local_94;
                  param_1[2] = uStack_90;
                  param_1[3] = uStack_8c;
                  param_1[4] = local_88;
                  param_1[5] = uStack_84;
                  param_1[6] = uStack_80;
                  param_1[7] = uStack_7c;
                  return;
                }
                if ((char)local_94 != '\0') goto LAB_016ce02c;
LAB_016ce004:
                if (local_ac == local_b0) goto LAB_016ce014;
                goto LAB_016cdd28;
              }
              break;
            case 1:
              if (uVar9 == 1) {
                local_98 = (undefined1 *)0x8000002d;
                local_94 = CONCAT31(local_94._1_3_,bVar3) & 0xffffff01;
                uVar10 = 0;
                if ((bVar3 & 1) == 0) {
LAB_016cdfe8:
                  local_ec = uVar10 | local_ec;
                  local_e8 = uVar10 ^ 1 | local_e8;
                  goto LAB_016ce004;
                }
                goto LAB_016ce02c;
              }
              break;
            case 2:
              if (uVar9 == 2) {
                if (uVar12 == 4) {
                  if (uVar5 == 8) goto LAB_016cdeb4;
                  if (uVar5 == 0x20) goto LAB_016cde94;
LAB_016cdf90:
                  local_98 = &DAT_8000000c;
                }
                else {
                  if (uVar12 == 0x10) {
                    if (uVar5 == 8) {
LAB_016cde94:
                      local_98 = (undefined1 *)0x8000002d;
                      local_94 = local_94 & 0xffffff00;
                      bVar14 = true;
                      goto joined_r0x016cdeac;
                    }
                    if (uVar5 != 0x20) goto LAB_016cdf90;
LAB_016cdeb4:
                    local_48 = (undefined1 *)0x80000000;
                    if ((uVar5 & 0xfffffffe) < uVar5 >> 1) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_78,&DAT_018af298,&DAT_018af2a8);
                    }
                    if ((uVar5 & 0xfffffffe) == uVar5) {
                      FUN_016c3a1c(&local_48);
                      bVar14 = false;
                      uVar10 = 0;
                      do {
                        if (uVar12 == uVar10) {
                    /* WARNING: Subroutine does not return */
                          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_78,&DAT_018af3c8,&DAT_018af3d8);
                        }
                        if (uVar5 >> 1 == uVar10) {
                    /* WARNING: Subroutine does not return */
                          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_78,&DAT_018af3c8,&DAT_018af3e8);
                        }
                        bVar4 = *(byte *)(iVar7 + (uVar5 >> 1) + uVar10);
                        uVar9 = (uint)bVar4;
                        if (((LZCOUNT(uVar9 ^ 0xff) +
                             LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                      bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                                    bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                                     0x800000)) - 0x18U & 0xff) != 8) goto LAB_016cdf90;
                        if (bVar14) {
                          if (uVar9 != 0) goto LAB_016cdf90;
LAB_016cdf50:
                          bVar14 = true;
                        }
                        else {
                          if (uVar9 != 0xff) goto LAB_016cdf50;
                          bVar14 = false;
                        }
                        if ((bVar4 & (*(byte *)(iVar7 + uVar10) ^ *(byte *)(iVar11 + uVar10))) != 0)
                        goto LAB_016cde94;
                        uVar10 = uVar10 + 1;
                      } while (uVar12 != uVar10);
                      local_98 = (undefined1 *)0x8000002d;
                      bVar14 = true;
                      local_94 = CONCAT31(local_94._1_3_,1);
                      goto joined_r0x016cdeac;
                    }
                  }
                  local_98 = (undefined1 *)0x80000000;
                }
                bVar14 = false;
                goto joined_r0x016cdeac;
              }
              break;
            case 4:
              uVar5 = uVar9;
              if (uVar9 == 4) {
                uVar5 = (uint)bVar2;
              }
              if (uVar9 == 4 && uVar5 == (uVar10 & 0xffff) >> 8) {
                local_98 = &DAT_80000018;
                goto LAB_016ce0d4;
              }
            }
          }
        } while (local_ac != local_b0);
LAB_016ce014:
        if (((local_e8 & 1) != 0) && ((local_ec & 1) == 0)) {
LAB_016ce02c:
          *param_1 = &DAT_80000018;
          return;
        }
      }
    }
    bVar14 = iVar8 == 0;
    iVar8 = 1;
  } while (bVar14);
  *param_1 = 0x8000002e;
  return;
}

