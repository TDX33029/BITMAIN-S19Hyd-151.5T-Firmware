// FUN_0005ef10 @ 0005ef10  size=112  callers=2
// program: bmminer


void FUN_0005ef10(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    FUN_000658a8(2,"src/format.c",0x18,"a_format is null or 0");
    return;
  }
  FUN_000658a8(param_2,"src/format.c",0x1d,"---format[%p][%s = %s(%p)]---",param_1,param_1,
               param_1 + 0x1001,*(undefined4 *)(param_1 + 0x2004));
  return;
}

