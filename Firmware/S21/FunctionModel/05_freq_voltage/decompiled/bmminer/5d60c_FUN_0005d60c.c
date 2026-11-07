// FUN_0005d60c @ 0005d60c  size=332  callers=0
// program: bmminer


undefined4 FUN_0005d60c(undefined4 param_1)

{
  undefined4 uVar1;
  char local_2018 [36];
  undefined4 uStack_1ff4;
  char acStack_1ff0 [8156];
  
  if (4 < DAT_000be63c) {
    builtin_strncpy(local_2018,"[DEBUG] freq tuning fine init.\n",0x20);
    FUN_0004948c(4,local_2018,0);
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2018,"[DEBUG] Allocate memory for pm grade",0x24);
      uStack_1ff4 = CONCAT13(uStack_1ff4._3_1_,0xa2e);
      FUN_0004948c(4,local_2018,0);
    }
  }
  if ((DAT_00944b8c == (undefined4 *)0x0) &&
     (DAT_00944b8c = calloc(0x3044,1), DAT_00944b8c == (undefined4 *)0x0)) {
    FUN_00056e88(0xd,0xff);
    if (DAT_000be63c < 4) {
      uVar1 = 0xffffffff;
    }
    else {
      builtin_strncpy(local_2018,"Fail to allocate memory for pm grade",0x24);
      uStack_1ff4._0_1_ = ' ';
      uStack_1ff4._1_1_ = 'c';
      uStack_1ff4._2_1_ = 'o';
      uStack_1ff4._3_1_ = 'n';
      builtin_strncpy(acStack_1ff0,"text.\n",7);
      FUN_0004948c(3,local_2018,0);
      uVar1 = 0xffffffff;
    }
  }
  else {
    *DAT_00944b8c = param_1;
    FUN_0005d010();
    uVar1 = 0;
  }
  return uVar1;
}

