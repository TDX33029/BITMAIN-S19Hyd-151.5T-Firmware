// FUN_0001f360 @ 0001f360  size=100  callers=4
// program: cgminer


undefined4 FUN_0001f360(int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
    return 0;
  }
  uVar1 = FUN_00049018();
  if (((uVar1 < param_2) || (piVar2 = (int *)FUN_00049034(param_1,param_2), piVar2 == (int *)0x0))
     || (*piVar2 != 2)) {
    return 0;
  }
  uVar3 = FUN_000491e0();
  return uVar3;
}

