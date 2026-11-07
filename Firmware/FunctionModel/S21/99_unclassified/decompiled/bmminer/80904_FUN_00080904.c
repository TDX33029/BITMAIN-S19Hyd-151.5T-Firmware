// FUN_00080904 @ 00080904  size=60  callers=2
// program: bmminer


undefined4 FUN_00080904(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_000807e0(param_1);
  uVar1 = FUN_00080784((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  return uVar1;
}

