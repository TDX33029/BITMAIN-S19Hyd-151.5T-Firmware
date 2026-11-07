// FUN_019f02d4 @ 019f02d4 size=2308 calls_out=24 calls_in=40
// strings: RUST_MIN_STACK | assertion failed: shared.shutdown_tx.is_some

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019f02d4(undefined4 *param_1,int param_2,undefined4 param_3,undefined1 param_4,uint param_5
                 ,int *param_6)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  byte *pbVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  uint *puVar20;
  byte *pbVar21;
  uint uVar22;
  bool bVar23;
  uint uVar24;
  char *pcVar25;
  uint local_b8;
  uint *local_b0;
  int local_ac;
  uint *local_90;
  byte *local_8c;
  byte *local_88;
  uint *local_84;
  uint *local_80;
  byte *pbStack_7c;
  byte *pbStack_78;
  uint uStack_74;
  uint *local_70;
  byte *local_6c;
  byte *local_68;
  uint uStack_64;
  uint *local_60;
  uint local_5c;
  int *piStack_58;
  int *piStack_54;
  uint uStack_50;
  uint *local_48;
  byte *local_44;
  byte *local_40;
  uint local_3c;
  uint *local_38;
  uint uStack_34;
  int *piStack_30;
  int *piStack_2c;
  uint uStack_28;
  
  pcVar25 = (char *)(param_2 + 0x28);
  if (*pcVar25 == '\0') {
    bVar23 = (bool)hasExclusiveAccess(pcVar25);
    if (!bVar23) goto LAB_019f0314;
    *pcVar25 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019f0314:
    FUN_0164fba8(pcVar25);
  }
  FUN_0165098c(pcVar25);
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_019d88bc(param_3);
    *(undefined1 *)param_1 = 4;
    goto LAB_019f098c;
  }
  uVar10 = *(uint *)(param_2 + 0x30);
  uVar15 = *(uint *)(param_2 + 0x3c);
  if (uVar15 == uVar10) {
    FUN_019efc0c();
    uVar10 = *(uint *)(param_2 + 0x30);
    uVar15 = *(uint *)(param_2 + 0x3c);
  }
  uVar16 = *(int *)(param_2 + 0x38) + uVar15;
  *(uint *)(param_2 + 0x3c) = uVar15 + 1;
  uVar15 = uVar16 - uVar10;
  if (uVar16 < uVar10) {
    uVar15 = uVar16;
  }
  puVar3 = (undefined4 *)(*(int *)(param_2 + 0x34) + uVar15 * 8);
  *puVar3 = param_3;
  piVar19 = (int *)(param_2 + 0x98);
  *(undefined1 *)(puVar3 + 1) = param_4;
  piVar4 = (int *)(param_2 + 0xa0);
  do {
    bVar23 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar23);
  *piVar4 = *piVar4 + 1;
  if (*(int *)(param_2 + 0x9c) == 0) {
    if (*(int *)(param_2 + 0x98) != *(int *)(param_2 + 0x94)) {
      piVar4 = *(int **)(param_2 + 100);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: shared.shutdown_tx.is_some",0x2e,&DAT_01d297e0);
      }
      do {
        iVar5 = *piVar4;
        bVar23 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar23);
      *piVar4 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_019f0bb8;
      uVar10 = *(uint *)(param_2 + 0x74);
      (**(code **)(*(int *)(param_2 + 0x24) + 0x14))
                (&local_48,
                 *(int *)(param_2 + 0x20) +
                 (*(int *)(*(int *)(param_2 + 0x24) + 8) - 1U & 0xfffffff8) + 8);
      iVar5 = *(int *)(param_2 + 8);
      if (iVar5 != 0) {
        local_b8 = *(uint *)(param_2 + 0xc);
      }
      local_b0 = local_48;
      do {
        iVar17 = *param_6;
        bVar23 = (bool)hasExclusiveAccess(param_6);
      } while (!bVar23);
      *param_6 = iVar17 + 1;
      uVar15 = (uint)((param_5 & 1) != 0);
      if (iVar17 < 0) goto LAB_019f0bb8;
      local_88 = local_40;
      local_8c = local_44;
      local_90 = local_48;
      if (iVar5 == 0) {
        if (DAT_01d51ac8 == 0) {
          FUN_019a3070(&local_70,"RUST_MIN_STACK",0xe);
          pbVar9 = local_6c;
          puVar7 = local_70;
          local_b8 = 0x200000;
          if (local_70 != (uint *)&DAT_80000000) {
            FUN_012fbd94(&local_48,local_6c,local_68);
            pbVar21 = &DAT_00000001;
            if (local_48 != (uint *)&DAT_00000001) {
              pbVar21 = local_40;
            }
            if (local_48 != (uint *)&DAT_00000001 && pbVar21 != (byte *)0x0) {
              if (pbVar21 == &DAT_00000001) {
                bVar14 = *local_44;
                if ((bVar14 == 0x2b) || (bVar14 == 0x2d)) goto LAB_019f0560;
              }
              else {
                bVar14 = *local_44;
              }
              pbVar13 = local_44;
              if (bVar14 == 0x2b) {
                pbVar13 = local_44 + 1;
                pbVar21 = pbVar21 + -1;
              }
              if (&DAT_00000008 < pbVar21) {
                local_b8 = 0;
                do {
                  if (pbVar21 == (byte *)0x0) goto LAB_019f0564;
                  uVar16 = (uint)((ulonglong)local_b8 * 10);
                  if ((int)((ulonglong)local_b8 * 10 >> 0x20) != 0) break;
                  uVar18 = *pbVar13 - 0x30;
                  local_b8 = uVar18 + uVar16;
                  if (9 < uVar18) break;
                  pbVar21 = pbVar21 + -1;
                  pbVar13 = pbVar13 + 1;
                } while (!CARRY4(uVar18,uVar16));
                goto LAB_019f0560;
              }
              local_b8 = 0;
              for (; pbVar21 != (byte *)0x0; pbVar21 = pbVar21 + -1) {
                bVar14 = *pbVar13;
                if (9 < bVar14 - 0x30) goto LAB_019f0560;
                pbVar13 = pbVar13 + 1;
                local_b8 = (bVar14 - 0x30) + local_b8 * 10;
              }
            }
            else {
LAB_019f0560:
              local_b8 = 0x200000;
            }
LAB_019f0564:
            FUN_019bb7e0(puVar7,pbVar9);
          }
          DAT_01d51ac8 = local_b8 + 1;
        }
        else {
          local_b8 = DAT_01d51ac8 - 1;
        }
      }
      ClearExclusiveLocal();
      uVar16 = DAT_01d51ab8;
      uVar18 = DAT_01d51abc;
      do {
        uVar24 = DAT_01d51abc;
        uVar22 = DAT_01d51ab8;
        uVar6 = uVar16 + 1;
        uVar11 = uVar18 + (0xfffffffe < uVar16);
        if (CARRY4(uVar18,(uint)(0xfffffffe < uVar16))) {
          FUN_019a7340();
          goto LAB_019f0bb8;
        }
        if (DAT_01d51ab8 == uVar16 && DAT_01d51abc == uVar18) {
          bVar23 = (bool)hasExclusiveAccess(0x1d51ab8);
          if (bVar23) {
            DAT_01d51ab8 = uVar6;
            DAT_01d51abc = uVar11;
          }
        }
        else {
          bVar23 = false;
          ClearExclusiveLocal();
        }
        uVar16 = uVar22;
        uVar18 = uVar24;
      } while (!bVar23);
      puVar7 = (uint *)FUN_019b057c(uVar6,uVar11,&local_90);
      local_84 = puVar7;
      FUN_019b4130(&local_80,&local_84);
      local_3c = 0;
      local_40 = (byte *)0x0;
      local_44 = &DAT_00000001;
      local_48 = (uint *)&DAT_00000001;
      puVar8 = (uint *)thunk_FUN_01be5118(0x18);
      if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x18);
      }
      *puVar8 = (uint)local_48;
      puVar8[1] = (uint)local_44;
      puVar8[2] = (uint)local_40;
      puVar8[3] = local_3c;
      puVar8[4] = (uint)local_38;
      puVar8[5] = uStack_34;
      do {
        uVar16 = *puVar8;
        bVar23 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar23);
      *puVar8 = uVar16 + 1;
      if ((int)uVar16 < 0) {
LAB_019f0bb8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x19f0bb8);
        (*pcVar1)();
      }
      piStack_58 = param_6;
      local_70 = local_80;
      local_6c = pbStack_7c;
      local_68 = pbStack_78;
      uStack_64 = uStack_74;
      uVar16 = puVar8[2];
      local_60 = puVar8;
      local_5c = uVar15;
      piStack_54 = piVar4;
      uStack_50 = uVar10;
      if (uVar16 != 0) {
        piVar12 = (int *)(uVar16 + 0xc);
        do {
          iVar5 = *piVar12;
          bVar23 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar23);
        *piVar12 = iVar5 + 1;
        if (iVar5 < 0) {
          FUN_019b09f8(uVar16 + 8);
          goto LAB_019f0bb8;
        }
      }
      local_48 = local_80;
      local_44 = pbStack_7c;
      local_40 = pbStack_78;
      local_3c = uStack_74;
      piStack_30 = param_6;
      local_38 = puVar8;
      uStack_34 = uVar15;
      piStack_2c = piVar4;
      uStack_28 = uVar10;
      pbVar9 = (byte *)thunk_FUN_01be5118(0x24);
      if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x24);
      }
      *(uint **)pbVar9 = local_70;
      *(byte **)(pbVar9 + 4) = local_6c;
      *(byte **)(pbVar9 + 8) = local_68;
      *(uint *)(pbVar9 + 0xc) = uStack_64;
      *(uint **)(pbVar9 + 0x10) = local_60;
      *(uint *)(pbVar9 + 0x14) = local_5c;
      *(int **)(pbVar9 + 0x18) = piStack_58;
      *(int **)(pbVar9 + 0x1c) = piStack_54;
      *(uint *)(pbVar9 + 0x20) = uStack_50;
      do {
        uVar15 = *puVar7;
        bVar23 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar23);
      *puVar7 = uVar15 + 1;
      if ((int)uVar15 < 0) goto LAB_019f0bb8;
      local_40 = &DAT_01d28e64;
      local_48 = puVar7;
      local_44 = pbVar9;
      puVar3 = (undefined4 *)thunk_FUN_01be5118(0xc);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      *puVar3 = local_48;
      puVar3[1] = local_44;
      puVar3[2] = local_40;
      FUN_019aecf0(&local_48,local_b8,puVar3);
      pbVar9 = local_44;
      puVar2 = local_48;
      puVar20 = (uint *)((uint)local_48 & 0xff);
      if (puVar20 == (uint *)&SUB_00000004) {
        puVar20 = puVar8;
        puVar2 = puVar8;
      }
      else {
        DataMemoryBarrier(0xb);
        do {
          uVar15 = *puVar8;
          bVar23 = (bool)hasExclusiveAccess(puVar8);
        } while (!bVar23);
        *puVar8 = uVar15 - 1;
        if (uVar15 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019db004(puVar8);
        }
        DataMemoryBarrier(0xb);
        do {
          uVar15 = *puVar7;
          bVar23 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar23);
        *puVar7 = uVar15 - 1;
        if (uVar15 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019a2ffc(puVar7);
        }
        puVar7 = (uint *)0x0;
      }
      pbVar21 = (byte *)((uint)puVar20 & 0xff | (uint)puVar2 & 0xffffff00);
      if (puVar7 != (uint *)0x0) {
        do {
          bVar23 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar23);
        *piVar19 = *piVar19 + 1;
        *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + 1;
        local_40 = pbVar9;
        local_48 = puVar7;
        local_44 = pbVar21;
        uVar15 = FUN_01656218(*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),
                              *(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c),uVar10
                             );
        if (*(int *)(param_2 + 0x48) == 0) {
          FUN_019d952c(param_2 + 0x40,(undefined4 *)(param_2 + 0x50));
        }
        uVar18 = *(uint *)(param_2 + 0x44);
        puVar7 = *(uint **)(param_2 + 0x40);
        bVar23 = false;
        local_ac = 0;
        uVar16 = uVar15;
        do {
          uVar16 = uVar18 & uVar16;
          uVar22 = *(uint *)((int)puVar7 + uVar16);
          uVar24 = uVar22 ^ (uVar15 >> 0x19) * 0x1010101;
          uVar24 = ~uVar24 & 0x80808080 & uVar24 + 0xfefefeff;
          while (uVar24 != 0) {
            uVar6 = uVar16 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                            (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3) &
                    uVar18;
            uVar24 = uVar24 - 1 & uVar24;
            if (uVar10 == puVar7[uVar6 * -4 + -4]) {
              local_70 = (uint *)puVar7[uVar6 * -4 + -3];
              local_6c = (byte *)puVar7[uVar6 * -4 + -2];
              local_68 = (byte *)puVar7[uVar6 * -4 + -1];
              puVar7[uVar6 * -4 + -3] = (uint)local_48;
              puVar7[uVar6 * -4 + -2] = (uint)local_44;
              puVar7[uVar6 * -4 + -1] = (uint)local_40;
              if (local_70 != (uint *)0x0) {
                FUN_01736438(&local_70);
              }
              goto LAB_019f0984;
            }
          }
          uVar24 = uVar22 & 0x80808080;
          if (bVar23) {
LAB_019f090c:
            if ((uVar24 & uVar22 << 1) != 0) goto LAB_019f0a64;
            bVar23 = true;
          }
          else {
            if (uVar24 != 0) {
              local_b0 = (uint *)(uVar16 + ((uint)LZCOUNT((uVar22 & 0x80) << 0x18 |
                                                          (uVar24 >> 8 & 0xff) << 0x10 |
                                                          (uVar24 >> 0x10 & 0xff) << 8 |
                                                          uVar24 >> 0x18) >> 3) & uVar18);
              goto LAB_019f090c;
            }
            bVar23 = false;
          }
          local_ac = local_ac + 4;
          uVar16 = local_ac + uVar16;
        } while( true );
      }
      uVar10 = ((uint)puVar2 & 0xff00) >> 8;
      if (((uint)puVar20 & 0xff) - 2 < 2) {
        uVar10 = (uint)pbVar9[8];
LAB_019f0a10:
        if (uVar10 == 0xd) {
LAB_019f0a18:
          if (*piVar19 != 0) {
            FUN_0069263c(puVar20,pbVar9);
            goto LAB_019f0984;
          }
        }
      }
      else {
        if (((uint)puVar20 & 0xff) != 0) goto LAB_019f0a10;
        if (pbVar9 == &DAT_0000000b) goto LAB_019f0a18;
      }
      *param_1 = pbVar21;
      param_1[1] = pbVar9;
      goto LAB_019f098c;
    }
  }
  else {
    piVar4 = (int *)(param_2 + 0x9c);
    do {
      bVar23 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar23);
    *piVar4 = *piVar4 + -1;
    *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
    if (*(int *)(param_2 + 0x90) != 0) {
      FUN_0164ed38(param_2 + 0x90);
    }
  }
LAB_019f0984:
  *(undefined1 *)param_1 = 5;
LAB_019f098c:
  FUN_01650a90(pcVar25);
  if (*pcVar25 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar23 = (bool)hasExclusiveAccess(pcVar25);
      if (bVar23) {
        *pcVar25 = '\0';
        return;
      }
    } while (*pcVar25 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar25);
  return;
LAB_019f0a64:
  uVar16 = (uint)*(char *)((int)puVar7 + (int)local_b0);
  if (-1 < (int)uVar16) {
    uVar16 = *puVar7 & 0x80808080;
    uVar22 = LZCOUNT((*puVar7 & 0x80) << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                     (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18);
    uVar16 = (uint)*(byte *)((int)puVar7 + (uVar22 >> 3));
    local_b0 = (uint *)(uVar22 >> 3);
  }
  iVar17 = *(int *)(param_2 + 0x48);
  iVar5 = *(int *)(param_2 + 0x4c);
  bVar14 = (byte)(uVar15 >> 0x19);
  *(byte *)((int)puVar7 + (int)local_b0) = bVar14;
  *(uint *)(param_2 + 0x48) = iVar17 - (uVar16 & 1);
  *(int *)(param_2 + 0x4c) = iVar5 + 1;
  *(byte *)((int)puVar7 + (uVar18 & (uint)(local_b0 + -1)) + 4) = bVar14;
  puVar7[(int)local_b0 * -4 + -4] = uVar10;
  puVar7[(int)local_b0 * -4 + -3] = (uint)local_48;
  puVar7[(int)local_b0 * -4 + -2] = (uint)local_44;
  puVar7[(int)local_b0 * -4 + -1] = (uint)local_40;
  goto LAB_019f0984;
}

