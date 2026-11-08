// FUN_0162385c @ 0162385c size=152 calls_out=2 calls_in=27
// strings: 

void FUN_0162385c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  if (uVar4 < uVar3) {
    iVar1 = uVar3 - uVar4;
    iVar2 = *param_2 + uVar4;
    FUN_016238f4(&local_2c,iVar2,iVar1);
    if (local_2c == -0x80000000) {
      uVar3 = FUN_01623a1c(iVar2,iVar1);
      param_1[2] = iVar1;
      *param_1 = -0x80000000;
      param_1[1] = iVar2;
      param_2[2] = ((uVar3 & 0xffff) + 3 & 0xfffffffc) + uVar4;
    }
    else {
      *param_1 = local_2c;
      param_1[1] = local_28;
      param_1[2] = local_24;
      param_2[2] = uVar3;
    }
  }
  else {
    *param_1 = -0x7fffffff;
  }
  return;
}

