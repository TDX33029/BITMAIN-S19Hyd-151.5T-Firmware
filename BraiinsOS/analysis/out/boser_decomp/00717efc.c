// FUN_00717efc @ 00717efc size=108 calls_out=0 calls_in=1
// strings: 

void FUN_00717efc(undefined1 *param_1,uint *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)*param_2;
  if (param_2[1] < 8) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[0xb] = (char)((uint)puVar2 >> 0x18);
    *(short *)(param_1 + 9) = (short)((uint)puVar2 >> 8);
    *(uint *)(param_1 + 5) = (uint)puVar2 >> 8 | (int)puVar2 << 0x18;
    *(int *)(param_1 + 1) = (int)puVar2 << 0x18;
    uVar1 = 0x13;
  }
  else {
    uVar4 = puVar2[1];
    uVar3 = *puVar2;
    *param_2 = (uint)(puVar2 + 2);
    param_2[1] = param_2[1] - 8;
    uVar1 = 0x4f;
    *(undefined4 *)(param_1 + 8) = uVar3;
    *(undefined4 *)(param_1 + 0xc) = uVar4;
  }
  *param_1 = uVar1;
  return;
}

