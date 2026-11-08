// FUN_0008ffe8 @ 0008ffe8  size=728  callers=1
// program: bmminer


undefined4 FUN_0008ffe8(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (char *)0x0) {
    FUN_00095b4c(2,"src/rule.c",0x1dd,"facility is null or 0");
    uVar2 = 0xffffff45;
  }
  else {
    iVar1 = strcasecmp(param_1,"LOG_LOCAL0");
    if (iVar1 == 0) {
      uVar2 = 0x80;
    }
    else {
      iVar1 = strcasecmp(param_1,"LOG_LOCAL1");
      if (iVar1 == 0) {
        uVar2 = 0x88;
      }
      else {
        iVar1 = strcasecmp(param_1,"LOG_LOCAL2");
        if (iVar1 == 0) {
          uVar2 = 0x90;
        }
        else {
          iVar1 = strcasecmp(param_1,"LOG_LOCAL3");
          if (iVar1 == 0) {
            uVar2 = 0x98;
          }
          else {
            iVar1 = strcasecmp(param_1,"LOG_LOCAL4");
            if (iVar1 == 0) {
              uVar2 = 0xa0;
            }
            else {
              iVar1 = strcasecmp(param_1,"LOG_LOCAL5");
              if (iVar1 == 0) {
                uVar2 = 0xa8;
              }
              else {
                iVar1 = strcasecmp(param_1,"LOG_LOCAL6");
                if (iVar1 == 0) {
                  uVar2 = 0xb0;
                }
                else {
                  iVar1 = strcasecmp(param_1,"LOG_LOCAL7");
                  if (iVar1 == 0) {
                    uVar2 = 0xb8;
                  }
                  else {
                    iVar1 = strcasecmp(param_1,"LOG_USER");
                    if (iVar1 == 0) {
                      uVar2 = 8;
                    }
                    else {
                      iVar1 = strcasecmp(param_1,"LOG_AUTHPRIV");
                      if (iVar1 == 0) {
                        uVar2 = 0x50;
                      }
                      else {
                        iVar1 = strcasecmp(param_1,"LOG_CRON");
                        if (iVar1 == 0) {
                          uVar2 = 0x48;
                        }
                        else {
                          iVar1 = strcasecmp(param_1,"LOG_DAEMON");
                          if (iVar1 == 0) {
                            uVar2 = 0x18;
                          }
                          else {
                            iVar1 = strcasecmp(param_1,"LOG_FTP");
                            if (iVar1 == 0) {
                              uVar2 = 0x58;
                            }
                            else {
                              iVar1 = strcasecmp(param_1,"LOG_KERN");
                              if (iVar1 == 0) {
                                uVar2 = 0;
                              }
                              else {
                                iVar1 = strcasecmp(param_1,"LOG_LPR");
                                if (iVar1 == 0) {
                                  uVar2 = 0x30;
                                }
                                else {
                                  iVar1 = strcasecmp(param_1,"LOG_MAIL");
                                  if (iVar1 == 0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    iVar1 = strcasecmp(param_1,"LOG_NEWS");
                                    if (iVar1 == 0) {
                                      uVar2 = 0x38;
                                    }
                                    else {
                                      iVar1 = strcasecmp(param_1,"LOG_SYSLOG");
                                      if (iVar1 == 0) {
                                        uVar2 = 0x28;
                                      }
                                      else {
                                        uVar2 = 0x50;
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
  return uVar2;
}

