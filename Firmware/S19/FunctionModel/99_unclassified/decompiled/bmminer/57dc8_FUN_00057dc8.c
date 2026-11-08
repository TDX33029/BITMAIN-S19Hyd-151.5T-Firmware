// FUN_00057dc8 @ 00057dc8  size=80  callers=1
// program: bmminer


void FUN_00057dc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 undefined2 param_5)

{
  FUN_0005723c(param_1,0,param_2,param_3,param_4 & 0xff,(param_4 & 0xffff) >> 8,
               (param_4 & 0xffffff) >> 0x10,param_5);
  return;
}

