// FUN_0007df14 @ 0007df14  size=232  callers=1
// program: bmminer


undefined4 FUN_0007df14(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char *local_14;
  undefined8 local_10;
  
  FUN_0007de30(param_1);
  piVar1 = __errno_location();
  *piVar1 = 0;
  local_10 = strtod((char *)*param_1,&local_14);
  if ((char *)(*param_1 + param_1[1]) != local_14) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("end == strbuffer->value + strbuffer->length","strconv.c",0x4e,"jsonp_strtod");
  }
  if (((local_10 <= 1.7976931348623157e+308) && (-1.7976931348623157e+308 <= local_10)) ||
     (piVar1 = __errno_location(), *piVar1 != 0x22)) {
    *param_2 = (undefined4)local_10;
    param_2[1] = local_10._4_4_;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

