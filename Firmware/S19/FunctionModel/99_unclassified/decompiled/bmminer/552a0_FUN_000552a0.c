// FUN_000552a0 @ 000552a0  size=220  callers=1
// program: bmminer


undefined4 FUN_000552a0(int *param_1,double *param_2)

{
  char cVar1;
  lconv *plVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  char *__s;
  double dVar6;
  char *local_1c [2];
  
  plVar2 = localeconv();
  __s = (char *)*param_1;
  cVar1 = *plVar2->decimal_point;
  if ((cVar1 != '.') && (pcVar3 = strchr(__s,0x2e), pcVar3 != (char *)0x0)) {
    *pcVar3 = cVar1;
    __s = (char *)*param_1;
  }
  piVar4 = __errno_location();
  *piVar4 = 0;
  dVar6 = strtod(__s,local_1c);
  if (local_1c[0] != (char *)(*param_1 + param_1[1])) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("end == strbuffer->value + strbuffer->length","strconv.c",0x4e,"jsonp_strtod");
  }
  if (((dVar6 <= 1.7976931348623157e+308) && (-1.7976931348623157e+308 <= dVar6)) ||
     (*piVar4 != 0x22)) {
    uVar5 = 0;
    *param_2 = dVar6;
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

