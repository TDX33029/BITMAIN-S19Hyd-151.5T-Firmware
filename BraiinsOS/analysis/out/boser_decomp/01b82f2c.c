// FUN_01b82f2c @ 01b82f2c size=184 calls_out=1 calls_in=4
// strings: 

uint FUN_01b82f2c(int param_1,int *param_2,byte *param_3,int param_4)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *param_2;
  FUN_01bed93e(param_1,0,(iVar4 + 1) * 4);
  if (param_4 == 0) {
    *param_2 = 0;
    uVar3 = 0;
  }
  else {
    pbVar2 = param_3 + param_4;
    for (; param_3 < pbVar2; param_3 = param_3 + 1) {
      *(int *)(param_1 + (uint)*param_3 * 4) = *(int *)(param_1 + (uint)*param_3 * 4) + 1;
    }
    for (; *(int *)(param_1 + iVar4 * 4) == 0; iVar4 = iVar4 + -1) {
    }
    puVar1 = (uint *)(param_1 + -4);
    uVar3 = 0;
    *param_2 = iVar4;
    do {
      puVar1 = puVar1 + 1;
      if (uVar3 < *puVar1) {
        uVar3 = *puVar1;
      }
    } while (puVar1 != (uint *)(param_1 + iVar4 * 4));
  }
  return uVar3;
}

