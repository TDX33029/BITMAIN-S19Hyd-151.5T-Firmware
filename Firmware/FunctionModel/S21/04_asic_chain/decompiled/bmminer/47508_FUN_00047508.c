// FUN_00047508 @ 00047508  size=460  callers=1
// program: bmminer


void FUN_00047508(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  int param3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_2028;
  char acStack_2024 [8192];
  
  if (4 < DAT_000be63c) {
    local_2028._0_1_ = '\n';
    local_2028._1_1_ = ' ';
    local_2028._2_1_ = 'd';
    local_2028._3_1_ = 'u';
    builtin_strncpy(acStack_2024,"mp domain nonce number...\n",0x1b);
    FUN_0004948c(4,&local_2028,0);
    param_2 = extraout_r1_01;
  }
  param3 = 0;
  do {
    uVar5 = FUN_0002a6f0(param3,param_2);
    param_2 = (uint)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 != 0) {
      if (4 < DAT_000be63c) {
        snprintf((char *)&local_2028,0x2000,"Chain[%d]:\n",param3);
        FUN_0004948c(4,&local_2028,0);
      }
      iVar4 = 0;
      param_2 = 0;
      while( true ) {
        iVar2 = FUN_0002a504();
        iVar3 = FUN_0002a574();
        if (iVar3 * iVar2 <= (int)param_2) break;
        iVar2 = FUN_000473b4(param3);
        iVar3 = iVar4 + iVar2;
        if (4 < DAT_000be63c) {
          snprintf((char *)&local_2028,0x2000,"D[%02d]:%-10d ",param_2,iVar2);
          FUN_0004948c(4,&local_2028,0);
        }
        uVar1 = FUN_0002a574();
        FUN_000988ec(param_2 + 1,uVar1);
        iVar4 = iVar3;
        if ((extraout_r1 == 0) && (iVar4 = 0, 4 < DAT_000be63c)) {
          snprintf((char *)&local_2028,0x2000,"D_BIG[%02d]:%-10d\n",param_2 >> 2,iVar3);
          FUN_0004948c(4,&local_2028,0);
        }
        param_2 = param_2 + 1;
      }
      if (4 < DAT_000be63c) {
        local_2028._0_1_ = '\n';
        local_2028._1_1_ = '\0';
        FUN_0004948c(4,&local_2028,0);
        param_2 = extraout_r1_00;
      }
    }
    param3 = param3 + 1;
  } while (param3 != 4);
  return;
}

