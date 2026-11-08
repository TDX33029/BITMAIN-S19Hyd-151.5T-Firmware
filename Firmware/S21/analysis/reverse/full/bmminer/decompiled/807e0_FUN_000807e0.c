// FUN_000807e0 @ 000807e0  size=84  callers=15
// program: bmminer


undefined8 FUN_000807e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 3)) {
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    iVar1 = param_1[2];
    iVar2 = param_1[3];
  }
  return CONCAT44(iVar2,iVar1);
}

