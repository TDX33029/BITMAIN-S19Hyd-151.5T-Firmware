// FUN_014216c0 @ 014216c0 size=72 calls_out=2 calls_in=7
// strings: 

void FUN_014216c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    return;
  }
  iVar1 = param_1[1];
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar2 = param_1[2];
  FUN_0142823c(iVar2,param_1[3]);
  FUN_0134c054(iVar1,iVar2,4,0x14);
  return;
}

