// FUN_01575988 @ 01575988 size=2996 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01575988(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar1 != 0) {
    return 1;
  }
  puVar3 = param_2 + 2;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = FUN_01402444(param_1,param_2);
  }
  else {
    iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    uStack_44 = *param_2;
    uStack_40 = param_2[1];
    local_2c = *puVar3;
    local_28 = param_2[3];
    local_30 = &DAT_01880dc4;
    local_34 = &uStack_44;
    local_35 = 1;
    iVar1 = FUN_01402444(param_1,&local_34);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_01402444(param_1 + 1,param_2);
    }
    else {
      local_2c = *puVar3;
      local_28 = param_2[3];
      uStack_44 = *param_2;
      uStack_40 = param_2[1];
      local_3c = &local_35;
      local_34 = &uStack_44;
      local_35 = 1;
      local_30 = &DAT_01880dc4;
      iVar1 = FUN_01402444(param_1 + 1,&local_34);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
    }
    if (iVar1 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = FUN_01402444(param_1 + 2,param_2);
      }
      else {
        local_2c = *puVar3;
        local_28 = param_2[3];
        uStack_44 = *param_2;
        uStack_40 = param_2[1];
        local_3c = &local_35;
        local_34 = &uStack_44;
        local_35 = 1;
        local_30 = &DAT_01880dc4;
        iVar1 = FUN_01402444(param_1 + 2,&local_34);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      }
      if (iVar1 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
          if (iVar1 != 0) {
            return 1;
          }
          iVar1 = FUN_01402444(param_1 + 3,param_2);
        }
        else {
          local_2c = *puVar3;
          local_28 = param_2[3];
          uStack_44 = *param_2;
          uStack_40 = param_2[1];
          local_3c = &local_35;
          local_34 = &uStack_44;
          local_35 = 1;
          local_30 = &DAT_01880dc4;
          iVar1 = FUN_01402444(param_1 + 3,&local_34);
          if (iVar1 != 0) {
            return 1;
          }
          iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
        }
        if (iVar1 == 0) {
          if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
            iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
            if (iVar1 != 0) {
              return 1;
            }
            iVar1 = FUN_01402444(param_1 + 4,param_2);
          }
          else {
            local_2c = *puVar3;
            local_28 = param_2[3];
            uStack_44 = *param_2;
            uStack_40 = param_2[1];
            local_3c = &local_35;
            local_34 = &uStack_44;
            local_35 = 1;
            local_30 = &DAT_01880dc4;
            iVar1 = FUN_01402444(param_1 + 4,&local_34);
            if (iVar1 != 0) {
              return 1;
            }
            iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
          }
          if (iVar1 == 0) {
            if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
              iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
              if (iVar1 != 0) {
                return 1;
              }
              iVar1 = FUN_01402444(param_1 + 5,param_2);
            }
            else {
              local_2c = *puVar3;
              local_28 = param_2[3];
              uStack_44 = *param_2;
              uStack_40 = param_2[1];
              local_3c = &local_35;
              local_34 = &uStack_44;
              local_35 = 1;
              local_30 = &DAT_01880dc4;
              iVar1 = FUN_01402444(param_1 + 5,&local_34);
              if (iVar1 != 0) {
                return 1;
              }
              iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
            }
            if (iVar1 == 0) {
              if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
                if (iVar1 != 0) {
                  return 1;
                }
                iVar1 = FUN_01402444(param_1 + 6,param_2);
              }
              else {
                local_2c = *puVar3;
                local_28 = param_2[3];
                uStack_44 = *param_2;
                uStack_40 = param_2[1];
                local_3c = &local_35;
                local_34 = &uStack_44;
                local_35 = 1;
                local_30 = &DAT_01880dc4;
                iVar1 = FUN_01402444(param_1 + 6,&local_34);
                if (iVar1 != 0) {
                  return 1;
                }
                iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
              }
              if (iVar1 == 0) {
                if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                  iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
                  if (iVar1 != 0) {
                    return 1;
                  }
                  iVar1 = FUN_01402444(param_1 + 7,param_2);
                }
                else {
                  local_2c = *puVar3;
                  local_28 = param_2[3];
                  uStack_44 = *param_2;
                  uStack_40 = param_2[1];
                  local_3c = &local_35;
                  local_34 = &uStack_44;
                  local_35 = 1;
                  local_30 = &DAT_01880dc4;
                  iVar1 = FUN_01402444(param_1 + 7,&local_34);
                  if (iVar1 != 0) {
                    return 1;
                  }
                  iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                }
                if (iVar1 == 0) {
                  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                    iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
                    if (iVar1 != 0) {
                      return 1;
                    }
                    iVar1 = FUN_01402444(param_1 + 8,param_2);
                  }
                  else {
                    local_2c = *puVar3;
                    local_28 = param_2[3];
                    uStack_44 = *param_2;
                    uStack_40 = param_2[1];
                    local_3c = &local_35;
                    local_34 = &uStack_44;
                    local_35 = 1;
                    local_30 = &DAT_01880dc4;
                    iVar1 = FUN_01402444(param_1 + 8,&local_34);
                    if (iVar1 != 0) {
                      return 1;
                    }
                    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                  }
                  if (iVar1 == 0) {
                    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                      iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
                      if (iVar1 != 0) {
                        return 1;
                      }
                      iVar1 = FUN_01402444(param_1 + 9,param_2);
                    }
                    else {
                      local_2c = *puVar3;
                      local_28 = param_2[3];
                      uStack_44 = *param_2;
                      uStack_40 = param_2[1];
                      local_3c = &local_35;
                      local_34 = &uStack_44;
                      local_35 = 1;
                      local_30 = &DAT_01880dc4;
                      iVar1 = FUN_01402444(param_1 + 9,&local_34);
                      if (iVar1 != 0) {
                        return 1;
                      }
                      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                    }
                    if (iVar1 == 0) {
                      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                        iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
                        if (iVar1 != 0) {
                          return 1;
                        }
                        iVar1 = FUN_01402444(param_1 + 10,param_2);
                      }
                      else {
                        local_2c = *puVar3;
                        local_28 = param_2[3];
                        uStack_44 = *param_2;
                        uStack_40 = param_2[1];
                        local_3c = &local_35;
                        local_34 = &uStack_44;
                        local_35 = 1;
                        local_30 = &DAT_01880dc4;
                        iVar1 = FUN_01402444(param_1 + 10,&local_34);
                        if (iVar1 != 0) {
                          return 1;
                        }
                        iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                      }
                      if (iVar1 == 0) {
                        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                          iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
                          if (iVar1 != 0) {
                            return 1;
                          }
                          iVar1 = FUN_01402444(param_1 + 0xb,param_2);
                        }
                        else {
                          local_2c = *puVar3;
                          local_28 = param_2[3];
                          uStack_44 = *param_2;
                          uStack_40 = param_2[1];
                          local_3c = &local_35;
                          local_34 = &uStack_44;
                          local_35 = 1;
                          local_30 = &DAT_01880dc4;
                          iVar1 = FUN_01402444(param_1 + 0xb,&local_34);
                          if (iVar1 != 0) {
                            return 1;
                          }
                          iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                        }
                        if (iVar1 == 0) {
                          if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                            iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
                            if (iVar1 != 0) {
                              return 1;
                            }
                            iVar1 = FUN_01402444(param_1 + 0xc,param_2);
                          }
                          else {
                            local_2c = *puVar3;
                            local_28 = param_2[3];
                            uStack_44 = *param_2;
                            uStack_40 = param_2[1];
                            local_3c = &local_35;
                            local_34 = &uStack_44;
                            local_35 = 1;
                            local_30 = &DAT_01880dc4;
                            iVar1 = FUN_01402444(param_1 + 0xc,&local_34);
                            if (iVar1 != 0) {
                              return 1;
                            }
                            iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                          }
                          if (iVar1 == 0) {
                            if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                              iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
                              if (iVar1 != 0) {
                                return 1;
                              }
                              iVar1 = FUN_01402444(param_1 + 0xd,param_2);
                            }
                            else {
                              local_2c = *puVar3;
                              local_28 = param_2[3];
                              uStack_44 = *param_2;
                              uStack_40 = param_2[1];
                              local_3c = &local_35;
                              local_34 = &uStack_44;
                              local_35 = 1;
                              local_30 = &DAT_01880dc4;
                              iVar1 = FUN_01402444(param_1 + 0xd,&local_34);
                              if (iVar1 != 0) {
                                return 1;
                              }
                              iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                            }
                            if (iVar1 == 0) {
                              if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                                iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
                                if (iVar1 != 0) {
                                  return 1;
                                }
                                iVar1 = FUN_01402444(param_1 + 0xe,param_2);
                              }
                              else {
                                local_2c = *puVar3;
                                local_28 = param_2[3];
                                uStack_44 = *param_2;
                                uStack_40 = param_2[1];
                                local_3c = &local_35;
                                local_34 = &uStack_44;
                                local_35 = 1;
                                local_30 = &DAT_01880dc4;
                                iVar1 = FUN_01402444(param_1 + 0xe,&local_34);
                                if (iVar1 != 0) {
                                  return 1;
                                }
                                iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                              }
                              if (iVar1 == 0) {
                                if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                                  iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
                                  if (iVar1 != 0) {
                                    return 1;
                                  }
                                  iVar1 = FUN_01402444(param_1 + 0xf,param_2);
                                }
                                else {
                                  local_2c = *puVar3;
                                  local_28 = param_2[3];
                                  uStack_44 = *param_2;
                                  uStack_40 = param_2[1];
                                  local_3c = &local_35;
                                  local_34 = &uStack_44;
                                  local_35 = 1;
                                  local_30 = &DAT_01880dc4;
                                  iVar1 = FUN_01402444(param_1 + 0xf,&local_34);
                                  if (iVar1 != 0) {
                                    return 1;
                                  }
                                  iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                                }
                                if (iVar1 == 0) {
                                  uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
                                  return uVar2;
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
          }
        }
      }
    }
  }
  return 1;
}

