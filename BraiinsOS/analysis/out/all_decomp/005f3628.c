// FUN_005f3628 @ 005f3628 size=3744 calls_out=4 calls_in=0
// strings: 

void FUN_005f3628(int param_1,uint *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint local_34;
  uint local_30;
  
  uVar18 = *param_2;
  uVar6 = param_2[1];
  *param_3 = 0;
  if (uVar6 < uVar18) {
    return;
  }
  iVar16 = *(int *)(param_1 + 0x1c);
  uVar11 = param_2[4];
  if ((iVar16 == 0) || ((uVar11 & 1) != 0)) {
    if (param_3[4] != 1) {
      iVar16 = 0x13c;
      if ((uVar11 & 1) != 0) {
        iVar16 = 0x140;
      }
      uVar14 = *(uint *)(param_1 + iVar16);
      if (uVar14 - 1 < *(uint *)(param_1 + 0x138)) {
        uVar12 = param_3[7];
        uVar7 = *(uint *)(param_1 + 8);
        if (param_3[6] == 0) {
          uVar12 = 0;
        }
        if (uVar7 < uVar14) goto LAB_005f42c8;
        uVar7 = uVar7 - uVar14;
        if (uVar7 == 0) goto LAB_005f43f8;
        iVar16 = *(int *)(param_1 + 0x28);
        pbVar8 = (byte *)(*(int *)(param_1 + 4) + uVar14 * 4);
        bVar1 = *pbVar8;
        uVar13 = (uint)bVar1;
        if (uVar13 == 0xff) {
          uVar3 = iVar16 + 2;
          if (uVar7 <= uVar3) goto LAB_005f3808;
        }
        else {
          iVar19 = uVar13 + (bVar1 >> 2);
          uVar3 = iVar19 + 2;
          if ((bVar1 & 3) != 0) {
            uVar3 = iVar19 + 3;
          }
          if (uVar7 <= uVar3) goto LAB_005f4480;
        }
        uVar3 = *(uint *)(pbVar8 + uVar3 * 4);
        if (0x7fffffff < uVar3) {
          uVar3 = 1;
        }
        if (uVar12 < uVar3) {
          param_3[6] = 1;
          param_3[7] = uVar12 + 1;
          if (uVar13 == 0xff) {
            uVar6 = iVar16 + 2;
          }
          else {
            iVar16 = uVar13 + (bVar1 >> 2);
            uVar6 = iVar16 + 2;
            if ((bVar1 & 3) != 0) {
              uVar6 = iVar16 + 3;
            }
          }
          local_34 = uVar12;
          if (uVar7 <= uVar6) goto LAB_005f4490;
          uVar11 = *(uint *)(pbVar8 + uVar6 * 4);
          if ((int)uVar11 < 0) goto joined_r0x005f4118;
          uVar6 = uVar12 + 1 + uVar6;
          if (uVar7 <= uVar6) goto LAB_005f44a0;
LAB_005f40ac:
          uVar11 = *(uint *)(pbVar8 + uVar6 * 4);
          goto LAB_005f4158;
        }
      }
      param_3[4] = 1;
      param_3[5] = uVar14;
      param_3[6] = 0;
      param_3[8] = uVar18;
      *param_3 = 0;
joined_r0x005f3824:
      if (uVar6 <= uVar18) {
LAB_005f3cf4:
        param_3[4] = 1;
        param_3[5] = uVar14;
        return;
      }
      uVar7 = param_2[3];
      uVar13 = param_2[2];
      uVar12 = uVar7;
      if (uVar7 < uVar18) {
        uVar12 = uVar18;
      }
      uVar3 = uVar14;
LAB_005f3a44:
      if (uVar18 == uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar12,uVar7,&DAT_01856f58);
      }
      uVar5 = *(uint *)(param_1 + 8);
      if (uVar5 <= uVar3) {
LAB_005f43a4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar3,uVar5,&DAT_01894748);
      }
      iVar16 = *(int *)(param_1 + 4);
      uVar17 = (uint)*(byte *)(param_1 + 0x2c + (uint)*(byte *)(uVar13 + uVar18));
      if ((uVar11 & 1) == 0) {
        do {
          uVar14 = *(uint *)(iVar16 + uVar3 * 4);
          if ((uVar14 & 0xff) == 0xfe) {
            if (uVar17 == (uVar14 & 0xffff) >> 8) goto joined_r0x005f3cdc;
          }
          else if ((uVar14 & 0xff) == 0xff) {
            uVar14 = uVar17 + 2 + uVar3;
            if (uVar5 <= uVar14) goto LAB_005f43cc;
            uVar14 = *(uint *)(iVar16 + uVar14 * 4);
            if (uVar14 != 1) goto LAB_005f3c98;
          }
          else {
            uVar4 = (uVar14 & 0xff) >> 2;
            if ((uVar14 & 3) != 0) {
              uVar4 = uVar4 + 1;
            }
            uVar14 = uVar3 + 2;
            if (uVar5 < uVar14) goto LAB_005f429c;
            uVar9 = uVar5 - uVar14;
            if (uVar9 < uVar4) goto LAB_005f428c;
            iVar19 = uVar4 << 2;
            iVar15 = 0;
            while (iVar19 != 0) {
              uVar9 = *(uint *)(iVar16 + uVar14 * 4 + iVar15 * 4);
              if (uVar17 == (uVar9 & 0xff)) goto LAB_005f3c4c;
              if (uVar17 == (uVar9 & 0xffff) >> 8) goto LAB_005f3c64;
              if (uVar17 == (uVar9 & 0xffffff) >> 0x10) goto LAB_005f3c80;
              iVar15 = iVar15 + 1;
              iVar19 = iVar19 + -4;
              if (uVar17 == uVar9 >> 0x18) goto LAB_005f3c2c;
            }
          }
          uVar3 = uVar3 + 1;
          if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar3,uVar5,&DAT_018947d8);
          }
          uVar3 = *(uint *)(iVar16 + uVar3 * 4);
          if (uVar5 <= uVar3) goto LAB_005f43a4;
        } while( true );
      }
      uVar14 = *(uint *)(iVar16 + uVar3 * 4);
      if ((uVar14 & 0xff) != 0xff) {
        if ((uVar14 & 0xff) == 0xfe) {
          if (uVar17 != (uVar14 & 0xffff) >> 8) {
LAB_005f3d04:
            param_3[4] = 1;
            param_3[5] = 0;
            return;
          }
joined_r0x005f3cdc:
          uVar3 = uVar3 + 2;
          if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar3,uVar5,&DAT_018947b8);
          }
        }
        else {
          uVar4 = (uVar14 & 0xff) >> 2;
          if ((uVar14 & 3) != 0) {
            uVar4 = uVar4 + 1;
          }
          uVar14 = uVar3 + 2;
          if (uVar5 < uVar14) {
LAB_005f429c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar14,uVar5,uVar5,&DAT_018947a8);
          }
          uVar9 = uVar5 - uVar14;
          if (uVar9 < uVar4) {
LAB_005f428c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar4,uVar9,&DAT_01894798);
          }
          iVar19 = uVar4 << 2;
          iVar15 = 0;
          do {
            if (iVar19 == 0) goto LAB_005f3d04;
            uVar3 = *(uint *)(iVar16 + uVar14 * 4 + iVar15 * 4);
            if (uVar17 == (uVar3 & 0xff)) goto LAB_005f3c4c;
            if (uVar17 == (uVar3 & 0xffff) >> 8) goto LAB_005f3c64;
            if (uVar17 == (uVar3 & 0xffffff) >> 0x10) goto LAB_005f3c80;
            iVar15 = iVar15 + 1;
            iVar19 = iVar19 + -4;
          } while (uVar17 != uVar3 >> 0x18);
LAB_005f3c2c:
          uVar3 = uVar4 + uVar14 + (iVar15 + -1) * 4 + 3;
          if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar3,uVar5,&DAT_01894758);
          }
        }
        goto LAB_005f3c94;
      }
      uVar14 = uVar17 + 2 + uVar3;
      if (uVar5 <= uVar14) {
LAB_005f43cc:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar14,uVar5,&DAT_018947c8);
      }
      uVar3 = *(uint *)(iVar16 + uVar14 * 4);
      uVar14 = 0;
      if (uVar3 != 1) {
        uVar14 = uVar3;
      }
      goto LAB_005f3c98;
    }
    uVar14 = param_3[5];
    if (param_3[6] == 0) {
      uVar18 = param_3[8];
      goto joined_r0x005f3824;
    }
    uVar7 = *(uint *)(param_1 + 8);
    if (uVar7 < uVar14) {
LAB_005f42c8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar14,uVar7,uVar7,&DAT_01894808);
    }
    uVar7 = uVar7 - uVar14;
    if (uVar7 == 0) goto LAB_005f43f8;
    uVar12 = param_3[7];
    pbVar8 = (byte *)(*(int *)(param_1 + 4) + uVar14 * 4);
    iVar16 = *(int *)(param_1 + 0x28);
    bVar1 = *pbVar8;
    uVar18 = (uint)bVar1;
    if (uVar18 == 0xff) {
      uVar3 = iVar16 + 2;
      if (uVar7 <= uVar3) goto LAB_005f3808;
    }
    else {
      iVar19 = uVar18 + (bVar1 >> 2);
      uVar3 = iVar19 + 2;
      if ((bVar1 & 3) != 0) {
        uVar3 = iVar19 + 3;
      }
      if (uVar7 <= uVar3) goto LAB_005f4480;
    }
    uVar13 = *(uint *)(pbVar8 + uVar3 * 4);
    if (0x7fffffff < uVar13) {
      uVar13 = 1;
    }
    if (uVar13 <= uVar12) {
      param_3[6] = 0;
      uVar18 = param_3[8] + 1;
      *param_3 = 0;
      param_3[8] = uVar18;
      goto joined_r0x005f3824;
    }
    param_3[6] = 1;
    param_3[7] = uVar12 + 1;
    if (uVar18 == 0xff) {
      uVar6 = iVar16 + 2;
    }
    else {
      iVar16 = uVar18 + (bVar1 >> 2);
      uVar6 = iVar16 + 2;
      if ((bVar1 & 3) != 0) {
        uVar6 = iVar16 + 3;
      }
    }
    local_34 = uVar12;
    if (uVar7 <= uVar6) goto LAB_005f4490;
    if ((int)*(uint *)(pbVar8 + uVar6 * 4) < 0) {
      if (uVar12 != 0) goto LAB_005f42f0;
      uVar11 = *(uint *)(pbVar8 + uVar6 * 4) & 0x7fffffff;
    }
    else {
      uVar6 = uVar12 + 1 + uVar6;
      if (uVar7 <= uVar6) goto LAB_005f44a0;
      uVar11 = *(uint *)(pbVar8 + uVar6 * 4);
    }
    uVar6 = *(uint *)(param_1 + 0x14);
    if (uVar6 <= uVar11) goto LAB_005f4424;
    iVar16 = *(int *)(param_1 + 0x10);
    uVar18 = param_3[8] + 1;
  }
  else {
    if (param_3[4] != 1) {
      uVar11 = *(uint *)(param_1 + 0x13c);
      if (uVar11 - 1 < *(uint *)(param_1 + 0x138)) {
        uVar12 = param_3[7];
        uVar7 = *(uint *)(param_1 + 8);
        if (param_3[6] == 0) {
          uVar12 = 0;
        }
        if (uVar7 < uVar11) goto LAB_005f42dc;
        uVar7 = uVar7 - uVar11;
        if (uVar7 == 0) goto LAB_005f43f8;
        iVar19 = *(int *)(param_1 + 0x28);
        pbVar8 = (byte *)(*(int *)(param_1 + 4) + uVar11 * 4);
        bVar1 = *pbVar8;
        uVar14 = (uint)bVar1;
        if (uVar14 == 0xff) {
          uVar3 = iVar19 + 2;
          if (uVar7 <= uVar3) goto LAB_005f3808;
        }
        else {
          iVar15 = uVar14 + (bVar1 >> 2);
          uVar3 = iVar15 + 2;
          if ((bVar1 & 3) != 0) {
            uVar3 = iVar15 + 3;
          }
          if (uVar7 <= uVar3) goto LAB_005f4480;
        }
        uVar13 = *(uint *)(pbVar8 + uVar3 * 4);
        if (0x7fffffff < uVar13) {
          uVar13 = 1;
        }
        if (uVar12 < uVar13) {
          param_3[6] = 1;
          param_3[7] = uVar12 + 1;
          if (uVar14 == 0xff) {
            uVar6 = iVar19 + 2;
          }
          else {
            iVar16 = uVar14 + (bVar1 >> 2);
            uVar6 = iVar16 + 2;
            if ((bVar1 & 3) != 0) {
              uVar6 = iVar16 + 3;
            }
          }
          local_34 = uVar12;
          if (uVar7 <= uVar6) goto LAB_005f4490;
          uVar11 = *(uint *)(pbVar8 + uVar6 * 4);
          if (-1 < (int)uVar11) {
            uVar6 = uVar12 + 1 + uVar6;
            if (uVar7 <= uVar6) goto LAB_005f44a0;
            goto LAB_005f40ac;
          }
joined_r0x005f4118:
          local_34 = uVar12;
          if (uVar12 != 0) {
LAB_005f42f0:
                    /* WARNING: Subroutine does not return */
            FUN_00fb3aac(0,&DAT_00568f30,&local_34,0);
          }
          uVar11 = uVar11 & 0x7fffffff;
          local_34 = 0;
LAB_005f4158:
          uVar6 = *(uint *)(param_1 + 0x14);
          if (uVar6 <= uVar11) {
LAB_005f4424:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar11,uVar6,&DAT_018947e8);
          }
          uVar6 = *(uint *)(*(int *)(param_1 + 0x10) + uVar11 * 4);
          if (uVar6 <= uVar18) {
            *param_3 = 1;
            param_3[1] = uVar18 - uVar6;
            param_3[2] = uVar18;
            param_3[3] = uVar11;
            return;
          }
          goto LAB_005f42b0;
        }
      }
      param_3[4] = 1;
      param_3[5] = uVar11;
      param_3[6] = 0;
      param_3[8] = uVar18;
      *param_3 = 0;
joined_r0x005f39d4:
      if (uVar18 < uVar6) {
        uVar12 = param_2[3];
        uVar7 = param_2[2];
        uVar14 = uVar11;
        do {
          if (uVar12 <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar18,uVar12,&DAT_01856f58);
          }
          uVar5 = *(uint *)(param_1 + 8);
          if (uVar5 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar14,uVar5,&DAT_01894748);
          }
          iVar19 = *(int *)(param_1 + 4);
          uVar13 = (uint)*(byte *)(param_1 + 0x2c + (uint)*(byte *)(uVar7 + uVar18));
LAB_005f3db0:
          uVar11 = *(uint *)(iVar19 + uVar14 * 4);
          if ((uVar11 & 0xff) != 0xfe) {
            if ((uVar11 & 0xff) == 0xff) {
              uVar11 = uVar13 + 2 + uVar14;
              if (uVar5 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar11,uVar5,&DAT_018947c8);
              }
              uVar11 = *(uint *)(iVar19 + uVar11 * 4);
              if (uVar11 != 1) goto LAB_005f3ee0;
            }
            else {
              uVar3 = (uVar11 & 0xff) >> 2;
              if ((uVar11 & 3) != 0) {
                uVar3 = uVar3 + 1;
              }
              uVar11 = uVar14 + 2;
              if (uVar5 < uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(uVar11,uVar5,uVar5,&DAT_018947a8);
              }
              if (uVar5 - uVar11 < uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0,uVar3,uVar5 - uVar11,&DAT_01894798);
              }
              iVar15 = uVar3 << 2;
              iVar2 = 0;
              while (iVar10 = iVar2, iVar15 != 0) {
                uVar17 = *(uint *)(iVar19 + uVar11 * 4 + iVar10 * 4);
                if (uVar13 == (uVar17 & 0xff)) {
                  uVar14 = uVar3 + uVar11 + iVar10 * 4;
                  if (uVar5 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar14,uVar5,&DAT_01894788);
                  }
                  goto LAB_005f3edc;
                }
                if (uVar13 == (uVar17 & 0xffff) >> 8) {
                  uVar14 = uVar3 + uVar11 + iVar10 * 4 + 1;
                  if (uVar5 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar14,uVar5,&DAT_01894778);
                  }
                  goto LAB_005f3edc;
                }
                if (uVar13 == (uVar17 & 0xffffff) >> 0x10) {
                  uVar14 = uVar3 + uVar11 + iVar10 * 4 + 2;
                  if (uVar5 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar14,uVar5,&DAT_01894768);
                  }
                  goto LAB_005f3edc;
                }
                iVar15 = iVar15 + -4;
                iVar2 = iVar10 + 1;
                if (uVar13 == uVar17 >> 0x18) {
                  uVar14 = uVar3 + uVar11 + iVar10 * 4 + 3;
                  if (uVar5 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar14,uVar5,&DAT_01894758);
                  }
                  goto LAB_005f3edc;
                }
              }
            }
LAB_005f3df0:
            uVar14 = uVar14 + 1;
            if (uVar5 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar14,uVar5,&DAT_018947d8);
            }
            uVar14 = *(uint *)(iVar19 + uVar14 * 4);
            if (uVar5 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar14,uVar5,&DAT_01894748);
            }
            goto LAB_005f3db0;
          }
          if (uVar13 != (uVar11 & 0xffff) >> 8) goto LAB_005f3df0;
          uVar14 = uVar14 + 2;
          if (uVar5 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar14,uVar5,&DAT_018947b8);
          }
LAB_005f3edc:
          uVar11 = *(uint *)(iVar19 + uVar14 * 4);
LAB_005f3ee0:
          if (*(uint *)(param_1 + 0x134) < uVar11) {
            uVar13 = uVar18 + 1;
          }
          else {
            param_3[4] = 1;
            param_3[5] = uVar11;
            if (uVar11 == 0) {
              return;
            }
            if (uVar11 <= *(uint *)(param_1 + 0x138)) {
              param_3[6] = 1;
              param_3[7] = 1;
              if (uVar5 < uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(uVar11,uVar5,uVar5,&DAT_018947f8);
              }
              uVar5 = uVar5 - uVar11;
              if (uVar5 == 0) goto LAB_005f43f8;
              pbVar8 = (byte *)(iVar19 + uVar11 * 4);
              bVar1 = *pbVar8;
              if (bVar1 == 0xff) {
                uVar6 = *(int *)(param_1 + 0x28) + 2;
              }
              else {
                iVar16 = (uint)bVar1 + (uint)(bVar1 >> 2);
                uVar6 = iVar16 + 2;
                if ((bVar1 & 3) != 0) {
                  uVar6 = iVar16 + 3;
                }
              }
              if (uVar5 <= uVar6) {
LAB_005f44b0:
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar6,uVar5,&DAT_01894528);
              }
              if ((int)*(uint *)(pbVar8 + uVar6 * 4) < 0) {
                uVar11 = *(uint *)(pbVar8 + uVar6 * 4) & 0x7fffffff;
              }
              else {
                uVar6 = uVar6 + 1;
                if (uVar5 <= uVar6) {
LAB_005f44bc:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar6,uVar5,&DAT_01894538);
                }
                uVar11 = *(uint *)(pbVar8 + uVar6 * 4);
              }
              uVar6 = *(uint *)(param_1 + 0x14);
              if (uVar6 <= uVar11) goto LAB_005f4424;
              uVar18 = uVar18 + 1;
              iVar16 = *(int *)(param_1 + 0x10);
              goto LAB_005f4238;
            }
            (**(code **)(*(int *)(param_1 + 0x20) + 0x10))
                      (&local_34,
                       iVar16 + 8 + (*(int *)(*(int *)(param_1 + 0x20) + 8) - 1U & 0xfffffff8),uVar7
                       ,uVar12,uVar18,uVar6);
            if (local_34 == 0) {
              return;
            }
            uVar13 = local_30;
            if (local_30 <= uVar18) {
              uVar13 = uVar18 + 1;
            }
          }
          param_3[8] = uVar13;
          uVar14 = uVar11;
          uVar18 = uVar13;
        } while (uVar13 < uVar6);
      }
      param_3[4] = 1;
      param_3[5] = uVar11;
      return;
    }
    uVar11 = param_3[5];
    if (param_3[6] == 0) {
      uVar18 = param_3[8];
      goto joined_r0x005f39d4;
    }
    uVar7 = *(uint *)(param_1 + 8);
    if (uVar7 < uVar11) {
LAB_005f42dc:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar11,uVar7,uVar7,&DAT_01894808);
    }
    uVar7 = uVar7 - uVar11;
    if (uVar7 == 0) {
LAB_005f43f8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0,0,&DAT_01894518);
    }
    uVar14 = param_3[7];
    pbVar8 = (byte *)(*(int *)(param_1 + 4) + uVar11 * 4);
    iVar19 = *(int *)(param_1 + 0x28);
    bVar1 = *pbVar8;
    uVar18 = (uint)bVar1;
    if (uVar18 == 0xff) {
      uVar3 = iVar19 + 2;
      if (uVar7 <= uVar3) {
LAB_005f3808:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar3,uVar7,&DAT_01894568);
      }
    }
    else {
      iVar15 = uVar18 + (bVar1 >> 2);
      uVar3 = iVar15 + 2;
      if ((bVar1 & 3) != 0) {
        uVar3 = iVar15 + 3;
      }
      if (uVar7 <= uVar3) {
LAB_005f4480:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar3,uVar7,&DAT_01894558);
      }
    }
    uVar12 = *(uint *)(pbVar8 + uVar3 * 4);
    if (0x7fffffff < uVar12) {
      uVar12 = 1;
    }
    if (uVar12 <= uVar14) {
      param_3[6] = 0;
      uVar18 = param_3[8] + 1;
      *param_3 = 0;
      param_3[8] = uVar18;
      goto joined_r0x005f39d4;
    }
    param_3[6] = 1;
    param_3[7] = uVar14 + 1;
    if (uVar18 == 0xff) {
      uVar6 = iVar19 + 2;
    }
    else {
      iVar16 = uVar18 + (bVar1 >> 2);
      uVar6 = iVar16 + 2;
      if ((bVar1 & 3) != 0) {
        uVar6 = iVar16 + 3;
      }
    }
    local_34 = uVar14;
    if (uVar7 <= uVar6) {
LAB_005f4490:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar6,uVar7,&DAT_01894528);
    }
    if ((int)*(uint *)(pbVar8 + uVar6 * 4) < 0) {
      if (uVar14 != 0) goto LAB_005f42f0;
      uVar11 = *(uint *)(pbVar8 + uVar6 * 4) & 0x7fffffff;
    }
    else {
      uVar6 = uVar14 + 1 + uVar6;
      if (uVar7 <= uVar6) {
LAB_005f44a0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar6,uVar7,&DAT_01894538);
      }
      uVar11 = *(uint *)(pbVar8 + uVar6 * 4);
    }
    uVar6 = *(uint *)(param_1 + 0x14);
    if (uVar6 <= uVar11) goto LAB_005f4424;
    uVar18 = param_3[8] + 1;
    iVar16 = *(int *)(param_1 + 0x10);
  }
LAB_005f4238:
  uVar6 = *(uint *)(iVar16 + uVar11 * 4);
  if (uVar6 <= uVar18) {
    *param_3 = 1;
    param_3[1] = uVar18 - uVar6;
    param_3[2] = uVar18;
    param_3[3] = uVar11;
    return;
  }
LAB_005f42b0:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018945d8);
LAB_005f3c4c:
  uVar3 = uVar4 + uVar14 + iVar15 * 4;
  if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,uVar5,&DAT_01894788);
  }
  goto LAB_005f3c94;
LAB_005f3c64:
  uVar3 = uVar4 + uVar14 + iVar15 * 4 + 1;
  if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,uVar5,&DAT_01894778);
  }
  goto LAB_005f3c94;
LAB_005f3c80:
  uVar3 = uVar4 + uVar14 + iVar15 * 4 + 2;
  if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,uVar5,&DAT_01894768);
  }
LAB_005f3c94:
  uVar14 = *(uint *)(iVar16 + uVar3 * 4);
LAB_005f3c98:
  if (uVar14 <= *(uint *)(param_1 + 0x134)) {
    param_3[4] = 1;
    param_3[5] = uVar14;
    if (uVar14 == 0) {
      return;
    }
    if (uVar14 <= *(uint *)(param_1 + 0x138)) {
      param_3[6] = 1;
      param_3[7] = 1;
      if (uVar5 < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar14,uVar5,uVar5,&DAT_018947f8);
      }
      uVar5 = uVar5 - uVar14;
      if (uVar5 == 0) goto LAB_005f43f8;
      pbVar8 = (byte *)(iVar16 + uVar14 * 4);
      bVar1 = *pbVar8;
      if (bVar1 == 0xff) {
        uVar6 = *(int *)(param_1 + 0x28) + 2;
      }
      else {
        iVar16 = (uint)bVar1 + (uint)(bVar1 >> 2);
        uVar6 = iVar16 + 2;
        if ((bVar1 & 3) != 0) {
          uVar6 = iVar16 + 3;
        }
      }
      if (uVar5 <= uVar6) goto LAB_005f44b0;
      if ((int)*(uint *)(pbVar8 + uVar6 * 4) < 0) {
        uVar11 = *(uint *)(pbVar8 + uVar6 * 4) & 0x7fffffff;
      }
      else {
        uVar6 = uVar6 + 1;
        if (uVar5 <= uVar6) goto LAB_005f44bc;
        uVar11 = *(uint *)(pbVar8 + uVar6 * 4);
      }
      uVar6 = *(uint *)(param_1 + 0x14);
      if (uVar6 <= uVar11) goto LAB_005f4424;
      uVar18 = uVar18 + 1;
      iVar16 = *(int *)(param_1 + 0x10);
      goto LAB_005f4238;
    }
  }
  uVar18 = uVar18 + 1;
  param_3[8] = uVar18;
  uVar3 = uVar14;
  if (uVar18 == uVar6) goto LAB_005f3cf4;
  goto LAB_005f3a44;
}

