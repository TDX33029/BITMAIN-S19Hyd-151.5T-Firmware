// FUN_0008bc9c @ 0008bc9c  size=228  callers=1
// program: bmminer


void FUN_0008bc9c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int local_c;
  
  if (param_1 == (int *)0x0) {
    FUN_00095b4c(2,"src/level_list.c",0x19,"levels is null or 0");
  }
  else {
    FUN_00095b4c(param_2,"src/level_list.c",0x1a,"--level_list[%p]--",param_1);
    for (local_c = 0; local_c < param_1[1]; local_c = local_c + 1) {
      iVar1 = *(int *)(*param_1 + local_c * 4);
      if (iVar1 != 0) {
        FUN_00097cc4(iVar1,param_2);
      }
    }
  }
  return;
}

