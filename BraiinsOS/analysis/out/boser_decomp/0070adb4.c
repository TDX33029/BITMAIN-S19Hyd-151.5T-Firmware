// FUN_0070adb4 @ 0070adb4 size=1448 calls_out=10 calls_in=11
// strings: 

void FUN_0070adb4(int *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  int local_74;
  char *local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  int local_4c;
  uint local_44;
  int local_38;
  uint local_34;
  int iStack_30;
  uint uStack_2c;
  
  if (*param_1 == 0) {
    FUN_012841fc(&local_68,param_2,param_3);
    *param_1 = 2;
    param_1[1] = local_68;
    param_1[2] = local_64;
    param_1[3] = local_60;
    param_1[4] = local_5c;
  }
  else if (*param_1 != 1) {
    piVar9 = param_1 + 1;
    iVar6 = *piVar9;
    iVar8 = param_1[2];
    FUN_012fbd94(&local_74,iVar6,iVar8);
    if (local_74 != 1 && param_3 != 0) {
      if (param_3 < local_6c) {
        if (param_3 == 1) {
          if (local_6c < 8) {
            do {
              if (*local_70 == *param_2) {
                return;
              }
              local_6c = local_6c - 1;
              local_70 = local_70 + 1;
            } while (local_6c != 0);
          }
          else {
            iVar3 = FUN_01307168();
            if (iVar3 == 1) {
              return;
            }
          }
        }
        else {
          FUN_01306b30(&local_68,local_70,local_6c,param_2,param_3);
          if (local_68 == 1) {
            iVar3 = uStack_2c - 1;
            if (local_44 == 0xffffffff) {
              uVar4 = local_4c + iVar3;
              if (uVar4 < local_34) {
                uVar1 = uStack_2c;
                if (uStack_2c < local_58) {
                  uVar1 = local_58;
                }
LAB_0070b150:
                uVar5 = *(byte *)(local_38 + uVar4) & 0x3f;
                uVar4 = local_60 >> uVar5 | local_5c << (0x20 - uVar5 & 0xff);
                if (-1 < (int)(uVar5 - 0x20)) {
                  uVar4 = local_5c >> (uVar5 - 0x20 & 0xff);
                }
                if ((uVar4 & 1) == 0) {
                  uVar4 = uStack_2c;
                  goto LAB_0070b218;
                }
                uVar4 = local_58;
                do {
                  uVar5 = uVar4;
                  if (uVar1 == uVar5) {
                    uVar4 = local_58;
                    goto LAB_0070b1d8;
                  }
                  if (local_34 <= local_4c + uVar5) {
                    uVar4 = local_4c + local_58;
                    goto LAB_0070b31c;
                  }
                  uVar4 = uVar5 + 1;
                } while (*(char *)(iStack_30 + uVar5) == *(char *)(local_38 + local_4c + uVar5));
                local_4c = (local_4c - local_58) + uVar5 + 1;
                goto LAB_0070b21c;
              }
            }
            else {
              uVar4 = local_4c + iVar3;
              if (uVar4 < local_34) {
LAB_0070af14:
                uVar1 = *(byte *)(local_38 + uVar4) & 0x3f;
                uVar4 = local_60 >> uVar1 | local_5c << (0x20 - uVar1 & 0xff);
                if (-1 < (int)(uVar1 - 0x20)) {
                  uVar4 = local_5c >> (uVar1 - 0x20 & 0xff);
                }
                if ((uVar4 & 1) != 0) {
                  uVar4 = local_58;
                  if (local_58 < local_44) {
                    uVar4 = local_44;
                  }
                  uVar1 = uVar4;
                  uVar5 = uStack_2c;
                  if (uStack_2c < uVar4) {
                    uVar5 = uVar4;
                  }
LAB_0070af68:
                  uVar2 = uVar1;
                  if (uVar5 != uVar2) goto code_r0x0070af70;
                  uVar4 = local_58;
                  do {
                    if (uVar4 <= local_44) {
                      return;
                    }
                    uVar4 = uVar4 - 1;
                    if (uStack_2c <= uVar4) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb12c(uVar4,uStack_2c,&DAT_01d2e36c);
                    }
                    uVar5 = uVar4 + local_4c;
                    if (local_34 <= uVar5) {
LAB_0070b2fc:
                    /* WARNING: Subroutine does not return */
                      FUN_012fb12c(uVar5,local_34,&DAT_01d2e37c);
                    }
                  } while (*(char *)(iStack_30 + uVar4) == *(char *)(local_38 + uVar5));
                  local_4c = local_4c + local_50;
                  local_44 = uStack_2c - local_50;
                  goto LAB_0070b008;
                }
                local_4c = local_4c + uStack_2c;
                local_44 = 0;
                goto LAB_0070b008;
              }
            }
          }
          else if (local_5c._2_1_ == '\0') {
            local_5c = local_5c & 0xff;
            do {
              if (local_64 != 0) {
                if (local_64 < local_34) {
                  if (*(char *)(local_38 + local_64) < -0x40) {
LAB_0070b338:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb514();
                  }
                }
                else if (local_64 != local_34) goto LAB_0070b338;
              }
              if (local_64 == local_34) {
                if ((local_5c & 1) != 0) {
                  return;
                }
                break;
              }
              pbVar7 = (byte *)(local_38 + local_64);
              uVar4 = (uint)*pbVar7;
              if (0x7fffffff < (uint)(int)(char)*pbVar7) {
                if (uVar4 < 0xe0) {
                  uVar4 = pbVar7[1] & 0x3f | (uVar4 & 0x1f) << 6;
                }
                else {
                  uVar1 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
                  if (uVar4 < 0xf0) {
                    uVar4 = uVar1 | (uVar4 & 0x1f) << 0xc;
                  }
                  else {
                    uVar4 = pbVar7[3] & 0x3f | uVar1 << 6 | (uVar4 & 7) << 0x12;
                  }
                }
              }
              if ((local_5c & 1) != 0) {
                return;
              }
              iVar3 = 1;
              if (0x7f < uVar4) {
                iVar3 = 2;
              }
              local_5c = 1;
              if ((0x7ff < uVar4) && (iVar3 = 4, uVar4 < 0x10000)) {
                iVar3 = 3;
              }
              local_64 = iVar3 + local_64;
            } while( true );
          }
        }
      }
      else if ((param_3 == local_6c) &&
              (iVar3 = thunk_FUN_01bed842(param_2,local_70,param_3), iVar3 == 0)) {
        return;
      }
LAB_0070b230:
      iVar3 = param_1[3];
      if (iVar3 == iVar8) {
        FUN_01283c9c(piVar9,1);
        iVar3 = param_1[3];
        iVar6 = param_1[1];
        iVar8 = param_1[2];
      }
      *(undefined1 *)(iVar6 + iVar8) = 0x2c;
      if (iVar3 == iVar8) {
        local_64 = 0;
        local_68 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_01284540(&local_68);
      }
      iVar8 = iVar8 + 1;
      param_1[2] = iVar8;
      if ((uint)(iVar3 - iVar8) < param_3) {
        FUN_01283c9c(piVar9,param_3);
        iVar6 = param_1[1];
        iVar8 = param_1[2];
      }
      FUN_01bed4e2(iVar6 + iVar8,param_2,param_3);
      local_64 = param_1[3] - param_1[2];
      if (local_64 < param_3) {
        local_68 = param_3;
                    /* WARNING: Subroutine does not return */
        FUN_01284540(&local_68);
      }
      param_1[2] = param_1[2] + param_3;
    }
  }
  return;
  while (*(char *)(iStack_30 + uVar4) == *(char *)(local_38 + uVar5)) {
LAB_0070b1d8:
    if (uVar4 == 0) {
      return;
    }
    uVar4 = uVar4 - 1;
    if (uStack_2c <= local_58 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,uStack_2c,&DAT_01d2e36c);
    }
    uVar5 = uVar4 + local_4c;
    if (local_34 <= uVar5) goto LAB_0070b2fc;
  }
  uVar4 = local_50;
LAB_0070b218:
  local_4c = local_4c + uVar4;
LAB_0070b21c:
  uVar4 = local_4c + iVar3;
  if (local_34 <= uVar4) goto LAB_0070b230;
  goto LAB_0070b150;
code_r0x0070af70:
  if (local_34 <= local_4c + uVar2) {
    uVar4 = uVar4 + local_4c;
LAB_0070b31c:
    if (uVar4 < local_34) {
      uVar4 = local_34;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar4,local_34,&DAT_01d2e38c);
  }
  uVar1 = uVar2 + 1;
  if (*(char *)(iStack_30 + uVar2) != *(char *)(local_38 + local_4c + uVar2)) goto code_r0x0070af94;
  goto LAB_0070af68;
code_r0x0070af94:
  local_4c = (local_4c - local_58) + uVar2 + 1;
  local_44 = 0;
LAB_0070b008:
  uVar4 = local_4c + iVar3;
  if (local_34 <= uVar4) goto LAB_0070b230;
  goto LAB_0070af14;
}

