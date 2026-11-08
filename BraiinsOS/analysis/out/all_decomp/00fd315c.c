// FUN_00fd315c @ 00fd315c size=6028 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00fd315c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar4 = *param_1;
  iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar1 != 0) {
    return 1;
  }
  puVar3 = param_2 + 2;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = FUN_01402444(iVar4,param_2);
  }
  else {
    iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_44 = *param_2;
    local_40 = param_2[1];
    local_2c = *puVar3;
    local_28 = param_2[3];
    local_30 = &DAT_01880dc4;
    local_34 = &local_44;
    local_35 = 1;
    iVar1 = FUN_01402444(iVar4,&local_34);
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
      iVar1 = FUN_01402444(iVar4 + 1,param_2);
    }
    else {
      local_2c = *puVar3;
      local_28 = param_2[3];
      local_44 = *param_2;
      local_40 = param_2[1];
      local_34 = &local_44;
      local_3c = &local_35;
      local_35 = 1;
      local_30 = &DAT_01880dc4;
      iVar1 = FUN_01402444(iVar4 + 1,&local_34);
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
        iVar1 = FUN_01402444(iVar4 + 2,param_2);
      }
      else {
        local_2c = *puVar3;
        local_28 = param_2[3];
        local_44 = *param_2;
        local_40 = param_2[1];
        local_34 = &local_44;
        local_3c = &local_35;
        local_35 = 1;
        local_30 = &DAT_01880dc4;
        iVar1 = FUN_01402444(iVar4 + 2,&local_34);
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
          iVar1 = FUN_01402444(iVar4 + 3,param_2);
        }
        else {
          local_2c = *puVar3;
          local_28 = param_2[3];
          local_44 = *param_2;
          local_40 = param_2[1];
          local_34 = &local_44;
          local_3c = &local_35;
          local_35 = 1;
          local_30 = &DAT_01880dc4;
          iVar1 = FUN_01402444(iVar4 + 3,&local_34);
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
            iVar1 = FUN_01402444(iVar4 + 4,param_2);
          }
          else {
            local_2c = *puVar3;
            local_28 = param_2[3];
            local_44 = *param_2;
            local_40 = param_2[1];
            local_34 = &local_44;
            local_3c = &local_35;
            local_35 = 1;
            local_30 = &DAT_01880dc4;
            iVar1 = FUN_01402444(iVar4 + 4,&local_34);
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
              iVar1 = FUN_01402444(iVar4 + 5,param_2);
            }
            else {
              local_2c = *puVar3;
              local_28 = param_2[3];
              local_44 = *param_2;
              local_40 = param_2[1];
              local_34 = &local_44;
              local_3c = &local_35;
              local_35 = 1;
              local_30 = &DAT_01880dc4;
              iVar1 = FUN_01402444(iVar4 + 5,&local_34);
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
                iVar1 = FUN_01402444(iVar4 + 6,param_2);
              }
              else {
                local_2c = *puVar3;
                local_28 = param_2[3];
                local_44 = *param_2;
                local_40 = param_2[1];
                local_3c = &local_35;
                local_34 = &local_44;
                local_35 = 1;
                local_30 = &DAT_01880dc4;
                iVar1 = FUN_01402444(iVar4 + 6,&local_34);
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
                  iVar1 = FUN_01402444(iVar4 + 7,param_2);
                }
                else {
                  local_2c = *puVar3;
                  local_28 = param_2[3];
                  local_44 = *param_2;
                  local_40 = param_2[1];
                  local_3c = &local_35;
                  local_34 = &local_44;
                  local_35 = 1;
                  local_30 = &DAT_01880dc4;
                  iVar1 = FUN_01402444(iVar4 + 7,&local_34);
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
                    iVar1 = FUN_01402444(iVar4 + 8,param_2);
                  }
                  else {
                    local_2c = *puVar3;
                    local_28 = param_2[3];
                    local_44 = *param_2;
                    local_40 = param_2[1];
                    local_3c = &local_35;
                    local_34 = &local_44;
                    local_35 = 1;
                    local_30 = &DAT_01880dc4;
                    iVar1 = FUN_01402444(iVar4 + 8,&local_34);
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
                      iVar1 = FUN_01402444(iVar4 + 9,param_2);
                    }
                    else {
                      local_2c = *puVar3;
                      local_28 = param_2[3];
                      local_44 = *param_2;
                      local_40 = param_2[1];
                      local_3c = &local_35;
                      local_34 = &local_44;
                      local_35 = 1;
                      local_30 = &DAT_01880dc4;
                      iVar1 = FUN_01402444(iVar4 + 9,&local_34);
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
                        iVar1 = FUN_01402444(iVar4 + 10,param_2);
                      }
                      else {
                        local_2c = *puVar3;
                        local_28 = param_2[3];
                        local_44 = *param_2;
                        local_40 = param_2[1];
                        local_3c = &local_35;
                        local_34 = &local_44;
                        local_35 = 1;
                        local_30 = &DAT_01880dc4;
                        iVar1 = FUN_01402444(iVar4 + 10,&local_34);
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
                          iVar1 = FUN_01402444(iVar4 + 0xb,param_2);
                        }
                        else {
                          local_2c = *puVar3;
                          local_28 = param_2[3];
                          local_44 = *param_2;
                          local_40 = param_2[1];
                          local_3c = &local_35;
                          local_34 = &local_44;
                          local_35 = 1;
                          local_30 = &DAT_01880dc4;
                          iVar1 = FUN_01402444(iVar4 + 0xb,&local_34);
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
                            iVar1 = FUN_01402444(iVar4 + 0xc,param_2);
                          }
                          else {
                            local_2c = *puVar3;
                            local_28 = param_2[3];
                            local_44 = *param_2;
                            local_40 = param_2[1];
                            local_3c = &local_35;
                            local_34 = &local_44;
                            local_35 = 1;
                            local_30 = &DAT_01880dc4;
                            iVar1 = FUN_01402444(iVar4 + 0xc,&local_34);
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
                              iVar1 = FUN_01402444(iVar4 + 0xd,param_2);
                            }
                            else {
                              local_2c = *puVar3;
                              local_28 = param_2[3];
                              local_44 = *param_2;
                              local_40 = param_2[1];
                              local_3c = &local_35;
                              local_34 = &local_44;
                              local_35 = 1;
                              local_30 = &DAT_01880dc4;
                              iVar1 = FUN_01402444(iVar4 + 0xd,&local_34);
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
                                iVar1 = FUN_01402444(iVar4 + 0xe,param_2);
                              }
                              else {
                                local_2c = *puVar3;
                                local_28 = param_2[3];
                                local_44 = *param_2;
                                local_40 = param_2[1];
                                local_3c = &local_35;
                                local_34 = &local_44;
                                local_35 = 1;
                                local_30 = &DAT_01880dc4;
                                iVar1 = FUN_01402444(iVar4 + 0xe,&local_34);
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
                                  iVar1 = FUN_01402444(iVar4 + 0xf,param_2);
                                }
                                else {
                                  local_2c = *puVar3;
                                  local_28 = param_2[3];
                                  local_44 = *param_2;
                                  local_40 = param_2[1];
                                  local_3c = &local_35;
                                  local_34 = &local_44;
                                  local_35 = 1;
                                  local_30 = &DAT_01880dc4;
                                  iVar1 = FUN_01402444(iVar4 + 0xf,&local_34);
                                  if (iVar1 != 0) {
                                    return 1;
                                  }
                                  iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                                }
                                if (iVar1 == 0) {
                                  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                                    iVar1 = (**(code **)(param_2[1] + 0xc))
                                                      (*param_2,&DAT_0041950f,2);
                                    if (iVar1 != 0) {
                                      return 1;
                                    }
                                    iVar1 = FUN_01402444(iVar4 + 0x10,param_2);
                                  }
                                  else {
                                    local_2c = *puVar3;
                                    local_28 = param_2[3];
                                    local_44 = *param_2;
                                    local_40 = param_2[1];
                                    local_3c = &local_35;
                                    local_34 = &local_44;
                                    local_35 = 1;
                                    local_30 = &DAT_01880dc4;
                                    iVar1 = FUN_01402444(iVar4 + 0x10,&local_34);
                                    if (iVar1 != 0) {
                                      return 1;
                                    }
                                    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                                  }
                                  if (iVar1 == 0) {
                                    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                                      iVar1 = (**(code **)(param_2[1] + 0xc))
                                                        (*param_2,&DAT_0041950f,2);
                                      if (iVar1 != 0) {
                                        return 1;
                                      }
                                      iVar1 = FUN_01402444(iVar4 + 0x11,param_2);
                                    }
                                    else {
                                      local_2c = *puVar3;
                                      local_28 = param_2[3];
                                      local_44 = *param_2;
                                      local_40 = param_2[1];
                                      local_3c = &local_35;
                                      local_34 = &local_44;
                                      local_35 = 1;
                                      local_30 = &DAT_01880dc4;
                                      iVar1 = FUN_01402444(iVar4 + 0x11,&local_34);
                                      if (iVar1 != 0) {
                                        return 1;
                                      }
                                      iVar1 = (**(code **)(local_30 + 0xc))
                                                        (local_34,&DAT_00414a81,2);
                                    }
                                    if (iVar1 == 0) {
                                      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                                        iVar1 = (**(code **)(param_2[1] + 0xc))
                                                          (*param_2,&DAT_0041950f,2);
                                        if (iVar1 != 0) {
                                          return 1;
                                        }
                                        iVar1 = FUN_01402444(iVar4 + 0x12,param_2);
                                      }
                                      else {
                                        local_2c = *puVar3;
                                        local_28 = param_2[3];
                                        local_44 = *param_2;
                                        local_40 = param_2[1];
                                        local_3c = &local_35;
                                        local_34 = &local_44;
                                        local_35 = 1;
                                        local_30 = &DAT_01880dc4;
                                        iVar1 = FUN_01402444(iVar4 + 0x12,&local_34);
                                        if (iVar1 != 0) {
                                          return 1;
                                        }
                                        iVar1 = (**(code **)(local_30 + 0xc))
                                                          (local_34,&DAT_00414a81,2);
                                      }
                                      if (iVar1 == 0) {
                                        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                                          iVar1 = (**(code **)(param_2[1] + 0xc))
                                                            (*param_2,&DAT_0041950f,2);
                                          if (iVar1 != 0) {
                                            return 1;
                                          }
                                          iVar1 = FUN_01402444(iVar4 + 0x13,param_2);
                                        }
                                        else {
                                          local_2c = *puVar3;
                                          local_28 = param_2[3];
                                          local_44 = *param_2;
                                          local_40 = param_2[1];
                                          local_3c = &local_35;
                                          local_34 = &local_44;
                                          local_35 = 1;
                                          local_30 = &DAT_01880dc4;
                                          iVar1 = FUN_01402444(iVar4 + 0x13,&local_34);
                                          if (iVar1 != 0) {
                                            return 1;
                                          }
                                          iVar1 = (**(code **)(local_30 + 0xc))
                                                            (local_34,&DAT_00414a81,2);
                                        }
                                        if (iVar1 == 0) {
                                          if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                                            iVar1 = (**(code **)(param_2[1] + 0xc))
                                                              (*param_2,&DAT_0041950f,2);
                                            if (iVar1 != 0) {
                                              return 1;
                                            }
                                            iVar1 = FUN_01402444(iVar4 + 0x14,param_2);
                                          }
                                          else {
                                            local_2c = *puVar3;
                                            local_28 = param_2[3];
                                            local_3c = &local_35;
                                            local_44 = *param_2;
                                            local_40 = param_2[1];
                                            local_34 = &local_44;
                                            local_35 = 1;
                                            local_30 = &DAT_01880dc4;
                                            iVar1 = FUN_01402444(iVar4 + 0x14,&local_34);
                                            if (iVar1 != 0) {
                                              return 1;
                                            }
                                            iVar1 = (**(code **)(local_30 + 0xc))
                                                              (local_34,&DAT_00414a81,2);
                                          }
                                          if (iVar1 == 0) {
                                            if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                                              iVar1 = (**(code **)(param_2[1] + 0xc))
                                                                (*param_2,&DAT_0041950f,2);
                                              if (iVar1 != 0) {
                                                return 1;
                                              }
                                              iVar1 = FUN_01402444(iVar4 + 0x15,param_2);
                                            }
                                            else {
                                              local_2c = *puVar3;
                                              local_28 = param_2[3];
                                              local_3c = &local_35;
                                              local_44 = *param_2;
                                              local_40 = param_2[1];
                                              local_34 = &local_44;
                                              local_35 = 1;
                                              local_30 = &DAT_01880dc4;
                                              iVar1 = FUN_01402444(iVar4 + 0x15,&local_34);
                                              if (iVar1 != 0) {
                                                return 1;
                                              }
                                              iVar1 = (**(code **)(local_30 + 0xc))
                                                                (local_34,&DAT_00414a81,2);
                                            }
                                            if (iVar1 == 0) {
                                              if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                                                iVar1 = (**(code **)(param_2[1] + 0xc))
                                                                  (*param_2,&DAT_0041950f,2);
                                                if (iVar1 != 0) {
                                                  return 1;
                                                }
                                                iVar1 = FUN_01402444(iVar4 + 0x16,param_2);
                                              }
                                              else {
                                                local_2c = *puVar3;
                                                local_28 = param_2[3];
                                                local_3c = &local_35;
                                                local_44 = *param_2;
                                                local_40 = param_2[1];
                                                local_34 = &local_44;
                                                local_35 = 1;
                                                local_30 = &DAT_01880dc4;
                                                iVar1 = FUN_01402444(iVar4 + 0x16,&local_34);
                                                if (iVar1 != 0) {
                                                  return 1;
                                                }
                                                iVar1 = (**(code **)(local_30 + 0xc))
                                                                  (local_34,&DAT_00414a81,2);
                                              }
                                              if (iVar1 == 0) {
                                                if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                                                  iVar1 = (**(code **)(param_2[1] + 0xc))
                                                                    (*param_2,&DAT_0041950f,2);
                                                  if (iVar1 != 0) {
                                                    return 1;
                                                  }
                                                  iVar1 = FUN_01402444(iVar4 + 0x17,param_2);
                                                }
                                                else {
                                                  local_2c = *puVar3;
                                                  local_28 = param_2[3];
                                                  local_3c = &local_35;
                                                  local_44 = *param_2;
                                                  local_40 = param_2[1];
                                                  local_34 = &local_44;
                                                  local_35 = 1;
                                                  local_30 = &DAT_01880dc4;
                                                  iVar1 = FUN_01402444(iVar4 + 0x17,&local_34);
                                                  if (iVar1 != 0) {
                                                    return 1;
                                                  }
                                                  iVar1 = (**(code **)(local_30 + 0xc))
                                                                    (local_34,&DAT_00414a81,2);
                                                }
                                                if (iVar1 == 0) {
                                                  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                                                    iVar1 = (**(code **)(param_2[1] + 0xc))
                                                                      (*param_2,&DAT_0041950f,2);
                                                    if (iVar1 != 0) {
                                                      return 1;
                                                    }
                                                    iVar1 = FUN_01402444(iVar4 + 0x18,param_2);
                                                  }
                                                  else {
                                                    local_2c = *puVar3;
                                                    local_28 = param_2[3];
                                                    local_3c = &local_35;
                                                    local_44 = *param_2;
                                                    local_40 = param_2[1];
                                                    local_34 = &local_44;
                                                    local_35 = 1;
                                                    local_30 = &DAT_01880dc4;
                                                    iVar1 = FUN_01402444(iVar4 + 0x18,&local_34);
                                                    if (iVar1 != 0) {
                                                      return 1;
                                                    }
                                                    iVar1 = (**(code **)(local_30 + 0xc))
                                                                      (local_34,&DAT_00414a81,2);
                                                  }
                                                  if (iVar1 == 0) {
                                                    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0)
                                                    {
                                                      iVar1 = (**(code **)(param_2[1] + 0xc))
                                                                        (*param_2,&DAT_0041950f,2);
                                                      if (iVar1 != 0) {
                                                        return 1;
                                                      }
                                                      iVar1 = FUN_01402444(iVar4 + 0x19,param_2);
                                                    }
                                                    else {
                                                      local_2c = *puVar3;
                                                      local_28 = param_2[3];
                                                      local_3c = &local_35;
                                                      local_44 = *param_2;
                                                      local_40 = param_2[1];
                                                      local_34 = &local_44;
                                                      local_35 = 1;
                                                      local_30 = &DAT_01880dc4;
                                                      iVar1 = FUN_01402444(iVar4 + 0x19,&local_34);
                                                      if (iVar1 != 0) {
                                                        return 1;
                                                      }
                                                      iVar1 = (**(code **)(local_30 + 0xc))
                                                                        (local_34,&DAT_00414a81,2);
                                                    }
                                                    if (iVar1 == 0) {
                                                      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0
                                                         ) {
                                                        iVar1 = (**(code **)(param_2[1] + 0xc))
                                                                          (*param_2,&DAT_0041950f,2)
                                                        ;
                                                        if (iVar1 != 0) {
                                                          return 1;
                                                        }
                                                        iVar1 = FUN_01402444(iVar4 + 0x1a,param_2);
                                                      }
                                                      else {
                                                        local_2c = *puVar3;
                                                        local_28 = param_2[3];
                                                        local_3c = &local_35;
                                                        local_44 = *param_2;
                                                        local_40 = param_2[1];
                                                        local_34 = &local_44;
                                                        local_35 = 1;
                                                        local_30 = &DAT_01880dc4;
                                                        iVar1 = FUN_01402444(iVar4 + 0x1a,&local_34)
                                                        ;
                                                        if (iVar1 != 0) {
                                                          return 1;
                                                        }
                                                        iVar1 = (**(code **)(local_30 + 0xc))
                                                                          (local_34,&DAT_00414a81,2)
                                                        ;
                                                      }
                                                      if (iVar1 == 0) {
                                                        if ((*(byte *)((int)param_2 + 10) & 0x80) ==
                                                            0) {
                                                          iVar1 = (**(code **)(param_2[1] + 0xc))
                                                                            (*param_2,&DAT_0041950f,
                                                                             2);
                                                          if (iVar1 != 0) {
                                                            return 1;
                                                          }
                                                          iVar1 = FUN_01402444(iVar4 + 0x1b,param_2)
                                                          ;
                                                        }
                                                        else {
                                                          local_2c = *puVar3;
                                                          local_28 = param_2[3];
                                                          local_3c = &local_35;
                                                          local_44 = *param_2;
                                                          local_40 = param_2[1];
                                                          local_34 = &local_44;
                                                          local_35 = 1;
                                                          local_30 = &DAT_01880dc4;
                                                          iVar1 = FUN_01402444(iVar4 + 0x1b,
                                                                               &local_34);
                                                          if (iVar1 != 0) {
                                                            return 1;
                                                          }
                                                          iVar1 = (**(code **)(local_30 + 0xc))
                                                                            (local_34,&DAT_00414a81,
                                                                             2);
                                                        }
                                                        if (iVar1 == 0) {
                                                          if ((*(byte *)((int)param_2 + 10) & 0x80)
                                                              == 0) {
                                                            iVar1 = (**(code **)(param_2[1] + 0xc))
                                                                              (*param_2,&
                                                  DAT_0041950f,2);
                                                  if (iVar1 != 0) {
                                                    return 1;
                                                  }
                                                  iVar1 = FUN_01402444(iVar4 + 0x1c,param_2);
                                                  }
                                                  else {
                                                    local_2c = *puVar3;
                                                    local_28 = param_2[3];
                                                    local_3c = &local_35;
                                                    local_44 = *param_2;
                                                    local_40 = param_2[1];
                                                    local_34 = &local_44;
                                                    local_35 = 1;
                                                    local_30 = &DAT_01880dc4;
                                                    iVar1 = FUN_01402444(iVar4 + 0x1c,&local_34);
                                                    if (iVar1 != 0) {
                                                      return 1;
                                                    }
                                                    iVar1 = (**(code **)(local_30 + 0xc))
                                                                      (local_34,&DAT_00414a81,2);
                                                  }
                                                  if (iVar1 == 0) {
                                                    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0)
                                                    {
                                                      iVar1 = (**(code **)(param_2[1] + 0xc))
                                                                        (*param_2,&DAT_0041950f,2);
                                                      if (iVar1 != 0) {
                                                        return 1;
                                                      }
                                                      iVar1 = FUN_01402444(iVar4 + 0x1d,param_2);
                                                    }
                                                    else {
                                                      local_2c = *puVar3;
                                                      local_28 = param_2[3];
                                                      local_3c = &local_35;
                                                      local_44 = *param_2;
                                                      local_40 = param_2[1];
                                                      local_34 = &local_44;
                                                      local_35 = 1;
                                                      local_30 = &DAT_01880dc4;
                                                      iVar1 = FUN_01402444(iVar4 + 0x1d,&local_34);
                                                      if (iVar1 != 0) {
                                                        return 1;
                                                      }
                                                      iVar1 = (**(code **)(local_30 + 0xc))
                                                                        (local_34,&DAT_00414a81,2);
                                                    }
                                                    if (iVar1 == 0) {
                                                      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0
                                                         ) {
                                                        iVar1 = (**(code **)(param_2[1] + 0xc))
                                                                          (*param_2,&DAT_0041950f,2)
                                                        ;
                                                        if (iVar1 != 0) {
                                                          return 1;
                                                        }
                                                        iVar1 = FUN_01402444(iVar4 + 0x1e,param_2);
                                                      }
                                                      else {
                                                        local_2c = *puVar3;
                                                        local_28 = param_2[3];
                                                        local_3c = &local_35;
                                                        local_44 = *param_2;
                                                        local_40 = param_2[1];
                                                        local_34 = &local_44;
                                                        local_35 = 1;
                                                        local_30 = &DAT_01880dc4;
                                                        iVar1 = FUN_01402444(iVar4 + 0x1e,&local_34)
                                                        ;
                                                        if (iVar1 != 0) {
                                                          return 1;
                                                        }
                                                        iVar1 = (**(code **)(local_30 + 0xc))
                                                                          (local_34,&DAT_00414a81,2)
                                                        ;
                                                      }
                                                      if (iVar1 == 0) {
                                                        if ((*(byte *)((int)param_2 + 10) & 0x80) ==
                                                            0) {
                                                          iVar1 = (**(code **)(param_2[1] + 0xc))
                                                                            (*param_2,&DAT_0041950f,
                                                                             2);
                                                          if (iVar1 != 0) {
                                                            return 1;
                                                          }
                                                          iVar1 = FUN_01402444(iVar4 + 0x1f,param_2)
                                                          ;
                                                        }
                                                        else {
                                                          local_2c = *puVar3;
                                                          local_28 = param_2[3];
                                                          local_3c = &local_35;
                                                          local_34 = &local_44;
                                                          local_44 = *param_2;
                                                          local_40 = param_2[1];
                                                          local_35 = 1;
                                                          local_30 = &DAT_01880dc4;
                                                          iVar1 = FUN_01402444(iVar4 + 0x1f,
                                                                               &local_34);
                                                          if (iVar1 != 0) {
                                                            return 1;
                                                          }
                                                          iVar1 = (**(code **)(local_30 + 0xc))
                                                                            (local_34,&DAT_00414a81,
                                                                             2);
                                                        }
                                                        if (iVar1 == 0) {
                                                          uVar2 = (**(code **)(param_2[1] + 0xc))
                                                                            (*param_2,&DAT_00418ec5,
                                                                             1);
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

