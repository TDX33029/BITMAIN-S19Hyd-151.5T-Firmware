// FUN_015f3340 @ 015f3340 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_015f3340(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar2 = param_1[1];
  FUN_015e8c88(iVar2,param_1[2]);
  FUN_0134aee0(iVar1,iVar2,4,0x18);
  return;
}

