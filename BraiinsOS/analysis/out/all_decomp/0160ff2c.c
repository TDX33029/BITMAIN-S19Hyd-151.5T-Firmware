// FUN_0160ff2c @ 0160ff2c size=172 calls_out=1 calls_in=1
// strings: 

void FUN_0160ff2c(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 local_2c [3];
  
  puVar4 = (undefined2 *)*param_2;
  iVar5 = param_2[1];
  if ((uint)(iVar5 - (int)puVar4) < 2) {
    *(short *)(param_1 + 1) = (short)puVar4;
    param_1[2] = 2;
    *param_1 = 0x80000005;
    *(short *)((int)param_1 + 6) = (short)((uint)puVar4 >> 0x10);
    return;
  }
  local_2c[0] = 0x80000005;
  FUN_00f2cc28(local_2c);
  puVar2 = puVar4 + 1;
  uVar1 = *puVar4;
  *param_2 = puVar2;
  if ((uint)(iVar5 - (int)puVar2) < 4) {
    *param_1 = 0x80000005;
    param_1[1] = puVar2;
    param_1[2] = 4;
    return;
  }
  local_2c[0] = 0x80000005;
  FUN_00f2cc28(local_2c);
  uVar3 = *(undefined4 *)(puVar4 + 1);
  *param_2 = puVar4 + 3;
  *(undefined2 *)(param_1 + 2) = uVar1;
  *param_1 = 0x8000000a;
  param_1[1] = uVar3;
  return;
}

