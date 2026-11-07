// FUN_000471ac @ 000471ac  size=516  callers=1
// program: bmminer


void FUN_000471ac(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_r1;
  int param4;
  int *piVar5;
  int iVar6;
  int param3;
  int param3_00;
  int param4_00;
  undefined4 local_2028;
  char acStack_2024 [8192];
  
  if (4 < DAT_000be63c) {
    local_2028._0_1_ = '\n';
    local_2028._1_1_ = ' ';
    local_2028._2_1_ = 'd';
    local_2028._3_1_ = 'u';
    builtin_strncpy(acStack_2024,"mp asic nonce number...\n",0x19);
    FUN_0004948c(4,&local_2028,0);
  }
  param3_00 = 0;
  do {
    iVar1 = FUN_0002a6f0(param3_00);
    if (iVar1 != 0) {
      if (4 < DAT_000be63c) {
        snprintf((char *)&local_2028,0x2000,"Chain[%d]:\n",param3_00);
        FUN_0004948c(4,&local_2028,0);
      }
      iVar1 = FUN_0002a514();
      if (iVar1 < 1) {
        param4_00 = 0;
      }
      else {
        param4_00 = 0;
        iVar6 = param3_00 * 0x1fe000;
        param3 = 0;
        do {
          iVar2 = FUN_0002a544();
          if (iVar2 < 1) {
            param4 = 0;
          }
          else {
            piVar5 = (int *)(iVar6 + 0xcc684);
            param4 = 0;
            piVar3 = piVar5 + iVar2;
            do {
              piVar5 = piVar5 + 1;
              param4 = param4 + *piVar5;
            } while (piVar5 != piVar3);
            param4_00 = param4_00 + param4;
          }
          if (4 < DAT_000be63c) {
            snprintf((char *)&local_2028,0x2000,"IC[%03d] = %-10d ",param3,param4);
            FUN_0004948c(4,&local_2028,0);
          }
          param3 = param3 + 1;
          uVar4 = FUN_0002a524();
          FUN_000988ec(param3,uVar4);
          if ((extraout_r1 == 0) && (4 < DAT_000be63c)) {
            local_2028._0_1_ = '\n';
            local_2028._1_1_ = '\0';
            FUN_0004948c(4,&local_2028);
          }
          iVar6 = iVar6 + 0x1fe0;
        } while (param3 != iVar1);
      }
      if (4 < DAT_000be63c) {
        snprintf((char *)&local_2028,0x2000,"Chain[%d] total nonce number = %d\n",param3_00,
                 param4_00);
        FUN_0004948c(4,&local_2028,0);
        if (4 < DAT_000be63c) {
          local_2028._0_1_ = '\n';
          local_2028._1_1_ = '\0';
          FUN_0004948c(4,&local_2028,0);
        }
      }
    }
    param3_00 = param3_00 + 1;
  } while (param3_00 != 4);
  return;
}

