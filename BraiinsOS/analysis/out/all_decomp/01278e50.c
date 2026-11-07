// FUN_01278e50 @ 01278e50 size=2636 calls_out=17 calls_in=1
// strings: Tried to shrink to a larger capacitymax line length exceeded | Tried to shrink to a larger capacitymax line length exceeded

void FUN_01278e50(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  uint in_fpscr;
  uint uVar18;
  undefined4 uVar19;
  undefined4 extraout_s1;
  double dVar20;
  int local_94;
  int local_90;
  uint *local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  uint local_70;
  uint *local_6c;
  uint local_68;
  uint local_60;
  uint *local_5c;
  uint local_58;
  uint local_50;
  uint *local_4c;
  uint local_48;
  uint local_40;
  uint *local_3c;
  uint local_38;
  uint uStack_34;
  int local_30;
  uint local_2c;
  
  if (param_3 == 0) {
    puVar5 = (undefined1 *)thunk_FUN_016d4a50(1);
    if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,1);
    }
    *param_1 = 1;
    param_1[1] = (int)puVar5;
    param_1[2] = 1;
    *puVar5 = 0x30;
    return;
  }
  uVar4 = LZCOUNT(*(undefined4 *)(param_2 + param_3 * 4 + -4));
  dVar20 = (double)FUN_01845f30(param_3 * 0x20 - uVar4,
                                (param_3 >> 0x1b) - (uint)(param_3 * 0x20 < uVar4));
  uVar19 = FUN_016d5298(SUB84(dVar20 / 3.321928094887362,0));
  dVar20 = (double)CONCAT44(extraout_s1,uVar19);
  iVar15 = (uint)(0.0 < dVar20) * (int)(longlong)dVar20;
  uVar4 = in_fpscr & 0xfffffff | (uint)(dVar20 < -1.0) << 0x1f | (uint)(dVar20 == -1.0) << 0x1e;
  uVar18 = uVar4 | (uint)NAN(dVar20) << 0x1c;
  if (4294967296.0 <= dVar20) {
    iVar15 = 0;
  }
  bVar2 = (byte)(uVar4 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar18 >> 0x1c) & 1)) {
    iVar15 = 0;
  }
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar15);
  }
  if (iVar15 == 0) {
    local_7c = 1;
    iVar15 = 0;
  }
  else {
    local_7c = thunk_FUN_016d4a50(iVar15);
    if (local_7c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar15);
    }
  }
  iVar8 = param_3 << 2;
  local_78 = 0;
  local_80 = iVar15;
  puVar6 = (uint *)thunk_FUN_016d4a50(iVar8);
  if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar8);
  }
  FUN_016dd1aa(puVar6,param_2,iVar8);
  local_88 = param_3;
  local_70 = param_3;
  local_6c = puVar6;
  local_68 = param_3;
  if (0x3f < param_3) {
    local_38 = 0;
    local_3c = (uint *)&DAT_00000004;
    local_40 = 0;
    FUN_0127ac28(&local_40);
    local_88 = local_68;
    *local_3c = 10000;
    local_60 = local_40;
    local_5c = local_3c;
    local_58 = 1;
    if (local_68 < 4) {
      uVar4 = (uint)(local_68 != 0);
    }
    else {
      dVar20 = (double)VectorUnsignedToFloat(local_68,(byte)(uVar18 >> 0x16) & 3);
      uVar4 = (uint)(0.0 < SQRT(dVar20)) * (int)(longlong)SQRT(dVar20);
      if (uVar4 == 0) {
LAB_01279878:
                    /* WARNING: Subroutine does not return */
        FUN_00faf2a4(&DAT_0188b844);
      }
      iVar15 = FUN_018462e8(local_68,uVar4);
      uVar18 = iVar15 + uVar4 >> 1;
      if (uVar4 < iVar15 + uVar4 >> 1) {
        do {
          uVar4 = uVar18;
          iVar15 = FUN_018462e8(local_88,uVar4);
          uVar18 = iVar15 + uVar4 >> 1;
        } while (uVar4 < iVar15 + uVar4 >> 1);
        if (uVar4 <= uVar18) goto LAB_01279060;
      }
      else if (uVar4 <= uVar18) goto LAB_01279060;
      do {
        uVar4 = uVar18;
        if (uVar4 == 0) goto LAB_01279878;
        iVar15 = FUN_018462e8(local_88,uVar4);
        uVar18 = iVar15 + uVar4 >> 1;
      } while (iVar15 + uVar4 >> 1 < uVar4);
    }
LAB_01279060:
    local_94 = 1;
    if (local_58 < uVar4) {
      local_94 = 1;
      do {
        puVar6 = local_5c;
        if (local_58 == 1) {
          uVar18 = *local_5c;
          puVar7 = (uint *)thunk_FUN_016d4a50(4);
          if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,4);
          }
          *puVar7 = uVar18;
          local_40 = 1;
          local_38 = 1;
          local_3c = puVar7;
          FUN_01274bd8(&local_40,uVar18);
          local_50 = local_40;
          local_4c = local_3c;
          local_48 = local_38;
        }
        else if (local_58 == 0) {
          local_48 = 0;
          local_4c = (uint *)&DAT_00000004;
          local_50 = 0;
        }
        else {
          FUN_01274d38(&local_50,local_5c,local_58,local_5c,local_58);
        }
        if (local_60 != 0) {
          thunk_FUN_016d3fb4(puVar6);
        }
        local_60 = local_50;
        local_5c = local_4c;
        local_58 = local_48;
        local_94 = local_94 << 1;
      } while (local_48 < uVar4);
    }
    bVar17 = local_58 <= local_88;
    bVar16 = local_88 == local_58;
    if (!bVar16) goto LAB_01279194;
LAB_01279164:
    iVar15 = local_88 << 2;
    do {
      if (iVar15 == 0) goto LAB_0127949c;
      uVar4 = *(uint *)((int)local_5c + iVar15 + -4);
      uVar18 = *(uint *)((int)local_6c + iVar15 + -4);
      iVar15 = iVar15 + -4;
      bVar17 = uVar4 <= uVar18;
      bVar16 = false;
    } while (uVar18 == uVar4);
LAB_01279194:
    do {
      if (!bVar17 || bVar16) goto LAB_0127949c;
      FUN_01279adc(&local_40,&local_70,&local_60);
      local_8c = (uint *)local_2c;
      local_90 = local_30;
      local_84 = uStack_34;
      local_50 = local_40;
      local_4c = local_3c;
      local_48 = local_38;
      if (local_70 != 0) {
        thunk_FUN_016d3fb4(local_6c);
      }
      local_70 = local_50;
      local_6c = local_4c;
      local_68 = local_48;
      if (local_94 != 0) {
        iVar15 = 0;
        do {
          uVar4 = 0;
          uVar18 = 0;
          if (local_8c != (uint *)0x0) {
            iVar9 = (int)local_8c * -4 + 4;
            iVar8 = (int)local_8c << 2;
            do {
              uVar11 = *(uint *)(local_90 - iVar9);
              uVar4 = (uVar18 << 0x10 | uVar11 >> 0x10) / 10000;
              uVar18 = (uVar11 & 0xffff) + ((uVar11 >> 0x10) + uVar4 * -10000) * 0x10000;
              uVar11 = (uint)((ulonglong)uVar18 * 0x68db8bad >> 0x2c);
              uVar18 = uVar18 + uVar11 * -10000;
              *(uint *)(local_90 - iVar9) = uVar11 | uVar4 << 0x10;
              iVar9 = iVar9 + 4;
            } while (iVar9 != 4);
            uVar4 = (uint)local_8c;
            if (*(int *)(local_90 + (int)local_8c * 4 + -4) == 0) {
              uVar11 = (uint)local_8c & 0x3fffffff;
              do {
                uVar13 = uVar11;
                if (iVar8 == 0) {
                  local_8c = (uint *)0x0;
                  if (local_84 >> 2 != 0) goto LAB_01279300;
                  goto LAB_01279358;
                }
                piVar1 = (int *)(local_90 + -4 + iVar8);
                iVar8 = iVar8 + -4;
                uVar11 = uVar13 - 1;
              } while (*piVar1 == 0);
              if (uVar13 < local_8c) {
                uVar4 = uVar13;
              }
            }
          }
          local_8c = (uint *)uVar4;
          if (uVar4 < local_84 >> 2) {
LAB_01279300:
            if (local_84 < local_8c) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,
                           &DAT_018ad594);
            }
            if (local_84 == 0) {
              local_84 = 0;
              goto LAB_01279358;
            }
            local_84 = (uint)local_8c;
            if (local_8c == (uint *)0x0) {
              thunk_FUN_016d3fb4(local_90);
              local_90 = 4;
            }
            else {
              local_90 = thunk_FUN_016d4ea4(local_90,(int)local_8c << 2);
              if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(4,(int)local_8c << 2);
              }
            }
          }
          else {
LAB_01279358:
          }
          iVar8 = local_78;
          if (local_78 == local_80) {
            FUN_006029c0(&local_80);
          }
          iVar9 = iVar8 + 1;
          *(char *)(local_7c + iVar8) = (char)(uVar18 % 10);
          if (iVar9 == local_80) {
            local_78 = iVar9;
            FUN_006029c0(&local_80);
          }
          uVar11 = (uVar18 / 10) % 10;
          iVar14 = iVar8 + 2;
          *(char *)(local_7c + iVar9) = (char)uVar11;
          uVar4 = uVar18 / 100;
          if (iVar14 == local_80) {
            local_78 = iVar14;
            FUN_006029c0(&local_80,local_7c,uVar11,uVar4 * 0x1999999a);
          }
          *(char *)(local_7c + iVar14) = (char)uVar4 + (char)(uVar4 / 10) * -10;
          iVar9 = iVar8 + 3;
          lVar3 = (ulonglong)(uVar18 / 1000) * 0x1999999a;
          if (iVar9 == local_80) {
            local_78 = iVar9;
            FUN_006029c0(&local_80,local_7c,(int)lVar3);
          }
          iVar15 = iVar15 + 1;
          *(char *)(local_7c + iVar9) =
               (char)(uVar18 / 1000) + (char)((ulonglong)lVar3 >> 0x20) * -10;
          local_78 = iVar8 + 4;
        } while (iVar15 != local_94);
      }
      if (local_84 != 0) {
        thunk_FUN_016d3fb4(local_90);
      }
      bVar17 = local_58 <= local_68;
      local_88 = local_68;
      if (local_68 == local_58) goto LAB_01279164;
      bVar16 = false;
    } while( true );
  }
LAB_012794b4:
  if (1 < local_88) {
    do {
      iVar15 = local_88 * -4 + 4;
      uVar4 = 0;
      do {
        uVar11 = *(uint *)((int)local_6c - iVar15);
        uVar18 = (uVar4 << 0x10 | uVar11 >> 0x10) / 10000;
        uVar4 = (uVar11 & 0xffff) + ((uVar11 >> 0x10) + uVar18 * -10000) * 0x10000;
        uVar11 = (uint)((ulonglong)uVar4 * 0x68db8bad >> 0x2c);
        uVar4 = uVar4 + uVar11 * -10000;
        *(uint *)((int)local_6c - iVar15) = uVar11 | uVar18 << 0x10;
        iVar15 = iVar15 + 4;
      } while (iVar15 != 4);
      local_8c = local_6c;
      if (local_6c[local_88 - 1] == 0) {
        iVar15 = local_88 * -4;
        uVar18 = local_88;
        do {
          uVar11 = uVar18;
          if (iVar15 == 0) {
            local_88 = 0;
            if (local_70 >> 2 != 0) goto LAB_01279584;
            goto LAB_01279620;
          }
          iVar8 = -4 - iVar15;
          iVar15 = iVar15 + 4;
          uVar18 = uVar11 - 1;
        } while (*(int *)((int)local_6c + iVar8) == 0);
        if (uVar11 < local_88) {
          local_88 = uVar11;
        }
        if (local_88 < local_70 >> 2) goto LAB_01279584;
LAB_01279620:
        local_84 = local_70;
      }
      else {
        if (local_70 >> 2 <= local_88) goto LAB_01279620;
LAB_01279584:
        if (local_70 < local_88) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,
                       &DAT_018ad594);
        }
        if (local_70 == 0) {
          local_84 = 0;
        }
        else {
          local_84 = local_88;
          if (local_88 == 0) {
            thunk_FUN_016d3fb4(local_6c);
            local_8c = (uint *)&DAT_00000004;
          }
          else {
            local_8c = (uint *)thunk_FUN_016d4ea4(local_6c,local_88 << 2);
            if (local_8c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(4,local_88 << 2);
            }
          }
        }
      }
      iVar15 = local_78;
      if (local_78 == local_80) {
        FUN_006029c0(&local_80);
      }
      iVar8 = iVar15 + 1;
      *(char *)(local_7c + iVar15) = (char)(uVar4 % 10);
      if (iVar8 == local_80) {
        local_78 = iVar8;
        FUN_006029c0(&local_80);
      }
      uVar11 = (uVar4 / 10) % 10;
      *(char *)(local_7c + iVar8) = (char)uVar11;
      uVar18 = uVar4 / 100;
      iVar8 = iVar15 + 2;
      if (iVar8 == local_80) {
        local_78 = iVar8;
        FUN_006029c0(&local_80,local_7c,uVar11,uVar18 * 0x1999999a);
      }
      *(char *)(local_7c + iVar8) = (char)uVar18 + (char)(uVar18 / 10) * -10;
      iVar8 = iVar15 + 3;
      lVar3 = (ulonglong)(uVar4 / 1000) * 0x1999999a;
      if (iVar8 == local_80) {
        local_78 = iVar8;
        FUN_006029c0(&local_80,local_7c,(int)lVar3);
      }
      *(char *)(local_7c + iVar8) = (char)(uVar4 / 1000) + (char)((ulonglong)lVar3 >> 0x20) * -10;
      local_78 = iVar15 + 4;
      local_70 = local_84;
      local_6c = local_8c;
      local_68 = local_88;
    } while (1 < local_88);
  }
  if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_0188b714);
  }
  if (*local_6c != 0) {
    uVar4 = *local_6c;
    do {
      iVar15 = local_78;
      if (local_78 == local_80) {
        FUN_006029c0(&local_80);
      }
      bVar16 = 9 < uVar4;
      *(char *)(local_7c + iVar15) = (char)(uVar4 % 10);
      local_78 = iVar15 + 1;
      uVar4 = uVar4 / 10;
    } while (bVar16);
  }
  *param_1 = local_80;
  param_1[1] = local_7c;
  param_1[2] = local_78;
  if (local_70 != 0) {
    thunk_FUN_016d3fb4(local_6c);
  }
  iVar15 = param_1[2];
  if (iVar15 != 0) {
    pbVar10 = (byte *)param_1[1];
    do {
      bVar2 = *pbVar10;
      bVar12 = bVar2 + 0x57;
      if (bVar2 < 10) {
        bVar12 = bVar2 | 0x30;
      }
      *pbVar10 = bVar12;
      iVar15 = iVar15 + -1;
      pbVar10 = pbVar10 + 1;
    } while (iVar15 != 0);
  }
  return;
LAB_0127949c:
  if (local_60 != 0) {
    thunk_FUN_016d3fb4(local_5c);
    local_88 = local_68;
  }
  goto LAB_012794b4;
}

