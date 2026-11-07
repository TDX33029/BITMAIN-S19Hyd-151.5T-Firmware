// FUN_019f36f8 @ 019f36f8 size=5784 calls_out=54 calls_in=0
// strings: waker missing | internal error: entered unreachable code: unexpected stage | [internal | park missing | explicit panic | Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks.

void FUN_019f36f8(int param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  int extraout_r1;
  int extraout_r1_00;
  uint extraout_r1_01;
  uint *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  char *pcVar17;
  uint *puVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint *puVar23;
  int iVar24;
  uint *puVar25;
  uint *puVar26;
  int iVar27;
  int *piVar28;
  bool bVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined *local_ec;
  int local_d8;
  int *local_d4;
  uint local_bc;
  int local_a4;
  uint *local_a0;
  uint *puStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int local_90;
  uint *local_8c;
  uint *local_88;
  undefined4 local_84;
  uint local_80 [4];
  uint *local_70;
  uint local_6c;
  uint local_68;
  uint *local_64;
  uint *local_60;
  code *local_5c;
  int *local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  uVar4 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar4) {
  case 1:
    FUN_019d70e0(param_1 + 0x18);
    goto LAB_019d7ea8;
  case 2:
    return;
  case 3:
    FUN_019d7abc(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar31 = FUN_019ec558(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  puVar23 = *(uint **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (puVar23 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("[internal",0x2d,&DAT_01d29564);
  }
  FUN_019ec5bc();
  puVar18 = puVar23 + 4;
  DataMemoryBarrier(0xb);
  do {
    local_bc = *puVar18;
    bVar29 = (bool)hasExclusiveAccess(puVar18);
  } while (!bVar29);
  *puVar18 = 0;
  DataMemoryBarrier(0xb);
  if (local_bc == 0) {
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar23;
      bVar29 = (bool)hasExclusiveAccess(puVar23);
    } while (!bVar29);
    *puVar23 = uVar5 - 1;
    if (uVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db780(puVar23);
    }
  }
  else {
    uVar15 = puVar23[2];
    uVar19 = puVar23[3];
    uVar5 = *(uint *)(uVar15 + 0x7c);
    if (uVar5 <= uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar19,uVar5,&DAT_01d29680);
    }
    uVar32 = thunk_FUN_01bee35a(puVar18,0x240);
    uVar5 = *(uint *)((int)uVar32 + (int)((ulonglong)uVar32 >> 0x20));
    iVar6 = *(int *)(uVar15 + 0x78);
    if (uVar5 < 3) {
      uVar32 = FUN_019b03e8();
    }
    else {
      piVar16 = (int *)(uVar5 - 8);
      do {
        iVar7 = *piVar16;
        iVar10 = iVar7 + 1;
        uVar32 = CONCAT44(iVar10,piVar16);
        bVar29 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar29);
      *piVar16 = iVar10;
      if (iVar7 < 0) goto LAB_019f4d10;
    }
    piVar16 = (int *)uVar32;
    FUN_019f8618(iVar6 + uVar19 * 0x80,(int)((ulonglong)uVar32 >> 0x20),piVar16[2],piVar16[3]);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar16;
      bVar29 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar29);
    *piVar16 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc(piVar16);
    }
    piVar16 = (int *)puVar23[2];
    do {
      iVar6 = *piVar16;
      bVar29 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar29);
    *piVar16 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_019f4d10:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x19f4d10);
      (*pcVar1)();
    }
    uVar33 = thunk_FUN_01bee35a(iVar6,0x20);
    uVar32 = CONCAT44(local_84,local_80[0]);
    iVar6 = (int)uVar33 + (int)((ulonglong)uVar33 >> 0x20);
    if (*(char *)(iVar6 + 0x38) != '\x01') {
      uVar33 = CONCAT44(local_58,local_54);
      if (*(char *)(iVar6 + 0x38) == '\x02') goto LAB_019f3864;
      FUN_019a2bcc(iVar6,&LAB_019efb68);
      *(undefined1 *)(iVar6 + 0x38) = 1;
    }
    uVar32 = CONCAT44(local_84,local_80[0]);
    uVar33 = CONCAT44(local_58,local_54);
    if (*(char *)(iVar6 + 0x32) != '\x02') {
LAB_019f4c9c:
      local_58 = (int *)((ulonglong)uVar33 >> 0x20);
      local_54 = (int)uVar33;
      local_84 = (undefined4)((ulonglong)uVar32 >> 0x20);
      local_80[0] = (uint)uVar32;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
                   ,0x183,&DAT_01d29690);
    }
    *(undefined1 *)(iVar6 + 0x32) = 1;
    uVar33 = FUN_019f7c78(piVar16 + 0x4a);
    if ((*(uint *)(iVar6 + 0x24) & 1) == 0) {
      uVar32 = FUN_019e9e08();
      if ((uint)uVar32 < 2) {
        uVar32 = CONCAT44((int)((ulonglong)uVar32 >> 0x20),1);
      }
    }
    else {
      uVar32 = CONCAT44(*(undefined4 *)(iVar6 + 0x28),*(undefined4 *)(iVar6 + 0x2c));
    }
    uVar21 = (undefined4)((ulonglong)uVar32 >> 0x20);
    uVar20 = (undefined4)uVar32;
    *(undefined4 *)(iVar6 + 0x24) = 1;
    *(undefined8 *)(iVar6 + 0x28) = uVar33;
    FUN_019ec774(&local_90,iVar6,1,piVar16);
    local_60 = local_8c;
    local_5c = (code *)local_88;
    uVar33 = uVar32;
    if (local_90 == 4) {
LAB_019f3864:
      local_58 = (int *)((ulonglong)uVar33 >> 0x20);
      local_54 = (int)uVar33;
      local_84 = (undefined4)((ulonglong)uVar32 >> 0x20);
      local_80[0] = (uint)uVar32;
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d301c0);
    }
    if (local_90 == 3) goto LAB_019f4c9c;
    local_a4 = local_90;
    local_a0 = local_8c;
    puStack_9c = local_88;
    local_80[3] = 0;
    local_80[1] = 0;
    local_80[0] = 0;
    local_84 = 0;
    local_88 = (uint *)0x0;
    local_90 = 1;
    local_80[2] = 4;
    local_8c = puVar23;
    if (*(char *)(iVar6 + 0x38) == '\x01') {
      local_d8 = *(int *)(iVar6 + 0x20);
      *(int *)(iVar6 + 0x20) = (int)&local_90;
    }
    else {
      uStack_98 = uVar21;
      uStack_94 = uVar20;
      local_58 = (int *)uVar21;
      local_54 = uVar20;
      if (*(char *)(iVar6 + 0x38) == '\x02') {
        FUN_019f8b88(local_bc);
                    /* WARNING: Subroutine does not return */
        FUN_019b0950(&DAT_01d301c0);
      }
      FUN_019a2bcc(iVar6,&LAB_019efb68);
      uVar32 = CONCAT44(local_58,local_54);
      local_d8 = *(int *)(iVar6 + 0x20);
      *(undefined1 *)(iVar6 + 0x38) = 1;
      *(int *)(iVar6 + 0x20) = (int)&local_90;
      uVar33 = CONCAT44(uStack_98,uStack_94);
      if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("exp",0x3f,&DAT_01d29504);
      }
    }
    uStack_98 = (undefined4)((ulonglong)uVar33 >> 0x20);
    uStack_94 = (undefined4)uVar33;
    local_58 = (int *)((ulonglong)uVar32 >> 0x20);
    local_54 = (int)uVar32;
    local_d4 = (int *)(iVar6 + 0x20);
    *(byte *)(local_bc + 100) = *(byte *)(local_8c[2] + 0x44) ^ 1;
    FUN_019eb660(local_bc);
    if (*(char *)(local_bc + 0x66) == '\0') {
      local_ec = &DAT_01d296a0;
LAB_019f3cdc:
      puVar23 = local_8c;
      *(int *)(local_bc + 0x54) = *(int *)(local_bc + 0x54) + 1;
      if (*(int *)(local_8c[2] + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079d0(&DAT_01d29710);
      }
      FUN_01bf0fd4();
      if (extraout_r1 == 0) {
        FUN_019eb570(local_bc);
        local_bc = FUN_019eefa4(&local_8c,local_bc,0);
        FUN_019ef354(local_bc,local_8c + 2);
        FUN_019eb660(local_bc);
        puVar23 = local_8c;
      }
      uVar5 = *(uint *)(local_bc + 0x60);
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079d0(&DAT_01d296e0);
      }
      FUN_01bf0fd4(*(undefined4 *)(local_bc + 0x54),uVar5);
      if (extraout_r1_00 != 0) {
        uVar5 = *(uint *)(local_bc + 0x58);
        *(undefined4 *)(local_bc + 0x58) = 0;
        if (uVar5 != 0) goto LAB_019f3e8c;
        piVar28 = (int *)(local_bc + 0x50);
        uVar5 = FUN_019e17fc(piVar28);
        if (uVar5 != 0) goto LAB_019f3e8c;
        DataMemoryBarrier(0xb);
        if (*(int *)(puVar23[2] + 0x98) != 0) {
          iVar7 = *(int *)(*piVar28 + 0xc);
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          iVar6 = *(int *)(*piVar28 + 0x10);
          DataMemoryBarrier(0xb);
          uVar15 = puVar23[2];
          if (*(int *)(uVar15 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012ffdf4(&DAT_01d296f0);
          }
          iVar10 = FUN_01bf1250(*(undefined4 *)(puVar23[2] + 0x98));
          uVar19 = (iVar7 - iVar6) + 0x100;
          pcVar17 = (char *)(uVar15 + 0x9c);
          uVar5 = iVar10 + 1U;
          if (uVar19 < iVar10 + 1U) {
            uVar5 = uVar19;
          }
          if (uVar5 < 2) {
            uVar5 = 1;
          }
          if (*pcVar17 == '\0') {
            bVar29 = (bool)hasExclusiveAccess(pcVar17);
            if (!bVar29) goto LAB_019f3ef0;
            *pcVar17 = '\x01';
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_019f3ef0:
            FUN_0164fba8(pcVar17);
          }
          FUN_0165098c(pcVar17);
          uVar19 = *(uint *)(puVar23[2] + 0x98);
          DataMemoryBarrier(0xb);
          local_6c = uVar5;
          if (uVar19 <= uVar5) {
            local_6c = uVar19;
          }
          if (0x7f < local_6c) {
            local_6c = 0x80;
          }
          *(uint *)(puVar23[2] + 0x98) = uVar19 - local_6c;
          local_70 = (uint *)(uVar15 + 0xac);
          if (uVar19 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *local_70;
            if (uVar5 == 0) {
              uVar5 = 0;
            }
            else {
              uVar19 = *(uint *)(uVar5 + 4);
              *local_70 = uVar19;
              if (uVar19 == 0) {
                *(undefined4 *)(uVar15 + 0xb0) = 0;
              }
              *(undefined4 *)(uVar5 + 4) = 0;
            }
            local_6c = local_6c - 1;
          }
          iVar6 = *piVar28;
          if (local_6c == 0) {
            FUN_019dd214(&local_70);
          }
          else {
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            uVar19 = *(uint *)(iVar6 + 0x10);
            if (0x100 - local_6c < uVar19 - *(int *)(iVar6 + 0xc)) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("explicit panic",0xe,&DAT_01d29114);
            }
            uVar8 = local_6c;
            while (uVar8 != 0) {
              uVar14 = *local_70;
              if (uVar14 == 0) {
                local_5c = (code *)(uVar8 - 1);
                goto LAB_019f400c;
              }
              uVar11 = *(uint *)(uVar14 + 4);
              uVar22 = uVar19 & 0xff;
              *local_70 = uVar11;
              uVar8 = uVar8 - 1;
              uVar19 = uVar19 + 1;
              if (uVar11 == 0) {
                *(undefined4 *)(uVar15 + 0xb0) = 0;
              }
              *(undefined4 *)(uVar14 + 4) = 0;
              *(uint *)(*(int *)(iVar6 + 0x14) + uVar22 * 4) = uVar14;
            }
            local_5c = (code *)0x0;
LAB_019f400c:
            local_60 = local_70;
            FUN_019dd214(&local_60);
            DataMemoryBarrier(0xb);
            *(uint *)(iVar6 + 0x10) = uVar19;
          }
          FUN_01650a90(pcVar17);
          if (*pcVar17 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar29 = (bool)hasExclusiveAccess(pcVar17);
              if (bVar29) {
                *pcVar17 = '\0';
                goto LAB_019f405c;
              }
            } while (*pcVar17 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_0164f86c(pcVar17);
          goto LAB_019f405c;
        }
LAB_019f4068:
        FUN_019eb570(local_bc);
        puVar23 = local_8c;
        if (*(char *)(local_bc + 0x65) != '\0') {
LAB_019f40d4:
          uVar15 = *(uint *)(local_bc + 0x4c);
          uVar5 = *(uint *)(local_bc + 0x48) ^ *(uint *)(local_bc + 0x48) << 0x11;
          uVar19 = *(uint *)(local_8c[2] + 0x4c);
          uVar5 = uVar15 >> 0x10 ^ uVar5 >> 7 ^ uVar15 ^ uVar5;
          *(uint *)(local_bc + 0x48) = uVar15;
          *(uint *)(local_bc + 0x4c) = uVar5;
          if (uVar19 != 0) {
            uVar8 = 0;
            do {
              FUN_01bf0fd4(uVar8 + (int)((ulonglong)uVar19 * (ulonglong)(uVar5 + uVar15) >> 0x20),
                           uVar19);
              if (extraout_r1_01 != puVar23[3]) {
                uVar11 = *(uint *)(puVar23[2] + 0x4c);
                uVar14 = extraout_r1_01;
                if (uVar11 <= extraout_r1_01) goto LAB_019f4cdc;
                iVar6 = *(int *)(local_bc + 0x50);
                uVar14 = *(uint *)(iVar6 + 0x10);
                ClearExclusiveLocal();
                DataMemoryBarrier(0xb);
                if (uVar14 - *(int *)(iVar6 + 0xc) < 0x81) {
                  iVar7 = *(int *)(*(int *)(puVar23[2] + 0x48) + extraout_r1_01 * 8);
                  puVar13 = (undefined4 *)(iVar7 + 8);
                  puVar18 = (uint *)*puVar13;
                  ClearExclusiveLocal();
                  DataMemoryBarrier(0xb);
                  puVar26 = *(uint **)(iVar7 + 0xc);
                  while( true ) {
                    puVar12 = puVar26;
                    DataMemoryBarrier(0xb);
                    if ((puVar12 != puVar18) || (*(uint **)(iVar7 + 0x10) == puVar12)) break;
                    puVar25 = (uint *)*puVar13;
                    puVar26 = *(uint **)(iVar7 + 0xc);
                    uVar11 = (int)*(uint **)(iVar7 + 0x10) - (int)puVar12;
                    uVar11 = uVar11 - (uVar11 >> 1);
                    if (puVar25 == puVar18 && puVar26 == puVar12) {
                      DataMemoryBarrier(0xb);
                      do {
                        bVar29 = (bool)hasExclusiveAccess(puVar13);
                        if (bVar29) {
                          *puVar13 = (uint *)(uVar11 + (int)puVar12);
                          *(uint **)(iVar7 + 0xc) = puVar12;
                          bVar29 = true;
                          puVar18 = puVar25;
                          goto LAB_019f4204;
                        }
                        puVar25 = (uint *)*puVar13;
                        puVar26 = *(uint **)(iVar7 + 0xc);
                      } while (puVar25 == puVar18 && puVar26 == puVar12);
                    }
                    bVar29 = false;
                    ClearExclusiveLocal();
                    puVar18 = puVar25;
LAB_019f4204:
                    DataMemoryBarrier(0xb);
                    if (bVar29) {
                      local_68 = uVar11;
                      if (0x80 < uVar11) {
                        local_60 = &local_68;
                        local_5c = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
                        FUN_012fb100(&DAT_005777e5,&local_60,&DAT_01d29124);
                      }
                      uVar5 = 1;
                      if (1 < uVar11) {
                        uVar5 = uVar11;
                      }
                      uVar15 = uVar14;
                      puVar23 = puVar12;
                      do {
                        uVar19 = (uint)puVar23 & 0xff;
                        puVar23 = (uint *)((int)puVar23 + 1);
                        uVar5 = uVar5 - 1;
                        uVar8 = uVar15 & 0xff;
                        uVar15 = uVar15 + 1;
                        *(undefined4 *)(*(int *)(iVar6 + 0x14) + uVar8 * 4) =
                             *(undefined4 *)(*(int *)(iVar7 + 0x14) + uVar19 * 4);
                      } while (uVar5 != 0);
                      puVar23 = (uint *)(uVar11 + (int)puVar12);
                      do {
                        puVar18 = (uint *)*puVar13;
                        puVar26 = *(uint **)(iVar7 + 0xc);
                        if (puVar18 == puVar23 && puVar26 == puVar12) {
                          DataMemoryBarrier(0xb);
                          while (bVar29 = (bool)hasExclusiveAccess(puVar13), !bVar29) {
                            puVar18 = (uint *)*puVar13;
                            puVar26 = *(uint **)(iVar7 + 0xc);
                            if (puVar18 != puVar23 || puVar26 != puVar12) goto LAB_019f42e4;
                          }
                          *puVar13 = puVar23;
                          *(uint **)(iVar7 + 0xc) = puVar23;
                          bVar29 = true;
                          puVar12 = puVar26;
                        }
                        else {
LAB_019f42e4:
                          bVar29 = false;
                          ClearExclusiveLocal();
                          puVar12 = puVar26;
                        }
                        DataMemoryBarrier(0xb);
                        if (bVar29) {
                          uVar14 = (uVar11 - 1) + uVar14;
                          iVar7 = *(int *)(*(int *)(iVar6 + 0x14) + (uVar14 & 0xff) * 4);
                          if (uVar11 - 1 != 0) {
                            DataMemoryBarrier(0xb);
                            *(uint *)(iVar6 + 0x10) = uVar14;
                          }
                          goto LAB_019f433c;
                        }
                        puVar23 = puVar18;
                        local_70 = puVar18;
                        local_64 = puVar12;
                        if (puVar12 == puVar18) {
                          FUN_019b6878(1,&local_64,&local_70,0);
                          goto LAB_019f4d10;
                        }
                      } while( true );
                    }
                  }
                }
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar19);
          }
          iVar7 = FUN_019ec838(puVar23[2] + 8);
          if (iVar7 == 0) goto LAB_019f4364;
LAB_019f433c:
          FUN_019eb660(local_bc);
          local_bc = FUN_019ef484(&local_8c,iVar7,local_bc);
          goto LAB_019f3e9c;
        }
        uVar5 = local_8c[2];
        DataMemoryBarrier(0xb);
        if ((*(uint *)(uVar5 + 0x80) & 0xffff) << 1 < *(uint *)(uVar5 + 0x84)) {
          piVar28 = (int *)(uVar5 + 0x80);
          DataMemoryBarrier(0xb);
          do {
            bVar29 = (bool)hasExclusiveAccess(piVar28);
          } while (!bVar29);
          *piVar28 = *piVar28 + 1;
          DataMemoryBarrier(0xb);
          *(undefined1 *)(local_bc + 0x65) = 1;
          goto LAB_019f40d4;
        }
        *(undefined1 *)(local_bc + 0x65) = 0;
LAB_019f4364:
        if (0x7ffffffe < local_80[0]) {
                    /* WARNING: Subroutine does not return */
          FUN_0130701c(&DAT_01d29b18);
        }
        if (local_80[3] == 0) {
          iVar6 = *(int *)(local_8c[2] + 0x14);
          if (iVar6 != 0) {
            iVar7 = *(int *)(local_8c[2] + 0x18);
            (**(code **)(iVar7 + 0x14))(iVar6 + (*(int *)(iVar7 + 8) - 1U & 0xfffffff8) + 8);
          }
          puVar23 = local_8c;
          if (*(int *)(local_bc + 0x58) == 0) {
            iVar6 = *(int *)(local_bc + 0x50);
            puVar18 = (uint *)(iVar6 + 8);
            uVar15 = *puVar18;
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            uVar5 = *(uint *)(iVar6 + 0x10);
            bVar29 = uVar5 == uVar15;
            if (bVar29) {
              uVar5 = (uint)*(byte *)(local_bc + 0x67);
            }
            if (bVar29 && (uVar5 & 1) == 0) {
              uVar5 = local_8c[2];
              uVar19 = local_8c[3];
              cVar2 = *(char *)(local_bc + 0x65);
              pcVar17 = (char *)(uVar5 + 0x9c);
              if (*pcVar17 == '\0') {
                puVar18 = (uint *)&DAT_00000001;
                bVar29 = (bool)hasExclusiveAccess(pcVar17);
                if (bVar29) {
                  *pcVar17 = '\x01';
                  DataMemoryBarrier(0xb);
                  goto LAB_019f4490;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              FUN_0164fba8(pcVar17,puVar18,uVar15,*(undefined4 *)(iVar6 + 0xc));
LAB_019f4490:
              FUN_0165098c(pcVar17);
              puVar18 = (uint *)(uVar5 + 0x80);
              DataMemoryBarrier(0xb);
              if (cVar2 == '\0') {
                do {
                  bVar29 = (bool)hasExclusiveAccess(puVar18);
                } while (!bVar29);
                *puVar18 = *puVar18 - 0x10000;
                bVar29 = false;
                DataMemoryBarrier(0xb);
              }
              else {
                do {
                  uVar15 = *puVar18;
                  bVar29 = (bool)hasExclusiveAccess(puVar18);
                } while (!bVar29);
                *puVar18 = uVar15 - 0x10001;
                DataMemoryBarrier(0xb);
                bVar29 = (uVar15 & 0xffff) == 1;
              }
              iVar6 = *(int *)(uVar5 + 0xa8);
              if (iVar6 == *(int *)(uVar5 + 0xa0)) {
                FUN_019ee1a8();
              }
              *(uint *)(*(int *)(uVar5 + 0xa4) + iVar6 * 4) = uVar19;
              *(int *)(uVar5 + 0xa8) = iVar6 + 1;
              FUN_01650a90(pcVar17);
              if (*pcVar17 == '\x01') {
                DataMemoryBarrier(0xb);
                do {
                  bVar3 = (bool)hasExclusiveAccess(pcVar17);
                  if (bVar3) {
                    *pcVar17 = '\0';
                    goto LAB_019f4558;
                  }
                } while (*pcVar17 == '\x01');
              }
              ClearExclusiveLocal();
              FUN_0164f86c(pcVar17);
LAB_019f4558:
              *(undefined1 *)(local_bc + 0x65) = 0;
              if (bVar29) {
                uVar5 = puVar23[2];
                iVar6 = *(int *)(uVar5 + 0x4c) << 3;
                piVar28 = *(int **)(uVar5 + 0x48);
                do {
                  if (iVar6 == 0) {
                    DataMemoryBarrier(0xb);
                    if (*(int *)(uVar5 + 0x98) == 0) goto LAB_019f45c0;
                    break;
                  }
                  iVar7 = *piVar28;
                  iVar6 = iVar6 + -8;
                  ClearExclusiveLocal();
                  DataMemoryBarrier(0xb);
                  DataMemoryBarrier(0xb);
                  piVar28 = piVar28 + 2;
                } while (*(int *)(iVar7 + 0x10) == *(int *)(iVar7 + 8));
                FUN_019ec500(uVar5 + 8);
              }
LAB_019f45c0:
              cVar2 = *(char *)(local_bc + 0x66);
              bVar29 = cVar2 != '\0';
              if (!bVar29) {
                cVar2 = *(char *)(local_bc + 0x67);
              }
              if (bVar29 || cVar2 != '\0') goto LAB_019f4408;
              iVar6 = *(uint *)(local_bc + 0x18) + 1;
              iVar7 = *(int *)(local_bc + 0x1c) + (uint)(0xfffffffe < *(uint *)(local_bc + 0x18));
              iVar10 = *(uint *)(local_bc + 0x20) + 1;
              iVar27 = *(int *)(local_bc + 0x24) + (uint)(0xfffffffe < *(uint *)(local_bc + 0x20));
              *(int *)(local_bc + 0x18) = iVar6;
              *(int *)(local_bc + 0x1c) = iVar7;
              *(int *)(local_bc + 0x20) = iVar10;
              *(int *)(local_bc + 0x24) = iVar27;
              uVar15 = local_8c[3];
              uVar5 = *(uint *)(local_8c[2] + 0x7c);
              if (uVar5 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar15,uVar5,&DAT_01d29760);
              }
              uVar20 = *(undefined4 *)(local_bc + 0x14);
              iVar24 = *(int *)(local_8c[2] + 0x78) + uVar15 * 0x80;
              do {
                bVar29 = (bool)hasExclusiveAccess((undefined4 *)(iVar24 + 0x10));
              } while (!bVar29);
              *(undefined4 *)(iVar24 + 0x10) = *(undefined4 *)(local_bc + 0x10);
              *(undefined4 *)(iVar24 + 0x14) = uVar20;
              do {
                bVar29 = (bool)hasExclusiveAccess((int *)(iVar24 + 0x18));
              } while (!bVar29);
              *(int *)(iVar24 + 0x18) = iVar6;
              *(int *)(iVar24 + 0x1c) = iVar7;
              do {
                uVar20 = *(undefined4 *)(iVar24 + 0x24);
                bVar29 = (bool)hasExclusiveAccess((int *)(iVar24 + 0x20));
              } while (!bVar29);
              *(int *)(iVar24 + 0x20) = iVar10;
              *(int *)(iVar24 + 0x24) = iVar27;
              local_bc = FUN_019eefa4(&local_8c,local_bc,&DAT_3b9aca00,uVar20);
              uVar5 = *(uint *)(local_bc + 0x20);
              *(uint *)(local_bc + 0x20) = uVar5 + 1;
              *(uint *)(local_bc + 0x24) = *(int *)(local_bc + 0x24) + (uint)(0xfffffffe < uVar5);
              FUN_019ef354(local_bc,local_8c + 2);
              if (*(int *)(local_bc + 0x58) == 0) {
                iVar6 = *(int *)(local_bc + 0x50);
                ClearExclusiveLocal();
                DataMemoryBarrier(0xb);
                iVar7 = *(int *)(iVar6 + 0x10);
                if (iVar7 != *(int *)(iVar6 + 8)) goto LAB_019f47e4;
                uVar15 = local_8c[2];
                uVar5 = local_8c[3];
                pcVar17 = (char *)(uVar15 + 0x9c);
                if (*pcVar17 == '\0') {
                  iVar7 = 1;
                  bVar29 = (bool)hasExclusiveAccess(pcVar17);
                  if (!bVar29) goto LAB_019f46fc;
                  *pcVar17 = '\x01';
                  DataMemoryBarrier(0xb);
                }
                else {
                  ClearExclusiveLocal();
LAB_019f46fc:
                  FUN_0164fba8(pcVar17,iVar7,*(int *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc));
                }
                FUN_0165098c(pcVar17);
                iVar6 = *(int *)(uVar15 + 0xa4);
                uVar19 = *(uint *)(uVar15 + 0xa8) & 0x1ffffff0;
                puVar23 = (uint *)(iVar6 + uVar19 * 4);
                do {
                  if (uVar19 == 0) {
                    iVar6 = (*(uint *)(uVar15 + 0xa8) & 0xf) << 2;
                    goto LAB_019f4764;
                  }
                  iVar7 = 0;
                  bVar29 = false;
                  do {
                    iVar10 = iVar7 * 4;
                    iVar7 = iVar7 + 1;
                    bVar29 = (bool)(bVar29 | *(uint *)(iVar6 + iVar10) == uVar5);
                  } while (iVar7 != 0x10);
                  uVar19 = uVar19 - 0x10;
                  iVar6 = iVar6 + 0x40;
                } while (!bVar29);
                goto LAB_019f477c;
              }
LAB_019f47e4:
              uVar5 = local_8c[2];
              uVar15 = local_8c[3];
              pcVar17 = (char *)(uVar5 + 0x9c);
              if (*pcVar17 == '\0') {
                bVar29 = (bool)hasExclusiveAccess(pcVar17);
                if (!bVar29) goto LAB_019f482c;
                *pcVar17 = '\x01';
                DataMemoryBarrier(0xb);
              }
              else {
                ClearExclusiveLocal();
LAB_019f482c:
                FUN_0164fba8(pcVar17);
              }
              FUN_0165098c(pcVar17);
              uVar8 = *(uint *)(uVar5 + 0xa8);
              piVar28 = (int *)(uVar5 + 0x80);
              uVar19 = 0;
              goto LAB_019f4848;
            }
          }
          goto LAB_019f4408;
        }
        local_bc = FUN_019eefa4(&local_8c,local_bc,0);
        goto LAB_019f443c;
      }
      if (*(int *)(puVar23[2] + 8) == 1) {
        uVar15 = *(uint *)(puVar23[2] + 0xc);
      }
      else {
        dVar30 = 200000.0 / *(double *)(local_bc + 0x38);
        uVar15 = (uint)(0.0 < dVar30) * (int)(longlong)dVar30;
        if (uVar15 < 3) {
          uVar15 = 2;
        }
        if (0x7e < uVar15) {
          uVar15 = 0x7f;
        }
      }
      uVar19 = uVar5 - uVar15;
      if (uVar5 < uVar15 || uVar19 == 0) {
        uVar19 = uVar15 - uVar5;
      }
      if (2 < uVar19) {
        *(uint *)(local_bc + 0x60) = uVar15;
      }
      uVar5 = FUN_019ec838();
      if (uVar5 == 0) {
        uVar5 = *(uint *)(local_bc + 0x58);
        *(undefined4 *)(local_bc + 0x58) = 0;
        if (uVar5 == 0) {
          uVar5 = FUN_019e17fc(local_bc + 0x50);
LAB_019f405c:
          if (uVar5 == 0) goto LAB_019f4068;
        }
      }
LAB_019f3e8c:
      local_bc = FUN_019ef484(&local_8c,uVar5,local_bc);
LAB_019f3e9c:
      if (local_bc != 0) goto LAB_019f3ea8;
      goto LAB_019f4b00;
    }
LAB_019f3aa4:
    puVar23 = local_8c;
    uVar15 = *(uint *)(local_bc + 0x4c);
    uVar5 = *(uint *)(local_bc + 0x48) ^ *(uint *)(local_bc + 0x48) << 0x11;
    iVar6 = *(int *)(local_8c[2] + 100);
    uVar5 = uVar15 >> 0x10 ^ uVar5 >> 7 ^ uVar15 ^ uVar5;
    *(uint *)(local_bc + 0x48) = uVar15;
    *(uint *)(local_bc + 0x4c) = uVar5;
    uVar19 = local_8c[2];
    uVar15 = (uint)((ulonglong)(iVar6 + 1) * (ulonglong)(uVar5 + uVar15) >> 0x20);
    DataMemoryBarrier(0xb);
    *(undefined1 *)(uVar19 + 0x70) = 1;
    uVar5 = uVar15 + *(int *)(uVar19 + 100) + 1;
    if (uVar15 < uVar5) {
      piVar28 = (int *)(uVar19 + 0x60);
LAB_019f3b14:
      do {
        pcVar17 = (char *)(*(int *)(uVar19 + 0x50) + (*(uint *)(uVar19 + 100) & uVar15) * 0xc);
        if (*pcVar17 == '\0') {
          bVar29 = (bool)hasExclusiveAccess(pcVar17);
          if (!bVar29) goto LAB_019f3b48;
          *pcVar17 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_019f3b48:
          FUN_0164fba8(pcVar17);
        }
        FUN_0165098c(pcVar17);
        iVar6 = *(int *)(pcVar17 + 8);
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(iVar6 + 8) + 0x1c);
          iVar10 = *(int *)(iVar6 + iVar7);
          *(int *)(pcVar17 + 8) = iVar10;
          if (iVar10 == 0) {
            pcVar17[4] = '\0';
            pcVar17[5] = '\0';
            pcVar17[6] = '\0';
            pcVar17[7] = '\0';
          }
          else {
            *(undefined4 *)(iVar10 + *(int *)(*(int *)(iVar10 + 8) + 0x1c) + 4) = 0;
            iVar7 = *(int *)(*(int *)(iVar6 + 8) + 0x1c);
          }
          *(undefined4 *)(iVar6 + iVar7) = 0;
          *(undefined4 *)(iVar6 + *(int *)(*(int *)(iVar6 + 8) + 0x1c) + 4) = 0;
          do {
            bVar29 = (bool)hasExclusiveAccess(piVar28);
          } while (!bVar29);
          *piVar28 = *piVar28 + -1;
        }
        FUN_01650a90(pcVar17);
        if (*pcVar17 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar29 = (bool)hasExclusiveAccess(pcVar17);
            if (bVar29) {
              *pcVar17 = '\0';
              goto LAB_019f3c08;
            }
          } while (*pcVar17 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar17);
LAB_019f3c08:
        if (iVar6 != 0) {
          (**(code **)(*(int *)(iVar6 + 8) + 0x18))(iVar6);
          goto LAB_019f3b14;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar5);
    }
    uVar5 = puVar23[2];
    uVar14 = puVar23[3];
    uVar11 = *(uint *)(uVar5 + 0x7c);
    if (uVar11 <= uVar14) {
      local_ec = &DAT_01d296c0;
LAB_019f4cdc:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar14,uVar11,local_ec);
    }
    iVar6 = *(int *)(uVar5 + 0x78) + uVar14 * 0x80;
    uVar20 = *(undefined4 *)(local_bc + 0x14);
    do {
      bVar29 = (bool)hasExclusiveAccess((undefined4 *)(iVar6 + 0x10));
    } while (!bVar29);
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(local_bc + 0x10);
    *(undefined4 *)(iVar6 + 0x14) = uVar20;
    uVar20 = *(undefined4 *)(local_bc + 0x1c);
    do {
      bVar29 = (bool)hasExclusiveAccess((undefined4 *)(iVar6 + 0x18));
    } while (!bVar29);
    *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(local_bc + 0x18);
    *(undefined4 *)(iVar6 + 0x1c) = uVar20;
    uVar20 = *(undefined4 *)(local_bc + 0x24);
    do {
      bVar29 = (bool)hasExclusiveAccess((undefined4 *)(iVar6 + 0x20));
    } while (!bVar29);
    *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(local_bc + 0x20);
    *(undefined4 *)(iVar6 + 0x24) = uVar20;
    uVar5 = local_8c[2];
    pcVar17 = (char *)(uVar5 + 0x88);
    if (*pcVar17 == '\0') {
      bVar29 = (bool)hasExclusiveAccess(pcVar17);
      if (!bVar29) goto LAB_019f491c;
      *pcVar17 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_019f491c:
      FUN_0164fba8(pcVar17);
    }
    FUN_0165098c(pcVar17);
    piVar28 = (int *)(uVar5 + 0x8c);
    iVar6 = *(int *)(uVar5 + 0x94);
    if (iVar6 == *piVar28) {
      FUN_019ee1a8(piVar28);
    }
    *(uint *)(*(int *)(uVar5 + 0x90) + iVar6 * 4) = local_bc;
    iVar6 = iVar6 + 1;
    *(int *)(uVar5 + 0x94) = iVar6;
    if (iVar6 == *(int *)(uVar5 + 0x4c)) {
      local_60 = *(uint **)(uVar5 + 0x90);
      *(undefined4 *)(uVar5 + 0x94) = 0;
      local_5c = (code *)(local_60 + iVar6);
      local_50 = 0;
      local_58 = piVar28;
      local_54 = iVar6;
      if (iVar6 != 0) {
        do {
          uVar15 = *local_60;
          piVar28 = *(int **)(uVar15 + 0x5c);
          *(undefined4 *)(uVar15 + 0x5c) = 0;
          if (piVar28 == (int *)0x0) {
            local_60 = local_60 + 1;
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("park missing",0xc,&DAT_01d296d0);
          }
          local_60 = local_60 + 1;
          while ((iVar6 = *(int *)(uVar15 + 0x58), *(undefined4 *)(uVar15 + 0x58) = 0, iVar6 != 0 ||
                 (iVar6 = FUN_019e17fc(uVar15 + 0x50), iVar6 != 0))) {
            FUN_019d8d64();
          }
          iVar6 = piVar28[2];
          pcVar9 = (char *)(iVar6 + 0x2c);
          if (*pcVar9 == '\0') {
            DataMemoryBarrier(0xb);
            do {
              bVar29 = (bool)hasExclusiveAccess(pcVar9);
              if (bVar29) {
                *pcVar9 = '\x01';
                DataMemoryBarrier(0xb);
                FUN_019e2430(iVar6 + 8,uVar5 + 0xb8);
                DataMemoryBarrier(0xb);
                *(undefined1 *)(iVar6 + 0x2c) = 0;
                goto LAB_019f4a1c;
              }
            } while (*pcVar9 == '\0');
          }
          ClearExclusiveLocal();
LAB_019f4a1c:
          DataMemoryBarrier(0xb);
          if (piVar28[4] != 0) {
            FUN_0164e740(piVar28 + 4);
          }
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar28;
            bVar29 = (bool)hasExclusiveAccess(piVar28);
          } while (!bVar29);
          *piVar28 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_019db294(piVar28);
          }
          FUN_019eb3cc(uVar15);
        } while ((code *)local_60 != local_5c);
      }
      FUN_019ebce0(&local_60);
      while (iVar6 = FUN_019ec838(uVar5 + 8), iVar6 != 0) {
        FUN_019d8d64();
      }
    }
    FUN_01650a90(pcVar17);
    if (*pcVar17 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar29 = (bool)hasExclusiveAccess(pcVar17);
        if (bVar29) {
          *pcVar17 = '\0';
          goto LAB_019f4b00;
        }
      } while (*pcVar17 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar17);
LAB_019f4b00:
    FUN_019f993c(local_80);
    *local_d4 = local_d8;
    FUN_019eb2dc(&local_90);
    FUN_019eb498(&local_a4);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar16;
      bVar29 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar29);
    *piVar16 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019da640(piVar16);
    }
  }
  FUN_019ec558((int)uVar31,(int)((ulonglong)uVar31 >> 0x20));
  local_90 = 2;
  local_38 = FUN_019fa95c(param_1 + 0x18,&local_90);
  local_3c = 0;
  local_40 = 0;
  local_48[0] = 1;
  FUN_019fa95c(param_1 + 0x18,local_48);
LAB_019d7ea8:
  uVar5 = FUN_019d8b4c();
  if ((uVar5 & 8) == 0) {
    FUN_019fa95c(param_1 + 0x18,local_48 + 10);
  }
  else if ((uVar5 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*(int *)(param_1 + 0x48) + 8))(*(undefined4 *)(param_1 + 0x4c));
    uVar5 = FUN_019d8c50(param_1);
    if ((uVar5 & 8) == 0) {
      if (*(int *)(param_1 + 0x48) != 0) {
        (**(code **)(*(int *)(param_1 + 0x48) + 0xc))(*(undefined4 *)(param_1 + 0x4c));
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  iVar6 = FUN_019d8bc0(param_1,1);
  if (iVar6 == 0) {
    return;
  }
  FUN_019d7abc(param_1);
  return;
  while( true ) {
    uVar15 = *puVar23;
    iVar6 = iVar6 + -4;
    puVar23 = puVar23 + 1;
    if (uVar15 == uVar5) break;
LAB_019f4764:
    if (iVar6 == 0) {
      bVar29 = false;
      goto LAB_019f478c;
    }
  }
LAB_019f477c:
  bVar29 = true;
LAB_019f478c:
  FUN_01650a90(pcVar17);
  if (*pcVar17 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(pcVar17);
      if (bVar3) {
        *pcVar17 = '\0';
        goto LAB_019f47c8;
      }
    } while (*pcVar17 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar17);
LAB_019f47c8:
  if (!bVar29) goto LAB_019f4804;
  goto LAB_019f45c0;
LAB_019f4804:
  *(undefined1 *)(local_bc + 0x65) = 1;
  goto LAB_019f4408;
  while( true ) {
    iVar6 = *(int *)(uVar5 + 0xa4);
    uVar19 = uVar14 + 1;
    if (*(uint *)(iVar6 + uVar14 * 4) == uVar15) break;
LAB_019f4848:
    uVar14 = uVar19;
    if (uVar8 == uVar14) {
      uVar14 = uVar8;
      goto LAB_019f48a4;
    }
  }
  *(undefined4 *)(iVar6 + uVar14 * 4) = *(undefined4 *)(iVar6 + (uVar8 - 1) * 4);
  *(uint *)(uVar5 + 0xa8) = uVar8 - 1;
  DataMemoryBarrier(0xb);
  do {
    bVar29 = (bool)hasExclusiveAccess(piVar28);
  } while (!bVar29);
  *piVar28 = *piVar28 + 0x10000;
  DataMemoryBarrier(0xb);
LAB_019f48a4:
  FUN_01650a90(pcVar17);
  if (*pcVar17 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar29 = (bool)hasExclusiveAccess(pcVar17);
      if (bVar29) {
        *pcVar17 = '\0';
        goto LAB_019f48e0;
      }
    } while (*pcVar17 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar17);
LAB_019f48e0:
  *(bool *)(local_bc + 0x65) = uVar8 <= uVar14;
LAB_019f4408:
  iVar6 = *(int *)(local_8c[2] + 0x1c);
  if (iVar6 != 0) {
    iVar7 = *(int *)(local_8c[2] + 0x20);
    (**(code **)(iVar7 + 0x14))(iVar6 + (*(int *)(iVar7 + 8) - 1U & 0xfffffff8) + 8);
  }
LAB_019f443c:
  FUN_019eb660(local_bc);
LAB_019f3ea8:
  if (*(char *)(local_bc + 0x66) != '\0') goto LAB_019f3aa4;
  goto LAB_019f3cdc;
}

