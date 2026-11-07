// FUN_00c98f54 @ 00c98f54 size=2312 calls_out=21 calls_in=0
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

/* WARNING: Removing unreachable block (ram,0x00c995f0) */

uint FUN_00c98f54(int param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 uVar19;
  undefined1 *puVar20;
  undefined4 *puVar21;
  int *piVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined4 *local_34c0;
  uint local_34bc;
  uint local_34b8;
  uint local_34b4;
  uint local_34b0;
  uint uStack_34ac;
  uint local_34a8;
  uint uStack_34a4;
  uint uStack_34a0;
  uint local_349c;
  undefined8 local_3488;
  uint local_3480;
  uint local_347c;
  undefined1 *local_3478;
  undefined1 local_3470;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_80 [80];
  undefined8 local_30;
  
  puVar21 = (undefined4 *)(param_1 + 0x3420);
  uVar3 = (&switchD_00c98f84::switchdataD_00c98f88)[*(byte *)(param_1 + 0x3447)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_1 + 0x3447)) {
  case 0:
    *(undefined1 *)(param_1 + 0x3446) = 1;
    *(undefined2 *)(param_1 + 0x3444) = 0;
    FUN_016dd1aa(&local_34b8,param_1,0x3420);
    iVar18 = thunk_FUN_016d4a50(0x3420);
    if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x3420);
    }
    FUN_016dd1aa(iVar18,param_1,0x3420);
    local_34b8 = *(uint *)(param_1 + 0x3438);
    *(undefined1 *)(param_1 + 0x3446) = 0;
    local_34b4 = *(uint *)(param_1 + 0x343c);
    local_34b0 = *(uint *)(param_1 + 0x3440);
    local_349c = local_349c & 0xffffff00;
    puVar6 = (uint *)thunk_FUN_016d4a50(0x20);
    if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *puVar6 = local_34b8;
    puVar6[1] = local_34b4;
    puVar6[2] = local_34b0;
    puVar6[3] = uStack_34ac;
    puVar6[4] = local_34a8;
    puVar6[5] = uStack_34a4;
    puVar6[6] = uStack_34a0;
    puVar6[7] = local_349c;
    *(int *)(param_1 + 0x3448) = iVar18;
    *(undefined **)(param_1 + 0x344c) = &DAT_0186f168;
    *(uint **)(param_1 + 0x3450) = puVar6;
    *(undefined **)(param_1 + 0x3454) = &DAT_01876f9c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876c9c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876c9c);
  case 4:
    goto switchD_00c98f84_caseD_4;
  }
  puVar17 = (undefined4 *)(param_1 + 0x3448);
  FUN_00bbba60(&local_98,puVar17,param_2);
  if ((char)local_90 == '\x04') {
    uVar4 = 2;
    uVar2 = 3;
    goto LAB_00c99404;
  }
  *puVar21 = local_98;
  *(undefined4 *)(param_1 + 0x3424) = uStack_94;
  *(undefined4 *)(param_1 + 0x3428) = local_90;
  *(undefined4 *)(param_1 + 0x342c) = uStack_8c;
  *(undefined4 *)(param_1 + 0x3430) = uStack_88;
  FUN_00887914(puVar17);
  if (*(char *)(param_1 + 0x3428) == '\x03') {
    uVar19 = *puVar21;
    puVar21 = *(undefined4 **)(param_1 + 0x3424);
    pcVar8 = (code *)*puVar21;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar19);
    }
    uVar4 = 1;
    if (puVar21[1] != 0) {
      thunk_FUN_016d3fb4(uVar19);
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x342c);
    local_34c0 = *(undefined4 **)(param_1 + 0x3430);
    *(undefined4 *)(param_1 + 0x344c) = *(undefined4 *)(param_1 + 0x3424);
    *(undefined4 *)(param_1 + 0x3450) = *(undefined4 *)(param_1 + 0x3428);
    bVar15 = *(byte *)(param_1 + 0x3450);
    *(undefined1 *)(param_1 + 0x3444) = 1;
    *puVar17 = *puVar21;
    uVar4 = 0;
    if (bVar15 == 2) {
LAB_00c9930c:
      if ((code *)*local_34c0 != (code *)0x0) {
        (*(code *)*local_34c0)(uVar3);
      }
      if (local_34c0[1] != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
    }
    else {
      piVar9 = *(int **)(param_1 + 0x344c);
      *(undefined1 *)(param_1 + 0x3445) = 1;
      puVar6 = (uint *)(*(int *)(param_1 + 0x3434) + 0x80);
      *(undefined4 *)(param_1 + 0x3454) = *(undefined4 *)(param_1 + 0x3448);
      uVar4 = *(uint *)(*(int *)(param_1 + 0x3434) + 0x80);
      DataMemoryBarrier(0xb);
      while ((uVar4 & 1) == 0) {
        if (uVar4 + 2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_015bef44();
        }
        uVar14 = *puVar6;
        if (*puVar6 == uVar4) {
          DataMemoryBarrier(0xb);
LAB_00c99264:
          bVar23 = (bool)hasExclusiveAccess(puVar6);
          if (!bVar23) goto code_r0x00c99270;
          *puVar6 = uVar4 + 2;
          DataMemoryBarrier(0xb);
          iVar18 = *(int *)(param_1 + 0x3434);
          puVar6 = (uint *)(iVar18 + 0x24);
          piVar22 = (int *)(iVar18 + 0x20);
          do {
            uVar4 = *puVar6;
            bVar23 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar23);
          *puVar6 = uVar4 + 1;
          DataMemoryBarrier(0xb);
          uVar14 = uVar4 & 0xfffffff0;
          iVar5 = *piVar22;
          DataMemoryBarrier(0xb);
          if (uVar14 != *(uint *)(iVar5 + 0x80)) {
            bVar23 = (uVar4 & 0xf) < uVar14 - *(uint *)(iVar5 + 0x80) >> 4;
            iVar7 = iVar5;
            do {
              DataMemoryBarrier(0xb);
              iVar5 = *(int *)(iVar7 + 0x84);
              if (*(int *)(iVar7 + 0x84) == 0) {
                iVar16 = *(int *)(iVar7 + 0x80);
                iVar5 = thunk_FUN_016d4a50(0x90);
                if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(4,0x90);
                }
                *(int *)(iVar5 + 0x80) = iVar16 + 0x10;
                piVar11 = (int *)(iVar7 + 0x84);
                *(undefined4 *)(iVar5 + 0x84) = 0;
                *(undefined4 *)(iVar5 + 0x88) = 0;
                *(undefined4 *)(iVar5 + 0x8c) = 0;
                iVar16 = *piVar11;
                if (iVar16 != 0) {
LAB_00c994e8:
                  ClearExclusiveLocal();
                  DataMemoryBarrier(0xb);
                  piVar11 = (int *)(iVar16 + 0x84);
                  *(int *)(iVar5 + 0x80) = *(int *)(iVar16 + 0x80) + 0x10;
                  iVar12 = *piVar11;
                  if (iVar12 == 0) {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar1 = (bool)hasExclusiveAccess(piVar11);
                      if (bVar1) {
                        *piVar11 = iVar5;
                        bVar1 = true;
                        goto LAB_00c9953c;
                      }
                      iVar12 = *piVar11;
                    } while (iVar12 == 0);
                  }
LAB_00c99534:
                  do {
                    bVar1 = false;
                    ClearExclusiveLocal();
LAB_00c9953c:
                    while( true ) {
                      DataMemoryBarrier(0xb);
                      if (bVar1) {
                        iVar5 = iVar16;
                        goto LAB_00c99594;
                      }
                      HintYield();
                      *(int *)(iVar5 + 0x80) = *(int *)(iVar12 + 0x80) + 0x10;
                      piVar11 = (int *)(iVar12 + 0x84);
                      iVar12 = *piVar11;
                      if (iVar12 != 0) break;
                      DataMemoryBarrier(0xb);
                      while (bVar1 = (bool)hasExclusiveAccess(piVar11), !bVar1) {
                        iVar12 = *piVar11;
                        if (iVar12 != 0) goto LAB_00c99534;
                      }
                      *piVar11 = iVar5;
                      bVar1 = true;
                    }
                  } while( true );
                }
                DataMemoryBarrier(0xb);
                while (bVar1 = (bool)hasExclusiveAccess(piVar11), !bVar1) {
                  iVar16 = *piVar11;
                  if (iVar16 != 0) goto LAB_00c994e8;
                }
                *piVar11 = iVar5;
                DataMemoryBarrier(0xb);
              }
LAB_00c99594:
              DataMemoryBarrier(0xb);
              if ((bool)(bVar23 & (~*(uint *)(iVar7 + 0x88) & 0xffff) == 0)) {
                if (*piVar22 == iVar7) {
                  DataMemoryBarrier(0xb);
                  do {
                    bVar23 = (bool)hasExclusiveAccess(piVar22);
                    if (bVar23) {
                      *piVar22 = iVar5;
                      puVar10 = (uint *)(iVar7 + 0x88);
                      DataMemoryBarrier(0xb);
                      do {
                        uVar13 = *puVar6;
                        bVar23 = (bool)hasExclusiveAccess(puVar6);
                      } while (!bVar23);
                      *puVar6 = uVar13;
                      *(uint *)(iVar7 + 0x8c) = uVar13;
                      DataMemoryBarrier(0xb);
                      do {
                        bVar23 = (bool)hasExclusiveAccess(puVar10);
                      } while (!bVar23);
                      *puVar10 = *puVar10 | 0x10000;
                      bVar23 = true;
                      goto LAB_00c9946c;
                    }
                  } while (*piVar22 == iVar7);
                }
                ClearExclusiveLocal();
                bVar23 = false;
              }
              else {
                bVar23 = false;
              }
LAB_00c9946c:
              HintYield();
              iVar7 = iVar5;
            } while (*(uint *)(iVar5 + 0x80) != uVar14);
          }
          puVar21 = (undefined4 *)(iVar5 + (uVar4 & 0xf) * 8);
          *puVar21 = piVar9;
          puVar6 = (uint *)(iVar5 + 0x88);
          *(byte *)(puVar21 + 1) = bVar15 & 1;
          DataMemoryBarrier(0xb);
          do {
            bVar23 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar23);
          *puVar6 = *puVar6 | 1 << (uVar4 & 0xf);
          puVar6 = (uint *)(iVar18 + 0x48);
          DataMemoryBarrier(0xb);
          do {
            uVar4 = *puVar6;
            bVar23 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar23);
          *puVar6 = uVar4 | 2;
          DataMemoryBarrier(0xb);
          if (uVar4 == 0) {
            iVar5 = *(int *)(iVar18 + 0x40);
            *(undefined4 *)(iVar18 + 0x40) = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar23 = (bool)hasExclusiveAccess(puVar6);
            } while (!bVar23);
            *puVar6 = 0;
            if (iVar5 != 0) {
              (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar18 + 0x44));
            }
          }
          goto LAB_00c9970c;
        }
LAB_00c9922c:
        uVar4 = uVar14;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar18 = *piVar9;
        bVar23 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar23);
      *piVar9 = iVar18 + -1;
      if (iVar18 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(piVar9);
      }
LAB_00c9970c:
      *(undefined1 *)(param_1 + 0x3444) = 0;
      FUN_0165a798(&local_34b8);
      if (local_34b0 < 900000000) {
        puVar20 = (undefined1 *)(local_34b0 + 100000000);
        uVar4 = local_34b8;
        uVar14 = local_34b4;
LAB_00c9977c:
        local_30 = FUN_0164ec90(&DAT_01876cac);
        iVar18 = 0x180;
        if ((local_30 & 1) != 0) {
          iVar18 = 0xb8;
        }
        if (*(undefined1 **)((int)(local_30 >> 0x20) + iVar18 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                       ,0x73,&DAT_01876cac);
        }
        local_34b4 = 0;
        local_34b8 = 0;
        local_3470 = 0;
        local_3480 = uVar4;
        local_347c = uVar14;
        local_3478 = puVar20;
        local_3488 = local_30;
      }
      else {
        uVar14 = local_34b4 + (0xfffffffe < local_34b8);
        if ((-1 < (int)((local_34b4 ^ uVar14) & ~local_34b4)) &&
           (puVar20 = (undefined1 *)(local_34b0 + 0xca5b1700), puVar20 != &DAT_3b9aca00)) {
          uVar4 = local_34b8 + 1;
          goto LAB_00c9977c;
        }
        FUN_01656dc8(&local_34b8);
      }
      FUN_016dd1aa(auStack_80,&local_34b8,0x50);
      FUN_016dd1aa(param_1 + 0x3458,auStack_80,0x50);
      *(uint *)(param_1 + 0x34a8) = uVar3;
      *(undefined4 **)(param_1 + 0x34ac) = local_34c0;
      local_34bc = uVar3;
switchD_00c98f84_caseD_4:
      uVar24 = thunk_FUN_016de0ee(uVar3,0x40);
      iVar18 = (int)uVar24 + (int)((ulonglong)uVar24 >> 0x20);
      bVar15 = *(byte *)(iVar18 + 0x38);
      if (bVar15 == 1) {
LAB_00c990b8:
        bVar15 = ~*(byte *)(iVar18 + 0x30) & 1 | *(char *)(iVar18 + 0x31) != '\0';
      }
      else if (bVar15 != 2) {
        FUN_015e8e6c(iVar18,FUN_00bacf28);
        *(undefined1 *)(iVar18 + 0x38) = 1;
        goto LAB_00c990b8;
      }
      uVar4 = (**(code **)(*(int *)(param_1 + 0x34ac) + 0xc))
                        (*(undefined4 *)(param_1 + 0x34a8),param_2);
      if (uVar4 != 0) {
        iVar18 = FUN_016540e8(bVar15 == 2 | bVar15 & 1,param_1 + 0x3458,*param_2);
        if (iVar18 != 0) {
          uVar4 = 2;
          uVar2 = 4;
          goto LAB_00c99404;
        }
      }
      uVar19 = *(undefined4 *)(param_1 + 0x34a8);
      puVar21 = *(undefined4 **)(param_1 + 0x34ac);
      pcVar8 = (code *)*puVar21;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar19);
      }
      if (puVar21[1] != 0) {
        thunk_FUN_016d3fb4(uVar19);
      }
      FUN_00a07b4c(param_1 + 0x3458);
      *(undefined1 *)(param_1 + 0x3445) = 0;
      if (uVar4 == 0) {
        FUN_0076b120(*(undefined4 *)(param_1 + 0x3454));
      }
      else {
        FUN_0076b120(*(undefined4 *)(param_1 + 0x3454));
      }
      uVar4 = uVar4 ^ 1;
      *(undefined1 *)(param_1 + 0x3445) = 0;
      uVar3 = local_34bc;
      if (*(char *)(param_1 + 0x3444) != '\0') goto LAB_00c9930c;
    }
    *(undefined1 *)(param_1 + 0x3444) = 0;
  }
  iVar18 = *(int *)(param_1 + 0x3434);
  DataMemoryBarrier(0xb);
  piVar9 = (int *)(iVar18 + 0x84);
  do {
    iVar5 = *piVar9;
    bVar23 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar23);
  *piVar9 = iVar5 + -1;
  DataMemoryBarrier(0xb);
  if (iVar5 == 1) {
    FUN_00c747ec(iVar18 + 0x20);
    puVar6 = (uint *)(iVar18 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar6;
      bVar23 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar23);
    *puVar6 = uVar3 | 2;
    DataMemoryBarrier(0xb);
    if (uVar3 == 0) {
      iVar5 = *(int *)(iVar18 + 0x40);
      *(undefined4 *)(iVar18 + 0x40) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar23 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar23);
      *puVar6 = 0;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar18 + 0x44));
      }
    }
  }
  piVar9 = *(int **)(param_1 + 0x3434);
  DataMemoryBarrier(0xb);
  do {
    iVar18 = *piVar9;
    bVar23 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar23);
  *piVar9 = iVar18 + -1;
  if (iVar18 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d064cc(*(undefined4 *)(param_1 + 0x3434));
  }
  uVar2 = 1;
LAB_00c99404:
  *(undefined1 *)(param_1 + 0x3447) = uVar2;
  return uVar4;
code_r0x00c99270:
  uVar14 = *puVar6;
  if (*puVar6 != uVar4) goto LAB_00c9922c;
  goto LAB_00c99264;
}

