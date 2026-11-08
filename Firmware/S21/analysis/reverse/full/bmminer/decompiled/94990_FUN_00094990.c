// FUN_00094990 @ 00094990  size=276  callers=2
// program: bmminer


undefined4 FUN_00094990(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1[2] + -1 < param_2) && (iVar1 = FUN_00094888(param_1,param_2), iVar1 != 0)) {
    FUN_00095b4c(2,"src/zc_arraylist.c",0x51,"expand_internal fail");
    uVar2 = 0xffffffff;
  }
  else {
    if ((*(int *)(*param_1 + param_2 * 4) != 0) && (param_1[3] != 0)) {
      (*(code *)param_1[3])(*(undefined4 *)(*param_1 + param_2 * 4));
    }
    *(undefined4 *)(*param_1 + param_2 * 4) = param_3;
    if (param_1[1] <= param_2) {
      param_1[1] = param_2 + 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

