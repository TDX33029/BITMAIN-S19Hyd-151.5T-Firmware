// FUN_015ef9a8 @ 015ef9a8 size=72 calls_out=0 calls_in=27
// strings: 

undefined8 FUN_015ef9a8(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_1[3] == 0) {
    uVar5 = 0;
    uVar1 = 0;
  }
  else {
    puVar3 = (undefined4 *)(param_1[1] + param_1[2] * 8);
    uVar5 = *puVar3;
    uVar2 = param_1[2] + 1;
    uVar1 = puVar3[1];
    uVar4 = uVar2 - *param_1;
    if (uVar2 < *param_1) {
      uVar4 = uVar2;
    }
    param_1[2] = uVar4;
    param_1[3] = param_1[3] - 1;
  }
  return CONCAT44(uVar1,uVar5);
}

