// FUN_000307dc @ 000307dc  size=124  callers=0
// program: cgminer


char * FUN_000307dc(undefined4 param_1)

{
  if (DAT_00068b94 != 0) {
    return "Use only user + pass or userpass, but not both";
  }
  DAT_00068b90 = DAT_00068b90 + 1;
  if (DAT_00072e70 < DAT_00068b90) {
    FUN_0003009c();
  }
  FUN_0003e61c(param_1,*(int *)(DAT_00072f14 + (DAT_00068b90 + 0x3fffffff) * 4) + 0xb0);
  return (char *)0x0;
}

