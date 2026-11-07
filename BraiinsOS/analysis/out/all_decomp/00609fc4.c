// FUN_00609fc4 @ 00609fc4 size=80 calls_out=0 calls_in=1
// strings: 

void FUN_00609fc4(undefined1 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)*param_2;
  if ((uint)param_2[1] < 8) {
    *(undefined4 **)(param_1 + 4) = puVar1;
    *param_1 = 0x13;
    *(undefined4 **)(param_1 + 8) = puVar1;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *param_2 = (int)(puVar1 + 2);
  param_2[1] = param_2[1] - 8;
  *param_1 = 0x4f;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}

