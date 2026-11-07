// FUN_00048e48 @ 00048e48  size=260  callers=2
// program: bmminer


void FUN_00048e48(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 4);
LAB_00048e58:
  piVar1 = param_2;
  if (param_2 == piVar3) {
    return;
  }
  do {
    while (param_2 = (int *)*piVar1, piVar1[3] != 1) {
      piVar2 = (int *)piVar1[1];
LAB_00048e64:
      FUN_00048e48(param_1);
      piVar1 = piVar2;
      if (piVar2 == piVar3) {
        return;
      }
    }
    if ((param_2 != piVar3) && (param_2[3] != 0)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("debug_node_color(pTree,n->left) == clib_black","3rdparty/cstl/src/c_rb.c",0x1ef
                    ,"debug_verify_property_4");
    }
    piVar2 = (int *)piVar1[1];
    if (piVar2 == piVar3) {
      piVar1 = (int *)piVar1[2];
      if (piVar1 != piVar3) {
LAB_00048ec0:
        if (piVar1[3] != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("debug_node_color(pTree,n->parent) == clib_black","3rdparty/cstl/src/c_rb.c"
                        ,0x1f1,"debug_verify_property_4");
        }
        goto LAB_00048e64;
      }
      goto LAB_00048e58;
    }
    if (piVar2[3] != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("debug_node_color(pTree,n->right) == clib_black","3rdparty/cstl/src/c_rb.c",
                    0x1f0,"debug_verify_property_4");
    }
    piVar1 = (int *)piVar1[2];
    if (piVar1 != piVar3) goto LAB_00048ec0;
    FUN_00048e48(param_1);
    piVar1 = piVar2;
  } while( true );
}

