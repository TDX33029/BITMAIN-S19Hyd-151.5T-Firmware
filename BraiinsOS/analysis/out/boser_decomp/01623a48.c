// FUN_01623a48 @ 01623a48 size=156 calls_out=2 calls_in=3
// strings: 

void FUN_01623a48(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int local_2c;
  int local_28;
  int local_24;
  
  piVar4 = (int *)*param_2;
  uVar5 = param_2[1];
  if (uVar5 < (uint)piVar4[1]) {
    iVar2 = piVar4[1] - uVar5;
    iVar3 = *piVar4 + uVar5;
    FUN_016238f4(&local_2c,iVar3,iVar2);
    if (local_2c == -0x80000000) {
      uVar1 = FUN_01623a1c(iVar3,iVar2);
      param_1[2] = iVar2;
      *param_1 = -0x80000000;
      param_1[1] = iVar3;
      iVar2 = ((uVar1 & 0xffff) + 3 & 0xfffffffc) + uVar5;
    }
    else {
      *param_1 = local_2c;
      param_1[1] = local_28;
      param_1[2] = local_24;
      iVar2 = piVar4[1];
    }
    param_2[1] = iVar2;
  }
  else {
    *param_1 = -0x7fffffff;
  }
  return;
}

