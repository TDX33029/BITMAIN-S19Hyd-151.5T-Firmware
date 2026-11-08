// FUN_014044d8 @ 014044d8 size=164 calls_out=2 calls_in=2
// strings: 

void FUN_014044d8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0140ade8();
  FUN_01bed4e2(param_1 + 0x20,param_2,0x5c);
  *param_1 = 5;
  *(undefined1 *)((int)param_1 + 0x7a) = 4;
  *(undefined2 *)(param_1 + 0x1e) = 2;
  param_1[0x19] = 2;
  param_1[0x1b] = 2;
  param_1[0x14] = 0x80000000;
  param_1[0x37] = param_3;
  param_1[1] = 0;
  param_1[0x17] = uVar1;
  param_1[0x18] = 1;
  param_1[0x1a] = 0x20;
  param_1[0x1c] = 0x1000001;
  param_1[0x1d] = 0x100;
  param_1[0x12] = &DAT_3b9aca00;
  param_1[0xe] = &DAT_3b9aca00;
  param_1[10] = &DAT_3b9aca00;
  param_1[6] = &DAT_3b9aca00;
  param_1[2] = 0;
  return;
}

