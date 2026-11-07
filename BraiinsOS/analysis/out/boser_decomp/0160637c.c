// FUN_0160637c @ 0160637c size=152 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0160637c(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  uVar1 = param_1[3];
  if (param_2 < uVar1) {
    iVar3 = param_1[1];
    param_1[3] = uVar1 + ~param_2;
    iVar2 = *param_1 + param_2 * 4;
    bVar5 = param_2 < (uint)(iVar3 - *param_1) >> 2;
    if (bVar5) {
      iVar3 = iVar2 + 4;
    }
    *param_1 = iVar3;
    if (bVar5) {
      param_2 = param_1[2] + param_2;
      param_1[2] = param_2 + 1;
      goto LAB_0160640c;
    }
  }
  else if (uVar1 != 0) {
    iVar2 = param_1[1];
    uVar4 = uVar1 - 1;
    param_2 = iVar2 - *param_1;
    bVar5 = uVar4 < param_2 >> 2;
    if (bVar5) {
      param_2 = param_1[2];
      iVar2 = *param_1 + uVar4 * 4 + 4;
    }
    *param_1 = iVar2;
    if (bVar5) {
      param_1[2] = param_2 + uVar1;
    }
    iVar2 = 0;
    param_1[3] = 0;
    goto LAB_0160640c;
  }
  iVar2 = 0;
LAB_0160640c:
  return CONCAT44(iVar2,param_2);
}

