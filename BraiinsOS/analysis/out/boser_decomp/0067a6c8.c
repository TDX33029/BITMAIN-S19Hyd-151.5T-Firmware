// FUN_0067a6c8 @ 0067a6c8 size=100 calls_out=2 calls_in=2
// strings: 

void FUN_0067a6c8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = param_3;
  param_1[3] = param_4;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  param_1[0x1d] = *param_5;
  param_1[0x1e] = uVar1;
  param_1[0x1f] = uVar2;
  if (*(char *)(param_1 + 7) != '\x02') {
    FUN_0067e0f0(param_1 + 4);
  }
  *(undefined1 *)(param_1 + 7) = 2;
  if (param_1[0x17] != -0x80000000) {
    FUN_019bb7e0(param_1[0x17],param_1[0x18]);
  }
  param_1[0x17] = 0x80000000;
  return;
}

