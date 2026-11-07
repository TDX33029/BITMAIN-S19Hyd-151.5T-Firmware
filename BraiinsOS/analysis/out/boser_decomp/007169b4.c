// FUN_007169b4 @ 007169b4 size=136 calls_out=0 calls_in=1
// strings: 

void FUN_007169b4(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 local_20 [16];
  
  puVar5 = (undefined4 *)*param_2;
  if ((uint)param_2[1] < 8) {
    puVar2 = (undefined4 *)((uint)local_20 | 7);
    *(char *)((int)puVar2 + 3) = (char)((uint)puVar5 >> 0x18);
    *(short *)((int)puVar2 + 1) = (short)((uint)puVar5 >> 8);
    uVar4 = puVar2[1];
    uVar3 = *puVar2;
    *(int *)(param_1 + 1) = (int)puVar5 << 0x18;
    *(undefined4 **)(param_1 + 4) = puVar5;
    uVar1 = 0x13;
  }
  else {
    uVar3 = *puVar5;
    uVar4 = puVar5[1];
    *param_2 = puVar5 + 2;
    param_2[1] = param_2[1] - 8;
    uVar1 = 0x4f;
  }
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  return;
}

