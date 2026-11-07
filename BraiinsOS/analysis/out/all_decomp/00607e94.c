// FUN_00607e94 @ 00607e94 size=104 calls_out=0 calls_in=2
// strings: 

void FUN_00607e94(undefined1 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)*param_2;
  if ((uint)param_2[1] < 8) {
    param_1[8] = (char)puVar1;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[0xb] = (char)((uint)puVar1 >> 0x18);
    *(short *)(param_1 + 9) = (short)((uint)puVar1 >> 8);
    *(undefined4 **)(param_1 + 4) = puVar1;
    *param_1 = 0x13;
    return;
  }
  uVar3 = puVar1[1];
  uVar2 = *puVar1;
  *param_2 = (int)(puVar1 + 2);
  param_2[1] = param_2[1] - 8;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *param_1 = 0x4f;
  return;
}

