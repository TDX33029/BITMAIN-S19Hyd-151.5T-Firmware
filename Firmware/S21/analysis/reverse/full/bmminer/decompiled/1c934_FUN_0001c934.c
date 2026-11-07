// FUN_0001c934 @ 0001c934  size=912  callers=12
// program: bmminer


undefined4 FUN_0001c934(uint param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  char local_2028 [20];
  uint local_2014;
  
  if ((DAT_000c0410 == 0) || (*(char *)(DAT_000c0410 + 0x1c) == '\0')) {
    if (4 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"No work mode freq, chain = %d, mode = %d.\n",param_1,param_2);
      FUN_0004948c(4,local_2028,0);
      return 0xffffffff;
    }
    uVar6 = 0xffffffff;
  }
  else {
    iVar5 = *(int *)(DAT_000c0410 + param_1 * 4);
    iVar1 = (**(code **)(iVar5 + 0xc4))(iVar5);
    iVar5 = (**(code **)(iVar5 + 0xcc))(iVar5);
    if (iVar5 == 0) {
      *param_3 = 0x259;
      return 0;
    }
    iVar2 = FUN_0002c3f4();
    if ((iVar2 != 0) && (iVar2 = FUN_0002c414(), iVar2 != 0)) {
      iVar5 = FUN_0002c514(param_1 & 0xff);
      iVar1 = FUN_0002c4fc(param_1 & 0xff);
    }
    pcVar3 = (char *)FUN_0002a4e4();
    iVar2 = strcmp(pcVar3,"H6HB70601");
    if (iVar2 != 0) {
      pcVar3 = (char *)FUN_0002a4e4();
      iVar2 = strcmp(pcVar3,"H6HB70801");
      if (iVar2 != 0) {
        pcVar3 = (char *)FUN_0002a4e4();
        iVar2 = strcmp(pcVar3,"H6HB70802");
        if (iVar2 != 0) {
          pcVar3 = (char *)FUN_0002a4e4();
          iVar2 = strcmp(pcVar3,"H6HB70602");
          if (iVar2 != 0) {
            pcVar3 = (char *)FUN_0002a4e4();
            iVar2 = strcmp(pcVar3,"H6HB70501");
            if (iVar2 != 0) {
              piVar4 = &DAT_000c02c4;
              do {
                if ((piVar4[-1] != 0) && (*piVar4 == iVar5 && (*piVar4 != 0 && piVar4[-1] == iVar1))
                   ) {
                  if (DAT_000c94e8 == 3) {
                    pcVar3 = (char *)FUN_0002a4e4();
                    iVar2 = strcmp(pcVar3,"HHB68502");
                    if (iVar2 != 0) {
                      pcVar3 = (char *)FUN_0002a4e4();
                      iVar2 = strcmp(pcVar3,"HHB68501");
                      if (iVar2 != 0) {
                        pcVar3 = (char *)FUN_0002a4e4();
                        iVar2 = strcmp(pcVar3,"HHB68701");
                        if (iVar2 != 0) {
                          pcVar3 = (char *)FUN_0002a4e4();
                          iVar2 = strcmp(pcVar3,"HHB68601");
                          if (iVar2 != 0) {
                            pcVar3 = (char *)FUN_0002a4e4();
                            iVar2 = strcmp(pcVar3,"HHB68602");
                            if (iVar2 != 0) {
                              pcVar3 = (char *)FUN_0002a4e4();
                              iVar2 = strcmp(pcVar3,"HHB56611");
                              if (iVar2 != 0) goto LAB_0001cb78;
                            }
                          }
                        }
                      }
                    }
                    iVar5 = iVar5 + -0x19;
                  }
LAB_0001cb78:
                  if (param_3 != (int *)0x0) goto LAB_0001ca18;
                }
                piVar4 = piVar4 + 2;
                if (piVar4 == &DAT_000c0404) {
                  if (DAT_000be63c < 5) {
                    return 0xfffffffe;
                  }
                  builtin_strncpy(local_2028,"freq level not match",0x14);
                  local_2014 = local_2014 & 0xffffff00;
                  FUN_0004948c(4,local_2028,0);
                  return 0xfffffffe;
                }
              } while( true );
            }
          }
        }
      }
    }
    if ((((DAT_000c0400 <= iVar1) && (iVar1 <= DAT_000c0408)) && (DAT_000c0404 <= iVar5)) &&
       (iVar5 <= DAT_000c040c)) {
      if (DAT_000c94e8 == 3) {
        iVar5 = iVar5 + -0x19;
      }
      if (param_3 != (int *)0x0) {
LAB_0001ca18:
        *param_3 = iVar5;
        return 0;
      }
    }
    if (DAT_000be63c < 5) {
      return 0xfffffffe;
    }
    uVar6 = 0xfffffffe;
    builtin_strncpy(local_2028,"freq level out of ra",0x14);
    local_2014._0_1_ = 'n';
    local_2014._1_1_ = 'g';
    local_2014._2_1_ = 'e';
    local_2014._3_1_ = '\0';
    FUN_0004948c(4,local_2028,0);
  }
  return uVar6;
}

