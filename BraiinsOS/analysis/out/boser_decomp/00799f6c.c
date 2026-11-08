// FUN_00799f6c @ 00799f6c size=68 calls_out=1 calls_in=1
// strings: 

void FUN_00799f6c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  iVar2 = piVar1[2];
  if ((uint)(*piVar1 - iVar2) < 0x20) {
    param_1[1] = iVar2;
    FUN_016092cc(piVar1,iVar2,0x20,1,1);
    return;
  }
  return;
}

