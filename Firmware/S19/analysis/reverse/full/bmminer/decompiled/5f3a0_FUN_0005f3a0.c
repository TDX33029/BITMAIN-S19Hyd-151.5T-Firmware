// FUN_0005f3a0 @ 0005f3a0  size=152  callers=1
// program: bmminer


void FUN_0005f3a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    FUN_000658a8(2,"src/level_list.c",0x19,"levels is null or 0");
    return;
  }
  FUN_000658a8(param_2,"src/level_list.c",0x1a,"--level_list[%p]--",param_1);
  iVar1 = param_1[1];
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(*param_1 + iVar3 * 4);
      if (iVar2 != 0) {
        FUN_00066d08(iVar2,param_2);
        iVar1 = param_1[1];
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}

