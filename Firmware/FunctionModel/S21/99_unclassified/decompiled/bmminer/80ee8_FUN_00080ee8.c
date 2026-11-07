// FUN_00080ee8 @ 00080ee8  size=160  callers=2
// program: bmminer


undefined4 * FUN_00080ee8(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    switch(*param_1) {
    case 0:
      param_1 = (undefined4 *)FUN_0007f4ac(param_1);
      break;
    case 1:
      param_1 = (undefined4 *)FUN_00080054(param_1);
      break;
    case 2:
      param_1 = (undefined4 *)FUN_00080614(param_1);
      break;
    case 3:
      param_1 = (undefined4 *)FUN_00080904(param_1);
      break;
    case 4:
      param_1 = (undefined4 *)FUN_00080b60(param_1);
      break;
    case 5:
    case 6:
    case 7:
      break;
    default:
      param_1 = (undefined4 *)0x0;
    }
  }
  return param_1;
}

