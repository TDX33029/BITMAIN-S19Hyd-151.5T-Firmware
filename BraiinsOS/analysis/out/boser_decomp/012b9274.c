// FUN_012b9274 @ 012b9274 size=88 calls_out=1 calls_in=3
// strings: 

bool FUN_012b9274(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  for (param_3 = param_3 << 2; param_3 != 0; param_3 = param_3 + -4) {
    if ((((undefined4 *)*param_2)[1] == param_1[1]) &&
       (iVar1 = thunk_FUN_01bed842(*(undefined4 *)*param_2,*param_1), iVar1 == 0)) break;
    param_2 = param_2 + 1;
  }
  return param_3 != 0;
}

