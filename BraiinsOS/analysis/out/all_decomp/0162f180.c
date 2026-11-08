// FUN_0162f180 @ 0162f180 size=1676 calls_out=5 calls_in=0
// strings: 

void FUN_0162f180(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  int local_38;
  undefined4 local_34;
  int local_30;
  
  if (param_3 == 0) {
    uVar8 = 2;
    uVar6 = 4;
  }
  else {
    puVar7 = (undefined4 *)(param_2 + 0x10);
    param_3 = param_3 << 5;
    uVar6 = 4;
    uVar8 = 2;
    do {
      pbVar4 = (byte *)puVar7[-4];
      iVar5 = puVar7[-3];
      if (iVar5 != 4) {
        if (iVar5 == 9) {
          uVar1 = (uint)*pbVar4;
          iVar5 = 9;
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 == 0x70) {
            uVar1 = (uint)pbVar4[1];
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            if (uVar1 == 0x72) {
              uVar1 = (uint)pbVar4[2];
              if (uVar1 - 0x41 < 0x1a) {
                uVar1 = uVar1 | 0x20;
              }
              if (uVar1 == 0x65) {
                uVar1 = (uint)pbVar4[3];
                if (uVar1 - 0x41 < 0x1a) {
                  uVar1 = uVar1 | 0x20;
                }
                if (uVar1 == 99) {
                  uVar1 = (uint)pbVar4[4];
                  if (uVar1 - 0x41 < 0x1a) {
                    uVar1 = uVar1 | 0x20;
                  }
                  if (uVar1 == 0x69) {
                    uVar1 = (uint)pbVar4[5];
                    if (uVar1 - 0x41 < 0x1a) {
                      uVar1 = uVar1 | 0x20;
                    }
                    if (uVar1 == 0x73) {
                      uVar1 = (uint)pbVar4[6];
                      if (uVar1 - 0x41 < 0x1a) {
                        uVar1 = uVar1 | 0x20;
                      }
                      if (uVar1 == 0x69) {
                        uVar1 = (uint)pbVar4[7];
                        if (uVar1 - 0x41 < 0x1a) {
                          uVar1 = uVar1 | 0x20;
                        }
                        if (uVar1 == 0x6f) {
                          uVar1 = (uint)pbVar4[8];
                          if (uVar1 - 0x41 < 0x1a) {
                            uVar1 = uVar1 | 0x20;
                          }
                          if (uVar1 == 0x6e) {
                            pbVar4 = (byte *)*puVar7;
                            iVar5 = puVar7[1];
                            if (iVar5 == 0xb) {
                              uVar1 = (uint)*pbVar4;
                              iVar5 = 0xb;
                              if (uVar1 - 0x41 < 0x1a) {
                                uVar1 = uVar1 | 0x20;
                              }
                              if (uVar1 == 0x6d) {
                                uVar1 = (uint)pbVar4[1];
                                if (uVar1 - 0x41 < 0x1a) {
                                  uVar1 = uVar1 | 0x20;
                                }
                                if (uVar1 == 0x69) {
                                  uVar1 = (uint)pbVar4[2];
                                  if (uVar1 - 0x41 < 0x1a) {
                                    uVar1 = uVar1 | 0x20;
                                  }
                                  if (uVar1 == 99) {
                                    uVar1 = (uint)pbVar4[3];
                                    if (uVar1 - 0x41 < 0x1a) {
                                      uVar1 = uVar1 | 0x20;
                                    }
                                    if (uVar1 == 0x72) {
                                      uVar1 = (uint)pbVar4[4];
                                      if (uVar1 - 0x41 < 0x1a) {
                                        uVar1 = uVar1 | 0x20;
                                      }
                                      if (uVar1 == 0x6f) {
                                        uVar1 = (uint)pbVar4[5];
                                        if (uVar1 - 0x41 < 0x1a) {
                                          uVar1 = uVar1 | 0x20;
                                        }
                                        if (uVar1 == 0x73) {
                                          uVar1 = (uint)pbVar4[6];
                                          if (uVar1 - 0x41 < 0x1a) {
                                            uVar1 = uVar1 | 0x20;
                                          }
                                          if (uVar1 == 0x65) {
                                            uVar1 = (uint)pbVar4[7];
                                            if (uVar1 - 0x41 < 0x1a) {
                                              uVar1 = uVar1 | 0x20;
                                            }
                                            if (uVar1 == 99) {
                                              uVar1 = (uint)pbVar4[8];
                                              if (uVar1 - 0x41 < 0x1a) {
                                                uVar1 = uVar1 | 0x20;
                                              }
                                              if (uVar1 == 0x6f) {
                                                uVar1 = (uint)pbVar4[9];
                                                if (uVar1 - 0x41 < 0x1a) {
                                                  uVar1 = uVar1 | 0x20;
                                                }
                                                if (uVar1 == 0x6e) {
                                                  uVar1 = (uint)pbVar4[10];
                                                  uVar6 = 2;
                                                  goto LAB_0162f660;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else if (uVar1 == 0x6c) {
                                    uVar1 = (uint)pbVar4[3];
                                    if (uVar1 - 0x41 < 0x1a) {
                                      uVar1 = uVar1 | 0x20;
                                    }
                                    if (uVar1 == 0x6c) {
                                      uVar1 = (uint)pbVar4[4];
                                      if (uVar1 - 0x41 < 0x1a) {
                                        uVar1 = uVar1 | 0x20;
                                      }
                                      if (uVar1 == 0x69) {
                                        uVar1 = (uint)pbVar4[5];
                                        if (uVar1 - 0x41 < 0x1a) {
                                          uVar1 = uVar1 | 0x20;
                                        }
                                        if (uVar1 == 0x73) {
                                          uVar1 = (uint)pbVar4[6];
                                          if (uVar1 - 0x41 < 0x1a) {
                                            uVar1 = uVar1 | 0x20;
                                          }
                                          if (uVar1 == 0x65) {
                                            uVar1 = (uint)pbVar4[7];
                                            if (uVar1 - 0x41 < 0x1a) {
                                              uVar1 = uVar1 | 0x20;
                                            }
                                            if (uVar1 == 99) {
                                              uVar1 = (uint)pbVar4[8];
                                              if (uVar1 - 0x41 < 0x1a) {
                                                uVar1 = uVar1 | 0x20;
                                              }
                                              if (uVar1 == 0x6f) {
                                                uVar1 = (uint)pbVar4[9];
                                                if (uVar1 - 0x41 < 0x1a) {
                                                  uVar1 = uVar1 | 0x20;
                                                }
                                                if (uVar1 == 0x6e) {
                                                  uVar1 = (uint)pbVar4[10];
                                                  uVar6 = 1;
                                                  goto LAB_0162f660;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            else if (iVar5 == 10) {
                              uVar1 = (uint)*pbVar4;
                              iVar5 = 10;
                              if (uVar1 - 0x41 < 0x1a) {
                                uVar1 = uVar1 | 0x20;
                              }
                              if (uVar1 == 0x6e) {
                                uVar1 = (uint)pbVar4[1];
                                if (uVar1 - 0x41 < 0x1a) {
                                  uVar1 = uVar1 | 0x20;
                                }
                                if (uVar1 == 0x61) {
                                  uVar1 = (uint)pbVar4[2];
                                  if (uVar1 - 0x41 < 0x1a) {
                                    uVar1 = uVar1 | 0x20;
                                  }
                                  if (uVar1 == 0x6e) {
                                    uVar1 = (uint)pbVar4[3];
                                    if (uVar1 - 0x41 < 0x1a) {
                                      uVar1 = uVar1 | 0x20;
                                    }
                                    if (uVar1 == 0x6f) {
                                      uVar1 = (uint)pbVar4[4];
                                      if (uVar1 - 0x41 < 0x1a) {
                                        uVar1 = uVar1 | 0x20;
                                      }
                                      if (uVar1 == 0x73) {
                                        uVar1 = (uint)pbVar4[5];
                                        if (uVar1 - 0x41 < 0x1a) {
                                          uVar1 = uVar1 | 0x20;
                                        }
                                        if (uVar1 == 0x65) {
                                          uVar1 = (uint)pbVar4[6];
                                          if (uVar1 - 0x41 < 0x1a) {
                                            uVar1 = uVar1 | 0x20;
                                          }
                                          if (uVar1 == 99) {
                                            uVar1 = (uint)pbVar4[7];
                                            if (uVar1 - 0x41 < 0x1a) {
                                              uVar1 = uVar1 | 0x20;
                                            }
                                            if (uVar1 == 0x6f) {
                                              uVar1 = (uint)pbVar4[8];
                                              if (uVar1 - 0x41 < 0x1a) {
                                                uVar1 = uVar1 | 0x20;
                                              }
                                              if (uVar1 == 0x6e) {
                                                uVar1 = (uint)pbVar4[9];
                                                uVar6 = 3;
                                                goto LAB_0162f660;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            else if (iVar5 == 6) {
                              uVar1 = (uint)*pbVar4;
                              iVar5 = 6;
                              if (uVar1 - 0x41 < 0x1a) {
                                uVar1 = uVar1 | 0x20;
                              }
                              if (uVar1 == 0x73) {
                                uVar1 = (uint)pbVar4[1];
                                if (uVar1 - 0x41 < 0x1a) {
                                  uVar1 = uVar1 | 0x20;
                                }
                                if (uVar1 == 0x65) {
                                  uVar1 = (uint)pbVar4[2];
                                  if (uVar1 - 0x41 < 0x1a) {
                                    uVar1 = uVar1 | 0x20;
                                  }
                                  if (uVar1 == 99) {
                                    uVar1 = (uint)pbVar4[3];
                                    if (uVar1 - 0x41 < 0x1a) {
                                      uVar1 = uVar1 | 0x20;
                                    }
                                    if (uVar1 == 0x6f) {
                                      uVar1 = (uint)pbVar4[4];
                                      if (uVar1 - 0x41 < 0x1a) {
                                        uVar1 = uVar1 | 0x20;
                                      }
                                      if (uVar1 == 0x6e) {
                                        uVar1 = (uint)pbVar4[5];
                                        uVar6 = 0;
LAB_0162f660:
                                        if (uVar1 - 0x41 < 0x1a) {
                                          uVar1 = uVar1 | 0x20;
                                        }
                                        if (uVar1 == 100) goto LAB_0162f674;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            FUN_006008c8(&local_38,pbVar4,iVar5);
                            if (local_38 != -0x80000000) {
LAB_0162f7d8:
                              uVar3 = puVar7[2];
                              *param_1 = 2;
                              *(char *)(param_1 + 1) = (char)uVar3;
                              param_1[2] = local_38;
                              param_1[3] = local_34;
                              param_1[4] = local_30;
                              *(char *)((int)param_1 + 7) = (char)((uint)uVar3 >> 0x18);
                              *(short *)((int)param_1 + 5) = (short)((uint)uVar3 >> 8);
                              return;
                            }
                            if (-1 < local_30) {
                              if (local_30 == 0) {
                                local_38 = 0;
                                iVar5 = 1;
                              }
                              else {
                                iVar5 = thunk_FUN_016d4a50(local_30);
                                local_38 = local_30;
                                if (iVar5 == 0) goto LAB_0162f758;
                              }
                              FUN_016dd1aa(iVar5,local_34,local_30);
                              local_34 = iVar5;
                              goto LAB_0162f7d8;
                            }
                            goto LAB_0162f72c;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_0162f684:
        FUN_006008c8(&local_38,pbVar4,iVar5);
        if (local_38 == -0x80000000) {
          if (local_30 < 0) {
LAB_0162f72c:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,local_30);
          }
          if (local_30 == 0) {
            iVar5 = 0;
            iVar2 = 1;
          }
          else {
            iVar2 = thunk_FUN_016d4a50(local_30);
            iVar5 = local_30;
            if (iVar2 == 0) {
LAB_0162f758:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_30);
            }
          }
          FUN_016dd1aa(iVar2,local_34,local_30);
          local_38 = iVar5;
          local_34 = iVar2;
        }
        param_1[1] = puVar7[-2];
        param_1[2] = local_38;
        param_1[4] = local_30;
        param_1[3] = local_34;
        *param_1 = 2;
        return;
      }
      uVar1 = (uint)*pbVar4;
      iVar5 = 4;
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 != 0x73) goto LAB_0162f684;
      uVar1 = (uint)pbVar4[1];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 != 0x69) goto LAB_0162f684;
      uVar1 = (uint)pbVar4[2];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 != 0x67) goto LAB_0162f684;
      uVar1 = (uint)pbVar4[3];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 != 0x6e) goto LAB_0162f684;
      FUN_0162ecc8(&local_38,puVar7);
      uVar8 = (undefined1)local_34;
      if (local_38 != 7) {
        FUN_016dd1aa((int)param_1 + 5,(int)&local_34 + 1,0x13);
        *(undefined1 *)(param_1 + 1) = (undefined1)local_34;
        *param_1 = local_38;
        return;
      }
LAB_0162f674:
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -0x20;
    } while (param_3 != 0);
  }
  *(undefined1 *)((int)param_1 + 5) = uVar6;
  *(undefined1 *)(param_1 + 1) = uVar8;
  *param_1 = 7;
  return;
}

