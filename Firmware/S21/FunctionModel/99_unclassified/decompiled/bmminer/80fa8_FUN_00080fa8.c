// FUN_00080fa8 @ 00080fa8  size=132  callers=6
// program: bmminer


void FUN_00080fa8(undefined4 *param_1,int param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined1 *)(param_1 + 0x17) = 0;
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    param_1[2] = 0;
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    else {
      FUN_0008102c(param_1,param_2);
    }
  }
  return;
}

