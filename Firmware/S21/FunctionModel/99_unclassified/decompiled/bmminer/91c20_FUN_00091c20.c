// FUN_00091c20 @ 00091c20  size=312  callers=1
// program: bmminer


undefined4 FUN_00091c20(int param_1,int param_2)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)(param_1 + 0x1001)) {
  case 0x21:
    if (*(int *)(*(int *)(param_2 + 8) + 0x124) == *(int *)(param_1 + 0x1004)) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(param_1 + 0x187c))(param_1,param_2);
    }
    break;
  default:
    uVar1 = 0;
    break;
  case 0x2a:
    uVar1 = (**(code **)(param_1 + 0x187c))(param_1,param_2);
    break;
  case 0x2e:
    if (*(int *)(*(int *)(param_2 + 8) + 0x124) < *(int *)(param_1 + 0x1004)) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(param_1 + 0x187c))(param_1,param_2);
    }
    break;
  case 0x3d:
    if (*(int *)(*(int *)(param_2 + 8) + 0x124) == *(int *)(param_1 + 0x1004)) {
      uVar1 = (**(code **)(param_1 + 0x187c))(param_1,param_2);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

