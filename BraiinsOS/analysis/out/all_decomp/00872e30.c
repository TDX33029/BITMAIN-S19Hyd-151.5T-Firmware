// FUN_00872e30 @ 00872e30 size=400 calls_out=4 calls_in=2
// strings: 

void FUN_00872e30(undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  undefined1 auStack_34 [12];
  uint local_28;
  uint local_24;
  uint uStack_20;
  uint uStack_1c;
  
  uVar3 = thunk_FUN_016de0ee(param_1,0x2c0);
  puVar1 = (uint *)((int)uVar3 + (int)((ulonglong)uVar3 >> 0x20));
  if ((char)puVar1[4] == '\0') {
    FUN_015f62e4(&local_28);
    *puVar1 = local_28;
    puVar1[1] = local_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    *(undefined1 *)(puVar1 + 4) = 1;
  }
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  local_3c = puVar1[3];
  *puVar1 = local_48 + 1;
  puVar1[1] = uStack_44 + (0xfffffffe < local_48);
  uStack_54 = 0;
  uStack_50 = 0;
  local_4c = 0;
  local_58 = &DAT_005674cc;
  FUN_00882e94(&local_58,5);
  local_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_28 = *param_2;
  uVar2 = (uint)&local_28 | 4;
  FUN_0088347c(auStack_34,&local_58,local_28,uVar2);
  local_28 = param_2[4];
  local_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  FUN_0088347c(auStack_34,&local_58,local_28,uVar2);
  local_28 = param_2[8];
  local_24 = param_2[9];
  uStack_20 = param_2[10];
  uStack_1c = param_2[0xb];
  FUN_0088347c(auStack_34,&local_58,local_28,uVar2);
  local_28 = param_2[0xc];
  local_24 = param_2[0xd];
  uStack_20 = param_2[0xe];
  uStack_1c = param_2[0xf];
  FUN_0088347c(auStack_34,&local_58,local_28,uVar2);
  local_28 = param_2[0x10];
  local_24 = param_2[0x11];
  uStack_20 = param_2[0x12];
  uStack_1c = param_2[0x13];
  FUN_0088347c(auStack_34,&local_58,local_28,uVar2);
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  param_1[3] = local_4c;
  param_1[4] = local_48;
  param_1[5] = uStack_44;
  param_1[6] = uStack_40;
  param_1[7] = local_3c;
  return;
}

