// FUN_0008b648 @ 0008b648  size=152  callers=2
// program: bmminer


void FUN_0008b648(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/format.c",0x18,"a_format is null or 0");
  }
  else {
    FUN_00095b4c(param_2,"src/format.c",0x1d,"---format[%p][%s = %s(%p)]---",param_1,param_1,
                 param_1 + 0x1001,*(undefined4 *)(param_1 + 0x2004));
  }
  return;
}

