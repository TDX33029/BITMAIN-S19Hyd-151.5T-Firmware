// FUN_01997d7c @ 01997d7c size=128 calls_out=0 calls_in=1
// strings: 

void FUN_01997d7c(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined2 *puVar4;
  
  puVar4 = (undefined2 *)*param_2;
  if ((uint)param_2[1] < 8) {
    param_1[8] = (char)puVar4;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[0xb] = (char)((uint)puVar4 >> 0x18);
    *(short *)(param_1 + 9) = (short)((uint)puVar4 >> 8);
    *(undefined2 **)(param_1 + 4) = puVar4;
    *param_1 = 0x13;
    return;
  }
  uVar1 = *(undefined1 *)(puVar4 + 1);
  uVar3 = *(uint *)((int)puVar4 + 3);
  bVar2 = *(byte *)((int)puVar4 + 7);
  *param_2 = puVar4 + 4;
  param_2[1] = param_2[1] - 8;
  *(uint *)(param_1 + 8) = (uint)CONCAT12(uVar1,*puVar4) | uVar3 << 0x18;
  *(uint *)(param_1 + 0xc) = uVar3 >> 8 | (uint)bVar2 << 0x18;
  *param_1 = 0x52;
  return;
}

