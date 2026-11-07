// FUN_01655be8 @ 01655be8 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_01655be8(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20;
  
  FUN_016558d4(&local_28);
  iVar2 = local_24;
  iVar1 = local_28;
  if (local_28 == -0x80000000) {
    FUN_006643f0(param_1,local_24,local_20);
    return;
  }
  FUN_006643f0(param_1,local_24,local_20);
  if (*param_1 == -0x80000000) {
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = local_20;
    return;
  }
  FUN_0134bd64(iVar1,iVar2);
  return;
}

