// FUN_00041ea4 @ 00041ea4  size=916  callers=2
// program: bmminer


undefined * FUN_00041ea4(undefined4 param_1,int *param_2,int param_3)

{
  char *__s;
  char *param3;
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  char *param4;
  uint uVar8;
  char acStack_2028 [8196];
  
  if ((param_3 != 0) && (DAT_000c8fac == 0)) {
    DAT_000c8fac = 1;
  }
  if (param_2[1] == 0x10) {
LAB_00042054:
    piVar2 = (int *)FUN_0007eb20(param_1,"include");
    if ((piVar2 == (int *)0x0) || (*piVar2 != 2)) {
      return (undefined *)0x0;
    }
    uVar3 = FUN_00080310();
    puVar4 = (undefined *)FUN_00041d5c(uVar3,param_2,0);
    return puVar4;
  }
  if ((param_2[1] & 8U) == 0) {
    piVar2 = param_2;
    do {
      if (*piVar2 == 0) {
        uVar8 = piVar2[8];
      }
      else {
        __s = (char *)__strdup();
        param3 = strtok(__s,"|");
        while (param3 != (char *)0x0) {
          if ((param3[1] == '-') &&
             (piVar1 = (int *)FUN_0007eb20(param_1,param3 + 2), piVar1 != (int *)0x0)) {
            iVar7 = *piVar1;
            if ((piVar2[1] & 6U) == 0) {
LAB_00041fb8:
              if (iVar7 - 5U < 2) {
                if ((piVar2[1] & 1U) == 0) {
                  if (iVar7 == 5) {
                    FUN_0005e478(piVar2[5]);
                  }
                  else {
                    FUN_0005e488();
                  }
                  goto LAB_00041f64;
                }
                param4 = (char *)(*(code *)piVar2[2])();
                goto LAB_000420ac;
              }
              param4 = "Invalid value";
            }
            else {
              if (iVar7 != 2) {
                if (iVar7 == 1) {
                  uVar8 = 0;
                  iVar7 = FUN_0007f66c(piVar1);
                  if (iVar7 != 0) {
                    do {
                      piVar5 = (int *)FUN_0007f6b8(piVar1,uVar8);
                      if (piVar5 == (int *)0x0) break;
                      if (*piVar5 == 2) {
                        uVar3 = FUN_00080310();
                        param4 = (char *)(*(code *)piVar2[3])(uVar3,piVar2[5]);
                        if (piVar2[1] == 4) {
                          FUN_0005e55c(uVar3,piVar2[5]);
                        }
LAB_000421d8:
                        if (param4 != (char *)0x0) goto joined_r0x00041fd4;
                      }
                      else if (*piVar5 == 0) {
                        param4 = (char *)FUN_00041ea4(piVar5,param_2);
                        goto LAB_000421d8;
                      }
                      uVar8 = uVar8 + 1;
                      uVar6 = FUN_0007f66c(piVar1);
                    } while (uVar8 < uVar6);
                  }
                  goto LAB_00041f64;
                }
                goto LAB_00041fb8;
              }
              uVar3 = FUN_00080310();
              param4 = (char *)(*(code *)piVar2[3])(uVar3,piVar2[5]);
              if (piVar2[1] == 4) {
                FUN_0005e55c(uVar3,piVar2[5]);
              }
LAB_000420ac:
              if (param4 == (char *)0x0) goto LAB_00041f64;
            }
joined_r0x00041fd4:
            if (param_3 == 0) {
              snprintf(&DAT_000c8ee4,200,"Parsing JSON option %s: %s",param3,param4);
              return &DAT_000c8ee4;
            }
            if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
              snprintf(acStack_2028,0x2000,"Invalid config option %s: %s",param3,param4);
              FUN_0004948c(3,acStack_2028,0);
            }
            DAT_000c8fac = -1;
          }
LAB_00041f64:
          param3 = strtok((char *)0x0,"|");
        }
        free(__s);
        uVar8 = piVar2[8];
      }
      if (uVar8 == 0x10) goto LAB_00042054;
      piVar2 = piVar2 + 7;
    } while ((uVar8 & 8) == 0);
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("!(opt->type & OPT_SUBTABLE)","bmminer.c",0x30a,"parse_config");
}

