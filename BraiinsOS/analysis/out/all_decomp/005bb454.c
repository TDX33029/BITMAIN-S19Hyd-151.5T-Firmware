// FUN_005bb454 @ 005bb454 size=288 calls_out=4 calls_in=2
// strings: 

void FUN_005bb454(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 uVar6;
  uint local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  
  uVar6 = thunk_FUN_016de0ee(param_1,0x2c0);
  puVar4 = (uint *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
  uVar6 = FUN_00e9eb60();
  if ((char)puVar4[4] == '\0') {
    FUN_015f62e4(&local_38);
    *puVar4 = local_38;
    puVar4[1] = local_34;
    puVar4[2] = local_30;
    puVar4[3] = uStack_2c;
    *(undefined1 *)(puVar4 + 4) = 1;
  }
  uVar2 = *puVar4;
  uVar3 = puVar4[1];
  uVar5 = puVar4[2];
  uVar1 = puVar4[3];
  *puVar4 = uVar2 + 1;
  puVar4[1] = uVar3 + (0xfffffffe < uVar2);
  local_40 = local_40 & 0xffffff00;
  FUN_0165a798(&local_38);
  param_1[6] = &DAT_005674cc;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar5;
  param_1[0xd] = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 8;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = local_40;
  param_1[0x15] = uStack_3c;
  param_1[0x1e] = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x16) = uVar6;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[2] = local_38;
  param_1[3] = local_34;
  param_1[4] = local_30;
  return;
}

