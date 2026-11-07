// FUN_00029318 @ 00029318  size=896  callers=2
// program: cgminer


undefined * FUN_00029318(undefined4 param_1,int param_2)

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
  
  if ((param_2 != 0) && (DAT_00068aec == 0)) {
    DAT_00068aec = 1;
  }
  if (DAT_00067a7c == 0x10) {
LAB_000294c0:
    piVar1 = (int *)FUN_00048cac(param_1,"include");
    if ((piVar1 == (int *)0x0) || (*piVar1 != 2)) {
      return (undefined *)0x0;
    }
    uVar2 = FUN_000491e0();
    puVar3 = (undefined *)FUN_0002921c(uVar2,0);
    return puVar3;
  }
  if ((DAT_00067a7c & 8) == 0) {
    puVar8 = &DAT_00067a94;
    do {
      if (puVar8[-7] == 0) {
        uVar7 = puVar8[1];
      }
      else {
        __s = (char *)__strdup();
        param3 = strtok(__s,"|");
        while (param3 != (char *)0x0) {
          if ((param3[1] == '-') &&
             (piVar1 = (int *)FUN_00048cac(param_1,param3 + 2), piVar1 != (int *)0x0)) {
            iVar6 = *piVar1;
            if ((puVar8[-6] & 6) == 0) {
LAB_00029424:
              if (iVar6 - 5U < 2) {
                if ((puVar8[-6] & 1) == 0) {
                  if (iVar6 == 5) {
                    FUN_0003e538(puVar8[-2]);
                  }
                  else {
                    FUN_0003e548();
                  }
                  goto LAB_000293d0;
                }
                param4 = (char *)(*(code *)puVar8[-5])();
                goto LAB_00029514;
              }
              param4 = "Invalid value";
            }
            else {
              if (iVar6 != 2) {
                if (iVar6 == 1) {
                  uVar7 = 0;
                  iVar6 = FUN_00049018(piVar1);
                  if (iVar6 != 0) {
                    do {
                      piVar4 = (int *)FUN_00049034(piVar1,uVar7);
                      if (piVar4 == (int *)0x0) break;
                      if (*piVar4 == 2) {
                        uVar2 = FUN_000491e0();
                        param4 = (char *)(*(code *)puVar8[-4])(uVar2,puVar8[-2]);
                        if (puVar8[-6] == 4) {
                          FUN_0003e61c(uVar2,puVar8[-2]);
                        }
LAB_0002963c:
                        if (param4 != (char *)0x0) goto joined_r0x00029440;
                      }
                      else if (*piVar4 == 0) {
                        param4 = (char *)FUN_00029318();
                        goto LAB_0002963c;
                      }
                      uVar7 = uVar7 + 1;
                      uVar5 = FUN_00049018(piVar1);
                    } while (uVar7 < uVar5);
                  }
                  goto LAB_000293d0;
                }
                goto LAB_00029424;
              }
              uVar2 = FUN_000491e0();
              param4 = (char *)(*(code *)puVar8[-4])(uVar2,puVar8[-2]);
              if (puVar8[-6] == 4) {
                FUN_0003e61c(uVar2,puVar8[-2]);
              }
LAB_00029514:
              if (param4 == (char *)0x0) goto LAB_000293d0;
            }
joined_r0x00029440:
            if (param_2 == 0) {
              snprintf(&DAT_00068a24,200,"Parsing JSON option %s: %s",param3,param4);
              return &DAT_00068a24;
            }
            if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
              snprintf(acStack_828,0x800,"Invalid config option %s: %s",param3,param4);
              FUN_0001dd98(3,acStack_828,0);
            }
            DAT_00068aec = -1;
          }
LAB_000293d0:
          param3 = strtok((char *)0x0,"|");
        }
        free(__s);
        uVar7 = puVar8[1];
      }
      if (uVar7 == 0x10) goto LAB_000294c0;
      puVar8 = puVar8 + 7;
    } while ((uVar7 & 8) == 0);
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("!(opt->type & OPT_SUBTABLE)","cgminer.c",0x7e6,"parse_config");
}

