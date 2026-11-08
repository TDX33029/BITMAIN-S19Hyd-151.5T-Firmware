// FUN_015eb2b4 @ 015eb2b4 size=3348 calls_out=15 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x015eb7f0) */
/* WARNING: Removing unreachable block (ram,0x015eb7f4) */
/* WARNING: Removing unreachable block (ram,0x015eb85c) */
/* WARNING: Removing unreachable block (ram,0x015eb800) */
/* WARNING: Removing unreachable block (ram,0x015eb808) */
/* WARNING: Removing unreachable block (ram,0x015ebd5c) */
/* WARNING: Removing unreachable block (ram,0x015ebd60) */
/* WARNING: Removing unreachable block (ram,0x015ebdc0) */
/* WARNING: Removing unreachable block (ram,0x015ebd6c) */
/* WARNING: Removing unreachable block (ram,0x015ebd74) */
/* WARNING: Removing unreachable block (ram,0x015eb480) */
/* WARNING: Removing unreachable block (ram,0x015eb488) */
/* WARNING: Removing unreachable block (ram,0x015eb9d4) */
/* WARNING: Removing unreachable block (ram,0x015eb494) */
/* WARNING: Removing unreachable block (ram,0x015eb4a0) */

void FUN_015eb2b4(undefined4 *param_1,byte *param_2,byte *param_3,undefined4 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  bool bVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 *local_1e8;
  int local_1e4;
  uint local_1e0;
  byte *local_1dc;
  undefined4 *local_1d8;
  byte *local_1d4;
  byte *local_1d0;
  undefined4 *local_1cc;
  undefined1 local_1c8;
  undefined2 local_1b4;
  undefined1 local_1b2;
  byte *local_1ac;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined2 local_18c;
  undefined1 local_18a;
  
  lVar1 = CONCAT44(param_4,param_3);
  uVar20 = CONCAT44(local_1e8,param_3);
  if (param_2[4] == 0) {
    local_1d0 = param_2;
    if (2 < (uint)param_4 >> 7) {
      FUN_015ec0ec(param_1,param_3,param_4,&local_1d0,FUN_015ec0ac);
      return;
    }
    FUN_016dd1aa(&local_1a8,param_3,param_4);
    puVar7 = (undefined1 *)0x0;
    *(undefined1 *)((int)&local_1a8 + (int)param_4) = 0;
    if (&DAT_00000006 < param_4) {
      do {
        uVar9 = *(uint *)((int)&local_1a8 + (int)puVar7);
        if (((0x1010100 - uVar9 | uVar9) & 0x80808080 &
            (0x1010100 - *(uint *)(puVar7 + (int)&local_1a8 + 4) |
            *(uint *)(puVar7 + (int)&local_1a8 + 4))) != 0x80808080) break;
        puVar7 = puVar7 + 8;
      } while (puVar7 <= (undefined1 *)((int)param_4 + -7));
      if ((undefined1 *)((int)param_4 + 1) != puVar7) {
        iVar4 = 0;
        do {
          if (((undefined1 *)((int)&local_1a8 + (int)puVar7))[iVar4] == '\0') {
            puVar6 = (undefined4 *)(puVar7 + iVar4);
            goto LAB_015ebf70;
          }
          iVar4 = iVar4 + 1;
        } while (((int)param_4 + 1) - (int)puVar7 != iVar4);
      }
      goto LAB_015ebf9c;
    }
    if ((char)local_1a8 == '\0') {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      if (param_4 == (undefined4 *)0x0) goto LAB_015ebf9c;
      if (local_1a8._1_1_ == '\0') {
        puVar6 = (undefined4 *)&DAT_00000001;
      }
      else {
        if (param_4 == (undefined4 *)&DAT_00000001) goto LAB_015ebf9c;
        if (local_1a8._2_1_ == '\0') {
          puVar6 = (undefined4 *)&SUB_00000002;
        }
        else {
          if (param_4 == (undefined4 *)&SUB_00000002) goto LAB_015ebf9c;
          if (local_1a8._3_1_ == '\0') {
            puVar6 = (undefined4 *)0x3;
          }
          else {
            if (param_4 == (undefined4 *)0x3) goto LAB_015ebf9c;
            if (local_1a8._4_1_ == '\0') {
              puVar6 = (undefined4 *)&DAT_00000004;
            }
            else {
              if (param_4 == (undefined4 *)&DAT_00000004) goto LAB_015ebf9c;
              if (local_1a8._5_1_ == '\0') {
                puVar6 = (undefined4 *)&DAT_00000005;
              }
              else {
                if (param_4 == (undefined4 *)&DAT_00000005) goto LAB_015ebf9c;
                puVar6 = (undefined4 *)&DAT_00000006;
                if (local_1a8._6_1_ != '\0') goto LAB_015ebf9c;
              }
            }
          }
        }
      }
    }
LAB_015ebf70:
    if (puVar6 != param_4) {
LAB_015ebf9c:
      *param_1 = 2;
      param_1[1] = &DAT_018aae48;
      return;
    }
    iVar4 = FUN_016daa82(&local_1a8,*(undefined4 *)param_2);
    if (iVar4 == -1) {
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar5 = *puVar6;
      *param_1 = 0;
      param_1[1] = uVar5;
      return;
    }
    *(undefined1 *)param_1 = 4;
  }
  else {
    bVar19 = param_4 != (undefined4 *)0x0;
    uVar9 = 0;
    if (bVar19) {
      uVar9 = (uint)*param_3;
    }
    local_18a = 0;
    if (bVar19) {
      uVar9 = uVar9 - 0x2f;
    }
    local_1a8._4_4_ = (undefined4 *)0x0;
    if (bVar19) {
      uVar9 = LZCOUNT(uVar9);
    }
    local_1a8._0_4_ = (byte *)0x1;
    if (bVar19) {
      uVar9 = uVar9 >> 5;
    }
    local_1b2 = (undefined1)uVar9;
    local_1c8 = 6;
    local_1a0 = 6;
    local_1b4 = 0x201;
    local_18c = 0x201;
    local_1d0 = param_3;
    local_1cc = param_4;
    iVar4 = FUN_015c78e0(&local_1d0,&local_1a8);
    if (iVar4 != 0) {
LAB_015eb9bc:
      *(undefined1 *)param_1 = 4;
      return;
    }
    if (param_4 == (undefined4 *)0x0) {
      local_18a = false;
    }
    else {
      local_18a = *param_3 == 0x2f;
    }
    local_18c = 0x201;
    local_1a0 = 6;
    local_1a8._0_4_ = param_3;
    local_1a8._4_4_ = param_4;
    FUN_015c7164(&local_1d0,&local_1a8);
    if (2 < ((uint)local_1d0 & 0xff) - 7) goto LAB_015eb9bc;
    FUN_015c7664(&local_1a8);
    pbVar14 = (byte *)0x0;
    uVar5 = *(undefined4 *)param_2;
    do {
      pbVar18 = (byte *)uVar20;
      uVar9 = 0;
      uVar20 = uVar20 & 0xffffffff00000000;
      if (param_4 != (undefined4 *)0x0) {
        uVar9 = *pbVar18 - 0x2f;
      }
      local_1a0 = 6;
      if (param_4 != (undefined4 *)0x0) {
        uVar9 = (uint)(uVar9 == 0);
      }
      local_18a = (undefined1)uVar9;
      local_18c = 0x201;
      local_1a8._0_4_ = pbVar18;
      local_1a8._4_4_ = param_4;
      FUN_015c7164(&local_1d0,&local_1a8);
      if (((uint)local_1d0 & 0xff) - 7 < 3) {
        uVar20 = FUN_015c7664(&local_1a8);
      }
      local_1e8 = (undefined4 *)(uVar20 >> 0x20);
      local_1e4 = (int)uVar20;
      if (param_4 == (undefined4 *)0x0) {
        local_1b2 = false;
      }
      else {
        local_1b2 = *pbVar18 == 0x2f;
      }
      local_18a = 0;
      local_1a8._4_4_ = (undefined4 *)0x0;
      local_1b4 = 0x201;
      local_18c = 0x201;
      local_1a8._0_4_ = &DAT_00000001;
      local_1c8 = 6;
      local_1a0 = 6;
      local_1d0 = pbVar18;
      local_1cc = param_4;
      iVar4 = FUN_015c78e0(&local_1d0,&local_1a8);
      if (iVar4 != 0) {
LAB_015eb9dc:
        uVar2 = CONCAT44(param_4,pbVar18);
        break;
      }
      if (param_4 == (undefined4 *)0x0) {
        local_18a = false;
      }
      else {
        local_18a = *pbVar18 == 0x2f;
      }
      local_18c = 0x201;
      local_1a0 = 6;
      local_1a8._0_4_ = pbVar18;
      local_1a8._4_4_ = param_4;
      FUN_015c7164(&local_1d0,&local_1a8);
      if (2 < ((uint)local_1d0 & 0xff) - 7) goto LAB_015eb9dc;
      FUN_015c7664(&local_1a8);
      local_1dc = param_2;
      if ((uint)param_4 >> 7 < 3) {
        FUN_016dd1aa(&local_1a8,pbVar18,param_4);
        *(undefined1 *)((int)&local_1a8 + (int)param_4) = 0;
        if (&DAT_00000006 < param_4) {
          puVar7 = (undefined1 *)0x0;
          do {
            uVar9 = *(uint *)((int)&local_1a8 + (int)puVar7);
            if (((0x1010100 - uVar9 | uVar9) & 0x80808080 &
                (0x1010100 - *(uint *)(puVar7 + (int)&local_1a8 + 4) |
                *(uint *)(puVar7 + (int)&local_1a8 + 4))) != 0x80808080) break;
            puVar7 = puVar7 + 8;
          } while (puVar7 <= (undefined1 *)((int)param_4 + -7));
          if ((undefined1 *)((int)param_4 + 1) != puVar7) {
            iVar4 = 0;
            do {
              if (((undefined1 *)((int)&local_1a8 + (int)puVar7))[iVar4] == '\0') {
                puVar6 = (undefined4 *)(puVar7 + iVar4);
                goto LAB_015eb898;
              }
              iVar4 = iVar4 + 1;
            } while (((int)param_4 + 1) - (int)puVar7 != iVar4);
          }
        }
        else if ((char)local_1a8 == '\0') {
          puVar6 = (undefined4 *)0x0;
LAB_015eb898:
          if (puVar6 == param_4) {
            iVar4 = FUN_016daa82(&local_1a8,uVar5);
            if (iVar4 == -1) {
              local_1cc = (undefined4 *)FUN_016d2bc8();
              local_1cc = (undefined4 *)*local_1cc;
              uVar9 = 0;
              local_1d0 = (byte *)0x0;
            }
            else {
              local_1d0 = (byte *)CONCAT31(local_1d0._1_3_,4);
              uVar9 = 4;
            }
            goto LAB_015eb8e0;
          }
        }
        else if (param_4 != (undefined4 *)0x0) {
          if (local_1a8._1_1_ == '\0') {
            puVar6 = (undefined4 *)&DAT_00000001;
            goto LAB_015eb898;
          }
          if (param_4 != (undefined4 *)&DAT_00000001) {
            if (local_1a8._2_1_ == '\0') {
              puVar6 = (undefined4 *)&SUB_00000002;
              goto LAB_015eb898;
            }
            if (param_4 != (undefined4 *)&SUB_00000002) {
              if (local_1a8._3_1_ == '\0') {
                puVar6 = (undefined4 *)0x3;
                goto LAB_015eb898;
              }
              if (param_4 != (undefined4 *)0x3) {
                if (local_1a8._4_1_ == '\0') {
                  puVar6 = (undefined4 *)&DAT_00000004;
                  goto LAB_015eb898;
                }
                if (param_4 != (undefined4 *)&DAT_00000004) {
                  if (local_1a8._5_1_ == '\0') {
                    puVar6 = (undefined4 *)&DAT_00000005;
                    goto LAB_015eb898;
                  }
                  if (param_4 != (undefined4 *)&DAT_00000005) {
                    puVar6 = (undefined4 *)&DAT_00000006;
                    if (local_1a8._6_1_ == '\0') goto LAB_015eb898;
                  }
                }
              }
            }
          }
        }
        local_1d0 = &SUB_00000002;
        uVar9 = 2;
        local_1cc = &DAT_018aae48;
      }
      else {
        FUN_015ec0ec(&local_1d0,pbVar18,param_4,&local_1dc,FUN_015ec0ac);
        uVar9 = (uint)local_1d0 & 0xff;
      }
LAB_015eb8e0:
      uVar2 = CONCAT44(param_4,pbVar18);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar9) {
      case 0:
        uVar8 = FUN_015e6e98(local_1cc);
        uVar8 = uVar8 & 0xff;
        break;
      case 1:
        uVar8 = (uint)local_1d0 >> 8 & 0xff;
        break;
      default:
        uVar8 = (uint)*(byte *)(local_1cc + 2);
        break;
      case 4:
        goto switchD_015eb8e8_caseD_4;
      }
      puVar6 = local_1cc;
      if (uVar8 != 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar9) {
        case 0:
          uVar9 = FUN_015e6e98(local_1cc);
          uVar9 = uVar9 & 0xff;
          break;
        case 1:
          uVar9 = (uint)local_1d0 >> 8 & 0xff;
          break;
        default:
          uVar9 = (uint)*(byte *)(local_1cc + 2);
        }
        if ((uVar9 != 0xc) || (iVar4 = FUN_015c7df0(pbVar18,param_4), iVar4 == 0)) {
          *param_1 = local_1d0;
          param_1[1] = local_1cc;
          return;
        }
        local_1a8._0_4_ = local_1d0;
        local_1a8._4_4_ = local_1cc;
        FUN_015bf4a0(&local_1a8);
        bVar19 = (byte *)0x1ffffffe < pbVar14;
        if (pbVar14 < (byte *)0x20000000) {
          param_4 = (undefined4 *)((int)pbVar14 << 3);
          bVar19 = (undefined4 *)0x7ffffffc < param_4;
        }
        if (bVar19) goto LAB_015eb9f4;
        goto LAB_015eba94;
      }
      if (((uint)local_1d0 & 0xff) == 3) {
        uVar15 = *local_1cc;
        puVar17 = (undefined4 *)local_1cc[1];
        pcVar10 = (code *)*puVar17;
        if (pcVar10 != (code *)0x0) {
          (*pcVar10)(uVar15);
        }
        if (puVar17[1] != 0) {
          thunk_FUN_016d3fb4(uVar15);
        }
        thunk_FUN_016d3fb4(puVar6);
      }
      pbVar14 = pbVar14 + 1;
      param_4 = local_1e8;
      uVar2 = uVar20;
    } while (local_1e4 != 0);
switchD_015eb8e8_caseD_4:
    param_4 = (undefined4 *)(uVar2 >> 0x20);
    pbVar18 = (byte *)uVar2;
    bVar19 = (byte *)0x1ffffffe < pbVar14;
    if (pbVar14 < (byte *)0x20000000) {
      param_4 = (undefined4 *)((int)pbVar14 << 3);
      bVar19 = (undefined4 *)0x7ffffffc < param_4;
    }
    if (bVar19) {
LAB_015eb9f4:
                    /* WARNING: Subroutine does not return */
      FUN_00600c10();
    }
LAB_015eba94:
    if (param_4 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)&DAT_00000004;
      pbVar11 = (byte *)0x0;
    }
    else {
      puVar6 = (undefined4 *)thunk_FUN_016d4a50(param_4);
      pbVar11 = pbVar14;
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,param_4);
      }
    }
    local_1d4 = (byte *)0x0;
    local_1dc = pbVar11;
    local_1d8 = puVar6;
    if (pbVar14 != (byte *)0x0) {
      do {
        pbVar11 = local_1d4;
        if ((char *)lVar1 == (char *)0x0) {
          puVar6 = local_1d8;
          if (local_1d4 == (byte *)0x0) goto LAB_015ebf1c;
          param_4 = (undefined4 *)((int)local_1d4 << 3);
          break;
        }
        if ((int)((ulonglong)lVar1 >> 0x20) == 0) {
          local_18a = false;
        }
        else {
          local_18a = *(char *)lVar1 == '/';
        }
        local_1a0 = 6;
        local_18c = 0x201;
        local_1a8 = lVar1;
        FUN_015c7164(&local_1d0,&local_1a8);
        lVar21 = ZEXT48(pbVar18) << 0x20;
        if (((uint)local_1d0 & 0xff) - 7 < 3) {
          lVar21 = FUN_015c7664(&local_1a8);
        }
        pbVar18 = (byte *)((ulonglong)lVar21 >> 0x20);
        if (pbVar11 == local_1dc) {
          FUN_015bf41c(&local_1dc,pbVar11,1,4,8);
          puVar6 = local_1d8;
        }
        local_1d4 = pbVar11 + 1;
        *(longlong *)(puVar6 + (int)pbVar11 * 2) = lVar1;
        lVar1 = lVar21;
      } while (pbVar14 != local_1d4);
      puVar6 = local_1d8;
      local_1e0 = 0;
      puVar17 = (undefined4 *)((int)local_1d8 + (int)param_4);
      do {
        puVar16 = puVar17 + -2;
        uVar9 = puVar17[-1];
        local_1ac = param_2;
        if (uVar9 >> 7 < 3) {
          FUN_016dd1aa(&local_1a8,*puVar16,uVar9);
          *(undefined1 *)((int)&local_1a8 + uVar9) = 0;
          if (uVar9 < 7) {
            if ((char)local_1a8 == '\0') {
              uVar8 = 0;
LAB_015ebdf4:
              if (uVar8 == uVar9) {
                iVar4 = FUN_016daa82(&local_1a8,uVar5);
                if (iVar4 == -1) {
                  local_1cc = (undefined4 *)FUN_016d2bc8();
                  local_1cc = (undefined4 *)*local_1cc;
                  uVar9 = 0;
                  local_1d0 = (byte *)0x0;
                }
                else {
                  uVar9 = 4;
                  local_1d0 = (byte *)CONCAT31(local_1d0._1_3_,4);
                }
                goto LAB_015ebe14;
              }
            }
            else if (uVar9 != 0) {
              if (local_1a8._1_1_ == '\0') {
                uVar8 = 1;
                goto LAB_015ebdf4;
              }
              if (uVar9 != 1) {
                if (local_1a8._2_1_ == '\0') {
                  uVar8 = 2;
                  goto LAB_015ebdf4;
                }
                if (uVar9 != 2) {
                  if (local_1a8._3_1_ == '\0') {
                    uVar8 = 3;
                    goto LAB_015ebdf4;
                  }
                  if (uVar9 != 3) {
                    if (local_1a8._4_1_ == '\0') {
                      uVar8 = 4;
                      goto LAB_015ebdf4;
                    }
                    if (uVar9 != 4) {
                      if (local_1a8._5_1_ == '\0') {
                        uVar8 = 5;
                        goto LAB_015ebdf4;
                      }
                      if (uVar9 != 5) {
                        uVar8 = 6;
                        if (local_1a8._6_1_ == '\0') goto LAB_015ebdf4;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            uVar8 = local_1e0;
            do {
              uVar12 = *(uint *)((int)&local_1a8 + uVar8);
              uVar13 = *(uint *)((int)&local_1a8 + uVar8 + 4);
              if (((0x1010100 - uVar12 | uVar12) & 0x80808080 & (0x1010100 - uVar13 | uVar13)) !=
                  0x80808080) break;
              uVar8 = uVar8 + 8;
            } while (uVar8 <= uVar9 - 7);
            if (uVar9 + 1 != uVar8) {
              iVar4 = 0;
              do {
                if (*(char *)((int)&local_1a8 + iVar4 + uVar8) == '\0') {
                  uVar8 = iVar4 + uVar8;
                  goto LAB_015ebdf4;
                }
                iVar4 = iVar4 + 1;
              } while ((uVar9 + 1) - uVar8 != iVar4);
            }
          }
          local_1d0 = &SUB_00000002;
          uVar9 = 2;
          local_1cc = &DAT_018aae48;
        }
        else {
          FUN_015ec0ec(&local_1d0,*puVar16,uVar9,&local_1ac,FUN_015ec0ac);
          uVar9 = (uint)local_1d0 & 0xff;
        }
LAB_015ebe14:
        puVar3 = local_1cc;
        pbVar14 = local_1d0;
        if (uVar9 != 4) {
          local_1a8._4_4_ = local_1cc;
          local_1a8._0_4_ = local_1d0;
          uVar9 = (uint)local_1d0 & 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar9) {
          case 0:
            uVar8 = FUN_015e6e98(local_1cc);
            uVar8 = uVar8 & 0xff;
            break;
          case 1:
            uVar8 = (uint)local_1d0 >> 8;
            break;
          default:
            uVar8 = (uint)*(byte *)(local_1cc + 2);
          }
          if ((uVar8 & 0xff) == 0xc) {
            iVar4 = FUN_015c7df0(puVar17[-2],puVar17[-1]);
            if (iVar4 != 0) {
              if (uVar9 == 3) {
                uVar15 = *puVar3;
                puVar17 = (undefined4 *)puVar3[1];
                pcVar10 = (code *)*puVar17;
                if (pcVar10 != (code *)0x0) {
                  (*pcVar10)(uVar15);
                }
                if (puVar17[1] != 0) {
                  thunk_FUN_016d3fb4(uVar15);
                }
                thunk_FUN_016d3fb4(puVar3);
              }
              goto LAB_015ebc34;
            }
          }
          *param_1 = pbVar14;
          param_1[1] = puVar3;
          if (local_1dc == (byte *)0x0) {
            return;
          }
          goto LAB_015ebf4c;
        }
LAB_015ebc34:
        puVar17 = puVar16;
      } while (puVar6 != puVar16);
    }
LAB_015ebf1c:
    *(undefined1 *)param_1 = 4;
    if (local_1dc != (byte *)0x0) {
LAB_015ebf4c:
      thunk_FUN_016d3fb4(puVar6);
      return;
    }
  }
  return;
}

