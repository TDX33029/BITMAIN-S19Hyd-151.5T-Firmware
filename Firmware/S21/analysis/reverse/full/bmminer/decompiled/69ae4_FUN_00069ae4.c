// FUN_00069ae4 @ 00069ae4  size=88  callers=1
// program: bmminer


void FUN_00069ae4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00069b3c(param_1,param_2);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("debug_node_color(pTree,root) == clib_black","3rdparty/cstl/src/c_rb.c",0x1e6,
                  "debug_verify_property_2");
  }
  return;
}

