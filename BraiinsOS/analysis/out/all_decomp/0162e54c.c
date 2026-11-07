// FUN_0162e54c @ 0162e54c size=1916 calls_out=5 calls_in=0
// strings: 

void FUN_0162e54c(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int local_3c;
  undefined4 local_38;
  int local_34;
  
  if (param_3 == 0) {
    uVar11 = 2;
    uVar7 = 3;
    uVar10 = 3;
  }
  else {
    puVar6 = (undefined4 *)(param_2 + 0x10);
    param_3 = param_3 << 5;
    uVar10 = 3;
    uVar11 = 2;
    uVar7 = 3;
    do {
      pbVar4 = (byte *)puVar6[-4];
      iVar5 = puVar6[-3];
      if (iVar5 != 4) {
        if (iVar5 == 0xe) {
          uVar2 = (uint)*pbVar4;
          iVar5 = 0xe;
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 == 99) {
            uVar2 = (uint)pbVar4[1];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 == 0x61) {
              uVar2 = (uint)pbVar4[2];
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 == 0x73) {
                uVar2 = (uint)pbVar4[3];
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 == 0x65) {
                  uVar2 = (uint)pbVar4[4];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != 0x5f) goto LAB_0162eb7c;
                  uVar2 = (uint)pbVar4[5];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != 0x73) goto LAB_0162eb7c;
                  uVar2 = (uint)pbVar4[6];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != 0x65) goto LAB_0162eb7c;
                  uVar2 = (uint)pbVar4[7];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != 0x6e) goto LAB_0162eb7c;
                  uVar2 = (uint)pbVar4[8];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != 0x73) goto LAB_0162eb7c;
                  uVar2 = (uint)pbVar4[9];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != 0x69) goto LAB_0162eb7c;
                  uVar2 = (uint)pbVar4[10];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != 0x74) goto LAB_0162eb7c;
                  uVar2 = (uint)pbVar4[0xb];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != 0x69) goto LAB_0162eb7c;
                  uVar2 = (uint)pbVar4[0xc];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != 0x76) goto LAB_0162eb7c;
                  uVar2 = (uint)pbVar4[0xd];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != 0x65) goto LAB_0162eb7c;
                  pbVar4 = (byte *)*puVar6;
                  iVar5 = puVar6[1];
                  if (iVar5 == 4) {
                    uVar2 = (uint)*pbVar4;
                    iVar5 = 4;
                    if (uVar2 - 0x41 < 0x1a) {
                      uVar2 = uVar2 | 0x20;
                    }
                    if (uVar2 == 0x74) {
                      uVar2 = (uint)pbVar4[1];
                      if (uVar2 - 0x41 < 0x1a) {
                        uVar2 = uVar2 | 0x20;
                      }
                      if (uVar2 == 0x72) {
                        uVar2 = (uint)pbVar4[2];
                        if (uVar2 - 0x41 < 0x1a) {
                          uVar2 = uVar2 | 0x20;
                        }
                        if (uVar2 == 0x75) {
                          bVar1 = pbVar4[3];
                          uVar11 = 1;
LAB_0162e5ac:
                          uVar2 = (uint)bVar1;
                          if (uVar2 - 0x41 < 0x1a) {
                            uVar2 = uVar2 | 0x20;
                          }
                          if (uVar2 == 0x65) goto LAB_0162e5c0;
                        }
                      }
                    }
                  }
                  else if (iVar5 == 5) {
                    uVar2 = (uint)*pbVar4;
                    iVar5 = 5;
                    if (uVar2 - 0x41 < 0x1a) {
                      uVar2 = uVar2 | 0x20;
                    }
                    if (uVar2 == 0x66) {
                      uVar2 = (uint)pbVar4[1];
                      if (uVar2 - 0x41 < 0x1a) {
                        uVar2 = uVar2 | 0x20;
                      }
                      if (uVar2 == 0x61) {
                        uVar2 = (uint)pbVar4[2];
                        if (uVar2 - 0x41 < 0x1a) {
                          uVar2 = uVar2 | 0x20;
                        }
                        if (uVar2 == 0x6c) {
                          uVar2 = (uint)pbVar4[3];
                          if (uVar2 - 0x41 < 0x1a) {
                            uVar2 = uVar2 | 0x20;
                          }
                          if (uVar2 == 0x73) {
                            bVar1 = pbVar4[4];
                            uVar11 = 0;
                            goto LAB_0162e5ac;
                          }
                        }
                      }
                    }
                  }
                  FUN_006008c8(&local_3c,pbVar4,iVar5);
                  iVar5 = local_3c;
                  iVar9 = local_38;
                  goto joined_r0x0162ec04;
                }
              }
            }
          }
        }
        else if (iVar5 == 7) {
          uVar2 = (uint)*pbVar4;
          iVar5 = 7;
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 == 0x70) {
            uVar2 = (uint)pbVar4[1];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 == 0x61) {
              uVar2 = (uint)pbVar4[2];
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 == 100) {
                uVar2 = (uint)pbVar4[3];
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 == 100) {
                  uVar2 = (uint)pbVar4[4];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 == 0x69) {
                    uVar2 = (uint)pbVar4[5];
                    if (uVar2 - 0x41 < 0x1a) {
                      uVar2 = uVar2 | 0x20;
                    }
                    if (uVar2 == 0x6e) {
                      uVar2 = (uint)pbVar4[6];
                      if (uVar2 - 0x41 < 0x1a) {
                        uVar2 = uVar2 | 0x20;
                      }
                      if (uVar2 == 0x67) {
                        FUN_0162e31c(&local_3c,puVar6);
                        uVar10 = (undefined1)local_38;
                        if (local_3c != 7) {
                          FUN_016dd1aa((int)param_1 + 5,(int)&local_38 + 1,0x13);
                          *(undefined1 *)(param_1 + 1) = (undefined1)local_38;
                          *param_1 = local_3c;
                          return;
                        }
                        goto LAB_0162e5c0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_0162eb7c:
        FUN_006008c8(&local_3c,pbVar4,iVar5);
        if (local_3c == -0x80000000) {
          if (local_34 < 0) {
LAB_0162ebac:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,local_34);
          }
          if (local_34 == 0) {
            local_3c = 0;
            iVar5 = 1;
          }
          else {
            iVar5 = thunk_FUN_016d4a50(local_34);
            local_3c = local_34;
            if (iVar5 == 0) {
LAB_0162ebd8:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_34);
            }
          }
          FUN_016dd1aa(iVar5,local_38,local_34);
          local_38 = iVar5;
        }
        param_1[1] = puVar6[-2];
        param_1[2] = local_3c;
        param_1[4] = local_34;
        param_1[3] = local_38;
        *param_1 = 2;
        return;
      }
      uVar2 = (uint)*pbVar4;
      iVar5 = 4;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x72) goto LAB_0162eb7c;
      uVar2 = (uint)pbVar4[1];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x65) goto LAB_0162eb7c;
      uVar2 = (uint)pbVar4[2];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x70) goto LAB_0162eb7c;
      uVar2 = (uint)pbVar4[3];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x72) goto LAB_0162eb7c;
      pbVar4 = (byte *)*puVar6;
      iVar5 = puVar6[1];
      if (iVar5 != 4) {
        if (iVar5 == 5) {
          uVar2 = (uint)*pbVar4;
          iVar5 = 5;
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 == 0x73) {
            uVar2 = (uint)pbVar4[1];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 == 0x68) {
              uVar2 = (uint)pbVar4[2];
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 == 0x6f) {
                uVar2 = (uint)pbVar4[3];
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 == 0x72) {
                  uVar2 = (uint)pbVar4[4];
                  uVar7 = 2;
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 == 0x74) goto LAB_0162e5c0;
                }
              }
            }
          }
        }
        else if (iVar5 == 9) {
          uVar2 = (uint)*pbVar4;
          iVar5 = 9;
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 == 0x6e) {
            uVar2 = (uint)pbVar4[1];
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 == 0x75) {
              uVar2 = (uint)pbVar4[2];
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 == 0x6d) {
                uVar2 = (uint)pbVar4[3];
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 == 0x65) {
                  uVar2 = (uint)pbVar4[4];
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 == 0x72) {
                    uVar2 = (uint)pbVar4[5];
                    if (uVar2 - 0x41 < 0x1a) {
                      uVar2 = uVar2 | 0x20;
                    }
                    if (uVar2 == 0x69) {
                      uVar2 = (uint)pbVar4[6];
                      if (uVar2 - 0x41 < 0x1a) {
                        uVar2 = uVar2 | 0x20;
                      }
                      if (uVar2 == 99) {
                        uVar2 = (uint)pbVar4[7];
                        if (uVar2 - 0x41 < 0x1a) {
                          uVar2 = uVar2 | 0x20;
                        }
                        if (uVar2 == 0x61) {
                          uVar2 = (uint)pbVar4[8];
                          uVar7 = 0;
                          if (uVar2 - 0x41 < 0x1a) {
                            uVar2 = uVar2 | 0x20;
                          }
                          if (uVar2 == 0x6c) goto LAB_0162e5c0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_0162eb2c:
        FUN_006008c8(&local_3c,pbVar4,iVar5);
        iVar5 = local_3c;
        iVar9 = local_38;
joined_r0x0162ec04:
        if (iVar5 != -0x80000000) {
LAB_0162ec38:
          uVar3 = puVar6[2];
          *param_1 = 2;
          *(char *)(param_1 + 1) = (char)uVar3;
          *(char *)((int)param_1 + 7) = (char)((uint)uVar3 >> 0x18);
          param_1[2] = iVar5;
          param_1[3] = iVar9;
          param_1[4] = local_34;
          *(short *)((int)param_1 + 5) = (short)((uint)uVar3 >> 8);
          return;
        }
        if (-1 < local_34) {
          if (local_34 == 0) {
            iVar8 = 1;
            iVar5 = 0;
          }
          else {
            iVar8 = thunk_FUN_016d4a50(local_34);
            iVar5 = local_34;
            if (iVar8 == 0) goto LAB_0162ebd8;
          }
          FUN_016dd1aa(iVar8,iVar9,local_34);
          iVar9 = iVar8;
          goto LAB_0162ec38;
        }
        goto LAB_0162ebac;
      }
      uVar2 = (uint)*pbVar4;
      iVar5 = 4;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x6c) goto LAB_0162eb2c;
      uVar2 = (uint)pbVar4[1];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x6f) goto LAB_0162eb2c;
      uVar2 = (uint)pbVar4[2];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x6e) goto LAB_0162eb2c;
      uVar2 = (uint)pbVar4[3];
      uVar7 = 1;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x67) goto LAB_0162eb2c;
LAB_0162e5c0:
      puVar6 = puVar6 + 8;
      param_3 = param_3 + -0x20;
    } while (param_3 != 0);
  }
  *(undefined1 *)((int)param_1 + 6) = uVar7;
  *(undefined1 *)((int)param_1 + 5) = uVar10;
  *(undefined1 *)(param_1 + 1) = uVar11;
  *param_1 = 7;
  return;
}

