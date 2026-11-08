// FUN_00069cf8 @ 00069cf8  size=232  callers=2
// program: bmminer


void FUN_00069cf8(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int iVar1;
  int local_14;
  
  iVar1 = FUN_00069b3c(param_1,param_2);
  local_14 = param_3;
  if (iVar1 == 0) {
    local_14 = param_3 + 1;
  }
  if (param_2 == (undefined4 *)(param_1 + 4)) {
    if (*param_4 == -1) {
      *param_4 = local_14;
    }
    else if (local_14 != *param_4) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("black_count == *path_black_count","3rdparty/cstl/src/c_rb.c",0x205,
                    "debug_verify_property_5_helper");
    }
  }
  else {
    FUN_00069cf8(param_1,*param_2,local_14,param_4);
    FUN_00069cf8(param_1,param_2[1],local_14,param_4);
  }
  return;
}

