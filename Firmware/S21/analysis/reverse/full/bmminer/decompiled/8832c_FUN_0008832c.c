// FUN_0008832c @ 0008832c  size=264  callers=3
// program: bmminer


void FUN_0008832c(int param_1,undefined4 param_2)

{
  int local_c;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/category.c",0x16,"a_category is null or 0");
  }
  else {
    FUN_00095b4c(param_2,"src/category.c",0x1a,"--category[%p][%s][%p]--",param_1,param_1,
                 *(undefined4 *)(param_1 + 0x448));
    if (*(int *)(param_1 + 0x448) != 0) {
      for (local_c = 0; local_c < *(int *)(*(int *)(param_1 + 0x448) + 4); local_c = local_c + 1) {
        FUN_0008e544(*(undefined4 *)(**(int **)(param_1 + 0x448) + local_c * 4),param_2);
      }
    }
  }
  return;
}

