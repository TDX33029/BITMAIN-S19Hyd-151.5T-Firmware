// FUN_000634b0 @ 000634b0  size=76  callers=1
// program: bmminer


uint FUN_000634b0(char *param_1)

{
  uint uVar1;
  
  if (param_1 == (char *)0x0) {
    FUN_000658a8(2,"src/rule.c",0x3ea,"a_rule is null or 0");
    return 0xffffffff;
  }
  if (*param_1 == '!') {
    uVar1 = (uint)(param_1[1] == '\0');
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

