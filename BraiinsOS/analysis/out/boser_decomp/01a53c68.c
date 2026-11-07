// FUN_01a53c68 @ 01a53c68 size=68 calls_out=1 calls_in=6
// strings: 

void FUN_01a53c68(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
    FUN_0134bd64(iVar1,param_1[1]);
  }
  iVar1 = param_1[3];
  if (iVar1 == -0x7ffffffd) {
    return;
  }
  if (iVar1 < 0) {
    return;
  }
  FUN_0134bd64(iVar1,param_1[4]);
  return;
}

