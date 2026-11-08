// FUN_016b0744 @ 016b0744 size=3000 calls_out=22 calls_in=2
// strings: /sys/class/uio/ | Invalid UIO mapping filename | invalid digit found in string | number too large to fit in target type | a Display implementation returned an error unexpectedly

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016b0744(uint *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *******pppppppcVar4;
  char *******pppppppcVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined1 *puVar13;
  int *piVar14;
  int *piVar15;
  undefined1 *puVar16;
  byte bVar17;
  int *extraout_r1;
  byte *pbVar18;
  uint uVar19;
  undefined1 *puVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  int *piVar26;
  uint *puVar27;
  uint uVar28;
  undefined1 *puVar29;
  undefined8 uVar30;
  undefined *local_14c;
  int *local_12c;
  int local_fc;
  int *local_f8;
  undefined1 local_f4;
  uint local_f0 [2];
  undefined1 *local_e8;
  uint local_e4;
  uint uStack_e0;
  uint local_dc;
  int *piStack_d8;
  undefined4 uStack_d4;
  int *piStack_d0;
  int *piStack_cc;
  int local_c8;
  char *******local_c4;
  int *local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int *local_b0;
  undefined4 local_ac;
  int *local_a8;
  undefined1 auStack_a4 [12];
  undefined4 local_98;
  int *local_94;
  undefined4 uStack_90;
  char *******local_88;
  int *local_84;
  undefined4 local_80;
  undefined4 local_68;
  int *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int *local_58;
  undefined4 uStack_54;
  int *local_50;
  undefined4 local_4c;
  int *local_44;
  int local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  
  local_fc = param_2;
  FUN_015f5c04(&local_68,"/sys/class/uio/",0xf);
  puVar27 = param_1 + 1;
  if (local_68 == (char *******)&DAT_00000001) {
    *(undefined1 *)(param_1 + 2) = (undefined1)local_60;
    *(undefined1 *)((int)param_1 + 0xb) = local_60._3_1_;
    *(undefined2 *)((int)param_1 + 9) = local_60._1_2_;
    *param_1 = 1;
    param_1[1] = (uint)local_64;
    return;
  }
  local_f4 = (undefined1)local_60;
  puVar9 = (uint *)((uint)&local_68 | 4);
  local_f8 = local_64;
  while( true ) {
    FUN_016056c8(local_f0,&local_f8);
    piVar12 = piStack_d0;
    puVar13 = local_e8;
    if ((local_f0[0] & 1) == 0) {
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *local_f8;
        bVar8 = (bool)hasExclusiveAccess(local_f8);
      } while (!bVar8);
      *local_f8 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015f4880(local_f8);
      }
      local_64 = (int *)&LAB_01110b14;
      local_68 = (char *******)&local_fc;
      FUN_00600d2c(auStack_a4,&DAT_0058a03e,&local_68);
      FUN_01650c14(puVar27,0,auStack_a4);
      *param_1 = 1;
      return;
    }
    if (local_e8 == (undefined1 *)0x0) {
      *param_1 = 1;
      *puVar27 = local_e4;
      param_1[2] = uStack_e0;
      goto LAB_016b0a24;
    }
    local_5c = local_dc;
    local_58 = piStack_d8;
    uStack_54 = uStack_d4;
    local_50 = piStack_d0;
    local_4c = piStack_cc;
    local_68 = (char *******)local_e8;
    *puVar9 = local_e4;
    puVar9[1] = uStack_e0;
    FUN_015ed628(&local_c8,piStack_d0[3],piStack_d0[4],local_e8,local_e4 - 1);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar12;
      bVar8 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar8);
    *piVar12 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015f4880(local_50);
    }
    *puVar13 = 0;
    if (local_64 != (int *)0x0) {
      thunk_FUN_016d3fb4(puVar13);
    }
    piVar12 = local_c0;
    pppppppcVar4 = local_c4;
    local_84 = local_c0;
    local_88 = local_c4;
    local_64 = (int *)&LAB_016040f8;
    local_68 = (char *******)&local_88;
    FUN_00600d2c(&local_bc,&DAT_0059791a,&local_68);
    uVar11 = local_b8;
    FUN_015ec424(&local_68,local_b8,local_b4);
    if (local_bc != 0) {
      thunk_FUN_016d3fb4(uVar11);
    }
    piVar6 = local_64;
    pppppppcVar5 = local_68;
    if (local_68 == (char *******)&DAT_80000000) {
      *param_1 = 1;
      *puVar27 = (uint)local_64;
      param_1[2] = (uint)local_60;
      goto LAB_016b0a10;
    }
    uVar30 = FUN_010ceb84();
    if (((int)((ulonglong)uVar30 >> 0x20) == *(int *)(local_fc + 8)) &&
       (iVar10 = thunk_FUN_016dd50a((int)uVar30,*(undefined4 *)(local_fc + 4)), iVar10 == 0)) break;
    if (pppppppcVar5 != (char *******)0x0) {
      thunk_FUN_016d3fb4(piVar6);
    }
    if (local_c8 != 0) {
      thunk_FUN_016d3fb4(pppppppcVar4);
    }
  }
  if (piVar12 == (int *)0x0) {
    bVar8 = false;
  }
  else {
    bVar8 = *(char *)pppppppcVar4 == '/';
  }
  local_60 = (undefined1 *)CONCAT31(local_60._1_3_,6);
  local_64 = piVar12;
  local_68 = pppppppcVar4;
  local_4c = (int *)CONCAT22(CONCAT11(local_4c._3_1_,bVar8),0x201);
  FUN_015c7164(&local_88,&local_68);
  if ((char)local_88 == '\t') {
    FUN_006008c8(&local_b0,local_84,local_80);
    if ((int)local_a8 < 0) {
      uVar11 = 0;
      local_a8 = extraout_r1;
LAB_016b0ae0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar11,local_a8);
    }
    if (local_a8 == (int *)0x0) {
      iVar10 = 1;
      FUN_016dd1aa(1,local_ac,0);
      local_12c = (int *)0x0;
    }
    else {
      iVar10 = thunk_FUN_016d4a50(local_a8);
      if (iVar10 == 0) {
        uVar11 = 1;
        goto LAB_016b0ae0;
      }
      FUN_016dd1aa(iVar10,local_ac,local_a8);
      piVar12 = (int *)0x0;
      do {
        bVar17 = *(byte *)(iVar10 + (int)piVar12);
        if (bVar17 - 0x41 < 0x1a) {
          bVar17 = bVar17 | 0x20;
        }
        *(byte *)(iVar10 + (int)piVar12) = bVar17;
        piVar12 = (int *)((int)piVar12 + 1);
      } while (local_a8 != piVar12);
      local_12c = local_a8;
    }
    FUN_00fb6cfc(&local_68,iVar10,local_a8,"uio",3);
    piVar12 = local_a8;
    if (local_68 == (char *******)&DAT_00000001) {
      if (local_4c != local_34) {
        puVar13 = (undefined1 *)((int)local_2c + -1);
        piVar14 = local_2c;
        if (local_2c < local_58) {
          piVar14 = local_58;
        }
        puVar29 = (undefined1 *)(local_38 + (int)local_4c);
        local_14c = &DAT_018aeb20;
        piVar12 = local_4c;
LAB_016b0c68:
        piVar21 = (int *)((int)piVar12 + (int)puVar13);
        if (piVar21 < local_34) {
          piVar15 = (int *)((int)piVar12 + (int)local_2c);
          puVar16 = (undefined1 *)((int)piVar12 + (1 - (int)local_58));
          piVar26 = piVar12;
          if (local_44 != (int *)0xffffffff) {
LAB_016b0cc4:
            if (piVar12 == piVar26) {
              uVar19 = *(byte *)(local_38 + (int)piVar21) & 0x3f;
              uVar22 = (uint)local_60 >> uVar19 | local_5c << (0x20 - uVar19 & 0xff);
              if (-1 < (int)(uVar19 - 0x20)) {
                uVar22 = local_5c >> (uVar19 - 0x20 & 0xff);
              }
              if ((uVar22 & 1) == 0) {
                local_44 = (int *)0x0;
                piVar26 = piVar15;
              }
              else {
                piVar21 = local_58;
                if (local_58 < local_44) {
                  piVar21 = local_44;
                }
                piVar26 = local_2c;
                piVar7 = piVar21;
                if (local_2c < piVar21) {
                  piVar26 = piVar21;
                }
                do {
                  piVar25 = piVar7;
                  if (piVar26 == piVar25) {
                    piVar21 = local_58;
                    goto LAB_016b0d5c;
                  }
                  if (local_34 <= (int *)((int)piVar12 + (int)piVar25)) goto LAB_016b12a4;
                  piVar7 = (int *)((int)piVar25 + 1);
                } while (*(char *)(local_30 + (int)piVar25) == puVar29[(int)piVar25]);
                piVar26 = (int *)(puVar16 + (int)piVar25);
                local_44 = (int *)0x0;
              }
              goto LAB_016b0cb4;
            }
            goto LAB_016b0f20;
          }
LAB_016b0db8:
          if (piVar12 == piVar26) {
            uVar19 = *(byte *)(local_38 + (int)piVar21) & 0x3f;
            uVar22 = (uint)local_60 >> uVar19 | local_5c << (0x20 - uVar19 & 0xff);
            if (-1 < (int)(uVar19 - 0x20)) {
              uVar22 = local_5c >> (uVar19 - 0x20 & 0xff);
            }
            piVar26 = piVar15;
            if ((uVar22 & 1) != 0) {
              iVar23 = -1;
              puVar20 = puVar29;
              iVar24 = local_30;
              piVar21 = piVar12;
              piVar26 = piVar14;
              do {
                if (local_58 == piVar26) {
                  piVar21 = (int *)((int)local_58 + -1);
                  goto LAB_016b0e50;
                }
                if (local_34 <= (int *)((int)local_58 + (int)piVar21)) {
                  piVar21 = local_58;
LAB_016b12a4:
                  piVar26 = (int *)((int)piVar21 + (int)piVar12);
                  if ((int *)((int)piVar21 + (int)piVar12) < local_34) {
                    piVar26 = local_34;
                  }
                  local_14c = &DAT_018aeb30;
                  goto LAB_016b12d8;
                }
                pcVar1 = puVar20 + (int)local_58;
                iVar23 = iVar23 + 1;
                pcVar2 = (char *)(iVar24 + (int)local_58);
                piVar26 = (int *)((int)piVar26 + -1);
                piVar21 = (int *)((int)piVar21 + 1);
                puVar20 = puVar20 + 1;
                iVar24 = iVar24 + 1;
              } while (*pcVar2 == *pcVar1);
              piVar26 = (int *)((int)local_58 + (int)(puVar16 + iVar23));
            }
            goto LAB_016b0da8;
          }
        }
LAB_016b0f20:
      }
    }
    else if (local_5c._2_1_ == '\0') {
      if (local_64 == local_34) {
        if ((local_64 != (int *)0x0) && (local_64 < local_34)) {
          cVar3 = *(char *)(local_38 + (int)local_64);
          goto joined_r0x016b0f58;
        }
      }
      else {
        if (local_64 == (int *)0x0) {
          piVar12 = (int *)0x0;
          if ((local_5c & 1) != 0) {
            piVar12 = local_64;
          }
          goto LAB_016b0fbc;
        }
        if (local_34 <= local_64) goto LAB_016b12f0;
        cVar3 = *(char *)(local_38 + (int)local_64);
        piVar12 = local_64;
joined_r0x016b0f58:
        if (cVar3 < -0x40) {
LAB_016b12f0:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(local_38,local_34,local_64,local_34,&DAT_018aeb58);
        }
      }
      if ((local_5c & 1) != 0) {
      }
    }
LAB_016b0fbc:
    uVar22 = (int)local_a8 - (int)piVar12;
    if (uVar22 == 0) {
      iVar24 = 0;
LAB_016b1144:
      local_80 = 0;
      local_84 = (int *)&DAT_00000001;
      local_88 = (char *******)0x0;
      local_5c = 0;
      local_60 = &DAT_60000020;
      local_68 = (char *******)&local_88;
      local_64 = (int *)&DAT_018aea90;
      iVar24 = FUN_00faace8(&local_68,*(undefined4 *)(&DAT_018b5b38 + iVar24 * 4),
                            *(undefined4 *)("&" + iVar24 * 4));
      if (iVar24 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_98,
                     &DAT_018aeaa8,&DAT_018af130);
      }
      local_98 = local_88;
      local_94 = local_84;
      uStack_90 = local_80;
      FUN_01650c14(&local_68,0x14,&local_98);
      *(undefined1 *)(param_1 + 1) = (undefined1)local_68;
      *param_1 = 1;
      *(undefined2 *)((int)param_1 + 5) = local_68._1_2_;
      *(undefined1 *)((int)param_1 + 7) = local_68._3_1_;
      param_1[2] = (uint)local_64;
      if (local_12c != (int *)0x0) {
        thunk_FUN_016d3fb4(iVar10);
      }
      if (((uint)local_b0 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_ac);
      }
    }
    else {
      pbVar18 = (byte *)(iVar10 + (int)piVar12);
      if (uVar22 == 1) {
        bVar17 = *pbVar18;
        iVar24 = 1;
        if ((bVar17 == 0x2b) || (bVar17 == 0x2d)) goto LAB_016b1144;
      }
      else {
        bVar17 = *pbVar18;
      }
      if (bVar17 == 0x2b) {
        pbVar18 = pbVar18 + 1;
        uVar22 = uVar22 - 1;
      }
      if (uVar22 < 9) {
        piVar12 = (int *)0x0;
        for (; uVar22 != 0; uVar22 = uVar22 - 1) {
          bVar17 = *pbVar18;
          if (9 < bVar17 - 0x30) {
LAB_016b1140:
            iVar24 = 1;
            goto LAB_016b1144;
          }
          pbVar18 = pbVar18 + 1;
          piVar12 = (int *)((bVar17 - 0x30) + (int)piVar12 * 10);
        }
      }
      else {
        piVar12 = (int *)0x0;
        while (uVar22 != 0) {
          uVar19 = (uint)(ZEXT48(piVar12) * 10);
          if ((int)(ZEXT48(piVar12) * 10 >> 0x20) != 0) {
            iVar24 = 1;
            if (*pbVar18 - 0x30 < 10) {
              iVar24 = 2;
            }
            goto LAB_016b1144;
          }
          uVar28 = *pbVar18 - 0x30;
          if (9 < uVar28) goto LAB_016b1140;
          piVar12 = (int *)(uVar28 + uVar19);
          uVar22 = uVar22 - 1;
          pbVar18 = pbVar18 + 1;
          if (CARRY4(uVar28,uVar19)) {
            iVar24 = 2;
            goto LAB_016b1144;
          }
        }
      }
      if (local_12c != (int *)0x0) {
        thunk_FUN_016d3fb4(iVar10);
      }
      if (((uint)local_b0 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_ac);
      }
      local_64 = (int *)&LAB_00fac484;
      local_68 = (char *******)&local_b0;
      local_b0 = piVar12;
      FUN_00600d2c(&local_88,&DAT_0058fa57,&local_68);
      local_68 = (char *******)0x0;
      local_5c = local_5c & 0xffff0000;
      local_64 = (int *)&DAT_000001b6;
      local_60 = (undefined1 *)0x101;
      FUN_016b15c4(&local_98,&local_68,&local_88);
      if ((char)local_98 != '\x04') {
        *(char *)(param_1 + 1) = (char)local_98;
        *(undefined1 *)((int)param_1 + 7) = local_98._3_1_;
        *(undefined2 *)((int)param_1 + 5) = local_98._1_2_;
        piVar12 = local_94;
      }
      else {
        param_1[1] = (uint)local_94;
        piVar12 = local_b0;
      }
      *param_1 = (uint)((char)local_98 != '\x04');
      param_1[2] = (uint)piVar12;
    }
  }
  else {
    FUN_015e79d4(&local_68,0x14,"Invalid UIO mapping filename",0x1c);
    *param_1 = 1;
    param_1[1] = (uint)local_68;
    param_1[2] = (uint)local_64;
  }
  if (pppppppcVar5 != (char *******)0x0) {
    thunk_FUN_016d3fb4(piVar6);
  }
LAB_016b0a10:
  if (local_c8 != 0) {
    thunk_FUN_016d3fb4(pppppppcVar4);
  }
LAB_016b0a24:
  DataMemoryBarrier(0xb);
  do {
    iVar10 = *local_f8;
    bVar8 = (bool)hasExclusiveAccess(local_f8);
  } while (!bVar8);
  *local_f8 = iVar10 + -1;
  if (iVar10 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015f4880(local_f8);
    return;
  }
  return;
  while( true ) {
    piVar21 = (int *)((int)piVar21 + -1);
    if (local_2c <= piVar21) goto LAB_016b12c8;
    piVar26 = (int *)((int)piVar21 + (int)piVar12);
    if (local_34 <= piVar26) goto LAB_016b12d8;
    if (*(char *)(local_30 + (int)piVar21) != *(char *)(local_38 + (int)piVar26)) break;
LAB_016b0d5c:
    if (piVar21 <= local_44) {
      local_44 = (int *)0x0;
      goto LAB_016b0e94;
    }
  }
  piVar26 = (int *)((int)piVar12 + (int)local_50);
  local_44 = (int *)((int)local_2c - (int)local_50);
LAB_016b0cb4:
  piVar21 = (int *)((int)piVar26 + (int)puVar13);
  if (local_34 <= piVar21) goto LAB_016b0f20;
  goto LAB_016b0cc4;
LAB_016b0e50:
  if (piVar21 != (int *)0xffffffff) {
    if ((int *)((int)local_58 + -1) < local_2c) {
      piVar26 = (int *)((int)piVar12 + (int)piVar21);
      if (piVar26 < local_34) goto code_r0x016b0e6c;
    }
    else {
LAB_016b12c8:
      local_14c = &DAT_018aeb10;
      local_34 = local_2c;
      piVar26 = piVar21;
    }
LAB_016b12d8:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(piVar26,local_34,local_14c);
  }
  local_44 = (int *)0xffffffff;
LAB_016b0e94:
  puVar29 = puVar29 + (int)local_2c;
  piVar12 = piVar15;
  if (piVar15 == local_34) {
    piVar12 = local_a8;
    goto LAB_016b0fbc;
  }
  goto LAB_016b0c68;
code_r0x016b0e6c:
  pcVar1 = puVar29 + (int)piVar21;
  pcVar2 = (char *)(local_30 + (int)piVar21);
  piVar21 = (int *)((int)piVar21 + -1);
  if (*pcVar2 != *pcVar1) goto code_r0x016b0e80;
  goto LAB_016b0e50;
code_r0x016b0e80:
  piVar26 = (int *)((int)piVar12 + (int)local_50);
LAB_016b0da8:
  piVar21 = (int *)((int)piVar26 + (int)puVar13);
  if (local_34 <= piVar21) goto LAB_016b0f20;
  goto LAB_016b0db8;
}

