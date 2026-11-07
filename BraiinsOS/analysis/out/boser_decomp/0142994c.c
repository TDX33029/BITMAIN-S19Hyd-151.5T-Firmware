// FUN_0142994c @ 0142994c size=216 calls_out=2 calls_in=5
// strings: hunked

undefined4 FUN_0142994c(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  int local_18;
  undefined2 local_14;
  
  iVar2 = 0;
  while (param_2 != iVar2) {
    pbVar1 = (byte *)(param_1 + iVar2);
    iVar2 = iVar2 + 1;
    if ((*pbVar1 != 9) && (0x5e < *pbVar1 - 0x20)) {
      return 0;
    }
  }
  uStack_2c = 0;
  local_14 = 1;
  local_20 = 1;
  local_1c = 0;
  local_24 = 0x2c;
  local_38 = 0x2c;
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_28 = param_2;
  local_18 = param_2;
  iVar2 = FUN_0140d230(&local_38);
  if (iVar2 == 0) {
    return 0;
  }
  uVar5 = FUN_013245a0();
  if ((int)((ulonglong)uVar5 >> 0x20) != 7) {
    return 0;
  }
  iVar2 = 0;
  do {
    if (iVar2 == 7) {
      return 1;
    }
    uVar3 = (uint)*(byte *)((int)uVar5 + iVar2);
    uVar4 = (uint)(byte)"c"[iVar2];
    iVar2 = iVar2 + 1;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar4 - 0x41 < 0x1a) {
      uVar4 = uVar4 | 0x20;
    }
  } while (uVar3 == uVar4);
  return 0;
}

