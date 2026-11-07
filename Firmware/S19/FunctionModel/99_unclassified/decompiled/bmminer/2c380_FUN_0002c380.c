// FUN_0002c380 @ 0002c380  size=896  callers=2
// program: bmminer


undefined * FUN_0002c380(undefined4 param_1,int param_2)

{
  char *__s;
  char *param3;
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  char *param4;
  uint uVar7;
  undefined4 *puVar8;
  char acStack_828 [2052];
  
  if ((param_2 != 0) && (DAT_0008a418 == 0)) {
    DAT_0008a418 = 1;
  }
  if (DAT_0008762c == 0x10) {
LAB_0002c528:
    piVar1 = (int *)FUN_000559d4(param_1,"include");
    if ((piVar1 == (int *)0x0) || (*piVar1 != 2)) {
      return (undefined *)0x0;
    }
    uVar2 = FUN_00055f08();
    puVar3 = (undefined *)FUN_0002c28c(uVar2,0);
    return puVar3;
  }
  if ((DAT_0008762c & 8) == 0) {
    puVar8 = &DAT_00087644;
    do {
      if (puVar8[-7] == 0) {
        uVar7 = puVar8[1];
      }
      else {
        __s = (char *)__strdup();
        param3 = strtok(__s,"|");
        while (param3 != (char *)0x0) {
          if ((param3[1] == '-') &&
             (piVar1 = (int *)FUN_000559d4(param_1,param3 + 2), piVar1 != (int *)0x0)) {
            iVar6 = *piVar1;
            if ((puVar8[-6] & 6) == 0) {
LAB_0002c48c:
              if (iVar6 - 5U < 2) {
                if ((puVar8[-6] & 1) == 0) {
                  if (iVar6 == 5) {
                    FUN_00042610(puVar8[-2]);
                  }
                  else {
                    FUN_00042620();
                  }
                  goto LAB_0002c438;
                }
                param4 = (char *)(*(code *)puVar8[-5])();
                goto LAB_0002c57c;
              }
              param4 = "Invalid value";
            }
            else {
              if (iVar6 != 2) {
                if (iVar6 == 1) {
                  uVar7 = 0;
                  iVar6 = FUN_00055d40(piVar1);
                  if (iVar6 != 0) {
                    do {
                      piVar4 = (int *)FUN_00055d5c(piVar1,uVar7);
                      if (piVar4 == (int *)0x0) break;
                      if (*piVar4 == 2) {
                        uVar2 = FUN_00055f08();
                        param4 = (char *)(*(code *)puVar8[-4])(uVar2,puVar8[-2]);
                        if (puVar8[-6] == 4) {
                          FUN_000426f4(uVar2,puVar8[-2]);
                        }
LAB_0002c6a4:
                        if (param4 != (char *)0x0) goto joined_r0x0002c4a8;
                      }
                      else if (*piVar4 == 0) {
                        param4 = (char *)FUN_0002c380();
                        goto LAB_0002c6a4;
                      }
                      uVar7 = uVar7 + 1;
                      uVar5 = FUN_00055d40(piVar1);
                    } while (uVar7 < uVar5);
                  }
                  goto LAB_0002c438;
                }
                goto LAB_0002c48c;
              }
              uVar2 = FUN_00055f08();
              param4 = (char *)(*(code *)puVar8[-4])(uVar2,puVar8[-2]);
              if (puVar8[-6] == 4) {
                FUN_000426f4(uVar2,puVar8[-2]);
              }
LAB_0002c57c:
              if (param4 == (char *)0x0) goto LAB_0002c438;
            }
joined_r0x0002c4a8:
            if (param_2 == 0) {
              snprintf(&DAT_0008a350,200,"Parsing JSON option %s: %s",param3,param4);
              return &DAT_0008a350;
            }
            if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
              snprintf(acStack_828,0x800,"Invalid config option %s: %s",param3,param4);
              FUN_00032218(3,acStack_828,0);
            }
            DAT_0008a418 = -1;
          }
LAB_0002c438:
          param3 = strtok((char *)0x0,"|");
        }
        free(__s);
        uVar7 = puVar8[1];
      }
      if (uVar7 == 0x10) goto LAB_0002c528;
      puVar8 = puVar8 + 7;
    } while ((uVar7 & 8) == 0);
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("!(opt->type & OPT_SUBTABLE)","bmminer.c",0x2de,"parse_config");
}

