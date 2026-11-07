// FUN_007194a0 @ 007194a0 size=212 calls_out=0 calls_in=7
// strings: 

void FUN_007194a0(undefined1 *param_1,uint *param_2,char param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_3 == '\b') {
    puVar2 = (undefined4 *)*param_2;
    if (param_2[1] < 8) {
      *param_1 = 0x13;
      *(undefined4 *)(param_1 + 0xc) = 0;
      param_1[0xb] = (char)((uint)puVar2 >> 0x18);
      *(short *)(param_1 + 9) = (short)((uint)puVar2 >> 8);
      *(uint *)(param_1 + 5) = (uint)puVar2 >> 8 | (int)puVar2 << 0x18;
      *(int *)(param_1 + 1) = (int)puVar2 << 0x18;
      return;
    }
    iVar4 = puVar2[1];
    uVar3 = *puVar2;
    *param_2 = (uint)(puVar2 + 2);
    param_2[1] = param_2[1] - 8;
    uVar1 = 0x38;
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 4) = uVar3;
      uVar1 = 0x4f;
    }
  }
  else {
    puVar2 = (undefined4 *)*param_2;
    if (param_2[1] < 4) {
      *(undefined4 **)(param_1 + 8) = puVar2;
      param_1[7] = (char)((uint)puVar2 >> 0x18);
      *(short *)(param_1 + 5) = (short)((uint)puVar2 >> 8);
      *(int *)(param_1 + 1) = (int)puVar2 << 0x18;
      uVar1 = 0x13;
      uVar3 = 0;
      iVar4 = 0xc;
    }
    else {
      uVar3 = *puVar2;
      iVar4 = 4;
      *param_2 = (uint)(puVar2 + 1);
      param_2[1] = param_2[1] - 4;
      uVar1 = 0x4f;
    }
    *(undefined4 *)(param_1 + iVar4) = uVar3;
  }
  *param_1 = uVar1;
  return;
}

