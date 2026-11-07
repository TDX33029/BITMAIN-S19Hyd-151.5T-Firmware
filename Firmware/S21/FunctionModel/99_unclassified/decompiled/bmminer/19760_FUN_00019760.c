// FUN_00019760 @ 00019760  size=48  callers=3
// program: bmminer


void FUN_00019760(undefined4 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
  case 2:
    FUN_00017628(param_1,3,0);
    return;
  case 1:
  case 3:
    FUN_00017628(param_1,3,1);
    return;
  default:
    FUN_00017628(param_1,3,param_2);
    return;
  }
}

