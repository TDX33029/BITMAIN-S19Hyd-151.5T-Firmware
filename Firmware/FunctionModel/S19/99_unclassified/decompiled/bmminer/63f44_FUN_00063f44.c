// FUN_00063f44 @ 00063f44  size=196  callers=2
// program: bmminer


void FUN_00063f44(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_000658a8(2,"src/spec.c",0x22,"a_spec is null or 0");
    return;
  }
  pcVar1 = "true";
  if (param_1[0x906] == 0) {
    pcVar1 = "false";
  }
  FUN_000658a8(param_2,"src/spec.c",0x29,"----spec[%p][%.*s][%s|%d][%s,%ld,%ld,%s][%s]----",param_1,
               param_1[1],*param_1,param_1 + 2,param_1[0x403],(int)param_1 + 0x1411,param_1[0x907],
               param_1[0x908],pcVar1,param_1 + 0x404);
  return;
}

