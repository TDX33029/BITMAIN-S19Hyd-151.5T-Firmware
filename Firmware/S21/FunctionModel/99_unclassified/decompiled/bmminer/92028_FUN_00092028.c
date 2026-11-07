// FUN_00092028 @ 00092028  size=280  callers=2
// program: bmminer


void FUN_00092028(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_00095b4c(2,"src/spec.c",0x22,"a_spec is null or 0");
  }
  else {
    if (param_1[0x906] == 0) {
      pcVar1 = "false";
    }
    else {
      pcVar1 = "true";
    }
    FUN_00095b4c(param_2,"src/spec.c",0x29,"----spec[%p][%.*s][%s|%d][%s,%ld,%ld,%s][%s]----",
                 param_1,param_1[1],*param_1,param_1 + 2,param_1[0x403],(int)param_1 + 0x1411,
                 param_1[0x907],param_1[0x908],pcVar1,param_1 + 0x404);
  }
  return;
}

