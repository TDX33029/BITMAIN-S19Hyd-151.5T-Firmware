// FUN_0007f244 @ 0007f244  size=120  callers=0
// program: bmminer


undefined4 FUN_0007f244(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((((param_1 == (int *)0x0) || (*param_1 != 0)) || (param_2 == 0)) || (param_3 == 0)) {
    FUN_0007e8e0(param_3);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_0007af60(param_2,param_3);
    uVar1 = 0;
  }
  return uVar1;
}

