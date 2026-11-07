// FUN_00097cc4 @ 00097cc4  size=180  callers=1
// program: bmminer


void FUN_00097cc4(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    FUN_00095b4c(2,"src/level.c",0x13,"a_level is null or 0");
  }
  else {
    FUN_00095b4c(param_2,"src/level.c",0x1a,"---level[%p][%d,%s,%s,%d,%d]---",param_1,*param_1,
                 param_1 + 1,(int)param_1 + 0x405,param_1[0x202],param_1[0x203]);
  }
  return;
}

