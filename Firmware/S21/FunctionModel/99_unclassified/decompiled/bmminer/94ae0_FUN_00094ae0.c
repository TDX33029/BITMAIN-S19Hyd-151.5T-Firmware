// FUN_00094ae0 @ 00094ae0  size=316  callers=1
// program: bmminer


undefined4 FUN_00094ae0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(*param_1 + param_2 * 4) == 0) {
    *(undefined4 *)(*param_1 + param_2 * 4) = param_3;
    uVar2 = 0;
  }
  else if ((param_1[2] + -1 < param_1[1]) && (iVar1 = FUN_00094888(param_1,0), iVar1 != 0)) {
    FUN_00095b4c(2,"src/zc_arraylist.c",0x6b,"expand_internal fail");
    uVar2 = 0xffffffff;
  }
  else {
    memmove((void *)(*param_1 + (param_2 + 1) * 4),(void *)(*param_1 + param_2 * 4),
            (param_1[1] - param_2) * 4);
    *(undefined4 *)(*param_1 + param_2 * 4) = param_3;
    param_1[1] = param_1[1] + 1;
    uVar2 = 0;
  }
  return uVar2;
}

