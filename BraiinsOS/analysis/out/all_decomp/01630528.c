// FUN_01630528 @ 01630528 size=2784 calls_out=7 calls_in=0
// strings: 

void FUN_01630528(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  undefined1 uVar9;
  int iVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  uint local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  uint local_30;
  int local_2c;
  int local_28;
  
  if (param_3 == 0) {
    uVar7 = 3;
    local_4c._0_1_ = 2;
    uVar12 = 3;
    uVar11 = 2;
    uVar9 = 2;
  }
  else {
    uVar12 = 3;
    uVar9 = 2;
    iVar8 = 0;
    uVar11 = 2;
    uVar7 = 3;
    local_4c = 2;
    do {
      pbVar5 = *(byte **)(param_2 + iVar8);
      iVar6 = ((undefined4 *)(param_2 + iVar8))[1];
      if (iVar6 == 4) {
        uVar2 = (uint)*pbVar5;
        iVar6 = 4;
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 == 0x62) {
          uVar2 = (uint)pbVar5[1];
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x61) goto LAB_01630df0;
          uVar2 = (uint)pbVar5[2];
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x73) goto LAB_01630df0;
          uVar2 = (uint)pbVar5[3];
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x65) goto LAB_01630df0;
          pbVar5 = *(byte **)(param_2 + iVar8 + 0x10);
          iVar6 = *(int *)(param_2 + iVar8 + 0x14);
          if (iVar6 == 8) {
            uVar2 = (uint)*pbVar5;
            iVar6 = 8;
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
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 == 0x6f) {
                  uVar2 = (uint)pbVar5[3];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 == 0x5f) {
                    uVar2 = (uint)pbVar5[4];
                    if (uVar2 - 0x41 < 0x1a) {
                      uVar2 = uVar2 | 0x20;
                    }
                    if (uVar2 == 0x77) {
                      uVar2 = (uint)pbVar5[5];
                      if (uVar2 - 0x41 < 0x1a) {
                        uVar2 = uVar2 | 0x20;
                      }
                      if (uVar2 == 0x65) {
                        uVar2 = (uint)pbVar5[6];
                        if (uVar2 - 0x41 < 0x1a) {
                          uVar2 = uVar2 | 0x20;
                        }
                        if (uVar2 == 0x65) {
                          uVar2 = (uint)pbVar5[7];
                          uVar11 = 1;
                          if (uVar2 - 0x41 < 0x1a) {
                            uVar2 = uVar2 | 0x20;
                          }
                          if (uVar2 == 0x6b) goto LAB_016305c0;
                        }
                      }
                    }
                  }
                }
              }
            }
            else if (uVar2 == 99) {
              uVar2 = (uint)pbVar5[1];
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 == 0x61) {
                uVar2 = (uint)pbVar5[2];
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 == 0x6c) {
                  uVar2 = (uint)pbVar5[3];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 == 0x65) {
                    uVar2 = (uint)pbVar5[4];
                    if (uVar2 - 0x41 < 0x1a) {
                      uVar2 = uVar2 | 0x20;
                    }
                    if (uVar2 == 0x6e) {
                      uVar2 = (uint)pbVar5[5];
                      if (uVar2 - 0x41 < 0x1a) {
                        uVar2 = uVar2 | 0x20;
                      }
                      if (uVar2 == 100) {
                        uVar2 = (uint)pbVar5[6];
                        if (uVar2 - 0x41 < 0x1a) {
                          uVar2 = uVar2 | 0x20;
                        }
                        if (uVar2 == 0x61) {
                          uVar2 = (uint)pbVar5[7];
                          uVar11 = 0;
                          if (uVar2 - 0x41 < 0x1a) {
                            uVar2 = uVar2 | 0x20;
                          }
                          if (uVar2 == 0x72) goto LAB_016305c0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          FUN_006008c8(&local_48,pbVar5,iVar6);
          iVar6 = local_48;
          uVar2 = local_44;
joined_r0x01630eb0:
          if (iVar6 == -0x80000000) {
            if (local_40 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(0,local_40);
            }
            if (local_40 == 0) {
              iVar6 = 0;
              uVar3 = 1;
            }
            else {
              uVar3 = thunk_FUN_016d4a50(local_40);
              iVar6 = local_40;
              if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,local_40);
              }
            }
            FUN_016dd1aa(uVar3,uVar2,local_40);
            uVar2 = uVar3;
          }
          uVar4 = *(undefined4 *)(param_2 + iVar8 + 0x18);
          *param_1 = 2;
          *(char *)(param_1 + 1) = (char)uVar4;
          *(char *)((int)param_1 + 7) = (char)((uint)uVar4 >> 0x18);
          param_1[2] = iVar6;
          param_1[3] = uVar2;
          param_1[4] = local_40;
          *(short *)((int)param_1 + 5) = (short)((uint)uVar4 >> 8);
          return;
        }
        if (uVar2 == 0x73) {
          uVar2 = (uint)pbVar5[1];
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x69) goto LAB_01630df0;
          uVar2 = (uint)pbVar5[2];
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x67) goto LAB_01630df0;
          uVar2 = (uint)pbVar5[3];
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x6e) goto LAB_01630df0;
          FUN_0162ecc8(&local_48,param_2 + iVar8 + 0x10,4);
          local_4c = local_44 & 0xff;
          if (local_48 != 7) {
            FUN_016dd1aa((int)param_1 + 5,(int)&local_44 + 1,0x13);
            *(char *)(param_1 + 1) = (char)local_44;
            *param_1 = local_48;
            return;
          }
        }
        else {
          if (uVar2 != 0x72) goto LAB_01630df0;
          uVar2 = (uint)pbVar5[1];
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x65) goto LAB_01630df0;
          uVar2 = (uint)pbVar5[2];
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x70) goto LAB_01630df0;
          uVar2 = (uint)pbVar5[3];
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x72) goto LAB_01630df0;
          iVar10 = param_2 + iVar8;
          pbVar5 = *(byte **)(iVar10 + 0x10);
          iVar6 = *(int *)(iVar10 + 0x14);
          if (iVar6 == 8) {
            uVar2 = (uint)*pbVar5;
            iVar6 = 8;
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x6c) {
LAB_01630d98:
              FUN_006008c8(&local_30,pbVar5,iVar6);
              if (local_30 == 0x80000000) {
                FUN_01633af4(&local_48,local_28);
                if (local_48 == 1) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(local_44,local_40);
                }
                FUN_016dd1aa(local_40,local_2c,local_28);
              }
              else {
                local_44 = local_30;
                local_40 = local_2c;
              }
              uVar4 = *(undefined4 *)(iVar10 + 0x18);
              *param_1 = 2;
              *(char *)(param_1 + 1) = (char)uVar4;
              param_1[2] = local_44;
              param_1[3] = local_40;
              param_1[4] = local_28;
              *(char *)((int)param_1 + 7) = (char)((uint)uVar4 >> 0x18);
              *(short *)((int)param_1 + 5) = (short)((uint)uVar4 >> 8);
              return;
            }
            uVar2 = (uint)pbVar5[1];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x61) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[2];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x73) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[3];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x74) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[4];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x5f) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[5];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x74) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[6];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x77) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[7];
            uVar7 = 2;
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x6f) goto LAB_01630d98;
          }
          else if (iVar6 == 7) {
            uVar2 = (uint)*pbVar5;
            iVar6 = 7;
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 99) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[1];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x65) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[2];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x6e) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[3];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x74) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[4];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x75) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[5];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x72) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[6];
            uVar7 = 1;
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x79) goto LAB_01630d98;
          }
          else {
            if (iVar6 != 4) goto LAB_01630d98;
            uVar2 = (uint)*pbVar5;
            iVar6 = 4;
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x66) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[1];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x75) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[2];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x6c) goto LAB_01630d98;
            uVar2 = (uint)pbVar5[3];
            uVar7 = 0;
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != 0x6c) goto LAB_01630d98;
          }
        }
      }
      else {
        if (iVar6 == 5) {
          uVar2 = (uint)*pbVar5;
          iVar6 = 5;
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x72) goto LAB_01630df0;
          uVar2 = (uint)pbVar5[1];
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x61) goto LAB_01630df0;
          uVar2 = (uint)pbVar5[2];
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x6e) goto LAB_01630df0;
          uVar2 = (uint)pbVar5[3];
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x67) goto LAB_01630df0;
          uVar2 = (uint)pbVar5[4];
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != 0x65) goto LAB_01630df0;
          pbVar5 = *(byte **)(param_2 + iVar8 + 0x10);
          iVar6 = *(int *)(param_2 + iVar8 + 0x14);
          if (iVar6 == 8) {
            uVar2 = (uint)*pbVar5;
            iVar6 = 8;
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 == 0x65) {
              uVar2 = (uint)pbVar5[1];
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 == 0x78) {
                uVar2 = (uint)pbVar5[2];
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 == 0x74) {
                  uVar2 = (uint)pbVar5[3];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 == 0x65) {
                    uVar2 = (uint)pbVar5[4];
                    if (uVar2 - 0x41 < 0x1a) {
                      uVar2 = uVar2 | 0x20;
                    }
                    if (uVar2 == 0x6e) {
                      uVar2 = (uint)pbVar5[5];
                      if (uVar2 - 0x41 < 0x1a) {
                        uVar2 = uVar2 | 0x20;
                      }
                      if (uVar2 == 100) {
                        uVar2 = (uint)pbVar5[6];
                        if (uVar2 - 0x41 < 0x1a) {
                          uVar2 = uVar2 | 0x20;
                        }
                        if (uVar2 == 0x65) {
                          bVar1 = pbVar5[7];
                          uVar9 = 1;
LAB_016305ac:
                          uVar2 = (uint)bVar1;
                          if (uVar2 - 0x41 < 0x1a) {
                            uVar2 = uVar2 | 0x20;
                          }
                          if (uVar2 == 100) goto LAB_016305c0;
                        }
                      }
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
              if (uVar2 == 0x74) {
                uVar2 = (uint)pbVar5[2];
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 == 0x61) {
                  uVar2 = (uint)pbVar5[3];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 == 0x6e) {
                    uVar2 = (uint)pbVar5[4];
                    if (uVar2 - 0x41 < 0x1a) {
                      uVar2 = uVar2 | 0x20;
                    }
                    if (uVar2 == 100) {
                      uVar2 = (uint)pbVar5[5];
                      if (uVar2 - 0x41 < 0x1a) {
                        uVar2 = uVar2 | 0x20;
                      }
                      if (uVar2 == 0x61) {
                        uVar2 = (uint)pbVar5[6];
                        if (uVar2 - 0x41 < 0x1a) {
                          uVar2 = uVar2 | 0x20;
                        }
                        if (uVar2 == 0x72) {
                          bVar1 = pbVar5[7];
                          uVar9 = 0;
                          goto LAB_016305ac;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          FUN_006008c8(&local_48,pbVar5,iVar6);
          iVar6 = local_48;
          uVar2 = local_44;
          goto joined_r0x01630eb0;
        }
        if (iVar6 != 7) {
LAB_01630df0:
          FUN_006008c8(&local_48,pbVar5,iVar6);
          if (local_48 == -0x80000000) {
            if (local_40 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(0,local_40);
            }
            if (local_40 == 0) {
              iVar6 = 0;
              uVar2 = 1;
            }
            else {
              uVar2 = thunk_FUN_016d4a50(local_40);
              iVar6 = local_40;
              if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,local_40);
              }
            }
            FUN_016dd1aa(uVar2,local_44,local_40);
            local_48 = iVar6;
            local_44 = uVar2;
          }
          *param_1 = 2;
          iVar8 = *(int *)(param_2 + iVar8 + 8);
          param_1[4] = local_40;
          param_1[1] = iVar8;
          param_1[2] = local_48;
          param_1[3] = local_44;
          return;
        }
        uVar2 = (uint)*pbVar5;
        iVar6 = 7;
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x70) goto LAB_01630df0;
        uVar2 = (uint)pbVar5[1];
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x61) goto LAB_01630df0;
        uVar2 = (uint)pbVar5[2];
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 100) goto LAB_01630df0;
        uVar2 = (uint)pbVar5[3];
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 100) goto LAB_01630df0;
        uVar2 = (uint)pbVar5[4];
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x69) goto LAB_01630df0;
        uVar2 = (uint)pbVar5[5];
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x6e) goto LAB_01630df0;
        uVar2 = (uint)pbVar5[6];
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 != 0x67) goto LAB_01630df0;
        FUN_0162e31c(&local_48,param_2 + iVar8 + 0x10);
        if (local_48 != 7) {
          FUN_016dd1aa((int)param_1 + 5,(int)&local_44 + 1,0x13);
          *(undefined1 *)(param_1 + 1) = (undefined1)local_44;
          *param_1 = local_48;
          return;
        }
        uVar12 = (undefined1)local_44;
      }
LAB_016305c0:
      iVar8 = iVar8 + 0x20;
    } while (param_3 * 0x20 != iVar8);
  }
  *(undefined1 *)((int)param_1 + 6) = (undefined1)local_4c;
  *(undefined1 *)(param_1 + 2) = uVar7;
  *(undefined1 *)((int)param_1 + 7) = uVar12;
  *(undefined1 *)((int)param_1 + 5) = uVar11;
  *(undefined1 *)(param_1 + 1) = uVar9;
  *param_1 = 7;
  return;
}

