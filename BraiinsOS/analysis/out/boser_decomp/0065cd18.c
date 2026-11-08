// FUN_0065cd18 @ 0065cd18 size=2816 calls_out=3 calls_in=1
// strings: invalid match span

void FUN_0065cd18(int *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int unaff_r8;
  uint uVar13;
  uint uVar14;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_34;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar11 = *param_3;
  uVar14 = param_3[1];
  if (uVar14 < uVar11) {
LAB_0065cd30:
    *param_1 = 0;
    return;
  }
  bVar1 = *(byte *)((int)param_3 + 0x11);
  bVar2 = *(char *)(param_2 + 0x158) == '\0';
  local_40 = (uint)bVar2;
  if ((char)param_3[4] != '\0') {
    uVar10 = *(uint *)(param_2 + 0x154);
    if (uVar10 != 0) {
      if (*(uint *)(param_2 + 0x14c) < uVar10) {
        local_40 = 0;
        local_3c = 0;
      }
      else {
        uVar5 = *(uint *)(param_2 + 0x14);
        uVar4 = (uVar10 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
        if (uVar5 <= uVar4) goto LAB_0065d7bc;
        iVar8 = *(int *)(param_2 + 0x10) + uVar4 * 0xc;
        if (*(int *)(iVar8 + 8) == 0) goto LAB_0065d764;
        uVar4 = *(uint *)(param_2 + 0x20);
        local_40 = **(uint **)(iVar8 + 4);
        if (uVar4 <= local_40) goto LAB_0065d7c8;
        uVar4 = *(uint *)(*(int *)(param_2 + 0x1c) + local_40 * 4);
        local_48 = uVar11 - uVar4;
        if (uVar11 < uVar4) goto LAB_0065d728;
        if (bVar2 || (bVar1 & 1) != 0) {
          *param_1 = 1;
LAB_0065d1e4:
          param_1[1] = local_48;
          param_1[2] = uVar11;
LAB_0065d1ec:
          param_1[3] = local_40;
          return;
        }
        local_3c = 1;
      }
      local_44 = uVar11;
      if (uVar11 < uVar14) {
        uVar5 = param_3[3];
        uVar4 = uVar11;
        if (uVar11 < uVar5) {
          uVar4 = uVar5;
        }
        uVar13 = uVar11;
        do {
          if (uVar4 == uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar4,uVar5,&DAT_01c03c98);
          }
          uVar10 = uVar10 + *(byte *)(param_2 + 0x40 + (uint)*(byte *)(param_3[2] + uVar13));
          if (*(uint *)(param_2 + 8) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar10,*(uint *)(param_2 + 8),&DAT_01d09130);
          }
          uVar10 = *(uint *)(*(int *)(param_2 + 4) + uVar10 * 4);
          if (uVar10 <= *(uint *)(param_2 + 0x148)) {
            if (uVar10 == 0) break;
            if (uVar10 <= *(uint *)(param_2 + 0x14c)) {
              uVar12 = (uVar10 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
              if (*(uint *)(param_2 + 0x14) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar12,*(uint *)(param_2 + 0x14),&DAT_01d09150);
              }
              iVar8 = *(int *)(param_2 + 0x10) + uVar12 * 0xc;
              if (*(int *)(iVar8 + 8) == 0) goto LAB_0065d764;
              uVar12 = **(uint **)(iVar8 + 4);
              if (*(uint *)(param_2 + 0x20) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar12,*(uint *)(param_2 + 0x20),&DAT_01d09140);
              }
              uVar9 = uVar13 + 1;
              uVar6 = *(uint *)(*(int *)(param_2 + 0x1c) + uVar12 * 4);
              if (uVar9 < uVar6) goto LAB_0065d728;
              uVar6 = (uVar13 - uVar6) + 1;
              if (uVar6 <= uVar11) {
                local_3c = 1;
                if (bVar2 || (bVar1 & 1) != 0) {
                  *param_1 = 1;
                  param_1[1] = uVar6;
                  param_1[2] = uVar9;
                  param_1[3] = uVar12;
                  return;
                }
                local_48 = uVar6;
                local_44 = uVar9;
                local_40 = uVar12;
              }
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar14 != uVar13);
      }
      *param_1 = local_3c;
      param_1[1] = local_48;
      param_1[2] = local_44;
      param_1[3] = local_40;
      return;
    }
    uVar3 = 0;
    goto LAB_0065d02c;
  }
  iVar8 = *(int *)(param_2 + 0x28);
  if (iVar8 == 0) {
    if (bVar2 || (bVar1 & 1) != 0) {
      uVar10 = *(uint *)(param_2 + 0x150);
      if (uVar10 != 0) {
        if (*(uint *)(param_2 + 0x14c) < uVar10) {
          if (uVar11 < uVar14) {
            uVar13 = param_3[3];
            uVar4 = uVar11;
            if (uVar11 < uVar13) {
              uVar4 = uVar13;
            }
            do {
              if (uVar4 == uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar4,uVar13,&DAT_01c03c98);
              }
              uVar5 = *(uint *)(param_2 + 8);
              uVar10 = uVar10 + *(byte *)(param_2 + 0x40 + (uint)*(byte *)(param_3[2] + uVar11));
              if (uVar5 <= uVar10) goto LAB_0065d778;
              uVar10 = *(uint *)(*(int *)(param_2 + 4) + uVar10 * 4);
              if (uVar10 <= *(uint *)(param_2 + 0x148)) {
                if (uVar10 == 0) break;
                if (uVar10 <= *(uint *)(param_2 + 0x14c)) {
                  uVar5 = *(uint *)(param_2 + 0x14);
                  uVar4 = (uVar10 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
                  if (uVar5 <= uVar4) goto LAB_0065d7bc;
                  iVar8 = *(int *)(param_2 + 0x10) + uVar4 * 0xc;
                  if (*(int *)(iVar8 + 8) == 0) goto LAB_0065d764;
                  uVar4 = *(uint *)(param_2 + 0x20);
                  local_40 = **(uint **)(iVar8 + 4);
                  if (uVar4 <= local_40) goto LAB_0065d7c8;
                  uVar11 = uVar11 + 1;
                  uVar14 = *(uint *)(*(int *)(param_2 + 0x1c) + local_40 * 4);
                  if (uVar11 < uVar14) goto LAB_0065d728;
                  *param_1 = 1;
                  param_1[1] = uVar11 - uVar14;
                  param_1[2] = uVar11;
                  goto LAB_0065d45c;
                }
              }
              uVar11 = uVar11 + 1;
            } while (uVar14 != uVar11);
          }
          *param_1 = 0;
          return;
        }
        uVar5 = *(uint *)(param_2 + 0x14);
        uVar4 = (uVar10 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
        if (uVar4 < uVar5) {
          iVar8 = *(int *)(param_2 + 0x10) + uVar4 * 0xc;
          if (*(int *)(iVar8 + 8) != 0) {
            uVar4 = *(uint *)(param_2 + 0x20);
            local_40 = **(uint **)(iVar8 + 4);
            if (local_40 < uVar4) {
              uVar14 = *(uint *)(*(int *)(param_2 + 0x1c) + local_40 * 4);
              if (uVar14 <= uVar11) {
                *param_1 = 1;
                param_1[1] = uVar11 - uVar14;
                param_1[2] = uVar11;
LAB_0065d45c:
                param_1[3] = local_40;
                return;
              }
LAB_0065d728:
                    /* WARNING: Subroutine does not return */
              FUN_012fb100("invalid match span",0x25,&DAT_01d08fa8);
            }
LAB_0065d7c8:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(local_40,uVar4,&DAT_01d09140);
          }
LAB_0065d764:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(0,0,&DAT_01d09160);
        }
LAB_0065d7bc:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar4,uVar5,&DAT_01d09150);
      }
    }
    else {
      uVar10 = *(uint *)(param_2 + 0x150);
      if (uVar10 != 0) {
        if (*(uint *)(param_2 + 0x14c) < uVar10) {
          iVar8 = 0;
        }
        else {
          uVar5 = *(uint *)(param_2 + 0x14);
          uVar4 = (uVar10 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
          if (uVar5 <= uVar4) goto LAB_0065d7bc;
          iVar8 = *(int *)(param_2 + 0x10) + uVar4 * 0xc;
          if (*(int *)(iVar8 + 8) == 0) goto LAB_0065d764;
          uVar4 = *(uint *)(param_2 + 0x20);
          local_40 = **(uint **)(iVar8 + 4);
          if (uVar4 <= local_40) goto LAB_0065d7c8;
          uVar4 = *(uint *)(*(int *)(param_2 + 0x1c) + local_40 * 4);
          local_3c = uVar11 - uVar4;
          if (uVar11 < uVar4) goto LAB_0065d728;
          iVar8 = 1;
        }
        uVar4 = uVar11;
        if (uVar11 < uVar14) {
          uVar12 = param_3[3];
          uVar13 = uVar11;
          if (uVar11 < uVar12) {
            uVar13 = uVar12;
          }
          do {
            if (uVar13 == uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar13,uVar12,&DAT_01c03c98);
            }
            uVar5 = *(uint *)(param_2 + 8);
            uVar10 = uVar10 + *(byte *)(param_2 + 0x40 + (uint)*(byte *)(param_3[2] + uVar11));
            if (uVar5 <= uVar10) {
LAB_0065d778:
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar10,uVar5,&DAT_01d09130);
            }
            uVar10 = *(uint *)(*(int *)(param_2 + 4) + uVar10 * 4);
            if (uVar10 <= *(uint *)(param_2 + 0x148)) {
              if (uVar10 == 0) break;
              if (uVar10 <= *(uint *)(param_2 + 0x14c)) {
                uVar5 = *(uint *)(param_2 + 0x14);
                uVar4 = (uVar10 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
                if (uVar5 <= uVar4) goto LAB_0065d7bc;
                iVar8 = *(int *)(param_2 + 0x10) + uVar4 * 0xc;
                if (*(int *)(iVar8 + 8) == 0) goto LAB_0065d764;
                uVar4 = *(uint *)(param_2 + 0x20);
                local_40 = **(uint **)(iVar8 + 4);
                if (uVar4 <= local_40) goto LAB_0065d7c8;
                uVar4 = uVar11 + 1;
                uVar5 = *(uint *)(*(int *)(param_2 + 0x1c) + local_40 * 4);
                if (uVar4 < uVar5) goto LAB_0065d728;
                iVar8 = 1;
                local_3c = (uVar11 - uVar5) + 1;
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar14 != uVar11);
        }
        *param_1 = iVar8;
        param_1[1] = local_3c;
        param_1[2] = uVar4;
        param_1[3] = local_40;
        return;
      }
    }
  }
  else if (bVar2 || (bVar1 & 1) != 0) {
    uVar10 = *(uint *)(param_2 + 0x150);
    if (uVar10 != 0) {
      if (uVar10 <= *(uint *)(param_2 + 0x14c)) {
        uVar5 = *(uint *)(param_2 + 0x14);
        uVar4 = (uVar10 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
        if (uVar4 < uVar5) {
          iVar8 = *(int *)(param_2 + 0x10) + uVar4 * 0xc;
          if (*(int *)(iVar8 + 8) != 0) {
            uVar4 = *(uint *)(param_2 + 0x20);
            local_40 = **(uint **)(iVar8 + 4);
            if (local_40 < uVar4) {
              uVar14 = *(uint *)(*(int *)(param_2 + 0x1c) + local_40 * 4);
              if (uVar14 <= uVar11) {
                local_48 = uVar11 - uVar14;
                *param_1 = 1;
                goto LAB_0065d1e4;
              }
              goto LAB_0065d728;
            }
            goto LAB_0065d7c8;
          }
          goto LAB_0065d764;
        }
        goto LAB_0065d7bc;
      }
      uVar13 = param_3[3];
      uVar5 = param_3[2];
      (**(code **)(*(int *)(param_2 + 0x2c) + 0x10))
                (&local_34,iVar8 + (*(int *)(*(int *)(param_2 + 0x2c) + 8) - 1U & 0xfffffff8) + 8,
                 uVar5,uVar13,uVar11,uVar14);
      if (local_34 == 0) goto LAB_0065d608;
      if (local_34 == 2) {
        if (local_30 < uVar14) {
          uVar11 = local_30;
          do {
            if (uVar13 <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar11,uVar13,&DAT_01c03c98);
            }
            uVar4 = *(uint *)(param_2 + 8);
            uVar10 = uVar10 + *(byte *)(param_2 + 0x40 + (uint)*(byte *)(uVar5 + uVar11));
            if (uVar4 <= uVar10) goto LAB_0065d7d4;
            uVar10 = *(uint *)(*(int *)(param_2 + 4) + uVar10 * 4);
            if (*(uint *)(param_2 + 0x148) < uVar10) {
              uVar4 = uVar11 + 1;
            }
            else {
              if (uVar10 == 0) break;
              if (uVar10 <= *(uint *)(param_2 + 0x14c)) {
                uVar5 = *(uint *)(param_2 + 0x14);
                uVar4 = (uVar10 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
                if (uVar5 <= uVar4) goto LAB_0065d7bc;
                iVar8 = *(int *)(param_2 + 0x10) + uVar4 * 0xc;
                if (*(int *)(iVar8 + 8) == 0) goto LAB_0065d764;
                uVar4 = *(uint *)(param_2 + 0x20);
                local_40 = **(uint **)(iVar8 + 4);
                if (uVar4 <= local_40) goto LAB_0065d7c8;
                uVar11 = uVar11 + 1;
                uVar14 = *(uint *)(*(int *)(param_2 + 0x1c) + local_40 * 4);
                if (uVar11 < uVar14) goto LAB_0065d728;
                *param_1 = 1;
                param_1[1] = uVar11 - uVar14;
                param_1[2] = uVar11;
                goto LAB_0065d1ec;
              }
              (**(code **)(*(int *)(param_2 + 0x2c) + 0x10))
                        (&local_34,
                         *(int *)(param_2 + 0x28) +
                         (*(int *)(*(int *)(param_2 + 0x2c) + 8) - 1U & 0xfffffff8) + 8,uVar5,uVar13
                         ,uVar11,uVar14);
              if (local_34 == 0) {
                local_34 = 0;
                goto LAB_0065d608;
              }
              uVar4 = local_30;
              if (local_30 <= uVar11) {
                uVar4 = uVar11 + 1;
              }
            }
            uVar11 = uVar4;
          } while (uVar4 < uVar14);
        }
        goto LAB_0065cd30;
      }
      goto LAB_0065d600;
    }
  }
  else {
    uVar10 = *(uint *)(param_2 + 0x150);
    if (uVar10 != 0) {
      if (*(uint *)(param_2 + 0x14c) < uVar10) {
        local_44 = 0;
      }
      else {
        uVar5 = *(uint *)(param_2 + 0x14);
        uVar4 = (uVar10 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
        if (uVar5 <= uVar4) goto LAB_0065d7bc;
        iVar7 = *(int *)(param_2 + 0x10) + uVar4 * 0xc;
        if (*(int *)(iVar7 + 8) == 0) goto LAB_0065d764;
        uVar4 = *(uint *)(param_2 + 0x20);
        local_40 = **(uint **)(iVar7 + 4);
        if (uVar4 <= local_40) goto LAB_0065d7c8;
        uVar4 = *(uint *)(*(int *)(param_2 + 0x1c) + local_40 * 4);
        unaff_r8 = uVar11 - uVar4;
        if (uVar11 < uVar4) goto LAB_0065d728;
        local_44 = 1;
        local_48 = local_40;
      }
      uVar12 = param_3[2];
      uVar13 = param_3[3];
      (**(code **)(*(int *)(param_2 + 0x2c) + 0x10))
                (&local_34,iVar8 + (*(int *)(*(int *)(param_2 + 0x2c) + 8) - 1U & 0xfffffff8) + 8,
                 uVar12,uVar13,uVar11,uVar14);
      if (local_34 == 0) goto LAB_0065d608;
      if (local_34 != 1) {
        uVar4 = local_30;
        local_4c = unaff_r8;
        while (uVar6 = uVar4, uVar6 < uVar14) {
          if (uVar13 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar6,uVar13,&DAT_01c03c98);
          }
          uVar4 = *(uint *)(param_2 + 8);
          uVar10 = uVar10 + *(byte *)(param_2 + 0x40 + (uint)*(byte *)(uVar12 + uVar6));
          if (uVar4 <= uVar10) {
LAB_0065d7d4:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar10,uVar4,&DAT_01d09130);
          }
          uVar10 = *(uint *)(*(int *)(param_2 + 4) + uVar10 * 4);
          if (*(uint *)(param_2 + 0x148) < uVar10) {
            uVar4 = uVar6 + 1;
          }
          else {
            if (uVar10 == 0) break;
            if (*(uint *)(param_2 + 0x14c) < uVar10) {
              (**(code **)(*(int *)(param_2 + 0x2c) + 0x10))
                        (&local_34,
                         *(int *)(param_2 + 0x28) +
                         (*(int *)(*(int *)(param_2 + 0x2c) + 8) - 1U & 0xfffffff8) + 8,uVar12,
                         uVar13,uVar6,uVar14);
              if (local_34 == 0) {
                *param_1 = 0;
                return;
              }
              uVar4 = local_30;
              if (local_30 <= uVar6) {
                uVar4 = uVar6 + 1;
              }
            }
            else {
              uVar5 = *(uint *)(param_2 + 0x14);
              uVar4 = (uVar10 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
              if (uVar5 <= uVar4) goto LAB_0065d7bc;
              iVar8 = *(int *)(param_2 + 0x10) + uVar4 * 0xc;
              if (*(int *)(iVar8 + 8) == 0) goto LAB_0065d764;
              uVar4 = *(uint *)(param_2 + 0x20);
              local_40 = **(uint **)(iVar8 + 4);
              if (uVar4 <= local_40) goto LAB_0065d7c8;
              uVar11 = uVar6 + 1;
              uVar4 = *(uint *)(*(int *)(param_2 + 0x1c) + local_40 * 4);
              if (uVar11 < uVar4) goto LAB_0065d728;
              local_4c = uVar11 - uVar4;
              local_44 = 1;
              uVar4 = uVar11;
              local_48 = local_40;
            }
          }
        }
        *param_1 = local_44;
        param_1[1] = local_4c;
        param_1[2] = uVar11;
        param_1[3] = local_48;
        return;
      }
LAB_0065d600:
      param_1[1] = local_30;
      param_1[2] = iStack_2c;
      param_1[3] = iStack_28;
LAB_0065d608:
      *param_1 = local_34;
      return;
    }
  }
  uVar3 = 1;
LAB_0065d02c:
  iVar8 = FUN_00660e80(uVar3);
  *param_1 = 2;
  param_1[1] = iVar8;
  return;
}

