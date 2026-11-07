// FUN_0128bea0 @ 0128bea0 size=2884 calls_out=14 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x0128c054) */
/* WARNING: Removing unreachable block (ram,0x0128c05c) */
/* WARNING: Removing unreachable block (ram,0x0128c0b8) */
/* WARNING: Removing unreachable block (ram,0x0128c068) */
/* WARNING: Removing unreachable block (ram,0x0128c074) */
/* WARNING: Removing unreachable block (ram,0x0128c140) */
/* WARNING: Removing unreachable block (ram,0x0128c38c) */
/* WARNING: Removing unreachable block (ram,0x0128c394) */
/* WARNING: Removing unreachable block (ram,0x0128c3f0) */
/* WARNING: Removing unreachable block (ram,0x0128c3a0) */
/* WARNING: Removing unreachable block (ram,0x0128c3ac) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0128bea0(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *extraout_r1;
  byte *pbVar5;
  byte *extraout_r1_00;
  int iVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 ****ppppuVar11;
  undefined4 ****ppppuVar12;
  undefined **unaff_r6;
  uint uVar13;
  char *pcVar14;
  byte *pbVar15;
  bool bVar16;
  short local_160;
  undefined4 **local_15c;
  undefined4 ****local_158;
  undefined **local_154;
  undefined4 ****local_150;
  undefined **local_14c;
  undefined1 *local_13c;
  int local_138;
  undefined *local_134;
  undefined4 local_130;
  undefined4 local_12c;
  byte *local_128;
  uint local_124;
  int local_120;
  undefined4 uStack_11c;
  undefined2 local_114;
  undefined1 local_112;
  undefined4 ***local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_30 = (undefined4 ***)&DAT_018d87d0;
  DataMemoryBarrier(0xb);
  if (DAT_018d87e8 != 0) {
    local_158 = &local_30;
    local_130 = &local_158;
    FUN_015eedc4(&DAT_018d87e8,0,&local_130,&DAT_0188bc7c,&DAT_018a9fb0);
  }
  local_134 = &DAT_00284000;
  if (DAT_018d87d0 == -0x7ffffffb) {
    bVar16 = 2 < DAT_018d87d6;
    if (DAT_018d87d6 == 3) {
      bVar16 = 5 < DAT_018d87d7;
    }
    if (!bVar16) {
      local_134 = (undefined *)0x84000;
    }
  }
  pcVar14 = (char *)param_2[1];
  pbVar15 = (byte *)param_2[2];
  local_15c = (undefined4 **)0xffffff9c;
  local_150 = &local_30;
  local_154 = &local_134;
  local_158 = (undefined4 ****)&local_15c;
  local_30 = (undefined4 ***)0x0;
  if (pbVar15 < (byte *)0x100) {
    FUN_016dd1aa(&local_130,pcVar14,pbVar15);
    *(byte *)((int)&local_130 + (int)pbVar15) = 0;
    local_160 = -0x16;
    if (&DAT_00000006 < pbVar15) {
      pbVar9 = (byte *)0x0;
      do {
        uVar13 = *(uint *)((int)&local_130 + (int)pbVar9);
        if (((0x1010100 - uVar13 | uVar13) & 0x80808080 &
            (0x1010100 - *(uint *)((int)&local_12c + (int)pbVar9) |
            *(uint *)((int)&local_12c + (int)pbVar9))) != 0x80808080) break;
        pbVar9 = pbVar9 + 8;
      } while (pbVar9 <= pbVar15 + -7);
      pbVar5 = pbVar15 + (1 - (int)pbVar9);
      if (pbVar5 != (byte *)0x0) {
        pbVar2 = (byte *)0x0;
        do {
          if (((byte *)((int)&local_130 + (int)pbVar9))[(int)pbVar2] == 0) {
            pbVar2 = pbVar2 + (int)pbVar9;
            goto LAB_0128c0ec;
          }
          pbVar2 = pbVar2 + 1;
        } while (pbVar5 != pbVar2);
      }
    }
    else {
      pbVar5 = extraout_r1;
      if ((byte)local_130 == 0) {
        pbVar2 = (byte *)0x0;
LAB_0128c0ec:
        if (pbVar2 == pbVar15) {
          pbVar5 = (byte *)&local_130;
          software_interrupt(0);
          local_160 = -100;
        }
      }
      else if (pbVar15 != (byte *)0x0) {
        if (local_130._1_1_ == '\0') {
          pbVar2 = &DAT_00000001;
          goto LAB_0128c0ec;
        }
        if (pbVar15 != &DAT_00000001) {
          if (local_130._2_1_ == '\0') {
            pbVar2 = &SUB_00000002;
            goto LAB_0128c0ec;
          }
          if (pbVar15 != &SUB_00000002) {
            if (local_130._3_1_ == '\0') {
              pbVar2 = (byte *)0x3;
              goto LAB_0128c0ec;
            }
            if (pbVar15 != (byte *)0x3) {
              if ((char)local_12c == '\0') {
                pbVar2 = &DAT_00000004;
                goto LAB_0128c0ec;
              }
              if (pbVar15 != &DAT_00000004) {
                if (local_12c._1_1_ == '\0') {
                  pbVar2 = &DAT_00000005;
                  goto LAB_0128c0ec;
                }
                if (pbVar15 != &DAT_00000005) {
                  pbVar5 = (byte *)((uint)local_12c >> 0x10 & 0xff);
                  pbVar2 = &DAT_00000006;
                  if (pbVar5 == (byte *)0x0) goto LAB_0128c0ec;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    FUN_012929b4(&local_13c,pcVar14,pbVar15,&local_158);
    iVar3 = local_138;
    if ((short)local_13c != 1) {
      local_112 = *pcVar14 == '/';
      ppppuVar11 = &local_158;
      local_128 = (byte *)CONCAT31(local_128._1_3_,6);
      local_114 = 0x201;
      ppppuVar12 = (undefined4 ****)0x0;
      uVar13 = 10;
      local_130 = (undefined4 ****)pcVar14;
      local_12c = pbVar15;
      while( true ) {
        FUN_015e51f8(ppppuVar11,&local_130);
        if (((uint)local_158 & 0xff) == 10) break;
        ppppuVar12 = local_150;
        unaff_r6 = local_154;
        uVar13 = (uint)local_158 & 0xff;
      }
      if (uVar13 == 9) {
        FUN_006008c8(&local_130,unaff_r6,ppppuVar12);
        if (local_128 == (byte *)0x0) goto LAB_0128c234;
        if (local_128 == (byte *)0x1) {
          bVar8 = *local_12c;
          if ((bVar8 == 0x2b) || (bVar8 == 0x2d)) goto LAB_0128c234;
        }
        else {
          bVar8 = *local_12c;
        }
        if (bVar8 == 0x2d) {
          iVar6 = (int)local_128 - 1;
          pbVar5 = local_12c + 1;
          ppppuVar11 = (undefined4 ****)0x0;
          if (local_128 < 9) {
            if (iVar6 != 0) {
              do {
                bVar8 = *pbVar5;
                if (9 < bVar8 - 0x30) goto LAB_0128c234;
                pbVar5 = pbVar5 + 1;
                iVar6 = iVar6 + -1;
                ppppuVar11 = (undefined4 ****)((int)ppppuVar11 * 10 - (bVar8 - 0x30));
                bVar16 = false;
              } while (iVar6 != 0);
              goto LAB_0128c238;
            }
          }
          else {
            do {
              iVar7 = (int)((longlong)(int)ppppuVar11 * 10);
              ppppuVar11 = (undefined4 ****)((ulonglong)((longlong)(int)ppppuVar11 * 10) >> 0x20);
              if (((ppppuVar11 != (undefined4 ****)(iVar7 >> 0x1f)) ||
                  (ppppuVar11 = (undefined4 ****)(*pbVar5 - 0x30), &DAT_00000009 < ppppuVar11)) ||
                 (bVar16 = SBORROW4(iVar7,(int)ppppuVar11),
                 ppppuVar11 = (undefined4 ****)(iVar7 - (int)ppppuVar11), bVar16))
              goto LAB_0128c234;
              iVar6 = iVar6 + -1;
              pbVar5 = pbVar5 + 1;
            } while (iVar6 != 0);
          }
LAB_0128c4c0:
          bVar16 = false;
        }
        else {
          if (bVar8 == 0x2b) {
            pbVar9 = local_12c + 1;
            pbVar5 = (byte *)((int)local_128 - 1);
          }
          else {
            pbVar9 = local_12c;
            pbVar5 = local_128;
          }
          if (7 < pbVar5) {
            ppppuVar11 = (undefined4 ****)0x0;
            do {
              iVar6 = (int)((longlong)(int)ppppuVar11 * 10);
              ppppuVar11 = (undefined4 ****)((ulonglong)((longlong)(int)ppppuVar11 * 10) >> 0x20);
              if (((ppppuVar11 != (undefined4 ****)(iVar6 >> 0x1f)) ||
                  (ppppuVar11 = (undefined4 ****)(*pbVar9 - 0x30), &DAT_00000009 < ppppuVar11)) ||
                 (bVar16 = SCARRY4(iVar6,(int)ppppuVar11),
                 ppppuVar11 = (undefined4 ****)(iVar6 + (int)ppppuVar11), bVar16))
              goto LAB_0128c234;
              pbVar5 = (byte *)((int)pbVar5 - 1);
              pbVar9 = pbVar9 + 1;
            } while (pbVar5 != (byte *)0x0);
            goto LAB_0128c4c0;
          }
          bVar16 = false;
          if (pbVar5 == (byte *)0x0) {
            ppppuVar11 = (undefined4 ****)0x0;
          }
          else {
            ppppuVar11 = (undefined4 ****)(*pbVar9 - 0x30);
            if (ppppuVar11 < &DAT_0000000a) {
              if (pbVar5 != (byte *)0x1) {
                if (9 < pbVar9[1] - 0x30) goto LAB_0128c234;
                ppppuVar11 = (undefined4 ****)((pbVar9[1] - 0x30) + (int)ppppuVar11 * 10);
                if (pbVar5 != (byte *)0x2) {
                  if (9 < pbVar9[2] - 0x30) goto LAB_0128c234;
                  ppppuVar11 = (undefined4 ****)((pbVar9[2] - 0x30) + (int)ppppuVar11 * 10);
                  if (pbVar5 != (byte *)0x3) {
                    if (9 < pbVar9[3] - 0x30) goto LAB_0128c234;
                    ppppuVar11 = (undefined4 ****)((pbVar9[3] - 0x30) + (int)ppppuVar11 * 10);
                    if (pbVar5 != (byte *)0x4) {
                      if (9 < pbVar9[4] - 0x30) goto LAB_0128c234;
                      ppppuVar11 = (undefined4 ****)((pbVar9[4] - 0x30) + (int)ppppuVar11 * 10);
                      if (pbVar5 != (byte *)0x5) {
                        if (9 < pbVar9[5] - 0x30) goto LAB_0128c234;
                        ppppuVar11 = (undefined4 ****)((pbVar9[5] - 0x30) + (int)ppppuVar11 * 10);
                        if (pbVar5 != (byte *)0x6) {
                          bVar16 = true;
                          if (pbVar9[6] - 0x30 < 10) {
                            ppppuVar11 = (undefined4 ****)
                                         ((pbVar9[6] - 0x30) + (int)ppppuVar11 * 10);
                            goto LAB_0128c4c0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
LAB_0128c234:
              bVar16 = true;
            }
          }
        }
LAB_0128c238:
        if (((uint)local_130 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4();
        }
        if (!bVar16) goto LAB_0128c818;
      }
      ppppuVar11 = (undefined4 ****)0x0;
      local_134 = (undefined *)0xffffff9c;
      local_154 = (undefined **)0x1;
      local_14c = &local_134;
      local_150 = (undefined4 ****)0x0;
      local_158 = (undefined4 ****)0x0;
      if (pbVar15 < (byte *)0x100) {
        FUN_016dd1aa(&local_130,pcVar14,pbVar15);
        *(byte *)((int)&local_130 + (int)pbVar15) = 0;
        if (&DAT_00000006 < pbVar15) {
          pbVar5 = (byte *)0x0;
          do {
            uVar13 = *(uint *)((int)&local_130 + (int)pbVar5);
            ppppuVar11 = (undefined4 ****)(0x1010100 - uVar13);
            if ((((uint)ppppuVar11 | uVar13) & 0x80808080 &
                (0x1010100 - *(uint *)((int)&local_12c + (int)pbVar5) |
                *(uint *)((int)&local_12c + (int)pbVar5))) != 0x80808080) break;
            pbVar5 = pbVar5 + 8;
          } while (pbVar5 <= pbVar15 + -7);
          if (pbVar15 + 1 != pbVar5) {
            iVar6 = 0;
            do {
              if (((byte *)((int)&local_130 + (int)pbVar5))[iVar6] == 0) {
                pbVar5 = pbVar5 + iVar6;
                goto LAB_0128c700;
              }
              iVar6 = iVar6 + 1;
            } while ((int)(pbVar15 + 1) - (int)pbVar5 != iVar6);
          }
          goto LAB_0128c7f8;
        }
        if ((byte)local_130 == 0) {
          pbVar5 = (byte *)0x0;
        }
        else {
          if (pbVar15 == (byte *)0x0) goto LAB_0128c7f8;
          if (local_130._1_1_ == '\0') {
            pbVar5 = &DAT_00000001;
          }
          else {
            if (pbVar15 == &DAT_00000001) goto LAB_0128c7f8;
            if (local_130._2_1_ == '\0') {
              pbVar5 = &SUB_00000002;
            }
            else {
              if (pbVar15 == &SUB_00000002) goto LAB_0128c7f8;
              if (local_130._3_1_ == '\0') {
                pbVar5 = (byte *)0x3;
              }
              else {
                if (pbVar15 == (byte *)0x3) goto LAB_0128c7f8;
                if ((char)local_12c == '\0') {
                  pbVar5 = &DAT_00000004;
                }
                else {
                  if (pbVar15 == &DAT_00000004) goto LAB_0128c7f8;
                  if (local_12c._1_1_ == '\0') {
                    pbVar5 = &DAT_00000005;
                  }
                  else {
                    if (pbVar15 == &DAT_00000005) goto LAB_0128c7f8;
                    pbVar5 = &DAT_00000006;
                    if (local_12c._2_1_ != '\0') goto LAB_0128c7f8;
                  }
                }
              }
            }
          }
        }
LAB_0128c700:
        if (pbVar5 != pbVar15) goto LAB_0128c7f8;
        local_28 = 0;
        local_2c = 1;
        local_30 = (undefined4 ***)0x0;
        FUN_01503064(&local_13c,0xffffff9c,&local_130,&local_30);
      }
      else {
        FUN_01292a6c(&local_13c,pcVar14,pbVar15,&local_158);
      }
      if (local_13c == (undefined1 *)0x0) goto LAB_0128c7f8;
      FUN_006008c8(&local_130,local_13c,local_138 + -1);
      if (local_128 == (byte *)0x0) goto LAB_0128c7c4;
      if (local_128 == (byte *)0x1) {
        bVar8 = *local_12c;
        if ((bVar8 == 0x2b) || (bVar8 == 0x2d)) goto LAB_0128c7c4;
      }
      else {
        bVar8 = *local_12c;
      }
      if (bVar8 == 0x2d) {
        iVar6 = (int)local_128 - 1;
        pbVar15 = local_12c + 1;
        ppppuVar11 = (undefined4 ****)0x0;
        if (local_128 < 9) {
          if (iVar6 != 0) {
            do {
              bVar8 = *pbVar15;
              if (9 < bVar8 - 0x30) goto LAB_0128c7c4;
              pbVar15 = pbVar15 + 1;
              iVar6 = iVar6 + -1;
              ppppuVar11 = (undefined4 ****)((int)ppppuVar11 * 10 - (bVar8 - 0x30));
              bVar16 = false;
            } while (iVar6 != 0);
            goto LAB_0128c7c8;
          }
        }
        else {
          do {
            iVar7 = (int)((longlong)(int)ppppuVar11 * 10);
            ppppuVar11 = (undefined4 ****)((ulonglong)((longlong)(int)ppppuVar11 * 10) >> 0x20);
            if (((ppppuVar11 != (undefined4 ****)(iVar7 >> 0x1f)) ||
                (ppppuVar11 = (undefined4 ****)(*pbVar15 - 0x30), &DAT_00000009 < ppppuVar11)) ||
               (bVar16 = SBORROW4(iVar7,(int)ppppuVar11),
               ppppuVar11 = (undefined4 ****)(iVar7 - (int)ppppuVar11), bVar16)) goto LAB_0128c7c4;
            iVar6 = iVar6 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iVar6 != 0);
        }
LAB_0128c8f8:
        bVar16 = false;
      }
      else {
        if (bVar8 == 0x2b) {
          pbVar5 = local_12c + 1;
          pbVar15 = (byte *)((int)local_128 - 1);
        }
        else {
          pbVar5 = local_12c;
          pbVar15 = local_128;
        }
        if (7 < pbVar15) {
          ppppuVar11 = (undefined4 ****)0x0;
          do {
            iVar6 = (int)((longlong)(int)ppppuVar11 * 10);
            ppppuVar11 = (undefined4 ****)((ulonglong)((longlong)(int)ppppuVar11 * 10) >> 0x20);
            if (((ppppuVar11 != (undefined4 ****)(iVar6 >> 0x1f)) ||
                (ppppuVar11 = (undefined4 ****)(*pbVar5 - 0x30), &DAT_00000009 < ppppuVar11)) ||
               (bVar16 = SCARRY4(iVar6,(int)ppppuVar11),
               ppppuVar11 = (undefined4 ****)(iVar6 + (int)ppppuVar11), bVar16)) goto LAB_0128c7c4;
            pbVar15 = (byte *)((int)pbVar15 - 1);
            pbVar5 = pbVar5 + 1;
          } while (pbVar15 != (byte *)0x0);
          goto LAB_0128c8f8;
        }
        bVar16 = false;
        if (pbVar15 == (byte *)0x0) {
          ppppuVar11 = (undefined4 ****)0x0;
        }
        else {
          ppppuVar11 = (undefined4 ****)(*pbVar5 - 0x30);
          if (ppppuVar11 < &DAT_0000000a) {
            if (pbVar15 != (byte *)0x1) {
              if (9 < pbVar5[1] - 0x30) goto LAB_0128c7c4;
              ppppuVar11 = (undefined4 ****)((pbVar5[1] - 0x30) + (int)ppppuVar11 * 10);
              if (pbVar15 != (byte *)0x2) {
                if (9 < pbVar5[2] - 0x30) goto LAB_0128c7c4;
                ppppuVar11 = (undefined4 ****)((pbVar5[2] - 0x30) + (int)ppppuVar11 * 10);
                if (pbVar15 != (byte *)0x3) {
                  if (9 < pbVar5[3] - 0x30) goto LAB_0128c7c4;
                  ppppuVar11 = (undefined4 ****)((pbVar5[3] - 0x30) + (int)ppppuVar11 * 10);
                  if (pbVar15 != (byte *)0x4) {
                    if (9 < pbVar5[4] - 0x30) goto LAB_0128c7c4;
                    ppppuVar11 = (undefined4 ****)((pbVar5[4] - 0x30) + (int)ppppuVar11 * 10);
                    if (pbVar15 != (byte *)0x5) {
                      if (9 < pbVar5[5] - 0x30) goto LAB_0128c7c4;
                      ppppuVar11 = (undefined4 ****)((pbVar5[5] - 0x30) + (int)ppppuVar11 * 10);
                      if (pbVar15 != (byte *)0x6) {
                        bVar16 = true;
                        if (pbVar5[6] - 0x30 < 10) {
                          ppppuVar11 = (undefined4 ****)((pbVar5[6] - 0x30) + (int)ppppuVar11 * 10);
                          goto LAB_0128c8f8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_0128c7c4:
            bVar16 = true;
          }
        }
      }
LAB_0128c7c8:
      if (((uint)local_130 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4();
      }
      *local_13c = 0;
      if (local_138 != 0) {
        thunk_FUN_016d3fb4(local_13c);
      }
      if (!bVar16) {
LAB_0128c818:
        iVar6 = param_2[1];
        iVar7 = param_2[2];
        param_1[1] = *param_2;
        param_1[2] = iVar6;
        param_1[3] = iVar7;
        *param_1 = 0x80000005;
        param_1[4] = iVar3;
        param_1[5] = ppppuVar11;
        return;
      }
LAB_0128c7f8:
      iVar6 = *param_2;
      iVar7 = param_2[1];
      iVar10 = param_2[2];
      *param_1 = 0x80000001;
      param_1[1] = iVar6;
      param_1[2] = iVar7;
      param_1[3] = iVar10;
      FUN_016dffb2(iVar3);
      return;
    }
    local_160 = (short)((uint)local_13c >> 0x10);
    pbVar5 = extraout_r1_00;
  }
  uVar4 = 0;
  if ((int)pbVar15 < 0) {
LAB_0128c134:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar4,pbVar15);
  }
  if (pbVar15 == (byte *)0x0) {
    iVar3 = 1;
    pbVar5 = (byte *)0x0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(pbVar15,pbVar5);
    pbVar5 = pbVar15;
    if (iVar3 == 0) {
      uVar4 = 1;
      goto LAB_0128c134;
    }
  }
  FUN_016dd1aa(iVar3,pcVar14,pbVar15);
  uVar1 = FUN_0128bb74(-(int)local_160);
  local_124 = local_124 & 0xffffff00;
  local_130 = (undefined4 ****)pbVar5;
  local_12c = (byte *)iVar3;
  local_128 = pbVar15;
  local_120 = -(int)local_160;
  FUN_01292b38(&local_30,uVar1,&local_130);
  local_154 = (undefined **)local_2c;
  local_158 = (undefined4 ****)local_30;
  FUN_012951d4(&local_130,&local_158);
  *param_1 = local_130;
  param_1[1] = local_12c;
  param_1[2] = local_128;
  param_1[3] = local_124;
  param_1[4] = local_120;
  param_1[5] = uStack_11c;
  if (*param_2 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(pcVar14);
  return;
}

