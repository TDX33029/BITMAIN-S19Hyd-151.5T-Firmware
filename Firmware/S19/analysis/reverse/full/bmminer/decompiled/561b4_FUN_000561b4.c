// FUN_000561b4 @ 000561b4  size=84  callers=4
// program: bmminer


undefined4 * FUN_000561b4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if ((!NAN((double)CONCAT44(param_2,param_1)) && !NAN((double)CONCAT44(param_2,param_1))) &&
     (ABS((double)CONCAT44(param_2,param_1)) <= 1.7976931348623157e+308)) {
    puVar1 = (undefined4 *)FUN_00055024(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = param_1;
      puVar1[3] = param_2;
      *puVar1 = 4;
      puVar1[1] = 1;
    }
    return puVar1;
  }
  return (undefined4 *)0x0;
}

