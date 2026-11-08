// FUN_00028390 @ 00028390  size=664  callers=1
// program: bmminer


void FUN_00028390(void)

{
  int iVar1;
  undefined4 uVar2;
  uint __seed;
  long lVar3;
  int iVar4;
  int local_820;
  uint local_81c;
  char local_818 [24];
  undefined4 local_800;
  char acStack_7fc [2024];
  
  FUN_00034828(&local_820);
  if (DAT_0048d3a0 == 0 && DAT_0048d3a4 == 0) {
    FUN_00034828();
    return;
  }
  iVar4 = local_820 - DAT_0048d3a0;
  if ((int)(local_81c - DAT_0048d3a4) < 0) {
    iVar4 = iVar4 + -1;
  }
  iVar1 = FUN_000366fc();
  if (iVar1 == 0) {
    if (iVar4 < 0x12d) {
LAB_00028468:
      if (DAT_00089224 != 0) {
        if (3 < DAT_00087bbc) {
          builtin_strncpy(local_818,"network connection resum",0x18);
          local_800._0_1_ = 'e';
          local_800._1_1_ = ',';
          local_800._2_1_ = ' ';
          local_800._3_1_ = 'r';
          builtin_strncpy(acStack_7fc,"estart",7);
          FUN_00032218(3,local_818,0);
        }
        FUN_00036380(6,"network connection resume, restart...");
        DAT_00089224 = 0;
        DAT_00089220 = 0;
        return;
      }
      if (DAT_00089220 == 0) {
        return;
      }
      if (3 < DAT_00087bbc) {
        builtin_strncpy(local_818,"network connection resum",0x18);
        local_800._0_1_ = 'e';
        local_800._1_1_ = '\0';
        FUN_00032218(3,local_818,0);
      }
      uVar2 = FUN_00036370();
      FUN_00036380(uVar2,0);
      DAT_00089220 = 0;
      return;
    }
  }
  else if ((iVar4 < 0x12d) || (DAT_00089208 == '\0')) goto LAB_00028468;
  if (DAT_00089220 == 0) {
    FUN_00036380(3,"network connection lost");
    __seed = FUN_0002ecbc();
    if (__seed == 0) {
      __seed = local_81c;
    }
    srandom(__seed);
    lVar3 = random();
    DAT_00089220 = lVar3 % 300 + 1;
    if (3 < DAT_00087bbc) {
      snprintf(local_818,0x800,"will power off in %d seconds in case not resume",DAT_00089220);
      FUN_00032218(3,local_818,0);
    }
  }
  else if ((DAT_00089220 + 299 < iVar4) && (DAT_00089224 == 0)) {
    if (3 < DAT_00087bbc) {
      snprintf(local_818,0x800,"network connection lost for 5 min + %d seconds, power off...",
               DAT_00089220);
      FUN_00032218(3,local_818,0);
    }
    FUN_0001cb8c();
    FUN_000362d4();
    DAT_00089224 = 1;
  }
  return;
}

