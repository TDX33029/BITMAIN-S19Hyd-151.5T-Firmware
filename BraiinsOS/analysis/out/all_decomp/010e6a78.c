// FUN_010e6a78 @ 010e6a78 size=96 calls_out=1 calls_in=0
// strings: 

void FUN_010e6a78(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_24 [3];
  
  puVar2 = (undefined4 *)*param_2;
  if ((uint)(param_2[1] - (int)puVar2) < 4) {
    *param_1 = 0x80000005;
    param_1[1] = puVar2;
    param_1[2] = 4;
    return;
  }
  local_24[0] = 0x80000005;
  FUN_00f2cc28(local_24);
  uVar1 = *puVar2;
  *param_2 = puVar2 + 1;
  *param_1 = 0x8000000a;
  param_1[1] = uVar1;
  return;
}

