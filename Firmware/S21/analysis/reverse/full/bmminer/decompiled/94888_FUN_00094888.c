// FUN_00094888 @ 00094888  size=264  callers=2
// program: bmminer


undefined4 FUN_00094888(int *param_1,int param_2)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 < param_1[2] * 2) {
    param_2 = param_1[2] * 2;
  }
  pvVar1 = realloc((void *)*param_1,param_2 << 2);
  if (pvVar1 == (void *)0x0) {
    piVar2 = __errno_location();
    FUN_00095b4c(2,"src/zc_arraylist.c",0x43,"realloc fail, errno[%d]",*piVar2);
    uVar3 = 0xffffffff;
  }
  else {
    *param_1 = (int)pvVar1;
    if (param_2 - param_1[2] != 0) {
      memset((void *)(*param_1 + param_1[2] * 4),0,(param_2 - param_1[2]) * 4);
    }
    param_1[2] = param_2;
    uVar3 = 0;
  }
  return uVar3;
}

