// FUN_000417b0 @ 000417b0  size=332  callers=0
// program: bmminer


undefined4 FUN_000417b0(undefined4 param_1)

{
  undefined4 uVar1;
  char local_818 [36];
  undefined4 uStack_7f4;
  char acStack_7f0 [2012];
  
  if (4 < DAT_00087bbc) {
    builtin_strncpy(local_818,"[DEBUG] freq tuning fine init.\n",0x20);
    FUN_00032218(4,local_818,0);
    if (4 < DAT_00087bbc) {
      builtin_strncpy(local_818,"[DEBUG] Allocate memory for pm grade",0x24);
      uStack_7f4 = CONCAT13(uStack_7f4._3_1_,0xa2e);
      FUN_00032218(4,local_818,0);
    }
  }
  if ((DAT_00507494 == (undefined4 *)0x0) &&
     (DAT_00507494 = calloc(0x3044,1), DAT_00507494 == (undefined4 *)0x0)) {
    FUN_0003a9e0(0xd,0xff);
    if (DAT_00087bbc < 4) {
      uVar1 = 0xffffffff;
    }
    else {
      builtin_strncpy(local_818,"Fail to allocate memory for pm grade",0x24);
      uStack_7f4._0_1_ = ' ';
      uStack_7f4._1_1_ = 'c';
      uStack_7f4._2_1_ = 'o';
      uStack_7f4._3_1_ = 'n';
      builtin_strncpy(acStack_7f0,"text.\n",7);
      FUN_00032218(3,local_818,0);
      uVar1 = 0xffffffff;
    }
  }
  else {
    *DAT_00507494 = param_1;
    FUN_000412b4();
    uVar1 = 0;
  }
  return uVar1;
}

