// FUN_0128341c @ 0128341c size=116 calls_out=0 calls_in=13
// strings: 

void FUN_0128341c(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_14;
  
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2 + 3);
  if (iVar1 == 0) {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    param_1[1] = *param_2;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
  }
  else {
    uStack_14 = param_2[3];
    (**(code **)(*param_2 + 8))(param_1 + 1,&uStack_14,param_2[1],param_2[2]);
  }
  *param_1 = (uint)(iVar1 == 0);
  return;
}

