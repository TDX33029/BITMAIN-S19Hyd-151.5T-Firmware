// FUN_019efd0c @ 019efd0c size=72 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_019efd0c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  if (param_1[3] == 0) {
    uVar1 = 2;
  }
  else {
    puVar3 = (undefined4 *)(param_1[1] + param_1[2] * 8);
    unaff_lr = *puVar3;
    uVar2 = param_1[2] + 1;
    uVar1 = (uint)*(byte *)(puVar3 + 1);
    uVar4 = uVar2 - *param_1;
    if (uVar2 < *param_1) {
      uVar4 = uVar2;
    }
    param_1[2] = uVar4;
    param_1[3] = param_1[3] - 1;
  }
  return CONCAT44(uVar1,unaff_lr);
}

