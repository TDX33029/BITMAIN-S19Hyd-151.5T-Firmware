// FUN_0164f1a8 @ 0164f1a8 size=2612 calls_out=22 calls_in=17
// strings: RUST_MIN_STACK | assertion failed: prev.ref_count() >= 1 | assertion failed: shared.shutdown_tx.is_some()

/* WARNING: Removing unreachable block (ram,0x0164f604) */

void FUN_0164f1a8(undefined4 *param_1,int param_2,uint *param_3,undefined1 param_4,uint param_5,
                 int *param_6)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  byte *pbVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  byte *pbVar13;
  int *piVar14;
  code *pcVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  char *pcVar24;
  uint local_c8;
  undefined4 *local_c4;
  int *local_90;
  byte *local_8c;
  undefined *local_88;
  int *local_84;
  int *local_80;
  byte *local_7c;
  undefined *puStack_78;
  int iStack_74;
  int *local_70;
  byte *local_6c;
  undefined *local_68;
  int iStack_64;
  int *local_60;
  uint local_5c;
  int *local_58;
  undefined4 local_54;
  uint local_50;
  int *local_48;
  byte *local_44;
  undefined *local_40;
  int local_3c;
  int *local_38;
  uint uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  pcVar24 = (char *)(param_2 + 0x28);
  if (*pcVar24 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar24);
    if (!bVar1) goto LAB_0164f1e8;
    *pcVar24 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0164f1e8:
    FUN_01280da8(pcVar24);
  }
  FUN_0128236c(pcVar24);
  if (*(char *)(param_2 + 0x78) == '\0') {
    uVar3 = *(uint *)(param_2 + 0x30);
    uVar17 = *(uint *)(param_2 + 0x3c);
    if (uVar17 == uVar3) {
      FUN_0165c870();
      uVar3 = *(uint *)(param_2 + 0x30);
      uVar17 = *(uint *)(param_2 + 0x3c);
    }
    local_c4 = (undefined4 *)(param_2 + 0x50);
    uVar18 = *(int *)(param_2 + 0x38) + uVar17;
    uVar7 = uVar18 - uVar3;
    if (uVar18 < uVar3) {
      uVar7 = uVar18;
    }
    *(uint *)(param_2 + 0x3c) = uVar17 + 1;
    puVar4 = (undefined4 *)(*(int *)(param_2 + 0x34) + uVar7 * 8);
    *puVar4 = param_3;
    *(undefined1 *)(puVar4 + 1) = param_4;
    piVar5 = (int *)(param_2 + 0xa0);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = *piVar5 + 1;
    if (*(int *)(param_2 + 0x9c) == 0) {
      if (*(int *)(param_2 + 0x98) != *(int *)(param_2 + 0x94)) {
        piVar5 = *(int **)(param_2 + 100);
        if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: shared.shutdown_tx.is_some()",0x2e,&DAT_018acce0);
        }
        piVar11 = (int *)(param_2 + 0x98);
        do {
          iVar12 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar12 + 1;
        if (iVar12 < 0) goto LAB_0164fdc8;
        uVar3 = *(uint *)(param_2 + 0x74);
        uVar22 = *(undefined4 *)(param_2 + 100);
        (**(code **)(*(int *)(param_2 + 0x24) + 0x14))
                  (&local_48,
                   *(int *)(param_2 + 0x20) +
                   (*(int *)(*(int *)(param_2 + 0x24) + 8) - 1U & 0xfffffff8) + 8);
        iVar12 = *(int *)(param_2 + 8);
        if (iVar12 == 1) {
          local_c8 = *(uint *)(param_2 + 0xc);
        }
        do {
          iVar19 = *param_6;
          bVar1 = (bool)hasExclusiveAccess(param_6);
        } while (!bVar1);
        *param_6 = iVar19 + 1;
        uVar17 = (uint)((param_5 & 1) != 0);
        if (iVar19 < 0) goto LAB_0164fdc8;
        local_8c = local_44;
        local_88 = local_40;
        local_90 = local_48;
        if (iVar12 == 0) {
          if (DAT_018dd980 == 0) {
            FUN_015e9334(&local_70,"RUST_MIN_STACK",0xe);
            pbVar9 = local_6c;
            piVar5 = local_70;
            local_c8 = 0x200000;
            if (local_70 != (int *)&DAT_80000000) {
              FUN_00fab1e0(&local_48,local_6c,local_68);
              if ((local_48 == (int *)&DAT_00000001) || (local_40 == (undefined *)0x0)) {
LAB_0164f5b8:
                local_c8 = 0x200000;
              }
              else {
                if (local_40 == (undefined *)0x1) {
                  bVar16 = *local_44;
                  if ((bVar16 == 0x2b) || (bVar16 == 0x2d)) goto LAB_0164f5b8;
                }
                else {
                  bVar16 = *local_44;
                }
                puVar6 = local_40;
                pbVar13 = local_44;
                if (bVar16 == 0x2b) {
                  pbVar13 = local_44 + 1;
                  puVar6 = local_40 + -1;
                }
                if ((undefined *)0x8 < puVar6) {
                  local_c8 = 0;
                  while( true ) {
                    if (puVar6 == (undefined *)0x0) goto joined_r0x0164f5c0;
                    uVar7 = (uint)((ulonglong)local_c8 * 10);
                    if ((int)((ulonglong)local_c8 * 10 >> 0x20) != 0) break;
                    uVar18 = *pbVar13 - 0x30;
                    local_c8 = uVar18 + uVar7;
                    if ((9 < uVar18) ||
                       (puVar6 = puVar6 + -1, pbVar13 = pbVar13 + 1, CARRY4(uVar18,uVar7))) break;
                  }
                  goto LAB_0164f5b8;
                }
                local_c8 = 0;
                for (; puVar6 != (undefined *)0x0; puVar6 = puVar6 + -1) {
                  bVar16 = *pbVar13;
                  if (9 < bVar16 - 0x30) {
                    local_c8 = 0x200000;
                    break;
                  }
                  pbVar13 = pbVar13 + 1;
                  local_c8 = (bVar16 - 0x30) + local_c8 * 10;
                }
              }
joined_r0x0164f5c0:
              if (piVar5 != (int *)0x0) {
                thunk_FUN_016d3fb4(pbVar9);
              }
            }
            DAT_018dd980 = local_c8 + 1;
          }
          else {
            local_c8 = DAT_018dd980 - 1;
          }
        }
        ClearExclusiveLocal();
        do {
          uVar7 = DAT_018dd9a8 + 1;
          uVar18 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
          if (CARRY4(DAT_018dd9ac,(uint)(0xfffffffe < DAT_018dd9a8))) {
            FUN_015ee8c8();
            goto LAB_0164fdc8;
          }
          bVar1 = (bool)hasExclusiveAccess(0x18dd9a8);
        } while (!bVar1);
        DAT_018dd9a8 = uVar7;
        DAT_018dd9ac = uVar18;
        piVar5 = (int *)FUN_015f8074(uVar7,uVar18,&local_90);
        local_84 = piVar5;
        FUN_015fc56c(&local_80,&local_84);
        local_3c = 0;
        local_40 = (undefined *)0x0;
        local_44 = &DAT_00000001;
        local_48 = (int *)&DAT_00000001;
        piVar8 = (int *)thunk_FUN_016d4a50(0x18);
        if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x18);
        }
        *piVar8 = (int)local_48;
        piVar8[1] = (int)local_44;
        piVar8[2] = (int)local_40;
        piVar8[3] = local_3c;
        piVar8[4] = (int)local_38;
        piVar8[5] = uStack_34;
        do {
          iVar12 = *piVar8;
          bVar1 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar1);
        *piVar8 = iVar12 + 1;
        if (iVar12 < 0) {
LAB_0164fdc8:
                    /* WARNING: Does not return */
          pcVar15 = (code *)software_udf(0xfdee,0x164fdc8);
          (*pcVar15)();
        }
        iVar12 = piVar8[2];
        local_58 = param_6;
        local_70 = local_80;
        local_6c = local_7c;
        local_68 = puStack_78;
        iStack_64 = iStack_74;
        local_60 = piVar8;
        local_5c = uVar17;
        local_54 = uVar22;
        local_50 = uVar3;
        if (iVar12 != 0) {
          piVar14 = (int *)(iVar12 + 0xc);
          do {
            iVar19 = *piVar14;
            bVar1 = (bool)hasExclusiveAccess(piVar14);
          } while (!bVar1);
          *piVar14 = iVar19 + 1;
          if (iVar19 < 0) {
            FUN_015f85e4(iVar12 + 8);
            goto LAB_0164fdc8;
          }
        }
        local_48 = local_80;
        local_44 = local_7c;
        local_40 = puStack_78;
        local_3c = iStack_74;
        piStack_30 = param_6;
        local_38 = piVar8;
        uStack_34 = uVar17;
        uStack_2c = uVar22;
        uStack_28 = uVar3;
        pbVar9 = (byte *)thunk_FUN_016d4a50(0x24);
        if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x24);
        }
        *(int **)pbVar9 = local_70;
        *(byte **)(pbVar9 + 4) = local_6c;
        *(undefined **)(pbVar9 + 8) = local_68;
        *(int *)(pbVar9 + 0xc) = iStack_64;
        *(int **)(pbVar9 + 0x10) = local_60;
        *(uint *)(pbVar9 + 0x14) = local_5c;
        *(int **)(pbVar9 + 0x18) = local_58;
        *(undefined4 *)(pbVar9 + 0x1c) = local_54;
        *(uint *)(pbVar9 + 0x20) = local_50;
        do {
          iVar12 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar12 + 1;
        if (iVar12 < 0) goto LAB_0164fdc8;
        local_40 = &DAT_018acaa0;
        local_48 = piVar5;
        local_44 = pbVar9;
        puVar4 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        *puVar4 = local_48;
        puVar4[1] = local_44;
        puVar4[2] = local_40;
        FUN_015f6af4(&local_48,local_c8);
        pbVar9 = local_44;
        piVar14 = local_48;
        cVar2 = (char)local_48;
        if ((char)local_48 == '\x04') {
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar1);
          *piVar11 = *piVar11 + 1;
          *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + 1;
          uVar17 = FUN_0163cf6c(*local_c4,*(undefined4 *)(param_2 + 0x54),
                                *(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c),
                                uVar3);
          if (*(int *)(param_2 + 0x48) == 0) {
            FUN_01643fe4(param_2 + 0x40,local_c4);
          }
          uVar18 = *(uint *)(param_2 + 0x44);
          puVar10 = *(uint **)(param_2 + 0x40);
          bVar1 = false;
          iVar12 = 0;
          uVar7 = uVar17;
          do {
            uVar7 = uVar18 & uVar7;
            uVar23 = *(uint *)((int)puVar10 + uVar7);
            uVar20 = uVar23 ^ (uVar17 >> 0x19) * 0x1010101;
            uVar20 = ~uVar20 & 0x80808080 & uVar20 + 0xfefefeff;
            while (uVar20 != 0) {
              uVar21 = uVar7 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                              (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3) &
                       uVar18;
              uVar20 = uVar20 - 1 & uVar20;
              if (uVar3 == puVar10[uVar21 * -4 + -4]) {
                piVar14 = (int *)puVar10[uVar21 * -4 + -3];
                piVar11 = (int *)puVar10[uVar21 * -4 + -2];
                uVar3 = puVar10[uVar21 * -4 + -1];
                puVar10[uVar21 * -4 + -1] = (uint)pbVar9;
                puVar10[uVar21 * -4 + -2] = (uint)piVar8;
                puVar10[uVar21 * -4 + -3] = (uint)piVar5;
                if (piVar14 != (int *)0x0) {
                  FUN_016dea68(uVar3);
                  DataMemoryBarrier(0xb);
                  do {
                    iVar12 = *piVar14;
                    bVar1 = (bool)hasExclusiveAccess(piVar14);
                  } while (!bVar1);
                  *piVar14 = iVar12 + -1;
                  if (iVar12 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_015e92c0(piVar14);
                  }
                  DataMemoryBarrier(0xb);
                  do {
                    iVar12 = *piVar11;
                    bVar1 = (bool)hasExclusiveAccess(piVar11);
                  } while (!bVar1);
                  *piVar11 = iVar12 + -1;
                  if (iVar12 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_01659070(piVar11);
                  }
                }
                goto LAB_0164f34c;
              }
            }
            uVar20 = uVar23 & 0x80808080;
            if (bVar1) {
LAB_0164f908:
              if ((uVar20 & uVar23 << 1) != 0) goto LAB_0164fae0;
              bVar1 = true;
            }
            else {
              if (uVar20 != 0) {
                local_c4 = (undefined4 *)
                           (uVar7 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                                   (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >>
                                    3) & uVar18);
                goto LAB_0164f908;
              }
              bVar1 = false;
            }
            iVar12 = iVar12 + 4;
            uVar7 = iVar12 + uVar7;
          } while( true );
        }
        DataMemoryBarrier(0xb);
        do {
          iVar12 = *piVar8;
          bVar1 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar1);
        *piVar8 = iVar12 + -1;
        if (iVar12 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01659070(piVar8);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar12 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar12 + -1;
        if (iVar12 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015e92c0(piVar5);
        }
        uVar3 = ((uint)piVar14 & 0xffff) >> 8;
        if (((uint)piVar14 & 0xff) - 2 < 2) {
          uVar3 = (uint)pbVar9[8];
LAB_0164fa74:
          if ((uVar3 == 0xd) && (*piVar11 != 0)) {
            if (((uint)piVar14 & 0xff) == 3) {
              uVar22 = *(undefined4 *)pbVar9;
              puVar4 = *(undefined4 **)(pbVar9 + 4);
              pcVar15 = (code *)*puVar4;
              if (pcVar15 != (code *)0x0) {
                (*pcVar15)(uVar22);
              }
              if (puVar4[1] != 0) {
                thunk_FUN_016d3fb4(uVar22);
              }
              thunk_FUN_016d3fb4(pbVar9);
            }
            goto LAB_0164f34c;
          }
        }
        else {
          if (cVar2 != '\0') goto LAB_0164fa74;
          if ((pbVar9 == &DAT_0000000b) && (*piVar11 != 0)) goto LAB_0164f34c;
        }
        *param_1 = piVar14;
        param_1[1] = pbVar9;
        goto LAB_0164f240;
      }
    }
    else {
      piVar5 = (int *)(param_2 + 0x9c);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = *piVar5 + -1;
      *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
      if (*(int *)(param_2 + 0x90) != 0) {
        FUN_0127f8bc(param_2 + 0x90);
      }
    }
LAB_0164f34c:
    *(undefined1 *)param_1 = 5;
    FUN_01282570(pcVar24);
    if (*pcVar24 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar24);
        if (bVar1) {
          *pcVar24 = '\0';
          return;
        }
      } while (*pcVar24 == '\x01');
    }
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *param_3;
      bVar1 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar1);
    *param_3 = uVar3 - 0x40;
    DataMemoryBarrier(0xb);
    if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
    }
    (**(code **)(param_3[2] + 0x18))(param_3);
    *(undefined1 *)param_1 = 4;
LAB_0164f240:
    FUN_01282570(pcVar24);
    if (*pcVar24 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar24);
        if (bVar1) {
          *pcVar24 = '\0';
          return;
        }
      } while (*pcVar24 == '\x01');
    }
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar24);
  return;
LAB_0164fae0:
  uVar7 = (uint)*(char *)((int)puVar10 + (int)local_c4);
  if (-1 < (int)uVar7) {
    uVar7 = *puVar10 & 0x80808080;
    uVar20 = LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                     uVar7 >> 0x18);
    uVar7 = (uint)*(byte *)((int)puVar10 + (uVar20 >> 3));
    local_c4 = (undefined4 *)(uVar20 >> 3);
  }
  iVar12 = *(int *)(param_2 + 0x4c);
  *(uint *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) - (uVar7 & 1);
  bVar16 = (byte)(uVar17 >> 0x19);
  *(byte *)((int)puVar10 + (int)local_c4) = bVar16;
  *(int *)(param_2 + 0x4c) = iVar12 + 1;
  *(byte *)((int)puVar10 + (uVar18 & (uint)(local_c4 + -1)) + 4) = bVar16;
  puVar10[(int)local_c4 * -4 + -1] = (uint)pbVar9;
  puVar10[(int)local_c4 * -4 + -4] = uVar3;
  puVar10[(int)local_c4 * -4 + -3] = (uint)piVar5;
  puVar10[(int)local_c4 * -4 + -2] = (uint)piVar8;
  goto LAB_0164f34c;
}

