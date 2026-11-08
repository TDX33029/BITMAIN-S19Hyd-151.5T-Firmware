// FUN_005fd398 @ 005fd398 size=500 calls_out=2 calls_in=2
// strings: 

int FUN_005fd398(int param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  byte *local_60;
  int iStack_5c;
  undefined1 local_58;
  undefined2 local_44;
  undefined1 local_42;
  byte *local_40;
  int local_3c;
  undefined1 local_38;
  undefined2 local_24;
  undefined1 local_22;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = FUN_005fd398(param_1,param_1 + param_4 * 0x30,param_4 * 0x54 + param_1,param_4);
    param_2 = FUN_005fd398(param_2,param_2 + param_4 * 0x30,param_4 * 0x54 + param_2,param_4);
    param_3 = FUN_005fd398(param_3,param_3 + param_4 * 0x30,param_4 * 0x54 + param_3,param_4);
  }
  local_60 = *(byte **)(param_1 + 4);
  iStack_5c = *(int *)(param_1 + 8);
  bVar5 = iStack_5c != 0;
  uVar4 = 0;
  local_40 = *(byte **)(param_2 + 4);
  local_3c = *(int *)(param_2 + 8);
  uVar3 = 0;
  if (bVar5) {
    uVar4 = (uint)*local_60;
  }
  local_44 = 0x201;
  if (bVar5) {
    uVar4 = LZCOUNT(uVar4 - 0x2f);
  }
  local_24 = 0x201;
  if (bVar5) {
    uVar4 = uVar4 >> 5;
  }
  bVar5 = local_3c != 0;
  local_42 = (undefined1)uVar4;
  if (bVar5) {
    uVar3 = *local_40 - 0x2f;
  }
  local_58 = 6;
  if (bVar5) {
    uVar3 = LZCOUNT(uVar3);
  }
  local_38 = 6;
  if (bVar5) {
    uVar3 = uVar3 >> 5;
  }
  local_22 = (undefined1)uVar3;
  bVar1 = FUN_019af7b8(&local_60,&local_40);
  local_60 = *(byte **)(param_1 + 4);
  iStack_5c = *(int *)(param_1 + 8);
  uVar4 = 0;
  local_40 = *(byte **)(param_3 + 4);
  local_3c = *(int *)(param_3 + 8);
  uVar3 = 0;
  if (iStack_5c != 0) {
    uVar4 = LZCOUNT(*local_60 - 0x2f);
  }
  local_44 = 0x201;
  if (iStack_5c != 0) {
    uVar4 = uVar4 >> 5;
  }
  bVar5 = local_3c != 0;
  local_42 = (undefined1)uVar4;
  if (bVar5) {
    uVar3 = *local_40 - 0x2f;
  }
  local_58 = 6;
  if (bVar5) {
    uVar3 = LZCOUNT(uVar3);
  }
  local_38 = 6;
  if (bVar5) {
    uVar3 = uVar3 >> 5;
  }
  local_24 = 0x201;
  local_22 = (undefined1)uVar3;
  bVar2 = FUN_019af7b8(&local_60,&local_40);
  if (-1 < (char)(bVar2 ^ bVar1)) {
    local_60 = *(byte **)(param_2 + 4);
    iStack_5c = *(int *)(param_2 + 8);
    bVar5 = iStack_5c != 0;
    uVar4 = 0;
    local_40 = *(byte **)(param_3 + 4);
    uVar3 = 0;
    if (bVar5) {
      uVar4 = (uint)*local_60;
    }
    local_3c = *(int *)(param_3 + 8);
    if (bVar5) {
      uVar4 = uVar4 - 0x2f;
    }
    local_44 = 0x201;
    if (bVar5) {
      uVar4 = (uint)(uVar4 == 0);
    }
    bVar5 = local_3c != 0;
    local_42 = (undefined1)uVar4;
    if (bVar5) {
      uVar3 = *local_40 - 0x2f;
    }
    local_58 = 6;
    if (bVar5) {
      uVar3 = LZCOUNT(uVar3);
    }
    local_38 = 6;
    local_24 = 0x201;
    if (bVar5) {
      uVar3 = uVar3 >> 5;
    }
    local_22 = (undefined1)uVar3;
    bVar2 = FUN_019af7b8(&local_60,&local_40);
    param_1 = param_2;
    if ((char)(bVar2 ^ bVar1) < '\0') {
      param_1 = param_3;
    }
  }
  return param_1;
}

