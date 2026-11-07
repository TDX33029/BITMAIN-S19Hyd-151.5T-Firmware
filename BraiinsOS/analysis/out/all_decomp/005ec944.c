// FUN_005ec944 @ 005ec944 size=2552 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005ec944(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined *local_98;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_68;
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  local_5c = 4;
  uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0x1a0) + 6);
  uVar14 = *(uint *)(param_2 + 0x2fc);
  bVar19 = uVar7 == 1;
  uVar17 = *(uint *)(param_2 + 0x1ac);
  if (bVar19) {
    uVar7 = 0;
  }
  local_54 = 0;
  local_58 = 0;
  local_60 = 0;
  uVar5 = (uint)bVar19;
  if (bVar19) {
    local_4c = uVar7;
    local_44 = uVar7;
  }
  local_50 = uVar5;
  if (uVar14 < uVar17) {
    uVar3 = *(byte *)(*(int *)(param_2 + 0x1a0) + 4) - 1;
    if (uVar3 < 2) {
      iVar4 = *(int *)(param_2 + 0x1a8);
      uVar7 = *(uint *)(iVar4 + uVar14 * 0x14);
      if (uVar7 != 0) {
        uVar16 = *(uint *)(param_2 + 0x1b8);
        local_98 = &DAT_01856b68;
        if (uVar7 < uVar16) {
          iVar18 = *(int *)(param_2 + 0x1b4);
          uVar11 = 0;
          uVar13 = *(uint *)(iVar18 + uVar7 * 9 + 1);
          local_78 = 4;
          local_7c = 0;
          local_74 = 0;
          if (uVar14 == uVar13) goto LAB_005ecd74;
          FUN_005fd304(&local_60);
          uVar11 = local_54 + 1;
          local_7c = local_58;
          local_54 = local_58 + local_54;
          local_74 = local_60;
          uVar2 = local_54 - local_60;
          if (local_54 < local_60) {
            uVar2 = local_54;
          }
          local_78 = local_5c;
          *(uint *)(local_5c + uVar2 * 4) = uVar13;
          local_54 = uVar11;
          if (uVar5 != 0) {
            FUN_005fc44c(&local_4c,uVar13);
          }
          while (uVar13 < uVar17) {
            iVar1 = iVar4 + uVar13 * 0x14;
            if (*(int *)(iVar1 + 8) != 0) {
              *(undefined4 *)(iVar1 + 0xc) = 0;
            }
LAB_005ecd74:
            while( true ) {
              do {
                if (uVar16 <= uVar7) goto LAB_005ed31c;
                uVar7 = *(uint *)(iVar18 + uVar7 * 9 + 5);
                if (uVar7 == 0) {
                  uVar17 = local_74;
                  goto LAB_005ece34;
                }
                if (uVar16 <= uVar7) goto LAB_005ed330;
                uVar13 = *(uint *)(iVar18 + uVar7 * 9 + 1);
              } while (uVar14 == uVar13);
              if (local_50 == 0 || local_4c == 0) break;
              uVar5 = local_4c;
              iVar1 = local_48;
              while( true ) {
                uVar2 = (uint)*(ushort *)(uVar5 + 0x32);
                iVar12 = uVar2 << 2;
                iVar8 = 1;
                do {
                  iVar9 = iVar8;
                  if (iVar12 == 0) goto LAB_005ecd4c;
                  uVar15 = *(uint *)(uVar5 + iVar9 * 4);
                  iVar12 = iVar12 + -4;
                  bVar20 = uVar13 < uVar15;
                  bVar19 = !bVar20 && uVar13 != uVar15;
                  iVar8 = iVar9 + 1;
                } while ((char)(bVar19 - bVar20) == '\x01');
                if (bVar19 == bVar20) break;
                uVar2 = iVar9 - 1;
LAB_005ecd4c:
                if (iVar1 == 0) goto LAB_005ecdc4;
                iVar1 = iVar1 + -1;
                uVar5 = *(uint *)(uVar5 + uVar2 * 4 + 0x34);
              }
            }
LAB_005ecdc4:
            if (uVar11 == local_74) {
              FUN_005fd304(&local_60);
              local_78 = local_5c;
              local_7c = local_58;
              local_74 = local_60;
              uVar11 = local_54;
            }
            uVar2 = local_7c + uVar11;
            uVar11 = uVar11 + 1;
            uVar5 = uVar2 - local_74;
            if (uVar2 < local_74) {
              uVar5 = uVar2;
            }
            *(uint *)(local_78 + uVar5 * 4) = uVar13;
            local_54 = uVar11;
            if (local_50 == 1) {
              FUN_005fc44c(&local_4c,uVar13);
            }
          }
          local_98 = &DAT_01856b78;
LAB_005ed300:
          uVar16 = uVar17;
          uVar7 = uVar13;
        }
LAB_005ed308:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar7,uVar16,local_98);
      }
    }
    else {
      uVar7 = *(uint *)(*(int *)(param_2 + 0x1a8) + uVar14 * 0x14);
      if (uVar7 != 0) {
        uVar16 = *(uint *)(param_2 + 0x1b8);
        if (uVar16 <= uVar7) {
LAB_005ed330:
          local_98 = &DAT_01856b68;
          goto LAB_005ed308;
        }
        iVar4 = *(int *)(param_2 + 0x1b4);
        uVar17 = 0;
        local_78 = 0;
        uVar11 = *(uint *)(iVar4 + uVar7 * 9 + 1);
        local_74 = 4;
        local_68 = 0;
        if (uVar14 != uVar11) {
          FUN_005fd304(&local_60);
          uVar17 = local_60;
          local_78 = local_58;
          uVar2 = local_58 + local_54;
          local_68 = local_54 + 1;
          uVar13 = uVar2 - local_60;
          if (uVar2 < local_60) {
            uVar13 = uVar2;
          }
          local_74 = local_5c;
          *(uint *)(local_5c + uVar13 * 4) = uVar11;
          local_54 = local_68;
          if (uVar5 != 0) {
            FUN_005fc44c(&local_4c,uVar11);
          }
        }
LAB_005ecbcc:
        if (uVar7 < uVar16) {
          uVar7 = *(uint *)(iVar4 + uVar7 * 9 + 5);
          if (uVar7 == 0) goto LAB_005ece34;
          if (uVar16 <= uVar7) goto LAB_005ed330;
          uVar5 = *(uint *)(iVar4 + uVar7 * 9 + 1);
          if (uVar14 != uVar5) {
            if (local_50 != 0 && local_4c != 0) {
              uVar11 = local_4c;
              iVar18 = local_48;
              do {
                uVar13 = (uint)*(ushort *)(uVar11 + 0x32);
                iVar1 = uVar13 << 2;
                iVar12 = 1;
                do {
                  iVar8 = iVar12;
                  if (iVar1 == 0) goto LAB_005ecba8;
                  uVar2 = *(uint *)(uVar11 + iVar8 * 4);
                  iVar1 = iVar1 + -4;
                  bVar20 = uVar5 < uVar2;
                  bVar19 = !bVar20 && uVar5 != uVar2;
                  iVar12 = iVar8 + 1;
                } while ((char)(bVar19 - bVar20) == '\x01');
                if (bVar19 == bVar20) {
                  goto LAB_005ecbcc;
                }
                uVar13 = iVar8 - 1;
LAB_005ecba8:
                if (iVar18 == 0) break;
                iVar18 = iVar18 + -1;
                uVar11 = *(uint *)(uVar11 + uVar13 * 4 + 0x34);
              } while( true );
            }
            if (local_68 == uVar17) {
              FUN_005fd304(&local_60);
              local_74 = local_5c;
              local_78 = local_58;
              local_68 = local_54;
              uVar17 = local_60;
            }
            uVar13 = local_78 + local_68;
            local_68 = local_68 + 1;
            uVar11 = uVar13 - uVar17;
            if (uVar13 < uVar17) {
              uVar11 = uVar13;
            }
            *(uint *)(local_74 + uVar11 * 4) = uVar5;
            local_54 = local_68;
            if (local_50 != 0) {
              FUN_005fc44c(&local_4c,uVar5);
            }
          }
          goto LAB_005ecbcc;
        }
LAB_005ed31c:
        puVar10 = &DAT_01856b58;
        goto LAB_005ed294;
      }
    }
    uVar17 = 0;
LAB_005ece34:
    local_74 = uVar17;
    local_78 = local_54;
    local_98 = &DAT_01856b88;
    while( true ) {
      if (local_78 == 0) {
        *param_1 = 3;
        if (local_50 != 0) {
          FUN_0108aea4(&local_4c);
        }
        goto LAB_005ed220;
      }
      local_78 = local_78 - 1;
      uVar7 = local_58 + 1;
      uVar14 = *(uint *)(local_5c + local_58 * 4);
      uVar17 = *(uint *)(param_2 + 0x1ac);
      local_80 = uVar7 - local_74;
      if (uVar7 < local_74) {
        local_80 = uVar7;
      }
      local_7c = local_5c;
      local_58 = local_80;
      local_54 = local_78;
      if (uVar17 <= uVar14) break;
      bVar19 = false;
LAB_005eced4:
      iVar4 = *(int *)(param_2 + 0x1b4);
      if (bVar19) {
        uVar16 = *(uint *)(param_2 + 0x1b8);
        if (uVar16 <= uVar7) {
          puVar10 = &DAT_01856b58;
          goto LAB_005ed294;
        }
        uVar7 = *(uint *)(iVar4 + uVar7 * 9 + 5);
      }
      else {
        uVar7 = *(uint *)(*(int *)(param_2 + 0x1a8) + uVar14 * 0x14);
      }
      if (uVar7 != 0) {
        uVar16 = *(uint *)(param_2 + 0x1b8);
        if (uVar16 <= uVar7) goto LAB_005ed308;
        pbVar6 = (byte *)(iVar4 + uVar7 * 9);
        uVar5 = (uint)*pbVar6;
        uVar13 = *(uint *)(pbVar6 + 1);
        if ((local_50 == 1) && (local_4c != 0)) {
          uVar11 = local_4c;
          iVar18 = local_48;
          do {
            uVar2 = (uint)*(ushort *)(uVar11 + 0x32);
            iVar1 = uVar2 << 2;
            iVar12 = 1;
            do {
              iVar8 = iVar12;
              if (iVar1 == 0) goto LAB_005ecfac;
              uVar15 = *(uint *)(uVar11 + iVar8 * 4);
              iVar1 = iVar1 + -4;
              bVar20 = uVar13 < uVar15;
              bVar19 = !bVar20 && uVar13 != uVar15;
              iVar12 = iVar8 + 1;
            } while ((char)(bVar19 - bVar20) == '\x01');
            if (bVar19 == bVar20) goto joined_r0x005eced0;
            uVar2 = iVar8 - 1;
LAB_005ecfac:
            if (iVar18 == 0) break;
            iVar18 = iVar18 + -1;
            uVar11 = *(uint *)(uVar11 + uVar2 * 4 + 0x34);
          } while( true );
        }
        if (local_78 == local_74) {
          FUN_005fd304(&local_60);
          local_7c = local_5c;
          local_80 = local_58;
          local_74 = local_60;
          local_78 = local_54;
        }
        uVar11 = local_80 + local_78;
        local_78 = local_78 + 1;
        uVar17 = uVar11 - local_74;
        if (uVar11 < local_74) {
          uVar17 = uVar11;
        }
        *(uint *)(local_7c + uVar17 * 4) = uVar13;
        local_54 = local_78;
        if (local_50 == 1) {
          FUN_005fc44c(&local_4c,uVar13);
        }
        uVar17 = *(uint *)(param_2 + 0x1ac);
        if (uVar3 < 2) {
          if (uVar13 < uVar17) {
            iVar18 = *(int *)(param_2 + 0x1a8) + uVar13 * 0x14;
            if (*(int *)(iVar18 + 8) == 0) goto LAB_005ed078;
            *(undefined4 *)(iVar18 + 0xc) = 0;
            goto joined_r0x005eced0;
          }
          local_98 = &DAT_01856b98;
        }
        else {
LAB_005ed078:
          if (uVar14 < uVar17) {
            iVar18 = *(int *)(param_2 + 0x1a8);
            uVar11 = uVar14;
LAB_005ed090:
            do {
              uVar11 = *(uint *)(iVar18 + uVar11 * 0x14 + 0xc);
              if (uVar17 <= uVar11) {
                puVar10 = &DAT_01894578;
                uVar7 = uVar11;
                uVar16 = uVar17;
                goto LAB_005ed294;
              }
              iVar1 = *(int *)(iVar18 + uVar11 * 0x14 + 4);
              if (iVar1 != 0) {
                uVar2 = iVar1 + (uint)*(byte *)(param_2 + 0x1ec + uVar5);
                if (*(uint *)(param_2 + 0x1c4) <= uVar2) {
                  puVar10 = &DAT_01894588;
                  uVar7 = uVar2;
                  uVar16 = *(uint *)(param_2 + 0x1c4);
                  goto LAB_005ed294;
                }
                iVar1 = *(int *)(*(int *)(param_2 + 0x1c0) + uVar2 * 4);
                if (iVar1 != 1) goto LAB_005ed160;
                goto LAB_005ed090;
              }
              uVar2 = *(uint *)(iVar18 + uVar11 * 0x14);
              if (uVar2 != 0) {
                uVar15 = uVar2;
                do {
                  if (uVar16 <= uVar15) goto LAB_005ed260;
                  pbVar6 = (byte *)(iVar4 + uVar15 * 9);
                  if (uVar5 <= *pbVar6) {
                    if ((uVar5 == *pbVar6) && (*(int *)(pbVar6 + 1) != 1)) goto LAB_005ed128;
                    break;
                  }
                  uVar15 = *(uint *)(pbVar6 + 5);
                } while (uVar15 != 0);
              }
            } while( true );
          }
          local_98 = &DAT_01856ba8;
          uVar13 = uVar14;
        }
        goto LAB_005ed300;
      }
      if ((1 < uVar3) &&
         (FUN_005ed3dc(&local_40,param_2 + 0x1a4,*(undefined4 *)(param_2 + 0x2fc),uVar14),
         local_40 != 3)) {
        *param_1 = local_40;
        param_1[1] = iStack_3c;
        param_1[2] = iStack_38;
        param_1[3] = iStack_34;
        param_1[4] = iStack_30;
        param_1[5] = iStack_2c;
joined_r0x005ed214:
        if (local_50 != 0) {
          FUN_0108aea4(&local_4c);
        }
LAB_005ed220:
        if (local_74 != 0) {
          thunk_FUN_016d3fb4(local_5c);
        }
        return;
      }
    }
LAB_005ed2a4:
    puVar10 = &DAT_01856b48;
    uVar7 = uVar14;
    uVar16 = uVar17;
  }
  else {
    puVar10 = &DAT_01856b48;
    uVar7 = uVar14;
    uVar16 = uVar17;
  }
LAB_005ed294:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar7,uVar16,puVar10);
LAB_005ed128:
  uVar15 = uVar2;
  if (uVar16 <= uVar2) goto LAB_005ed260;
  pbVar6 = (byte *)(iVar4 + uVar2 * 9);
  if (uVar5 <= *pbVar6) {
    iVar1 = *(int *)(pbVar6 + 1);
    if (uVar5 != *pbVar6) {
      iVar1 = 1;
    }
    goto LAB_005ed160;
  }
  uVar2 = *(uint *)(pbVar6 + 5);
  if (uVar2 == 0) goto code_r0x005ed150;
  goto LAB_005ed128;
LAB_005ed260:
  puVar10 = &DAT_01894598;
  uVar7 = uVar15;
  goto LAB_005ed294;
code_r0x005ed150:
  iVar1 = 1;
LAB_005ed160:
  if (uVar17 <= uVar13) {
    local_98 = &DAT_01856bb8;
    goto LAB_005ed300;
  }
  *(int *)(iVar18 + uVar13 * 0x14 + 0xc) = iVar1;
  FUN_005ed3dc(&local_40,param_2 + 0x1a4,iVar1,uVar13);
  if (local_40 != 3) {
    *param_1 = local_40;
    param_1[1] = iStack_3c;
    param_1[2] = iStack_38;
    param_1[3] = iStack_34;
    param_1[4] = iStack_30;
    param_1[5] = iStack_2c;
    goto joined_r0x005ed214;
  }
  uVar17 = *(uint *)(param_2 + 0x1ac);
  local_40 = 3;
joined_r0x005eced0:
  bVar19 = true;
  if (uVar17 <= uVar14) goto LAB_005ed2a4;
  goto LAB_005eced4;
}

