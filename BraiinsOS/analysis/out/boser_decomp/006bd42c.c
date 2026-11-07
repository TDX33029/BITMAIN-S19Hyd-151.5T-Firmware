// FUN_006bd42c @ 006bd42c size=256 calls_out=4 calls_in=1
// strings: 

void FUN_006bd42c(undefined4 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar2 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar1 = (uint *)((int)uVar2 + (int)((ulonglong)uVar2 >> 0x20));
  if ((char)puVar1[4] == '\0') {
    FUN_019ae6ac(&local_38);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    *(undefined1 *)(puVar1 + 4) = 1;
  }
  local_48 = *puVar1;
  local_40 = puVar1[2];
  local_44 = puVar1[1];
  local_3c = puVar1[3];
  *puVar1 = local_48 + 1;
  puVar1[1] = local_44 + (0xfffffffe < local_48);
  local_58 = &DAT_0056d238;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  if (param_3 != param_2) {
    FUN_006b4ddc(&local_58,(uint)(param_3 - param_2) >> 6,&local_48);
  }
  for (; param_2 != param_3; param_2 = param_2 + 0x40) {
    FUN_006e6200(&local_58,*(int *)(param_2 + 0x30) + 8,*(undefined4 *)(param_2 + 0x34));
  }
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  param_1[3] = uStack_4c;
  param_1[4] = local_48;
  param_1[5] = local_44;
  param_1[6] = local_40;
  param_1[7] = local_3c;
  return;
}

