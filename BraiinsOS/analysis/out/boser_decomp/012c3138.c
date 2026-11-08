// FUN_012c3138 @ 012c3138 size=184 calls_out=1 calls_in=0
// strings: 

void FUN_012c3138(undefined1 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  uint local_20;
  
  iVar2 = param_2[4];
  cVar1 = *(char *)(param_2 + 6);
  *(undefined1 *)(iVar2 + 0xa908) = 0;
  *(undefined2 *)(iVar2 + 0xa90e) = 1;
  *(undefined4 *)(iVar2 + 0x8000) = 0;
  *(undefined1 *)(iVar2 + 0xa90c) = 1;
  *(undefined4 *)(iVar2 + 0x8004) = 0;
  FUN_01bed93e(iVar2,0);
  *(byte *)(iVar2 + 0xa90d) = cVar1 << 1 ^ 2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0xc] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  FUN_01bed93e(&local_38,0,0x12);
  local_20 = local_20 & 0xffffff00;
  param_2[0xe] = local_38;
  param_2[0xf] = uStack_34;
  param_2[0x10] = uStack_30;
  param_2[0x11] = local_2c;
  param_2[0x12] = uStack_28;
  param_2[0x13] = 0;
  param_2[0x14] = local_20;
  *param_1 = 4;
  return;
}

