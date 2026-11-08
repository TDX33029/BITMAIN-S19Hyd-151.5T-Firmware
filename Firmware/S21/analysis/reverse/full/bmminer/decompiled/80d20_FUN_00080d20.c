// FUN_00080d20 @ 00080d20  size=244  callers=2
// program: bmminer


undefined4 FUN_00080d20(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    uVar1 = 0;
  }
  else if (*param_1 == *param_2) {
    if (param_1 == param_2) {
      uVar1 = 1;
    }
    else {
      switch(*param_1) {
      case 0:
        uVar1 = FUN_0007f2fc(param_1,param_2);
        break;
      case 1:
        uVar1 = FUN_0007ff14(param_1,param_2);
        break;
      case 2:
        uVar1 = FUN_00080594(param_1,param_2);
        break;
      case 3:
        uVar1 = FUN_000808b0(param_1,param_2);
        break;
      case 4:
        uVar1 = FUN_00080b0c(param_1,param_2);
        break;
      default:
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

