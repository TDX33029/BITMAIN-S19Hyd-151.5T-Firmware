// FUN_005f1bb4 @ 005f1bb4 size=6464 calls_out=3 calls_in=1
// strings: 

void FUN_005f1bb4(undefined4 *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint unaff_r9;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  char cVar22;
  uint local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar8 = *param_3;
  uVar18 = param_3[1];
  if (uVar18 < uVar8) {
LAB_005f1bd0:
    *param_1 = 0;
    return;
  }
  if (*(char *)(param_2 + 0x144) == '\0') {
    cVar22 = '\x01';
    if ((char)param_3[4] != '\0') goto LAB_005f1c6c;
    iVar2 = *(int *)(param_2 + 0x1c);
    if (iVar2 != 0) goto LAB_005f1cd0;
  }
  else {
    cVar22 = *(char *)((int)param_3 + 0x11);
    if ((char)param_3[4] != '\0') {
LAB_005f1c6c:
      uVar19 = *(uint *)(param_2 + 0x140);
      local_5c = uVar19 - 1;
      if (*(uint *)(param_2 + 0x138) <= local_5c) {
        local_54 = 0;
LAB_005f1e88:
        local_58 = local_5c;
        if (uVar8 < uVar18) {
          uVar7 = param_3[3];
          uVar10 = uVar8;
          if (uVar8 < uVar7) {
            uVar10 = uVar7;
          }
          uVar4 = uVar8;
          local_5c = uVar8;
          do {
            if (uVar4 == uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar10,uVar7,&DAT_01856f48);
            }
            uVar14 = *(uint *)(param_2 + 8);
            if (uVar14 <= uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar19,uVar14,&DAT_01894748);
            }
            iVar2 = *(int *)(param_2 + 4);
            uVar16 = (uint)*(byte *)(param_2 + 0x2c + (uint)*(byte *)(param_3[2] + uVar4));
            uVar3 = *(uint *)(iVar2 + uVar19 * 4);
            if ((uVar3 & 0xff) == 0xfe) {
              if (uVar16 != (uVar3 & 0xffff) >> 8) break;
              uVar19 = uVar19 + 2;
              if (uVar14 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar19,uVar14,&DAT_018947b8);
              }
              uVar19 = *(uint *)(iVar2 + uVar19 * 4);
              if (uVar19 <= *(uint *)(param_2 + 0x134)) goto LAB_005f2050;
            }
            else if ((uVar3 & 0xff) == 0xff) {
              uVar19 = uVar19 + uVar16 + 2;
              if (uVar14 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar19,uVar14,&DAT_018947c8);
              }
              uVar3 = *(uint *)(iVar2 + uVar19 * 4);
              uVar19 = 0;
              if (uVar3 != 1) {
                uVar19 = uVar3;
              }
              if (uVar19 <= *(uint *)(param_2 + 0x134)) goto LAB_005f2050;
            }
            else {
              uVar12 = (uVar3 & 0xff) >> 2;
              if ((uVar3 & 3) != 0) {
                uVar12 = uVar12 + 1;
              }
              uVar19 = uVar19 + 2;
              if (uVar14 < uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(uVar19,uVar14,uVar14,&DAT_018947a8);
              }
              uVar3 = uVar14 - uVar19;
              if (uVar3 < uVar12) {
LAB_005f2f84:
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0,uVar12,uVar3,&DAT_01894798);
              }
              iVar20 = uVar12 + uVar19;
              iVar21 = uVar12 << 2;
              iVar17 = 0;
              do {
                iVar9 = iVar17;
                if (iVar21 == 0) goto LAB_005f212c;
                uVar3 = *(uint *)(iVar2 + uVar19 * 4 + iVar9 * 4);
                if (uVar16 == (uVar3 & 0xff)) {
                  uVar19 = iVar20 + iVar9 * 4;
                  if (uVar14 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar19,uVar14,&DAT_01894788);
                  }
                  goto LAB_005f2040;
                }
                if (uVar16 == (uVar3 & 0xffff) >> 8) {
                  uVar19 = iVar20 + iVar9 * 4 + 1;
                  if (uVar14 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar19,uVar14,&DAT_01894778);
                  }
                  goto LAB_005f2040;
                }
                if (uVar16 == (uVar3 & 0xffffff) >> 0x10) {
                  uVar19 = iVar20 + iVar9 * 4 + 2;
                  if (uVar14 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar19,uVar14,&DAT_01894768);
                  }
                  goto LAB_005f2040;
                }
                iVar21 = iVar21 + -4;
                iVar17 = iVar9 + 1;
              } while (uVar16 != uVar3 >> 0x18);
              uVar19 = iVar20 + iVar9 * 4 + 3;
              if (uVar14 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar19,uVar14,&DAT_01894758);
              }
LAB_005f2040:
              uVar19 = *(uint *)(iVar2 + uVar19 * 4);
              if (uVar19 <= *(uint *)(param_2 + 0x134)) {
LAB_005f2050:
                if (uVar19 == 0) break;
                if (uVar19 <= *(uint *)(param_2 + 0x138)) {
                  if (uVar14 < uVar19) goto LAB_005f2ff0;
                  uVar14 = uVar14 - uVar19;
                  if (uVar14 == 0) goto LAB_005f3174;
                  pbVar15 = (byte *)(iVar2 + uVar19 * 4);
                  bVar1 = *pbVar15;
                  if (bVar1 == 0xff) {
                    uVar3 = *(int *)(param_2 + 0x28) + 2;
                  }
                  else {
                    iVar2 = (uint)bVar1 + (uint)(bVar1 >> 2);
                    uVar3 = iVar2 + 2;
                    if ((bVar1 & 3) != 0) {
                      uVar3 = iVar2 + 3;
                    }
                  }
                  if (uVar14 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar3,uVar14,&DAT_01894528);
                  }
                  if ((int)*(uint *)(pbVar15 + uVar3 * 4) < 0) {
                    uVar3 = *(uint *)(pbVar15 + uVar3 * 4) & 0x7fffffff;
                    uVar14 = *(uint *)(param_2 + 0x14);
                    if (uVar14 <= uVar3) goto LAB_005f3288;
                  }
                  else {
                    uVar3 = uVar3 + 1;
                    if (uVar14 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                      FUN_00faa4a4(uVar3,uVar14,&DAT_01894538);
                    }
                    uVar3 = *(uint *)(pbVar15 + uVar3 * 4);
                    uVar14 = *(uint *)(param_2 + 0x14);
                    if (uVar14 <= uVar3) {
LAB_005f3288:
                    /* WARNING: Subroutine does not return */
                      FUN_00faa4a4(uVar3,uVar14,&DAT_018947e8);
                    }
                  }
                  uVar16 = uVar4 + 1;
                  uVar14 = *(uint *)(*(int *)(param_2 + 0x10) + uVar3 * 4);
                  uVar12 = uVar16 - uVar14;
                  if (uVar16 < uVar14) goto LAB_005f2f6c;
                  if (uVar12 <= uVar8) {
                    local_54 = 1;
                    if (cVar22 != '\0') {
                      *param_1 = 1;
                      param_1[1] = uVar12;
                      param_1[2] = uVar16;
                      param_1[3] = uVar3;
                      return;
                    }
                    local_60 = uVar12;
                    local_5c = uVar16;
                    local_58 = uVar3;
                  }
                }
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar18);
        }
        else {
          local_5c = uVar8;
        }
LAB_005f212c:
        *param_1 = local_54;
        param_1[1] = local_60;
        param_1[2] = local_5c;
        param_1[3] = local_58;
        return;
      }
      uVar14 = *(uint *)(param_2 + 8);
      if (uVar14 < uVar19) {
LAB_005f2ff0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar19,uVar14,uVar14,&DAT_018947f8);
      }
      uVar14 = uVar14 - uVar19;
      if (uVar14 == 0) goto LAB_005f3174;
      pbVar15 = (byte *)(*(int *)(param_2 + 4) + uVar19 * 4);
      bVar1 = *pbVar15;
      if (bVar1 == 0xff) {
        uVar10 = *(int *)(param_2 + 0x28) + 2;
      }
      else {
        iVar2 = (uint)bVar1 + (uint)(bVar1 >> 2);
        uVar10 = iVar2 + 2;
        if ((bVar1 & 3) != 0) {
          uVar10 = iVar2 + 3;
        }
      }
      if (uVar14 <= uVar10) {
LAB_005f329c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar10,uVar14,&DAT_01894528);
      }
      if ((int)*(uint *)(pbVar15 + uVar10 * 4) < 0) {
        local_5c = *(uint *)(pbVar15 + uVar10 * 4) & 0x7fffffff;
        uVar14 = *(uint *)(param_2 + 0x14);
        if (uVar14 <= local_5c) {
LAB_005f3240:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(local_5c,uVar14,&DAT_018947e8);
        }
      }
      else {
        uVar10 = uVar10 + 1;
        if (uVar14 <= uVar10) {
LAB_005f32fc:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar10,uVar14,&DAT_01894538);
        }
        local_5c = *(uint *)(pbVar15 + uVar10 * 4);
        uVar14 = *(uint *)(param_2 + 0x14);
        if (uVar14 <= local_5c) goto LAB_005f3240;
      }
      uVar14 = *(uint *)(*(int *)(param_2 + 0x10) + local_5c * 4);
      local_60 = uVar8 - uVar14;
      if (uVar14 <= uVar8) {
        local_54 = 1;
        if (cVar22 != '\0') {
          *param_1 = 1;
          param_1[3] = local_5c;
          param_1[1] = local_60;
          param_1[2] = uVar8;
          return;
        }
        goto LAB_005f1e88;
      }
      goto LAB_005f2f6c;
    }
    iVar2 = *(int *)(param_2 + 0x1c);
    if (iVar2 != 0) {
      if (cVar22 == '\0') {
        uVar19 = *(uint *)(param_2 + 0x13c);
        if (uVar19 - 1 < *(uint *)(param_2 + 0x138)) {
          uVar14 = *(uint *)(param_2 + 8);
          if (uVar14 < uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar19,uVar14,uVar14,&DAT_018947f8);
          }
          uVar14 = uVar14 - uVar19;
          if (uVar14 == 0) goto LAB_005f3174;
          pbVar15 = (byte *)(*(int *)(param_2 + 4) + uVar19 * 4);
          bVar1 = *pbVar15;
          if (bVar1 == 0xff) {
            uVar10 = *(int *)(param_2 + 0x28) + 2;
          }
          else {
            iVar21 = (uint)bVar1 + (uint)(bVar1 >> 2);
            uVar10 = iVar21 + 2;
            if ((bVar1 & 3) != 0) {
              uVar10 = iVar21 + 3;
            }
          }
          if (uVar14 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar10,uVar14,&DAT_01894528);
          }
          if ((int)*(uint *)(pbVar15 + uVar10 * 4) < 0) {
            unaff_r9 = *(uint *)(pbVar15 + uVar10 * 4) & 0x7fffffff;
          }
          else {
            uVar10 = uVar10 + 1;
            if (uVar14 <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar10,uVar14,&DAT_01894538);
            }
            unaff_r9 = *(uint *)(pbVar15 + uVar10 * 4);
          }
          if (*(uint *)(param_2 + 0x14) <= unaff_r9) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(unaff_r9,*(uint *)(param_2 + 0x14),&DAT_018947e8);
          }
          uVar14 = *(uint *)(*(int *)(param_2 + 0x10) + unaff_r9 * 4);
          local_64 = uVar8 - uVar14;
          if (uVar8 < uVar14) goto LAB_005f2f6c;
          local_60 = 1;
        }
        else {
          local_60 = 0;
        }
        uVar10 = param_3[2];
        uVar7 = param_3[3];
        pcVar11 = *(code **)(*(int *)(param_2 + 0x20) + 0x10);
        uVar14 = *(int *)(*(int *)(param_2 + 0x20) + 8) - 1U & 0xfffffff8;
        (*pcVar11)(&local_34,iVar2 + uVar14 + 8);
        if (local_34 == 0) goto LAB_005f1bd0;
        if (local_34 == 1) {
          param_1[1] = local_30;
          param_1[2] = local_2c;
          param_1[3] = local_28;
          *param_1 = 1;
          return;
        }
        uVar4 = local_30;
        local_68 = unaff_r9;
        do {
          uVar3 = uVar19;
LAB_005f27d4:
          uVar16 = uVar4;
          if (uVar18 <= uVar16) {
LAB_005f2a88:
            *param_1 = local_60;
            param_1[1] = local_64;
            param_1[2] = uVar8;
            param_1[3] = local_68;
            return;
          }
          if (uVar7 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar16,uVar7,&DAT_01856f48);
          }
          uVar4 = *(uint *)(param_2 + 8);
          if (uVar4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar3,uVar4,&DAT_01894748);
          }
          iVar2 = *(int *)(param_2 + 4);
          uVar12 = (uint)*(byte *)(param_2 + 0x2c + (uint)*(byte *)(uVar10 + uVar16));
LAB_005f2818:
          uVar19 = *(uint *)(iVar2 + uVar3 * 4);
          if ((uVar19 & 0xff) != 0xfe) {
            if ((uVar19 & 0xff) == 0xff) {
              uVar19 = uVar12 + 2 + uVar3;
              if (uVar4 <= uVar19) goto LAB_005f319c;
              uVar19 = *(uint *)(iVar2 + uVar19 * 4);
              if (uVar19 != 1) goto LAB_005f294c;
            }
            else {
              uVar13 = (uVar19 & 0xff) >> 2;
              if ((uVar19 & 3) != 0) {
                uVar13 = uVar13 + 1;
              }
              uVar19 = uVar3 + 2;
              if (uVar4 < uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(uVar19,uVar4,uVar4,&DAT_018947a8);
              }
              uVar6 = uVar4 - uVar19;
              if (uVar6 < uVar13) goto LAB_005f2f98;
              iVar21 = uVar13 << 2;
              iVar17 = 0;
              while (iVar20 = iVar17, iVar21 != 0) {
                uVar6 = *(uint *)(iVar2 + uVar19 * 4 + iVar20 * 4);
                if (uVar12 == (uVar6 & 0xff)) {
                  uVar3 = uVar13 + uVar19 + iVar20 * 4;
                  if (uVar3 < uVar4) goto LAB_005f2948;
                  goto LAB_005f333c;
                }
                if (uVar12 == (uVar6 & 0xffff) >> 8) {
                  uVar3 = uVar13 + uVar19 + iVar20 * 4 + 1;
                  if (uVar3 < uVar4) goto LAB_005f2948;
                  goto LAB_005f335c;
                }
                if (uVar12 == (uVar6 & 0xffffff) >> 0x10) {
                  uVar3 = uVar13 + uVar19 + iVar20 * 4 + 2;
                  if (uVar4 <= uVar3) goto LAB_005f3390;
                  goto LAB_005f2948;
                }
                iVar21 = iVar21 + -4;
                iVar17 = iVar20 + 1;
                if (uVar12 == uVar6 >> 0x18) {
                  uVar3 = uVar13 + uVar19 + iVar20 * 4 + 3;
                  if (uVar3 < uVar4) goto LAB_005f2948;
                  goto LAB_005f339c;
                }
              }
            }
LAB_005f285c:
            uVar3 = uVar3 + 1;
            if (uVar4 <= uVar3) goto LAB_005f3118;
            uVar3 = *(uint *)(iVar2 + uVar3 * 4);
            if (uVar4 <= uVar3) goto LAB_005f310c;
            goto LAB_005f2818;
          }
          if (uVar12 != (uVar19 & 0xffff) >> 8) goto LAB_005f285c;
          uVar3 = uVar3 + 2;
          if (uVar4 <= uVar3) goto LAB_005f2644;
LAB_005f2948:
          uVar19 = *(uint *)(iVar2 + uVar3 * 4);
LAB_005f294c:
          uVar3 = uVar19;
          if (*(uint *)(param_2 + 0x134) < uVar19) goto LAB_005f29c0;
          if (uVar19 == 0) goto LAB_005f2a88;
          if (*(uint *)(param_2 + 0x138) < uVar19) {
            (*pcVar11)(&local_34,*(int *)(param_2 + 0x1c) + uVar14 + 8,uVar10,uVar7);
            if (local_34 != 0) goto code_r0x005f29b0;
            goto LAB_005f1bd0;
          }
          if (uVar4 < uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar19,uVar4,uVar4,&DAT_018947f8);
          }
          uVar4 = uVar4 - uVar19;
          if (uVar4 == 0) goto LAB_005f3174;
          pbVar15 = (byte *)(iVar2 + uVar19 * 4);
          bVar1 = *pbVar15;
          if (bVar1 == 0xff) {
            uVar8 = *(int *)(param_2 + 0x28) + 2;
          }
          else {
            iVar2 = (uint)bVar1 + (uint)(bVar1 >> 2);
            uVar8 = iVar2 + 2;
            if ((bVar1 & 3) != 0) {
              uVar8 = iVar2 + 3;
            }
          }
          if (uVar4 <= uVar8) goto LAB_005f34d4;
          if ((int)*(uint *)(pbVar15 + uVar8 * 4) < 0) {
            local_68 = *(uint *)(pbVar15 + uVar8 * 4) & 0x7fffffff;
          }
          else {
            uVar8 = uVar8 + 1;
            if (uVar4 <= uVar8) goto LAB_005f34ec;
            local_68 = *(uint *)(pbVar15 + uVar8 * 4);
          }
          uVar8 = *(uint *)(param_2 + 0x14);
          if (uVar8 <= local_68) goto LAB_005f34e0;
          uVar4 = uVar16 + 1;
          uVar3 = *(uint *)(*(int *)(param_2 + 0x10) + local_68 * 4);
          local_64 = uVar4 - uVar3;
          local_60 = 1;
          uVar8 = uVar4;
        } while (uVar3 <= uVar4);
        goto LAB_005f2f6c;
      }
LAB_005f1cd0:
      uVar3 = *(uint *)(param_2 + 0x13c);
      if (*(uint *)(param_2 + 0x138) <= uVar3 - 1) {
        uVar8 = param_3[2];
        uVar14 = param_3[3];
        iVar21 = *(int *)(*(int *)(param_2 + 0x20) + 8);
        pcVar11 = *(code **)(*(int *)(param_2 + 0x20) + 0x10);
        (*pcVar11)(&local_34);
        if (local_34 != 0) {
          if (local_34 == 1) {
            param_1[1] = local_30;
            param_1[2] = local_2c;
            param_1[3] = local_28;
            *param_1 = 1;
            return;
          }
          if (local_30 < uVar18) {
            uVar10 = local_30;
LAB_005f2454:
            do {
              if (uVar14 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar10,uVar14,&DAT_01856f48);
              }
              uVar4 = *(uint *)(param_2 + 8);
              if (uVar4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar3,uVar4,&DAT_01894748);
              }
              iVar17 = *(int *)(param_2 + 4);
              uVar7 = (uint)*(byte *)(param_2 + 0x2c + (uint)*(byte *)(uVar8 + uVar10));
LAB_005f248c:
              uVar19 = *(uint *)(iVar17 + uVar3 * 4);
              if ((uVar19 & 0xff) != 0xfe) {
                if ((uVar19 & 0xff) == 0xff) {
                  uVar19 = uVar7 + 2 + uVar3;
                  if (uVar4 <= uVar19) {
LAB_005f319c:
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar19,uVar4,&DAT_018947c8);
                  }
                  uVar19 = *(uint *)(iVar17 + uVar19 * 4);
                  if (uVar19 != 1) goto LAB_005f25c0;
                }
                else {
                  uVar13 = (uVar19 & 0xff) >> 2;
                  if ((uVar19 & 3) != 0) {
                    uVar13 = uVar13 + 1;
                  }
                  uVar19 = uVar3 + 2;
                  if (uVar4 < uVar19) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa36c(uVar19,uVar4,uVar4,&DAT_018947a8);
                  }
                  uVar6 = uVar4 - uVar19;
                  if (uVar6 < uVar13) {
LAB_005f2f98:
                    /* WARNING: Subroutine does not return */
                    FUN_00faa36c(0,uVar13,uVar6,&DAT_01894798);
                  }
                  iVar20 = uVar13 << 2;
                  iVar9 = 0;
                  while (iVar5 = iVar9, iVar20 != 0) {
                    uVar16 = *(uint *)(iVar17 + uVar19 * 4 + iVar5 * 4);
                    if (uVar7 == (uVar16 & 0xff)) {
                      uVar3 = uVar13 + uVar19 + iVar5 * 4;
                      if (uVar4 <= uVar3) {
LAB_005f333c:
                    /* WARNING: Subroutine does not return */
                        FUN_00faa4a4(uVar3,uVar4,&DAT_01894788);
                      }
                      goto LAB_005f25bc;
                    }
                    if (uVar7 == (uVar16 & 0xffff) >> 8) {
                      uVar3 = uVar13 + uVar19 + iVar5 * 4 + 1;
                      if (uVar4 <= uVar3) {
LAB_005f335c:
                    /* WARNING: Subroutine does not return */
                        FUN_00faa4a4(uVar3,uVar4,&DAT_01894778);
                      }
                      goto LAB_005f25bc;
                    }
                    if (uVar7 == (uVar16 & 0xffffff) >> 0x10) {
                      uVar3 = uVar13 + uVar19 + iVar5 * 4 + 2;
                      if (uVar4 <= uVar3) {
LAB_005f3390:
                    /* WARNING: Subroutine does not return */
                        FUN_00faa4a4(uVar3,uVar4,&DAT_01894768);
                      }
                      goto LAB_005f25bc;
                    }
                    iVar20 = iVar20 + -4;
                    iVar9 = iVar5 + 1;
                    if (uVar7 == uVar16 >> 0x18) {
                      uVar3 = uVar13 + uVar19 + iVar5 * 4 + 3;
                      if (uVar4 <= uVar3) {
LAB_005f339c:
                    /* WARNING: Subroutine does not return */
                        FUN_00faa4a4(uVar3,uVar4,&DAT_01894758);
                      }
                      goto LAB_005f25bc;
                    }
                  }
                }
LAB_005f24d0:
                uVar3 = uVar3 + 1;
                if (uVar4 <= uVar3) {
LAB_005f3118:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar3,uVar4,&DAT_018947d8);
                }
                uVar3 = *(uint *)(iVar17 + uVar3 * 4);
                if (uVar4 <= uVar3) {
LAB_005f310c:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar3,uVar4,&DAT_01894748);
                }
                goto LAB_005f248c;
              }
              if (uVar7 != (uVar19 & 0xffff) >> 8) goto LAB_005f24d0;
              uVar3 = uVar3 + 2;
              if (uVar4 <= uVar3) {
LAB_005f2644:
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar3,uVar4,&DAT_018947b8);
              }
LAB_005f25bc:
              uVar19 = *(uint *)(iVar17 + uVar3 * 4);
LAB_005f25c0:
              uVar3 = uVar19;
              if (*(uint *)(param_2 + 0x134) < uVar19) {
                uVar10 = uVar10 + 1;
                if (uVar18 <= uVar10) break;
                goto LAB_005f2454;
              }
              if (uVar19 == 0) break;
              if (uVar19 <= *(uint *)(param_2 + 0x138)) {
                if (uVar4 < uVar19) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(uVar19,uVar4,uVar4,&DAT_018947f8);
                }
                uVar4 = uVar4 - uVar19;
                if (uVar4 == 0) goto LAB_005f3174;
                pbVar15 = (byte *)(iVar17 + uVar19 * 4);
                bVar1 = *pbVar15;
                if (bVar1 == 0xff) {
                  uVar8 = *(int *)(param_2 + 0x28) + 2;
                }
                else {
                  iVar2 = (uint)bVar1 + (uint)(bVar1 >> 2);
                  uVar8 = iVar2 + 2;
                  if ((bVar1 & 3) != 0) {
                    uVar8 = iVar2 + 3;
                  }
                }
                if (uVar4 <= uVar8) {
LAB_005f34d4:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar8,uVar4,&DAT_01894528);
                }
                if ((int)*(uint *)(pbVar15 + uVar8 * 4) < 0) {
                  local_68 = *(uint *)(pbVar15 + uVar8 * 4) & 0x7fffffff;
                }
                else {
                  uVar8 = uVar8 + 1;
                  if (uVar4 <= uVar8) {
LAB_005f34ec:
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar8,uVar4,&DAT_01894538);
                  }
                  local_68 = *(uint *)(pbVar15 + uVar8 * 4);
                }
                uVar8 = *(uint *)(param_2 + 0x14);
                if (uVar8 <= local_68) {
LAB_005f34e0:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(local_68,uVar8,&DAT_018947e8);
                }
                uVar10 = uVar10 + 1;
                uVar8 = *(uint *)(*(int *)(param_2 + 0x10) + local_68 * 4);
                if (uVar8 <= uVar10) {
                  *param_1 = 1;
                  param_1[1] = uVar10 - uVar8;
                  param_1[2] = uVar10;
                  param_1[3] = local_68;
                  return;
                }
                goto LAB_005f2f6c;
              }
              (*pcVar11)(&local_34,iVar2 + (iVar21 - 1U & 0xfffffff8) + 8,uVar8,uVar14);
              if (local_34 == 0) {
                *param_1 = 0;
                return;
              }
              uVar19 = local_30;
              if (local_30 <= uVar10) {
                uVar19 = uVar10 + 1;
              }
              uVar10 = uVar19;
            } while (uVar19 < uVar18);
          }
        }
        goto LAB_005f2658;
      }
      uVar18 = *(uint *)(param_2 + 8);
      if (uVar18 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar3,uVar18,uVar18,&DAT_018947f8);
      }
      uVar18 = uVar18 - uVar3;
      if (uVar18 == 0) goto LAB_005f3174;
      pbVar15 = (byte *)(*(int *)(param_2 + 4) + uVar3 * 4);
      bVar1 = *pbVar15;
      if (bVar1 == 0xff) {
        uVar19 = *(int *)(param_2 + 0x28) + 2;
      }
      else {
        iVar2 = (uint)bVar1 + (uint)(bVar1 >> 2);
        uVar19 = iVar2 + 2;
        if ((bVar1 & 3) != 0) {
          uVar19 = iVar2 + 3;
        }
      }
      if (uVar18 <= uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar19,uVar18,&DAT_01894528);
      }
      if ((int)*(uint *)(pbVar15 + uVar19 * 4) < 0) {
        uVar18 = *(uint *)(pbVar15 + uVar19 * 4) & 0x7fffffff;
      }
      else {
        uVar19 = uVar19 + 1;
        if (uVar18 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar19,uVar18,&DAT_01894538);
        }
        uVar18 = *(uint *)(pbVar15 + uVar19 * 4);
      }
      if (*(uint *)(param_2 + 0x14) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar18,*(uint *)(param_2 + 0x14),&DAT_018947e8);
      }
      uVar19 = *(uint *)(*(int *)(param_2 + 0x10) + uVar18 * 4);
      if (uVar19 <= uVar8) {
        *param_1 = 1;
        param_1[1] = uVar8 - uVar19;
        param_1[2] = uVar8;
        param_1[3] = uVar18;
        return;
      }
      goto LAB_005f2f6c;
    }
    if (cVar22 == '\0') {
      uVar19 = *(uint *)(param_2 + 0x13c);
      if (*(uint *)(param_2 + 0x138) <= uVar19 - 1) {
        local_5c = 0;
        local_64 = 0;
LAB_005f2b10:
        local_60 = uVar8;
        if (uVar8 < uVar18) {
          uVar7 = param_3[3];
          uVar10 = uVar8;
          if (uVar8 < uVar7) {
            uVar10 = uVar7;
          }
          do {
            if (uVar8 == uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar10,uVar7,&DAT_01856f48);
            }
            uVar4 = *(uint *)(param_2 + 8);
            uVar14 = uVar19;
            if (uVar4 <= uVar19) {
LAB_005f31b0:
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar14,uVar4,&DAT_01894748);
            }
            iVar2 = *(int *)(param_2 + 4);
            uVar16 = (uint)*(byte *)(param_2 + 0x2c + (uint)*(byte *)(param_3[2] + uVar8));
LAB_005f2b9c:
            uVar19 = *(uint *)(iVar2 + uVar14 * 4);
            if ((uVar19 & 0xff) != 0xfe) {
              if ((uVar19 & 0xff) == 0xff) {
                uVar19 = uVar16 + 2 + uVar14;
                if (uVar4 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar19,uVar4,&DAT_018947c8);
                }
                uVar19 = *(uint *)(iVar2 + uVar19 * 4);
                if (uVar19 != 1) goto LAB_005f2cd0;
              }
              else {
                uVar12 = (uVar19 & 0xff) >> 2;
                if ((uVar19 & 3) != 0) {
                  uVar12 = uVar12 + 1;
                }
                uVar19 = uVar14 + 2;
                if (uVar4 < uVar19) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(uVar19,uVar4,uVar4,&DAT_018947a8);
                }
                uVar3 = uVar4 - uVar19;
                if (uVar3 < uVar12) goto LAB_005f2f84;
                iVar21 = uVar12 << 2;
                iVar17 = 0;
                while (iVar20 = iVar17, iVar21 != 0) {
                  uVar3 = *(uint *)(iVar2 + uVar19 * 4 + iVar20 * 4);
                  if (uVar16 == (uVar3 & 0xff)) {
                    uVar14 = uVar12 + uVar19 + iVar20 * 4;
                    if (uVar4 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                      FUN_00faa4a4(uVar14,uVar4,&DAT_01894788);
                    }
                    goto LAB_005f2ccc;
                  }
                  if (uVar16 == (uVar3 & 0xffff) >> 8) {
                    uVar14 = uVar12 + uVar19 + iVar20 * 4 + 1;
                    if (uVar4 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                      FUN_00faa4a4(uVar14,uVar4,&DAT_01894778);
                    }
                    goto LAB_005f2ccc;
                  }
                  if (uVar16 == (uVar3 & 0xffffff) >> 0x10) {
                    uVar14 = uVar12 + uVar19 + iVar20 * 4 + 2;
                    if (uVar4 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                      FUN_00faa4a4(uVar14,uVar4,&DAT_01894768);
                    }
                    goto LAB_005f2ccc;
                  }
                  iVar21 = iVar21 + -4;
                  iVar17 = iVar20 + 1;
                  if (uVar16 == uVar3 >> 0x18) {
                    uVar14 = uVar12 + uVar19 + iVar20 * 4 + 3;
                    if (uVar4 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                      FUN_00faa4a4(uVar14,uVar4,&DAT_01894758);
                    }
                    goto LAB_005f2ccc;
                  }
                }
              }
LAB_005f2be0:
              uVar14 = uVar14 + 1;
              if (uVar4 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar14,uVar4,&DAT_018947d8);
              }
              uVar14 = *(uint *)(iVar2 + uVar14 * 4);
              if (uVar4 <= uVar14) goto LAB_005f31b0;
              goto LAB_005f2b9c;
            }
            if (uVar16 != (uVar19 & 0xffff) >> 8) goto LAB_005f2be0;
            uVar14 = uVar14 + 2;
            if (uVar4 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar14,uVar4,&DAT_018947b8);
            }
LAB_005f2ccc:
            uVar19 = *(uint *)(iVar2 + uVar14 * 4);
LAB_005f2cd0:
            if (uVar19 <= *(uint *)(param_2 + 0x134)) {
              if (uVar19 == 0) break;
              if (uVar19 <= *(uint *)(param_2 + 0x138)) {
                if (uVar4 < uVar19) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(uVar19,uVar4,uVar4,&DAT_018947f8);
                }
                uVar4 = uVar4 - uVar19;
                if (uVar4 == 0) goto LAB_005f3174;
                pbVar15 = (byte *)(iVar2 + uVar19 * 4);
                bVar1 = *pbVar15;
                if (bVar1 == 0xff) {
                  uVar14 = *(int *)(param_2 + 0x28) + 2;
                }
                else {
                  iVar2 = (uint)bVar1 + (uint)(bVar1 >> 2);
                  uVar14 = iVar2 + 2;
                  if ((bVar1 & 3) != 0) {
                    uVar14 = iVar2 + 3;
                  }
                }
                if (uVar4 <= uVar14) goto LAB_005f32d4;
                if ((int)*(uint *)(pbVar15 + uVar14 * 4) < 0) {
                  local_5c = *(uint *)(pbVar15 + uVar14 * 4) & 0x7fffffff;
                }
                else {
                  uVar14 = uVar14 + 1;
                  if (uVar4 <= uVar14) goto LAB_005f3368;
                  local_5c = *(uint *)(pbVar15 + uVar14 * 4);
                }
                uVar14 = *(uint *)(param_2 + 0x14);
                if (uVar14 <= local_5c) goto LAB_005f3240;
                local_60 = uVar8 + 1;
                uVar14 = *(uint *)(*(int *)(param_2 + 0x10) + local_5c * 4);
                local_68 = local_60 - uVar14;
                if (local_60 < uVar14) goto LAB_005f2f6c;
                local_64 = 1;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar18);
        }
        *param_1 = local_64;
        param_1[1] = local_68;
        param_1[2] = local_60;
        param_1[3] = local_5c;
        return;
      }
      uVar14 = *(uint *)(param_2 + 8);
      if (uVar14 < uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar19,uVar14,uVar14,&DAT_018947f8);
      }
      uVar14 = uVar14 - uVar19;
      if (uVar14 != 0) {
        pbVar15 = (byte *)(*(int *)(param_2 + 4) + uVar19 * 4);
        bVar1 = *pbVar15;
        if (bVar1 == 0xff) {
          uVar10 = *(int *)(param_2 + 0x28) + 2;
        }
        else {
          iVar2 = (uint)bVar1 + (uint)(bVar1 >> 2);
          uVar10 = iVar2 + 2;
          if ((bVar1 & 3) != 0) {
            uVar10 = iVar2 + 3;
          }
        }
        if (uVar14 <= uVar10) goto LAB_005f329c;
        if ((int)*(uint *)(pbVar15 + uVar10 * 4) < 0) {
          local_5c = *(uint *)(pbVar15 + uVar10 * 4) & 0x7fffffff;
        }
        else {
          uVar10 = uVar10 + 1;
          if (uVar14 <= uVar10) goto LAB_005f32fc;
          local_5c = *(uint *)(pbVar15 + uVar10 * 4);
        }
        uVar14 = *(uint *)(param_2 + 0x14);
        if (local_5c < uVar14) {
          uVar14 = *(uint *)(*(int *)(param_2 + 0x10) + local_5c * 4);
          local_68 = uVar8 - uVar14;
          if (uVar8 < uVar14) goto LAB_005f2f6c;
          local_64 = 1;
          goto LAB_005f2b10;
        }
        goto LAB_005f3240;
      }
      goto LAB_005f3174;
    }
  }
  uVar19 = *(uint *)(param_2 + 0x13c);
  if (*(uint *)(param_2 + 0x138) <= uVar19 - 1) {
    if (uVar8 < uVar18) {
      uVar10 = param_3[3];
      uVar14 = uVar8;
      if (uVar8 < uVar10) {
        uVar14 = uVar10;
      }
      do {
        if (uVar8 == uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar14,uVar10,&DAT_01856f48);
        }
        uVar4 = *(uint *)(param_2 + 8);
        if (uVar4 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar19,uVar4,&DAT_01894748);
        }
        iVar2 = *(int *)(param_2 + 4);
        uVar3 = (uint)*(byte *)(param_2 + 0x2c + (uint)*(byte *)(param_3[2] + uVar8));
        uVar7 = uVar19;
LAB_005f21d4:
        uVar19 = *(uint *)(iVar2 + uVar7 * 4);
        if ((uVar19 & 0xff) != 0xfe) {
          if ((uVar19 & 0xff) == 0xff) {
            uVar19 = uVar3 + 2 + uVar7;
            if (uVar4 <= uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar19,uVar4,&DAT_018947c8);
            }
            uVar19 = *(uint *)(iVar2 + uVar19 * 4);
            if (uVar19 != 1) goto LAB_005f2308;
          }
          else {
            uVar16 = (uVar19 & 0xff) >> 2;
            if ((uVar19 & 3) != 0) {
              uVar16 = uVar16 + 1;
            }
            uVar19 = uVar7 + 2;
            if (uVar4 < uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(uVar19,uVar4,uVar4,&DAT_018947a8);
            }
            if (uVar4 - uVar19 < uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar16,uVar4 - uVar19,&DAT_01894798);
            }
            iVar21 = uVar16 << 2;
            iVar17 = 0;
            while (iVar20 = iVar17, iVar21 != 0) {
              uVar12 = *(uint *)(iVar2 + uVar19 * 4 + iVar20 * 4);
              if (uVar3 == (uVar12 & 0xff)) {
                uVar7 = uVar16 + uVar19 + iVar20 * 4;
                if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar7,uVar4,&DAT_01894788);
                }
                goto LAB_005f2304;
              }
              if (uVar3 == (uVar12 & 0xffff) >> 8) {
                uVar7 = uVar16 + uVar19 + iVar20 * 4 + 1;
                if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar7,uVar4,&DAT_01894778);
                }
                goto LAB_005f2304;
              }
              if (uVar3 == (uVar12 & 0xffffff) >> 0x10) {
                uVar7 = uVar16 + uVar19 + iVar20 * 4 + 2;
                if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar7,uVar4,&DAT_01894768);
                }
                goto LAB_005f2304;
              }
              iVar21 = iVar21 + -4;
              iVar17 = iVar20 + 1;
              if (uVar3 == uVar12 >> 0x18) {
                uVar7 = uVar16 + uVar19 + iVar20 * 4 + 3;
                if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar7,uVar4,&DAT_01894758);
                }
                goto LAB_005f2304;
              }
            }
          }
LAB_005f2218:
          uVar7 = uVar7 + 1;
          if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar7,uVar4,&DAT_018947d8);
          }
          uVar7 = *(uint *)(iVar2 + uVar7 * 4);
          if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar7,uVar4,&DAT_01894748);
          }
          goto LAB_005f21d4;
        }
        if (uVar3 != (uVar19 & 0xffff) >> 8) goto LAB_005f2218;
        uVar7 = uVar7 + 2;
        if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar7,uVar4,&DAT_018947b8);
        }
LAB_005f2304:
        uVar19 = *(uint *)(iVar2 + uVar7 * 4);
LAB_005f2308:
        if (uVar19 <= *(uint *)(param_2 + 0x134)) {
          if (uVar19 == 0) break;
          if (uVar19 <= *(uint *)(param_2 + 0x138)) {
            if (uVar4 < uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(uVar19,uVar4,uVar4,&DAT_018947f8);
            }
            uVar4 = uVar4 - uVar19;
            if (uVar4 == 0) goto LAB_005f3174;
            pbVar15 = (byte *)(iVar2 + uVar19 * 4);
            bVar1 = *pbVar15;
            if (bVar1 == 0xff) {
              uVar14 = *(int *)(param_2 + 0x28) + 2;
            }
            else {
              iVar2 = (uint)bVar1 + (uint)(bVar1 >> 2);
              uVar14 = iVar2 + 2;
              if ((bVar1 & 3) != 0) {
                uVar14 = iVar2 + 3;
              }
            }
            if (uVar4 <= uVar14) goto LAB_005f32d4;
            if ((int)*(uint *)(pbVar15 + uVar14 * 4) < 0) {
              uVar18 = *(uint *)(pbVar15 + uVar14 * 4) & 0x7fffffff;
            }
            else {
              uVar14 = uVar14 + 1;
              if (uVar4 <= uVar14) goto LAB_005f3368;
              uVar18 = *(uint *)(pbVar15 + uVar14 * 4);
            }
            uVar19 = *(uint *)(param_2 + 0x14);
            if (uVar19 <= uVar18) goto LAB_005f3470;
            uVar8 = uVar8 + 1;
            uVar19 = *(uint *)(*(int *)(param_2 + 0x10) + uVar18 * 4);
            if (uVar19 <= uVar8) {
              *param_1 = 1;
              param_1[1] = uVar8 - uVar19;
              param_1[2] = uVar8;
              param_1[3] = uVar18;
              return;
            }
            goto LAB_005f2f6c;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar18);
    }
LAB_005f2658:
    *param_1 = 0;
    return;
  }
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar4 < uVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar19,uVar4,uVar4,&DAT_018947f8);
  }
  uVar4 = uVar4 - uVar19;
  if (uVar4 == 0) {
LAB_005f3174:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_01894518);
  }
  pbVar15 = (byte *)(*(int *)(param_2 + 4) + uVar19 * 4);
  bVar1 = *pbVar15;
  if (bVar1 == 0xff) {
    uVar14 = *(int *)(param_2 + 0x28) + 2;
  }
  else {
    iVar2 = (uint)bVar1 + (uint)(bVar1 >> 2);
    uVar14 = iVar2 + 2;
    if ((bVar1 & 3) != 0) {
      uVar14 = iVar2 + 3;
    }
  }
  if (uVar4 <= uVar14) {
LAB_005f32d4:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar14,uVar4,&DAT_01894528);
  }
  if ((int)*(uint *)(pbVar15 + uVar14 * 4) < 0) {
    uVar18 = *(uint *)(pbVar15 + uVar14 * 4) & 0x7fffffff;
  }
  else {
    uVar14 = uVar14 + 1;
    if (uVar4 <= uVar14) {
LAB_005f3368:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar14,uVar4,&DAT_01894538);
    }
    uVar18 = *(uint *)(pbVar15 + uVar14 * 4);
  }
  uVar19 = *(uint *)(param_2 + 0x14);
  if (uVar19 <= uVar18) {
LAB_005f3470:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar18,uVar19,&DAT_018947e8);
  }
  uVar19 = *(uint *)(*(int *)(param_2 + 0x10) + uVar18 * 4);
  if (uVar19 <= uVar8) {
    *param_1 = 1;
    param_1[1] = uVar8 - uVar19;
    param_1[2] = uVar8;
    param_1[3] = uVar18;
    return;
  }
LAB_005f2f6c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018945d8);
code_r0x005f29b0:
  uVar4 = local_30;
  if (local_30 <= uVar16) {
LAB_005f29c0:
    uVar4 = uVar16 + 1;
  }
  goto LAB_005f27d4;
}

