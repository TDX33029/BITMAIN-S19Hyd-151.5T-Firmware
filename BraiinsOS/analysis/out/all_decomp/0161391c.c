// FUN_0161391c @ 0161391c size=184 calls_out=2 calls_in=1
// strings: 

void FUN_0161391c(int *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  int local_30;
  int iStack_2c;
  int local_28;
  undefined4 local_24 [3];
  
  if (param_2[1] == 0) {
    *param_1 = -0x7ffffff6;
    param_1[1] = 0;
    return;
  }
  puVar2 = (undefined4 *)*param_2;
  param_2[1] = param_2[1] + -1;
  puVar3 = (undefined2 *)*puVar2;
  if ((uint)(puVar2[1] - (int)puVar3) < 2) {
    *param_1 = -0x7ffffffb;
    param_1[1] = (int)puVar3;
    param_1[2] = 2;
    return;
  }
  local_24[0] = 0x80000005;
  FUN_00f2cc28(local_24);
  uVar1 = *puVar3;
  *puVar2 = puVar3 + 1;
  FUN_0161be60(&local_30,puVar2,uVar1);
  if (local_30 == -0x7ffffff6) {
    param_1[2] = local_28;
    *param_1 = -0x7ffffff6;
    param_1[1] = iStack_2c;
    return;
  }
  *param_1 = local_30;
  param_1[1] = iStack_2c;
  param_1[2] = local_28;
  return;
}

