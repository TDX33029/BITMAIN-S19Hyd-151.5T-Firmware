// FUN_00069a34 @ 00069a34  size=176  callers=2
// program: bmminer


void FUN_00069a34(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00069b3c(param_1,param_2);
  if ((iVar1 != 1) && (iVar1 = FUN_00069b3c(param_1,param_2), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("debug_node_color(pTree,n) == clib_red || debug_node_color(pTree,n) == clib_black"
                  ,"3rdparty/cstl/src/c_rb.c",0x1df,"debug_verify_property_1");
  }
  if (param_2 != (undefined4 *)(param_1 + 4)) {
    FUN_00069a34(param_1,*param_2);
    FUN_00069a34(param_1,param_2[1]);
  }
  return;
}

