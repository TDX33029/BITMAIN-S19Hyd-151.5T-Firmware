// FUN_01556ce0 @ 01556ce0 size=552 calls_out=2 calls_in=3
// strings: traffic upd

void FUN_01556ce0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [68];
  ushort local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  ushort *local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined *local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar5 = 0xc;
  if (param_3 != 0) {
    iVar5 = 0x50;
  }
  puVar4 = (undefined1 *)(param_2 + iVar5);
  uVar6 = (**(code **)(*(int *)(*(int *)(param_2 + 8) + 0xc) + 0x18))
                    (*(undefined4 *)(*(int *)(param_2 + 8) + 8),puVar4);
  puVar3 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
  uVar1 = (undefined4)uVar6;
  uVar2 = (*(code *)puVar3[5])();
  local_4c = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
  local_28 = &local_49;
  local_4a = 0x11;
  local_49 = 0;
  local_1c = 0;
  local_20 = 1;
  local_24 = 1;
  local_3c = 1;
  local_40 = &local_4a;
  local_44 = 2;
  local_48 = &local_4c;
  local_30 = "traffic upd";
  local_2c = 0xb;
  local_34 = 6;
  local_38 = &DAT_0040c506;
  (*(code *)puVar3[4])(auStack_90,uVar1,&local_48,6);
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)(uVar1);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(uVar1);
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  puVar4[0x18] = 0;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x20] = 0;
  puVar4[0x21] = 0;
  puVar4[0x22] = 0;
  puVar4[0x23] = 0;
  puVar4[0x24] = 0;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  puVar4[0x2a] = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  puVar4[0x2d] = 0;
  puVar4[0x2e] = 0;
  puVar4[0x2f] = 0;
  puVar4[0x30] = 0;
  puVar4[0x31] = 0;
  puVar4[0x32] = 0;
  puVar4[0x33] = 0;
  puVar4[0x34] = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  puVar4[0x39] = 0;
  puVar4[0x3a] = 0;
  puVar4[0x3b] = 0;
  puVar4[0x3c] = 0;
  puVar4[0x3d] = 0;
  puVar4[0x3e] = 0;
  puVar4[0x3f] = 0;
  FUN_016dd1aa(puVar4,auStack_90,0x44);
  FUN_016dd1aa(param_1,auStack_90,0x44);
  return;
}

