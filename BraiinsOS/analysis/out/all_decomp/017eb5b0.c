// FUN_017eb5b0 @ 017eb5b0 size=2912 calls_out=5 calls_in=0
// strings: 

void FUN_017eb5b0(int param_1,int *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  char *pcVar8;
  uint extraout_r1;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  char *pcVar20;
  char *unaff_r5;
  char *pcVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  int iVar27;
  undefined8 uVar28;
  uint local_94;
  char *local_70;
  uint *local_68;
  char *local_58;
  char *local_4c;
  char *local_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar17 = (uint *)((int)param_4 + param_5);
  local_2c = DAT_018ddaf8;
  puVar25 = puVar17 + -2;
  pcVar8 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  puVar6 = (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc));
  puVar26 = param_4;
  if (param_4 == puVar6) {
    puVar26 = (uint *)((int)param_4 + 1);
  }
  pcVar9 = (char *)((int)puVar26 + (-*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)));
  uVar7 = *(uint *)(param_1 + 0x18);
  if (pcVar9 <= pcVar8) {
    pcVar8 = pcVar9;
  }
  if (uVar7 != 0) {
    pcVar8 = pcVar9;
  }
  pcVar9 = (char *)param_3[1];
  uVar10 = *(uint *)(param_1 + 200);
  pcVar11 = (char *)*param_3;
  local_4c = pcVar11;
  if (pcVar9 <= pcVar8) {
    local_58 = pcVar9;
    if (pcVar11 <= pcVar8) {
      pcVar21 = (char *)0x0;
      if (puVar25 <= puVar26) {
        unaff_r5 = (char *)0x0;
      }
      *(undefined4 *)(param_1 + 0xdc) = 0;
      if (puVar26 < puVar25) {
        unaff_r5 = (char *)0x0;
        local_94 = 0;
        goto LAB_017eb6d4;
      }
      goto LAB_017ec034;
    }
    *(undefined4 *)(param_1 + 0xdc) = 0;
    if (puVar26 < puVar25) {
      pcVar21 = (char *)0x0;
      goto LAB_017eb690;
    }
    pcVar9 = (char *)0x0;
    goto LAB_017ebb78;
  }
  pcVar21 = pcVar9;
  if (pcVar8 < pcVar11) {
    *(undefined4 *)(param_1 + 0xdc) = 0;
    if (puVar26 < puVar25) {
      local_58 = (char *)0x0;
LAB_017eb690:
      local_94 = (uint)(pcVar11 != (char *)0x0);
      local_4c = (char *)0x0;
      unaff_r5 = pcVar11;
LAB_017eb6d4:
      puVar18 = (uint *)((int)puVar17 + -3);
LAB_017eb990:
      pcVar8 = local_4c;
      if (local_4c != (char *)0x0) {
        pcVar8 = (char *)0x1;
      }
      if (*(int *)((int)puVar26 + (1 - (int)local_4c)) == *(int *)((int)puVar26 + 1)) {
        uVar7 = (uint)pcVar8 & 1;
      }
      else {
        uVar7 = 0;
      }
      pcVar9 = (char *)0x0;
      if (uVar7 != 0) {
        puVar24 = (uint *)((int)puVar26 + 5);
        puVar13 = (uint *)((int)puVar26 + (5 - (int)local_4c));
        if (puVar24 < puVar18) {
          uVar7 = *(uint *)((int)puVar26 + (5 - (int)local_4c));
          if (uVar7 == *(uint *)((int)puVar26 + 5)) {
            puVar16 = (uint *)((int)puVar26 + 9);
            while( true ) {
              puVar13 = puVar13 + 1;
              if (puVar18 <= puVar16) break;
              if (*puVar13 != *puVar16) {
                uVar7 = *puVar13 ^ *puVar16;
                bVar3 = (byte)uVar7;
                bVar4 = (byte)(uVar7 >> 8);
                bVar5 = (byte)(uVar7 >> 0x10);
                bVar1 = (byte)(uVar7 >> 0x18);
                pcVar9 = (char *)((int)puVar16 +
                                 (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3) -
                                 (int)puVar24));
                goto LAB_017eb9f8;
              }
              puVar16 = puVar16 + 1;
            }
            goto LAB_017ebc1c;
          }
          uVar7 = uVar7 ^ *(uint *)((int)puVar26 + 5);
          bVar3 = (byte)uVar7;
          bVar4 = (byte)(uVar7 >> 8);
          bVar5 = (byte)(uVar7 >> 0x10);
          bVar1 = (byte)(uVar7 >> 0x18);
          pcVar9 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                           | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                          << 1 | bVar3 >> 4 & 1) << 1 |
                                                        bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1
                                                      | bVar3 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                           | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                          << 1 | bVar4 >> 4 & 1) << 1 |
                                                        bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1
                                                      | bVar4 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3);
        }
        else {
          puVar16 = puVar24;
LAB_017ebc1c:
          if (puVar16 < (uint *)((int)puVar17 + -1)) {
            if ((short)*puVar13 == (short)*puVar16) {
              puVar13 = (uint *)((int)puVar13 + 2);
              puVar16 = (uint *)((int)puVar16 + 2);
            }
          }
          if ((puVar16 < puVar17) && ((char)*puVar13 == (char)*puVar16)) {
            puVar16 = (uint *)((int)puVar16 + 1);
          }
          pcVar9 = (char *)((int)puVar16 - (int)puVar24);
        }
LAB_017eb9f8:
        pcVar9 = pcVar9 + 4;
      }
      local_40 = 999999999;
      if (uVar10 == 5) {
        uVar28 = FUN_017c03ac(param_1,puVar26,puVar17,&local_40);
      }
      else if (uVar10 < 6) {
        uVar28 = FUN_017bfc44();
      }
      else {
        uVar28 = FUN_017bff9c();
      }
      uVar7 = (uint)((ulonglong)uVar28 >> 0x20);
      pcVar11 = (char *)uVar28;
      local_44 = local_58;
      local_70 = pcVar8;
      if (pcVar9 < pcVar11) {
        if (pcVar11 < (char *)0x4) goto LAB_017ebb28;
        puVar13 = puVar26;
        pcVar9 = pcVar11;
        uVar23 = local_40;
        if (puVar26 < puVar25) goto LAB_017eb734;
        goto LAB_017eb850;
      }
      if ((char *)0x3 < pcVar9) {
        puVar13 = (uint *)((int)puVar26 + 1);
        if (puVar26 < puVar25) {
          local_40 = 1;
LAB_017eb734:
          local_68 = (uint *)((int)puVar26 + (9 - (int)local_4c));
          uVar23 = local_40;
          do {
            puVar24 = (uint *)((int)puVar26 + 1);
            pcVar11 = pcVar9;
            if (uVar23 == 0) {
              iVar27 = 0x20;
            }
            else {
              if (local_68[-2] == *puVar24) {
                uVar7 = (uint)pcVar8 & 1;
              }
              else {
                uVar7 = 0;
              }
              if (uVar7 == 0) {
                iVar27 = LZCOUNT(uVar23);
              }
              else {
                puVar12 = (uint *)((int)puVar26 + 5);
                puVar16 = local_68 + -1;
                if (puVar12 < puVar18) {
                  if (local_68[-1] == *(uint *)((int)puVar26 + 5)) {
                    puVar16 = local_68;
                    for (puVar26 = (uint *)((int)puVar26 + 9); puVar26 < puVar18;
                        puVar26 = puVar26 + 1) {
                      if (*puVar16 != *puVar26) {
                        uVar7 = *puVar16 ^ *puVar26;
                        bVar3 = (byte)uVar7;
                        bVar4 = (byte)(uVar7 >> 8);
                        bVar5 = (byte)(uVar7 >> 0x10);
                        bVar1 = (byte)(uVar7 >> 0x18);
                        pcVar20 = (char *)((int)puVar26 +
                                          (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                            bVar3 >> 1 & 1) << 1 |
                                                                           bVar3 >> 2 & 1) << 1 |
                                                                          bVar3 >> 3 & 1) << 1 |
                                                                         bVar3 >> 4 & 1) << 1 |
                                                                        bVar3 >> 5 & 1) << 1 |
                                                                       bVar3 >> 6 & 1) << 1 |
                                                                      bVar3 >> 7) << 0x18 |
                                                          (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                            bVar4 >> 1 & 1) << 1 |
                                                                           bVar4 >> 2 & 1) << 1 |
                                                                          bVar4 >> 3 & 1) << 1 |
                                                                         bVar4 >> 4 & 1) << 1 |
                                                                        bVar4 >> 5 & 1) << 1 |
                                                                       bVar4 >> 6 & 1) << 1 |
                                                                      bVar4 >> 7) << 0x10 |
                                                          (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                            bVar5 >> 1 & 1) << 1 |
                                                                           bVar5 >> 2 & 1) << 1 |
                                                                          bVar5 >> 3 & 1) << 1 |
                                                                         bVar5 >> 4 & 1) << 1 |
                                                                        bVar5 >> 5 & 1) << 1 |
                                                                       bVar5 >> 6 & 1) << 1 |
                                                                      bVar5 >> 7) << 8 |
                                                          (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                            bVar1 >> 1 & 1) << 1 |
                                                                           bVar1 >> 2 & 1) << 1 |
                                                                          bVar1 >> 3 & 1) << 1 |
                                                                         bVar1 >> 4 & 1) << 1 |
                                                                        bVar1 >> 5 & 1) << 1 |
                                                                       bVar1 >> 6 & 1) << 1 |
                                                                      bVar1 >> 7)) >> 3) -
                                          (int)puVar12));
                        goto LAB_017eb7b0;
                      }
                      puVar16 = puVar16 + 1;
                    }
                    goto LAB_017ebec4;
                  }
                  uVar7 = local_68[-1] ^ *(uint *)((int)puVar26 + 5);
                  bVar3 = (byte)uVar7;
                  bVar4 = (byte)(uVar7 >> 8);
                  bVar5 = (byte)(uVar7 >> 0x10);
                  bVar1 = (byte)(uVar7 >> 0x18);
                  pcVar20 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                     bVar3 >> 1 & 1) << 1 |
                                                                    bVar3 >> 2 & 1) << 1 |
                                                                   bVar3 >> 3 & 1) << 1 |
                                                                  bVar3 >> 4 & 1) << 1 |
                                                                 bVar3 >> 5 & 1) << 1 |
                                                                bVar3 >> 6 & 1) << 1 | bVar3 >> 7)
                                                   << 0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                               bVar4 >> 1 & 1) << 1
                                                                              | bVar4 >> 2 & 1) << 1
                                                                             | bVar4 >> 3 & 1) << 1
                                                                            | bVar4 >> 4 & 1) << 1 |
                                                                           bVar4 >> 5 & 1) << 1 |
                                                                          bVar4 >> 6 & 1) << 1 |
                                                                         bVar4 >> 7) << 0x10 |
                                                   (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                     bVar5 >> 1 & 1) << 1 |
                                                                    bVar5 >> 2 & 1) << 1 |
                                                                   bVar5 >> 3 & 1) << 1 |
                                                                  bVar5 >> 4 & 1) << 1 |
                                                                 bVar5 >> 5 & 1) << 1 |
                                                                bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                   << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                            bVar1 >> 1 & 1) << 1 |
                                                                           bVar1 >> 2 & 1) << 1 |
                                                                          bVar1 >> 3 & 1) << 1 |
                                                                         bVar1 >> 4 & 1) << 1 |
                                                                        bVar1 >> 5 & 1) << 1 |
                                                                       bVar1 >> 6 & 1) << 1 |
                                                                      bVar1 >> 7)) >> 3);
                }
                else {
                  puVar26 = puVar12;
LAB_017ebec4:
                  if (puVar26 < (uint *)((int)puVar17 + -1)) {
                    if ((short)*puVar16 == (short)*puVar26) {
                      puVar16 = (uint *)((int)puVar16 + 2);
                      puVar26 = (uint *)((int)puVar26 + 2);
                    }
                  }
                  if ((puVar26 < puVar17) && ((char)*puVar16 == (char)*puVar26)) {
                    puVar26 = (uint *)((int)puVar26 + 1);
                  }
                  pcVar20 = (char *)((int)puVar26 - (int)puVar12);
                }
LAB_017eb7b0:
                iVar27 = LZCOUNT(uVar23);
                if (pcVar20 < (char *)0xfffffffc &&
                    (int)(pcVar9 + -10) * 3 + iVar27 < (int)(pcVar20 + 4) * 3) {
                  uVar23 = 1;
                  iVar27 = 0x1f;
                  puVar13 = puVar24;
                  pcVar11 = pcVar20 + 4;
                }
              }
            }
            local_40 = 999999999;
            if (uVar10 == 5) {
              pcVar9 = (char *)FUN_017c03ac(param_1,puVar24,puVar17,&local_40);
            }
            else if (uVar10 < 6) {
              pcVar9 = (char *)FUN_017bfc44();
            }
            else {
              pcVar9 = (char *)FUN_017bff9c();
            }
            puVar26 = puVar13;
            if (pcVar9 < (char *)0x4 ||
                LZCOUNT(local_40) + (int)pcVar9 * 4 + -0x1f <= iVar27 + (int)pcVar11 * 4 + -0x1b)
            goto LAB_017eb850;
            local_68 = (uint *)((int)local_68 + 1);
            puVar26 = puVar24;
            uVar23 = local_40;
            if (puVar25 <= puVar24) goto LAB_017ec0dc;
            puVar13 = puVar24;
          } while( true );
        }
        uVar23 = 1;
        if (local_58 != (char *)0x0) {
          local_44 = (char *)0x1;
        }
        goto LAB_017eb870;
      }
LAB_017ebb28:
      uVar23 = ((uint)((int)puVar26 - (int)param_4) >> 8) + 1;
      puVar26 = (uint *)((int)puVar26 + uVar23);
      *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar23);
      pcVar9 = local_58;
      goto joined_r0x017ebb54;
    }
    *param_3 = pcVar11;
  }
  else {
    *(undefined4 *)(param_1 + 0xdc) = 0;
    if (puVar26 < puVar25) {
      unaff_r5 = (char *)0x0;
      local_58 = (char *)0x0;
      local_94 = 0;
      goto LAB_017eb6d4;
    }
    *param_3 = pcVar11;
  }
LAB_017ebfc4:
  local_58 = pcVar9;
LAB_017ebb8c:
  param_3[1] = local_58;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar17 - (int)param_4,uVar7,local_2c ^ DAT_018ddaf8,0);
  }
  return;
LAB_017ec0dc:
  pcVar11 = pcVar9;
LAB_017eb850:
  puVar13 = puVar26;
  if (uVar23 < 4) {
    if (local_58 != (char *)0x0) {
      local_44 = (char *)0x1;
    }
    pcVar9 = pcVar11;
  }
  else {
    if (param_4 < puVar26 && puVar6 < (uint *)((int)puVar26 + (3 - uVar23))) {
      puVar24 = (uint *)((int)puVar26 + (3 - uVar23));
      do {
        puVar24 = (uint *)((int)puVar24 + -1);
        puVar13 = (uint *)((int)puVar26 + -1);
        if (*(char *)puVar13 != *(char *)puVar24) {
          puVar13 = puVar26;
          break;
        }
        pcVar11 = pcVar11 + 1;
        puVar26 = puVar13;
      } while (param_4 < puVar13 && puVar6 < puVar24);
    }
    local_58 = local_4c;
    local_70 = (char *)0x1;
    local_4c = (char *)(uVar23 - 3);
    pcVar9 = pcVar11;
    local_44 = pcVar8;
  }
LAB_017eb870:
  uVar22 = (int)puVar13 - (int)param_4;
  puVar26 = (uint *)param_2[3];
  if (puVar17 + -8 < puVar13) {
    FUN_017bfa44(puVar26,param_4,puVar13);
    uVar7 = extraout_r1;
  }
  else {
    local_3c = *param_4;
    uVar7 = param_4[1];
    uStack_34 = param_4[2];
    uStack_30 = param_4[3];
    puVar26[3] = uStack_30;
    *puVar26 = local_3c;
    puVar26[1] = uVar7;
    puVar26[2] = uStack_34;
    iVar27 = param_2[3];
    if (uVar22 < 0x11) {
      param_2[3] = (int)(iVar27 + uVar22);
      puVar24 = (uint *)param_2[1];
      uStack_38 = uVar7;
      goto LAB_017eb8dc;
    }
    local_3c = param_4[4];
    uVar7 = param_4[5];
    uStack_34 = param_4[6];
    uStack_30 = param_4[7];
    *(uint *)(iVar27 + 0x10) = local_3c;
    *(uint *)(iVar27 + 0x14) = uVar7;
    *(uint *)(iVar27 + 0x18) = uStack_34;
    *(uint *)(iVar27 + 0x1c) = uStack_30;
    uStack_38 = uVar7;
    if (0x10 < (int)(uVar22 - 0x10)) {
      puVar26 = param_4 + 0x10;
      puVar24 = (uint *)(iVar27 + 0x20);
      do {
        uVar7 = puVar26[-7];
        uVar14 = puVar26[-6];
        puVar16 = puVar24 + 8;
        uVar19 = puVar26[-5];
        *puVar24 = puVar26[-8];
        puVar24[1] = uVar7;
        puVar24[2] = uVar14;
        puVar24[3] = uVar19;
        local_3c = puVar26[-4];
        uVar7 = puVar26[-3];
        uStack_34 = puVar26[-2];
        uStack_30 = puVar26[-1];
        puVar24[4] = local_3c;
        puVar24[5] = uVar7;
        puVar24[6] = uStack_34;
        puVar24[7] = uStack_30;
        puVar26 = puVar26 + 8;
        puVar24 = puVar16;
      } while (puVar16 < (uint *)(iVar27 + uVar22));
      uStack_38 = uVar7;
    }
  }
  param_2[3] = param_2[3] + uVar22;
  puVar24 = (uint *)param_2[1];
  if (0xffff < uVar22) {
    param_2[10] = (int)puVar24 - *param_2 >> 3;
    param_2[9] = 1;
  }
LAB_017eb8dc:
  *(short *)(puVar24 + 1) = (short)uVar22;
  *puVar24 = uVar23;
  if ((char *)0xffff < pcVar9 + -3) {
    param_2[10] = (int)puVar24 - *param_2 >> 3;
    uVar7 = 2;
    param_2[9] = 2;
  }
  *(short *)((int)puVar24 + 6) = (short)(pcVar9 + -3);
  puVar26 = (uint *)((int)puVar13 + (int)pcVar9);
  param_2[1] = (int)(puVar24 + 2);
  if (*(int *)(param_1 + 0xdc) != 0) {
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  if (puVar25 < puVar26) {
    pcVar8 = (char *)0x0;
  }
  else {
    pcVar8 = (char *)((uint)local_44 & 1);
  }
  if (pcVar8 == (char *)0x0) {
    pcVar8 = local_70;
    param_4 = puVar26;
    pcVar9 = local_58;
  }
  else {
    while (pcVar9 = local_58, *puVar26 == *(uint *)((int)puVar26 - (int)local_58)) {
      puVar24 = puVar26 + 1;
      puVar13 = (uint *)((int)puVar26 + (4 - (int)local_58));
      if (puVar24 < puVar18) {
        uVar7 = *(uint *)((int)puVar26 + (4 - (int)local_58));
        if (uVar7 == puVar26[1]) {
          puVar16 = puVar26 + 2;
          while( true ) {
            puVar13 = puVar13 + 1;
            if (puVar18 <= puVar16) break;
            if (*puVar13 != *puVar16) {
              uVar7 = *puVar13 ^ *puVar16;
              bVar3 = (byte)uVar7;
              bVar4 = (byte)(uVar7 >> 8);
              bVar5 = (byte)(uVar7 >> 0x10);
              bVar1 = (byte)(uVar7 >> 0x18);
              pcVar11 = (char *)((int)puVar16 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1
                                                                  ) << 1 | bVar3 >> 2 & 1) << 1 |
                                                                bVar3 >> 3 & 1) << 1 |
                                                               bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1
                                                              ) << 1 | bVar3 >> 6 & 1) << 1 |
                                                            bVar3 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar24));
              goto LAB_017ebdc4;
            }
            puVar16 = puVar16 + 1;
          }
          goto LAB_017ebf64;
        }
        uVar7 = uVar7 ^ puVar26[1];
        bVar3 = (byte)uVar7;
        bVar4 = (byte)(uVar7 >> 8);
        bVar5 = (byte)(uVar7 >> 0x10);
        bVar1 = (byte)(uVar7 >> 0x18);
        pcVar11 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                          | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                         << 1 | bVar3 >> 4 & 1) << 1 |
                                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 |
                                                     bVar3 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                          | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                         << 1 | bVar4 >> 4 & 1) << 1 |
                                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 |
                                                     bVar4 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        puVar16 = puVar24;
LAB_017ebf64:
        if (puVar16 < (uint *)((int)puVar17 + -1)) {
          if ((short)*puVar13 == (short)*puVar16) {
            puVar13 = (uint *)((int)puVar13 + 2);
            puVar16 = (uint *)((int)puVar16 + 2);
          }
        }
        if ((puVar16 < puVar17) && ((char)*puVar13 == (char)*puVar16)) {
          puVar16 = (uint *)((int)puVar16 + 1);
        }
        pcVar11 = (char *)((int)puVar16 - (int)puVar24);
      }
LAB_017ebdc4:
      puVar13 = (uint *)param_2[3];
      if (puVar17 + -8 < puVar26) {
        FUN_017bfa44(puVar13,puVar26,puVar26);
      }
      else {
        local_3c = *puVar26;
        uStack_38 = puVar26[1];
        uStack_34 = puVar26[2];
        uStack_30 = puVar26[3];
        *puVar13 = local_3c;
        puVar13[1] = uStack_38;
        puVar13[2] = uStack_34;
        puVar13[3] = uStack_30;
      }
      puVar15 = (undefined4 *)param_2[1];
      puVar26 = (uint *)((int)puVar26 + (int)(pcVar11 + 4));
      *(undefined2 *)(puVar15 + 1) = 0;
      uVar7 = 1;
      *puVar15 = 1;
      uVar2 = SUB42(pcVar11 + 1,0);
      param_4 = puVar26;
      if (pcVar11 + 1 < (char *)0x10000) {
        *(undefined2 *)((int)puVar15 + 6) = uVar2;
        param_2[1] = (int)(puVar15 + 2);
        if (local_4c == (char *)0x0 || puVar25 < puVar26) {
          pcVar9 = local_4c;
          local_4c = local_58;
          goto joined_r0x017ebb54;
        }
      }
      else {
        param_2[10] = (int)puVar15 - *param_2 >> 3;
        uVar7 = 2;
        param_2[9] = 2;
        *(undefined2 *)((int)puVar15 + 6) = uVar2;
        param_2[1] = (int)(puVar15 + 2);
        if (puVar25 < puVar26 || local_4c == (char *)0x0) {
          pcVar9 = local_4c;
          local_4c = local_58;
          goto joined_r0x017ebb54;
        }
      }
      local_58 = local_4c;
      local_4c = pcVar9;
    }
    pcVar8 = local_4c;
    param_4 = puVar26;
    if (local_4c != (char *)0x0) {
      pcVar8 = (char *)0x1;
    }
  }
joined_r0x017ebb54:
  local_58 = pcVar9;
  if (puVar25 <= puVar26) goto LAB_017ebb58;
  goto LAB_017eb990;
LAB_017ebb58:
  pcVar9 = unaff_r5;
  pcVar11 = local_4c;
  if ((local_94 & (uint)pcVar8) == 0) {
LAB_017ec034:
    pcVar9 = pcVar21;
    pcVar11 = unaff_r5;
    if (local_4c != (char *)0x0) {
      pcVar11 = local_4c;
    }
  }
LAB_017ebb78:
  local_4c = pcVar11;
  *param_3 = local_4c;
  if (local_58 != (char *)0x0) goto LAB_017ebb8c;
  goto LAB_017ebfc4;
}

