// FUN_00069b84 @ 00069b84  size=312  callers=2
// program: bmminer


void FUN_00069b84(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00069b3c(param_1,param_2);
  if (iVar1 == 1) {
    iVar1 = FUN_00069b3c(param_1,*param_2);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("debug_node_color(pTree,n->left) == clib_black","3rdparty/cstl/src/c_rb.c",0x1ef
                    ,"debug_verify_property_4");
    }
    iVar1 = FUN_00069b3c(param_1,param_2[1]);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("debug_node_color(pTree,n->right) == clib_black","3rdparty/cstl/src/c_rb.c",
                    0x1f0,"debug_verify_property_4");
    }
    iVar1 = FUN_00069b3c(param_1,param_2[2]);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("debug_node_color(pTree,n->parent) == clib_black","3rdparty/cstl/src/c_rb.c",
                    0x1f1,"debug_verify_property_4");
    }
  }
  if (param_2 != (undefined4 *)(param_1 + 4)) {
    FUN_00069b84(param_1,*param_2);
    FUN_00069b84(param_1,param_2[1]);
  }
  return;
}

