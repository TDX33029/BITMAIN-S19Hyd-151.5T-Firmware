// FUN_016300b0 @ 016300b0 size=1144 calls_out=5 calls_in=0
// strings: 

void FUN_016300b0(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  int local_38;
  undefined4 local_34;
  int local_30;
  
  if (param_3 == 0) {
    uVar7 = 3;
    uVar9 = 3;
  }
  else {
    puVar8 = (undefined4 *)(param_2 + 0x10);
    param_3 = param_3 << 5;
    uVar9 = 3;
    uVar7 = 3;
    do {
      pbVar5 = (byte *)puVar8[-4];
      iVar6 = puVar8[-3];
      if (iVar6 == 4) {
        uVar2 = (uint)*pbVar5;
        iVar6 = 4;
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 == 0x72) {
          uVar2 = (uint)pbVar5[1];
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 == 0x65) {
            uVar2 = (uint)pbVar5[2];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 == 0x70) {
              uVar2 = (uint)pbVar5[3];
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 == 0x72) {
                pbVar5 = (byte *)*puVar8;
                iVar6 = puVar8[1];
                if (iVar6 == 6) {
                  uVar2 = (uint)*pbVar5;
                  iVar6 = 6;
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 == 0x6d) {
                    uVar2 = (uint)pbVar5[1];
                    if (uVar2 - 0x41 < 0x1a) {
                      uVar2 = uVar2 | 0x20;
                    }
                    if (uVar2 == 0x6f) {
                      uVar2 = (uint)pbVar5[2];
                      if (uVar2 - 0x41 < 0x1a) {
                        uVar2 = uVar2 | 0x20;
                      }
                      if (uVar2 == 0x6e) {
                        uVar2 = (uint)pbVar5[3];
                        if (uVar2 - 0x41 < 0x1a) {
                          uVar2 = uVar2 | 0x20;
                        }
                        if (uVar2 == 100) {
                          uVar2 = (uint)pbVar5[4];
                          if (uVar2 - 0x41 < 0x1a) {
                            uVar2 = uVar2 | 0x20;
                          }
                          if (uVar2 == 0x61) {
                            bVar1 = pbVar5[5];
                            uVar7 = 2;
LAB_01630104:
                            uVar2 = (uint)bVar1;
                            if (uVar2 - 0x41 < 0x1a) {
                              uVar2 = uVar2 | 0x20;
                            }
                            if (uVar2 == 0x79) goto LAB_01630118;
                          }
                        }
                      }
                    }
                  }
                  else if (uVar2 == 0x73) {
                    uVar2 = (uint)pbVar5[1];
                    if (uVar2 - 0x41 < 0x1a) {
                      uVar2 = uVar2 | 0x20;
                    }
                    if (uVar2 == 0x75) {
                      uVar2 = (uint)pbVar5[2];
                      if (uVar2 - 0x41 < 0x1a) {
                        uVar2 = uVar2 | 0x20;
                      }
                      if (uVar2 == 0x6e) {
                        uVar2 = (uint)pbVar5[3];
                        if (uVar2 - 0x41 < 0x1a) {
                          uVar2 = uVar2 | 0x20;
                        }
                        if (uVar2 == 100) {
                          uVar2 = (uint)pbVar5[4];
                          if (uVar2 - 0x41 < 0x1a) {
                            uVar2 = uVar2 | 0x20;
                          }
                          if (uVar2 == 0x61) {
                            bVar1 = pbVar5[5];
                            uVar7 = 1;
                            goto LAB_01630104;
                          }
                        }
                      }
                    }
                  }
                }
                else if (iVar6 == 3) {
                  uVar2 = (uint)*pbVar5;
                  iVar6 = 3;
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 == 0x69) {
                    uVar2 = (uint)pbVar5[1];
                    if (uVar2 - 0x41 < 0x1a) {
                      uVar2 = uVar2 | 0x20;
                    }
                    if (uVar2 == 0x73) {
                      uVar2 = (uint)pbVar5[2];
                      uVar7 = 0;
                      if (uVar2 - 0x41 < 0x1a) {
                        uVar2 = uVar2 | 0x20;
                      }
                      if (uVar2 == 0x6f) goto LAB_01630118;
                    }
                  }
                }
                FUN_006008c8(&local_38,pbVar5,iVar6);
                if (local_38 != -0x80000000) {
LAB_016304f4:
                  uVar4 = puVar8[2];
                  *param_1 = 2;
                  *(char *)(param_1 + 1) = (char)uVar4;
                  param_1[2] = local_38;
                  param_1[3] = local_34;
                  param_1[4] = local_30;
                  *(char *)((int)param_1 + 7) = (char)((uint)uVar4 >> 0x18);
                  *(short *)((int)param_1 + 5) = (short)((uint)uVar4 >> 8);
                  return;
                }
                if (-1 < local_30) {
                  if (local_30 == 0) {
                    local_38 = 0;
                    iVar6 = 1;
                  }
                  else {
                    iVar6 = thunk_FUN_016d4a50(local_30);
                    local_38 = local_30;
                    if (iVar6 == 0) goto LAB_0163046c;
                  }
                  FUN_016dd1aa(iVar6,local_34,local_30);
                  local_34 = iVar6;
                  goto LAB_016304f4;
                }
                goto LAB_01630440;
              }
            }
          }
        }
LAB_01630410:
        FUN_006008c8(&local_38,pbVar5,iVar6);
        if (local_38 == -0x80000000) {
          if (local_30 < 0) {
LAB_01630440:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,local_30);
          }
          if (local_30 == 0) {
            iVar6 = 0;
            iVar3 = 1;
          }
          else {
            iVar3 = thunk_FUN_016d4a50(local_30);
            iVar6 = local_30;
            if (iVar3 == 0) {
LAB_0163046c:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_30);
            }
          }
          FUN_016dd1aa(iVar3,local_34,local_30);
          local_38 = iVar6;
          local_34 = iVar3;
        }
        param_1[1] = puVar8[-2];
        param_1[2] = local_38;
        param_1[4] = local_30;
        param_1[3] = local_34;
        *param_1 = 2;
        return;
      }
      if (iVar6 != 7) goto LAB_01630410;
      uVar2 = (uint)*pbVar5;
      iVar6 = 7;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x70) goto LAB_01630410;
      uVar2 = (uint)pbVar5[1];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x61) goto LAB_01630410;
      uVar2 = (uint)pbVar5[2];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 100) goto LAB_01630410;
      uVar2 = (uint)pbVar5[3];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 100) goto LAB_01630410;
      uVar2 = (uint)pbVar5[4];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x69) goto LAB_01630410;
      uVar2 = (uint)pbVar5[5];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x6e) goto LAB_01630410;
      uVar2 = (uint)pbVar5[6];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x67) goto LAB_01630410;
      FUN_0162e31c(&local_38,puVar8);
      uVar9 = (undefined1)local_34;
      if (local_38 != 7) {
        FUN_016dd1aa((int)param_1 + 5,(int)&local_34 + 1,0x13);
        *(undefined1 *)(param_1 + 1) = (undefined1)local_34;
        *param_1 = local_38;
        return;
      }
LAB_01630118:
      puVar8 = puVar8 + 8;
      param_3 = param_3 + -0x20;
    } while (param_3 != 0);
  }
  *(undefined1 *)((int)param_1 + 5) = uVar7;
  *(undefined1 *)(param_1 + 1) = uVar9;
  *param_1 = 7;
  return;
}

