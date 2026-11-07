// FUN_0138e8a8 @ 0138e8a8 size=3844 calls_out=13 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x0138f044) */

void FUN_0138e8a8(int *param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  char cVar14;
  undefined *puVar15;
  int iVar16;
  undefined *puVar17;
  bool bVar18;
  uint uVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  uint local_b0 [4];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_4c;
  uint local_48;
  uint local_44 [3];
  uint local_38 [2];
  uint *local_30;
  code *local_2c;
  
  iVar25 = *param_1;
  uVar19 = 0xc;
  if ((*(byte *)(iVar25 + 0x51) & 1) != 0) {
    uVar19 = *(int *)(*(int *)(iVar25 + 0x278) + 0x154) * 6 + 0xc;
  }
  iVar24 = param_1[1];
  iVar7 = *(int *)(iVar24 + 0x88);
  if ((uint)(*(int *)(iVar24 + 0x80) - iVar7) < uVar19) {
    FUN_013c4434(iVar24 + 0x80,iVar7,uVar19,4,4);
    iVar7 = *(int *)(iVar24 + 0x88);
  }
  iVar3 = *(int *)(iVar24 + 0x84);
  do {
    *(undefined4 *)(iVar3 + iVar7 * 4) = 0x80000000;
    iVar7 = iVar7 + 1;
    uVar19 = uVar19 - 1;
  } while (uVar19 != 0);
  *(int *)(iVar24 + 0x88) = iVar7;
  uVar26 = FUN_013c70f4();
  iVar7 = (int)((ulonglong)uVar26 >> 0x20);
  piVar4 = (int *)uVar26;
  do {
    iVar3 = *piVar4;
    bVar18 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar18);
  *piVar4 = iVar3 + 1;
  if (iVar3 < 0) goto LAB_0138f7c0;
  iVar3 = iVar7 + 0x14;
  if (*(uint *)(iVar25 + 0x280) <
      iVar3 + *(uint *)(iVar24 + 0x94) * 8 + *(int *)(iVar24 + 0xc) * 0xc + *(int *)(iVar24 + 0xa4)
      + *(int *)(iVar24 + 0x68) +
      (*(int *)(iVar24 + 0x88) + *(int *)(iVar24 + 0x7c) + *(int *)(iVar24 + 0x38) +
       *(int *)(iVar24 + 0x44) + *(int *)(iVar24 + 0x54) + *(int *)(iVar24 + 0x60) +
      *(int *)(iVar24 + 0x98)) * 4 + (4 << (*(uint *)(iVar25 + 0x27c) & 0x1f))) {
    if (((*(byte *)(iVar25 + 0x30) & 1) == 0) ||
       (*(uint *)(iVar24 + 0x6c) < *(uint *)(iVar25 + 0x34))) {
LAB_0138ea28:
      FUN_0138e168(param_1);
      goto LAB_0138ea30;
    }
    if ((*(byte *)(iVar25 + 0x38) & 1) != 0) {
      iVar16 = 0;
      if (*(int *)(iVar24 + 0xb0) == 1) {
        uVar19 = *(uint *)(iVar24 + 0xb4);
        uVar21 = *(uint *)(iVar24 + 0xb8);
        iVar16 = uVar19 - uVar21;
        if (uVar19 < uVar21 || iVar16 == 0) {
          iVar16 = uVar21 - uVar19;
        }
      }
      lVar2 = (ulonglong)*(uint *)(iVar24 + 0x94) * (ulonglong)*(uint *)(iVar25 + 0x3c);
      uVar19 = (uint)lVar2;
      if ((int)((ulonglong)lVar2 >> 0x20) != 0) {
        uVar19 = 0xffffffff;
      }
      if (uVar19 <= (uint)(iVar16 + *(int *)(iVar24 + 0x70))) goto LAB_0138ea28;
    }
  }
  else {
LAB_0138ea30:
    uVar27 = FUN_0138f9cc(param_1);
    if ((uVar27 & 1) == 0) {
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0,0,&DAT_01894308);
      }
      piVar8 = (int *)(iVar24 + 0x74);
      uVar19 = 0x88000000;
      uVar21 = *(uint *)(iVar25 + 0x27c) & 0x1f;
      iVar9 = *(int *)(iVar24 + 0x7c);
      iVar16 = 1 << uVar21;
      if ((*(byte *)(piVar4 + 2) & 1) == 0) {
        uVar19 = 0x80000000;
      }
      if ((uint)(*piVar8 - iVar9) < (uint)(1 << uVar21)) {
        FUN_013c4434(piVar8,iVar9,iVar16,4,4);
        iVar9 = *(int *)(iVar24 + 0x7c);
      }
      uVar19 = uVar19 | (uint)(uVar27 >> 0x20);
      iVar5 = *(int *)(iVar24 + 0x78);
      do {
        *(undefined4 *)(iVar5 + iVar9 * 4) = 0x80000000;
        iVar9 = iVar9 + 1;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      iVar16 = iVar25 + 600;
      *(int *)(iVar24 + 0x7c) = iVar9;
      iVar9 = thunk_FUN_016dd50a(iVar16,"",0x20);
      uVar21 = 0;
      if (iVar9 != 0) {
        uVar21 = uVar19;
      }
      if (iVar9 != 0 && uVar21 != 0x80000000) {
        uVar21 = *(uint *)(iVar25 + 0x27c) & 0x1f;
        if (0x1a < uVar21) {
          puVar15 = &DAT_01893000;
          local_30 = (uint *)(1 << uVar21);
LAB_0138f7a0:
          local_2c = (code *)0x0;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_01893030,puVar15);
        }
        if (uVar19 != ((uint)(1 << uVar21) | 0x40000000)) {
          if (uVar21 == 0x1a) {
            puVar15 = &DAT_01893010;
            local_30 = (uint *)0x8000000;
            goto LAB_0138f7a0;
          }
          iVar9 = 0;
          for (uVar22 = 0; uVar22 != 0x100; uVar22 = uVar22 + 1) {
            puVar12 = (uint *)(iVar16 + (uVar22 >> 3 & 0xfffffff0));
            local_70[3] = puVar12[3];
            local_70[0] = *puVar12;
            local_70[1] = puVar12[1];
            local_70[2] = puVar12[2];
            local_54 = 0;
            local_58 = 0;
            local_5c = 0;
            local_60 = 0;
            if ((*(uint *)((int)local_70 + ((uVar22 & 0x60) >> 3)) >> (uVar22 & 0x1f) & 1) != 0) {
              if (0xff < uVar22) break;
              FUN_0138fac8(iVar25,iVar24,uVar19,iVar9,(2 << uVar21) + 0x20000000);
            }
            iVar9 = iVar9 + 0x100;
          }
        }
      }
      *(int *)(iVar24 + 0x68) = *(int *)(iVar24 + 0x68) + iVar7;
      do {
        iVar9 = *piVar4;
        bVar18 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar18);
      *piVar4 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_0138f7c0;
      piVar10 = (int *)(iVar24 + 0x8c);
      iVar9 = *(int *)(iVar24 + 0x94);
      if (iVar9 == *piVar10) {
        FUN_013c3fcc(piVar10);
      }
      *(undefined8 *)(*(int *)(iVar24 + 0x90) + iVar9 * 8) = uVar26;
      *(int *)(iVar24 + 0x94) = iVar9 + 1;
      FUN_013d1914(iVar24,piVar4,iVar7,uVar19);
      do {
        iVar9 = *piVar4;
        bVar18 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar18);
      *piVar4 = iVar9 + 1;
      local_4c = uVar19;
      if (iVar9 < 0) goto LAB_0138f7c0;
      if (*(uint *)(iVar25 + 0x280) <
          iVar3 + *(uint *)(iVar24 + 0x94) * 8 + *(int *)(iVar24 + 0xc) * 0xc +
          *(int *)(iVar24 + 0xa4) + *(int *)(iVar24 + 0x68) +
          (*(int *)(iVar24 + 0x88) + *(int *)(iVar24 + 0x7c) + *(int *)(iVar24 + 0x38) +
           *(int *)(iVar24 + 0x44) + *(int *)(iVar24 + 0x54) + *(int *)(iVar24 + 0x60) +
          *(int *)(iVar24 + 0x98)) * 4 + (4 << (*(uint *)(iVar25 + 0x27c) & 0x1f))) {
        if (((*(byte *)(iVar25 + 0x30) & 1) == 0) ||
           (*(uint *)(iVar24 + 0x6c) < *(uint *)(iVar25 + 0x34))) {
LAB_0138ec58:
          FUN_0138e168(param_1);
          goto LAB_0138ec60;
        }
        if ((*(byte *)(iVar25 + 0x38) & 1) != 0) {
          iVar9 = 0;
          if (*(int *)(iVar24 + 0xb0) == 1) {
            uVar21 = *(uint *)(iVar24 + 0xb4);
            uVar22 = *(uint *)(iVar24 + 0xb8);
            iVar9 = uVar21 - uVar22;
            if (uVar21 < uVar22 || iVar9 == 0) {
              iVar9 = uVar22 - uVar21;
            }
          }
          lVar2 = (ulonglong)*(uint *)(iVar24 + 0x94) * (ulonglong)*(uint *)(iVar25 + 0x3c);
          uVar21 = (uint)lVar2;
          if ((int)((ulonglong)lVar2 >> 0x20) != 0) {
            uVar21 = 0xffffffff;
          }
          if (uVar21 <= (uint)(iVar9 + *(int *)(iVar24 + 0x70))) goto LAB_0138ec58;
        }
      }
      else {
LAB_0138ec60:
        uVar27 = FUN_0138f9cc(param_1);
        if ((uVar27 & 1) == 0) {
          uVar22 = *(uint *)(iVar25 + 0x27c) & 0x1f;
          iVar5 = *(int *)(iVar24 + 0x7c);
          uVar21 = 0x48000000;
          iVar9 = 1 << uVar22;
          if ((*(byte *)(piVar4 + 2) & 1) == 0) {
            uVar21 = 0x40000000;
          }
          if ((uint)(*(int *)(iVar24 + 0x74) - iVar5) < (uint)(1 << uVar22)) {
            FUN_013c4434(piVar8,iVar5,iVar9,4,4);
            iVar5 = *(int *)(iVar24 + 0x7c);
          }
          uVar21 = uVar21 | (uint)(uVar27 >> 0x20);
          iVar6 = *(int *)(iVar24 + 0x78);
          do {
            *(undefined4 *)(iVar6 + iVar5 * 4) = 0x80000000;
            iVar5 = iVar5 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          *(int *)(iVar24 + 0x7c) = iVar5;
          iVar9 = thunk_FUN_016dd50a(iVar16,"",0x20);
          if (iVar9 != 0) {
            uVar22 = *(uint *)(iVar25 + 0x27c) & 0x1f;
            if (0x1a < uVar22) {
              puVar15 = &DAT_01893000;
              local_30 = (uint *)(1 << uVar22);
LAB_0138f72c:
              local_2c = (code *)0x0;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_01893030,puVar15);
            }
            if (uVar21 != ((uint)(1 << uVar22) | 0x40000000)) {
              if (uVar22 == 0x1a) {
                puVar15 = &DAT_01893010;
                local_30 = (uint *)0x8000000;
                goto LAB_0138f72c;
              }
              iVar9 = 0;
              for (uVar23 = 0; uVar23 != 0x100; uVar23 = uVar23 + 1) {
                puVar12 = (uint *)(iVar16 + (uVar23 >> 3 & 0xfffffff0));
                local_90[3] = puVar12[3];
                local_90[0] = *puVar12;
                local_90[1] = puVar12[1];
                local_90[2] = puVar12[2];
                local_74 = 0;
                local_78 = 0;
                local_7c = 0;
                local_80 = 0;
                if ((*(uint *)((int)local_90 + ((uVar23 & 0x60) >> 3)) >> (uVar23 & 0x1f) & 1) != 0)
                {
                  if (0xff < uVar23) break;
                  FUN_0138fac8(iVar25,iVar24,uVar21,iVar9,(2 << uVar22) + 0x20000000);
                }
                iVar9 = iVar9 + 0x100;
              }
            }
          }
          *(int *)(iVar24 + 0x68) = *(int *)(iVar24 + 0x68) + iVar7;
          do {
            iVar9 = *piVar4;
            bVar18 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar18);
          *piVar4 = iVar9 + 1;
          if (iVar9 < 0) goto LAB_0138f7c0;
          iVar9 = *(int *)(iVar24 + 0x94);
          if (iVar9 == *(int *)(iVar24 + 0x8c)) {
            FUN_013c3fcc(piVar10);
          }
          *(undefined8 *)(*(int *)(iVar24 + 0x90) + iVar9 * 8) = uVar26;
          *(int *)(iVar24 + 0x94) = iVar9 + 1;
          FUN_013d1914(iVar24,piVar4,iVar7,uVar21);
          do {
            iVar9 = *piVar4;
            bVar18 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar18);
          *piVar4 = iVar9 + 1;
          local_48 = uVar21;
          if (iVar9 < 0) goto LAB_0138f7c0;
          if (*(uint *)(iVar25 + 0x280) <
              iVar3 + *(uint *)(iVar24 + 0x94) * 8 + *(int *)(iVar24 + 0xc) * 0xc +
              *(int *)(iVar24 + 0xa4) + *(int *)(iVar24 + 0x68) +
              (*(int *)(iVar24 + 0x88) + *(int *)(iVar24 + 0x7c) + *(int *)(iVar24 + 0x38) +
               *(int *)(iVar24 + 0x44) + *(int *)(iVar24 + 0x54) + *(int *)(iVar24 + 0x60) +
              *(int *)(iVar24 + 0x98)) * 4 + (4 << (*(uint *)(iVar25 + 0x27c) & 0x1f))) {
            if (((*(byte *)(iVar25 + 0x30) & 1) == 0) ||
               (*(uint *)(iVar24 + 0x6c) < *(uint *)(iVar25 + 0x34))) {
LAB_0138ee88:
              FUN_0138e168(param_1);
              goto LAB_0138ee90;
            }
            if ((*(byte *)(iVar25 + 0x38) & 1) != 0) {
              iVar3 = 0;
              if (*(int *)(iVar24 + 0xb0) == 1) {
                uVar22 = *(uint *)(iVar24 + 0xb4);
                uVar23 = *(uint *)(iVar24 + 0xb8);
                iVar3 = uVar22 - uVar23;
                if (uVar22 < uVar23 || iVar3 == 0) {
                  iVar3 = uVar23 - uVar22;
                }
              }
              lVar2 = (ulonglong)*(uint *)(iVar24 + 0x94) * (ulonglong)*(uint *)(iVar25 + 0x3c);
              uVar22 = (uint)lVar2;
              if ((int)((ulonglong)lVar2 >> 0x20) != 0) {
                uVar22 = 0xffffffff;
              }
              if (uVar22 <= (uint)(iVar3 + *(int *)(iVar24 + 0x70))) goto LAB_0138ee88;
            }
          }
          else {
LAB_0138ee90:
            uVar27 = FUN_0138f9cc(param_1);
            if ((uVar27 & 1) == 0) {
              uVar22 = *(uint *)(iVar25 + 0x27c) & 0x1f;
              iVar9 = *(int *)(iVar24 + 0x7c);
              uVar23 = 0x28000000;
              iVar3 = 1 << uVar22;
              if ((*(byte *)(piVar4 + 2) & 1) == 0) {
                uVar23 = 0x20000000;
              }
              if ((uint)(*(int *)(iVar24 + 0x74) - iVar9) < (uint)(1 << uVar22)) {
                FUN_013c4434(piVar8,iVar9,iVar3,4,4);
                iVar9 = *(int *)(iVar24 + 0x7c);
              }
              iVar5 = *(int *)(iVar24 + 0x78);
              uVar23 = uVar23 | (uint)(uVar27 >> 0x20);
              do {
                *(undefined4 *)(iVar5 + iVar9 * 4) = 0x80000000;
                iVar9 = iVar9 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
              *(int *)(iVar24 + 0x7c) = iVar9;
              iVar3 = thunk_FUN_016dd50a(iVar16,"",0x20);
              if (iVar3 != 0) {
                uVar22 = *(uint *)(iVar25 + 0x27c) & 0x1f;
                local_30 = (uint *)(1 << uVar22);
                if (0x1a < uVar22) {
                  puVar15 = &DAT_01893000;
LAB_0138f758:
                  local_2c = (code *)0x0;
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_01893030,puVar15);
                }
                if (uVar23 != ((uint)local_30 | 0x40000000)) {
                  if (uVar22 == 0x1a) {
                    puVar15 = &DAT_01893010;
                    local_30 = (uint *)0x8000000;
                    goto LAB_0138f758;
                  }
                  uVar22 = 2 << uVar22 | 0x20000000;
                  if (uVar23 != uVar22) {
                    iVar3 = 0;
                    for (uVar11 = 0; uVar11 != 0x100; uVar11 = uVar11 + 1) {
                      puVar12 = (uint *)(iVar16 + (uVar11 >> 3 & 0xfffffff0));
                      local_b0[3] = puVar12[3];
                      local_b0[0] = *puVar12;
                      local_b0[1] = puVar12[1];
                      local_b0[2] = puVar12[2];
                      local_94 = 0;
                      local_98 = 0;
                      local_9c = 0;
                      local_a0 = 0;
                      if ((*(uint *)((int)local_b0 + ((uVar11 & 0x60) >> 3)) >> (uVar11 & 0x1f) & 1)
                          != 0) {
                        if (0xff < uVar11) break;
                        FUN_0138fac8(iVar25,iVar24,uVar23,iVar3,uVar22);
                      }
                      iVar3 = iVar3 + 0x100;
                    }
                  }
                }
              }
              *(int *)(iVar24 + 0x68) = *(int *)(iVar24 + 0x68) + iVar7;
              do {
                iVar3 = *piVar4;
                bVar18 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar18);
              *piVar4 = iVar3 + 1;
              if (iVar3 < 0) goto LAB_0138f7c0;
              iVar3 = *(int *)(iVar24 + 0x94);
              if (iVar3 == *(int *)(iVar24 + 0x8c)) {
                FUN_013c3fcc(piVar10);
              }
              *(undefined8 *)(*(int *)(iVar24 + 0x90) + iVar3 * 8) = uVar26;
              *(int *)(iVar24 + 0x94) = iVar3 + 1;
              FUN_013d1914(iVar24,piVar4,iVar7,uVar23);
              local_44[1] = 0x80000000;
              local_44[0] = uVar23;
              if (uVar19 == 0x80000000) {
                uVar19 = *(uint *)(iVar25 + 0x27c) & 0x1f;
                local_30 = (uint *)(1 << uVar19);
                if (0x1a < uVar19) {
                  puVar15 = &DAT_01893000;
LAB_0138f6a8:
                  local_2c = (code *)0x0;
                  puVar17 = &DAT_01893030;
                  goto LAB_0138f6bc;
                }
                local_44[2] = (uint)local_30 | 0x40000000;
                if (uVar21 == local_44[2]) {
                  if (uVar19 == 0x1a) {
                    puVar15 = &DAT_01893010;
                    local_30 = (uint *)0x8000000;
                    local_44[2] = 0x44000000;
                    goto LAB_0138f6a8;
                  }
                  local_38[0] = 2 << uVar19 | 0x20000000;
                  if (uVar23 == local_38[0]) {
                    iVar3 = iVar25 + 0x158;
                    bVar18 = false;
                    cVar14 = '\0';
                    uVar19 = 0;
LAB_0138f080:
                    if (uVar19 < 0x100) {
                      cVar20 = *(char *)(iVar3 + uVar19);
                      uVar22 = uVar19 + 1;
                      uVar11 = *(uint *)(iVar24 + 0x7c);
                      if (uVar11 != 0) goto LAB_0138f0ec;
LAB_0138f4b0:
                      local_38[1] = 0x80000000;
                      local_30 = local_38 + 1;
                      local_2c = FUN_0138fd1c;
                    /* WARNING: Subroutine does not return */
                      FUN_00faa478(&DAT_0057b079,&local_30,&DAT_01892f90);
                    }
LAB_0138f108:
                    if (uVar19 != 0xffffffff) {
                      uVar11 = *(uint *)(iVar24 + 0x7c);
                      if (uVar11 != 0) {
                        uVar19 = *(byte *)(iVar25 + 599) + 1;
                        uVar22 = 0xffffffff;
                        if (uVar19 < uVar11) {
                          do {
                            local_38[1] = 0x80000000;
                            *(undefined4 *)(*(int *)(iVar24 + 0x78) + uVar19 * 4) = 0x80000000;
                            uVar19 = uVar22;
                            if (!bVar18) goto LAB_0138f080;
                            uVar19 = uVar22 - 1;
                            if (uVar22 < 0x101) {
                              uVar22 = 0x100;
                            }
                            do {
                              uVar11 = uVar19;
                              uVar19 = uVar22;
                              if (uVar11 - uVar22 == -1) goto LAB_0138f108;
                              uVar19 = uVar11 + 1;
                              cVar20 = *(char *)(iVar3 + uVar11 + 1);
                            } while (cVar14 == cVar20);
                            uVar22 = uVar11 + 2;
                            uVar11 = *(uint *)(iVar24 + 0x7c);
                            if (uVar11 == 0) goto LAB_0138f4b0;
LAB_0138f0ec:
                            bVar18 = true;
                            uVar19 = (uint)*(byte *)(iVar3 + (uVar19 & 0xff));
                            cVar14 = cVar20;
                          } while (uVar19 < uVar11);
                        }
                        local_38[1] = 0x80000000;
                    /* WARNING: Subroutine does not return */
                        FUN_00faa4a4(uVar19,uVar11,&DAT_01892fb0);
                      }
                      goto LAB_0138f4b0;
                    }
                    bVar18 = false;
                    cVar14 = '\0';
                    uVar19 = 0;
                    do {
                      if (bVar18) {
                        uVar22 = uVar19;
                        if (uVar19 < 0x101) {
                          uVar22 = 0x100;
                        }
                        uVar19 = uVar19 - 1;
                        do {
                          uVar11 = uVar19;
                          uVar19 = uVar22;
                          if (uVar11 - uVar22 == -1) goto LAB_0138f1a4;
                          uVar19 = uVar11 + 1;
                          cVar20 = *(char *)(iVar3 + uVar11 + 1);
                        } while (cVar14 == cVar20);
                        uVar11 = uVar11 + 2;
                        uVar22 = 0;
                        bVar18 = true;
                        cVar14 = cVar20;
                      }
                      else if (uVar19 < 0x100) {
                        cVar14 = *(char *)(iVar3 + uVar19);
                        uVar11 = uVar19 + 1;
                        uVar22 = 0;
                        bVar18 = true;
                      }
                      else {
LAB_0138f1a4:
                        if (uVar19 == 0xffffffff) {
                          bVar18 = false;
                          cVar14 = '\0';
                          uVar19 = 0;
                          do {
                            if (bVar18) {
                              uVar22 = uVar19;
                              if (uVar19 < 0x101) {
                                uVar22 = 0x100;
                              }
                              uVar19 = uVar19 - 1;
                              do {
                                uVar11 = uVar19;
                                uVar19 = uVar22;
                                if (uVar11 - uVar22 == -1) goto LAB_0138f260;
                                uVar19 = uVar11 + 1;
                                cVar20 = *(char *)(iVar3 + uVar11 + 1);
                              } while (cVar14 == cVar20);
                              uVar11 = uVar11 + 2;
                              uVar22 = 0;
                              bVar18 = true;
                              cVar14 = cVar20;
                            }
                            else if (uVar19 < 0x100) {
                              cVar14 = *(char *)(iVar3 + uVar19);
                              uVar11 = uVar19 + 1;
                              uVar22 = 0;
                              bVar18 = true;
                            }
                            else {
LAB_0138f260:
                              if (uVar19 == 0xffffffff) {
                                FUN_013d1914(iVar24,piVar4,iVar7,uVar21);
                                return;
                              }
                              uVar11 = 0xffffffff;
                              uVar22 = 1;
                              uVar19 = (uint)*(byte *)(iVar25 + 599) * 0x10000 + 0x10001 >> 8;
                            }
                            FUN_0138fac8(iVar25,iVar24,uVar23,uVar22 | uVar19 << 8,uVar23);
                            uVar19 = uVar11;
                          } while( true );
                        }
                        uVar11 = 0xffffffff;
                        uVar22 = 1;
                        uVar19 = (uint)*(byte *)(iVar25 + 599) * 0x10000 + 0x10001 >> 8;
                      }
                      FUN_0138fac8(iVar25,iVar24,uVar21,uVar22 | uVar19 << 8,uVar21);
                      uVar19 = uVar11;
                    } while( true );
                  }
                  puVar13 = local_38;
                  puVar12 = local_44;
                  puVar15 = &DAT_01892f40;
                }
                else {
                  puVar13 = local_44 + 2;
                  puVar12 = &local_48;
                  puVar15 = &DAT_01892f30;
                }
              }
              else {
                puVar13 = local_44 + 1;
                puVar12 = &local_4c;
                puVar15 = &DAT_01892f20;
              }
              FUN_013bca38(puVar12,puVar13,puVar15);
LAB_0138f7c0:
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xfdee,0x138f7c0);
              (*pcVar1)();
            }
          }
          DataMemoryBarrier(0xb);
          do {
            iVar25 = *piVar4;
            bVar18 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar18);
          *piVar4 = iVar25 + -1;
          if (iVar25 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0143daec(piVar4,iVar7);
          }
          puVar15 = &DAT_01892f10;
          puVar17 = &DAT_01893020;
          goto LAB_0138f6bc;
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar25 = *piVar4;
        bVar18 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar18);
      *piVar4 = iVar25 + -1;
      if (iVar25 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(piVar4,iVar7);
      }
      puVar15 = &DAT_01892f00;
      puVar17 = &DAT_01893020;
      goto LAB_0138f6bc;
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar25 = *piVar4;
    bVar18 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar18);
  *piVar4 = iVar25 + -1;
  if (iVar25 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(piVar4,iVar7);
  }
  puVar15 = &DAT_01892ef0;
  puVar17 = &DAT_01893020;
LAB_0138f6bc:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,puVar17,puVar15);
}

