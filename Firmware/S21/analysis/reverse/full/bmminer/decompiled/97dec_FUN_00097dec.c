// FUN_00097dec @ 00097dec  size=404  callers=1
// program: bmminer


undefined4 FUN_00097dec(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (char *)0x0) {
    FUN_00095b4c(2,"src/level.c",0x2c,"str is null or 0");
    uVar2 = 0xffffff45;
  }
  else {
    iVar1 = strcasecmp(param_1,"LOG_EMERG");
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = strcasecmp(param_1,"LOG_ALERT");
      if (iVar1 == 0) {
        uVar2 = 1;
      }
      else {
        iVar1 = strcasecmp(param_1,"LOG_CRIT");
        if (iVar1 == 0) {
          uVar2 = 2;
        }
        else {
          iVar1 = strcasecmp(param_1,"LOG_ERR");
          if (iVar1 == 0) {
            uVar2 = 3;
          }
          else {
            iVar1 = strcasecmp(param_1,"LOG_WARNING");
            if (iVar1 == 0) {
              uVar2 = 4;
            }
            else {
              iVar1 = strcasecmp(param_1,"LOG_NOTICE");
              if (iVar1 == 0) {
                uVar2 = 5;
              }
              else {
                iVar1 = strcasecmp(param_1,"LOG_INFO");
                if (iVar1 == 0) {
                  uVar2 = 6;
                }
                else {
                  iVar1 = strcasecmp(param_1,"LOG_DEBUG");
                  if (iVar1 == 0) {
                    uVar2 = 7;
                  }
                  else {
                    FUN_00095b4c(2,"src/level.c",0x3f,"wrong syslog level[%s]",param_1);
                    uVar2 = 0xffffff45;
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

