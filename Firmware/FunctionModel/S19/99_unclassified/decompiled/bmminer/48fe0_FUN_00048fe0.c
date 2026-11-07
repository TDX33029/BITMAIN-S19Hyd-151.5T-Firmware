// FUN_00048fe0 @ 00048fe0  size=124  callers=2
// program: bmminer


void FUN_00048fe0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  FUN_00048de8(param_1,piVar1);
  if ((piVar1 != param_1 + 1) && (piVar1[3] != 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("debug_node_color(pTree,root) == clib_black","3rdparty/cstl/src/c_rb.c",0x1e6,
                  "debug_verify_property_2");
  }
  FUN_00048e48(param_1,piVar1);
  FUN_00048f50(param_1,piVar1,0);
  return;
}

