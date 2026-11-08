// FUN_00717948 @ 00717948 size=92 calls_out=0 calls_in=1
// strings: 

void FUN_00717948(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)*param_2;
  if ((uint)param_2[1] < 4) {
    *(undefined4 **)(param_1 + 8) = puVar4;
    param_1[7] = (char)((uint)puVar4 >> 0x18);
    *(short *)(param_1 + 5) = (short)((uint)puVar4 >> 8);
    *(int *)(param_1 + 1) = (int)puVar4 << 0x18;
    uVar1 = 0x13;
    uVar2 = 0;
    iVar3 = 0xc;
  }
  else {
    uVar2 = *puVar4;
    iVar3 = 4;
    *param_2 = puVar4 + 1;
    param_2[1] = param_2[1] - 4;
    uVar1 = 0x4f;
  }
  *(undefined4 *)(param_1 + iVar3) = uVar2;
  *param_1 = uVar1;
  return;
}

