// FUN_0126cd4c @ 0126cd4c size=708 calls_out=3 calls_in=2
// strings: 

int FUN_0126cd4c(int param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  byte *pbStack_64;
  int iStack_60;
  undefined1 local_5c;
  undefined2 local_48;
  undefined1 local_46;
  byte *local_44;
  int local_40;
  undefined1 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = FUN_0126cd4c(param_1,param_1 + param_4 * 0x70,param_4 * 0xc4 + param_1,param_4);
    param_2 = FUN_0126cd4c(param_2,param_2 + param_4 * 0x70,param_4 * 0xc4 + param_2,param_4);
    param_3 = FUN_0126cd4c(param_3,param_3 + param_4 * 0x70,param_4 * 0xc4 + param_3,param_4);
  }
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar7 = *(undefined4 *)(param_1 + 8);
  bVar1 = FUN_01268158(uVar6,uVar7,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if (bVar1 == 2) {
    if (*(byte *)(param_1 + 0xc) == *(byte *)(param_2 + 0xc)) {
      pbStack_64 = *(byte **)(param_1 + 0x14);
      iStack_60 = *(int *)(param_1 + 0x18);
      bVar8 = iStack_60 != 0;
      uVar5 = 0;
      local_44 = *(byte **)(param_2 + 0x14);
      local_40 = *(int *)(param_2 + 0x18);
      uVar4 = 0;
      if (bVar8) {
        uVar5 = (uint)*pbStack_64;
      }
      local_48 = 0x201;
      if (bVar8) {
        uVar5 = LZCOUNT(uVar5 - 0x2f);
      }
      local_28 = 0x201;
      if (bVar8) {
        uVar5 = uVar5 >> 5;
      }
      bVar8 = local_40 != 0;
      local_46 = (undefined1)uVar5;
      if (bVar8) {
        uVar4 = *local_44 - 0x2f;
      }
      local_5c = 6;
      if (bVar8) {
        uVar4 = LZCOUNT(uVar4);
      }
      local_3c = 6;
      if (bVar8) {
        uVar4 = uVar4 >> 5;
      }
      local_26 = (undefined1)uVar4;
      cVar2 = FUN_019af7b8(&pbStack_64,&local_44);
      uVar6 = *(undefined4 *)(param_1 + 4);
      uVar7 = *(undefined4 *)(param_1 + 8);
      bVar1 = cVar2 < '\0';
    }
    else {
      bVar1 = 0;
      if (*(byte *)(param_1 + 0xc) < *(byte *)(param_2 + 0xc)) {
        bVar1 = 1;
      }
    }
  }
  bVar3 = FUN_01268158(uVar6,uVar7,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (bVar3 == 2) {
    if (*(byte *)(param_1 + 0xc) == *(byte *)(param_3 + 0xc)) {
      pbStack_64 = *(byte **)(param_1 + 0x14);
      iStack_60 = *(int *)(param_1 + 0x18);
      bVar8 = iStack_60 != 0;
      uVar5 = 0;
      local_44 = *(byte **)(param_3 + 0x14);
      local_40 = *(int *)(param_3 + 0x18);
      uVar4 = 0;
      if (bVar8) {
        uVar5 = (uint)*pbStack_64;
      }
      local_48 = 0x201;
      if (bVar8) {
        uVar5 = LZCOUNT(uVar5 - 0x2f);
      }
      local_28 = 0x201;
      if (bVar8) {
        uVar5 = uVar5 >> 5;
      }
      bVar8 = local_40 != 0;
      local_46 = (undefined1)uVar5;
      if (bVar8) {
        uVar4 = *local_44 - 0x2f;
      }
      local_5c = 6;
      if (bVar8) {
        uVar4 = LZCOUNT(uVar4);
      }
      local_3c = 6;
      if (bVar8) {
        uVar4 = uVar4 >> 5;
      }
      local_26 = (undefined1)uVar4;
      cVar2 = FUN_019af7b8(&pbStack_64,&local_44);
      bVar3 = cVar2 < '\0';
    }
    else {
      bVar3 = 0;
      if (*(byte *)(param_1 + 0xc) < *(byte *)(param_3 + 0xc)) {
        bVar3 = 1;
      }
    }
  }
  if (((bVar1 ^ bVar3) & 1) == 0) {
    bVar3 = FUN_01268158(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
    if (bVar3 == 2) {
      if (*(byte *)(param_2 + 0xc) == *(byte *)(param_3 + 0xc)) {
        pbStack_64 = *(byte **)(param_2 + 0x14);
        iStack_60 = *(int *)(param_2 + 0x18);
        bVar8 = iStack_60 != 0;
        uVar5 = 0;
        local_44 = *(byte **)(param_3 + 0x14);
        uVar4 = 0;
        if (bVar8) {
          uVar5 = (uint)*pbStack_64;
        }
        local_40 = *(int *)(param_3 + 0x18);
        if (bVar8) {
          uVar5 = uVar5 - 0x2f;
        }
        local_48 = 0x201;
        if (bVar8) {
          uVar5 = (uint)(uVar5 == 0);
        }
        bVar8 = local_40 != 0;
        local_46 = (undefined1)uVar5;
        if (bVar8) {
          uVar4 = *local_44 - 0x2f;
        }
        local_5c = 6;
        if (bVar8) {
          uVar4 = LZCOUNT(uVar4);
        }
        local_3c = 6;
        local_28 = 0x201;
        if (bVar8) {
          uVar4 = uVar4 >> 5;
        }
        local_26 = (undefined1)uVar4;
        cVar2 = FUN_019af7b8(&pbStack_64,&local_44);
        bVar3 = cVar2 < '\0';
      }
      else {
        bVar3 = 0;
        if (*(byte *)(param_2 + 0xc) < *(byte *)(param_3 + 0xc)) {
          bVar3 = 1;
        }
      }
    }
    param_1 = param_2;
    if (((bVar1 ^ bVar3) & 1) != 0) {
      param_1 = param_3;
    }
  }
  return param_1;
}

