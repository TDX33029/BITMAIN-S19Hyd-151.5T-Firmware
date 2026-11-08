// FUN_01609da8 @ 01609da8 size=124 calls_out=1 calls_in=4
// strings: 

void FUN_01609da8(undefined4 *param_1)

{
  undefined4 uVar1;
  short *in_stack_00000000;
  
  if (*in_stack_00000000 == 2) {
    *(undefined1 *)param_1 = 2;
    param_1[1] = &DAT_01d28678;
  }
  else {
    uVar1 = *(undefined4 *)(in_stack_00000000 + 4);
    if (*in_stack_00000000 == 3) {
      *param_1 = *(undefined4 *)(in_stack_00000000 + 2);
      param_1[1] = uVar1;
    }
    else {
      FUN_019ae498();
    }
  }
  return;
}

