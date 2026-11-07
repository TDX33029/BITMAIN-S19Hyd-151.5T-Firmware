// FUN_009feed8 @ 009feed8 size=940 calls_out=3 calls_in=2
// strings: 

int FUN_009feed8(int param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
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
  
  if (7 < param_4) {
    uVar2 = param_4 >> 3;
    iVar5 = uVar2 * 8 - (param_4 >> 3);
    param_1 = FUN_009feed8(param_1,param_1 + iVar5 * 0x10,uVar2 * 0xc4 + param_1,uVar2);
    param_2 = FUN_009feed8(param_2,param_2 + iVar5 * 0x10,uVar2 * 0xc4 + param_2,uVar2);
    param_3 = FUN_009feed8(param_3,param_3 + iVar5 * 0x10,uVar2 * 0xc4 + param_3,uVar2);
  }
  uVar6 = *(uint *)(param_2 + 8);
  uVar7 = *(undefined4 *)(param_1 + 4);
  uVar8 = *(uint *)(param_1 + 8);
  uVar2 = uVar6;
  if (uVar8 < uVar6) {
    uVar2 = uVar8;
  }
  uVar2 = FUN_016dd50a(uVar7,*(undefined4 *)(param_2 + 4),uVar2);
  if (uVar2 == 0) {
    uVar2 = uVar8 - uVar6;
  }
  uVar6 = 0;
  uVar4 = (uint)(0 < (int)uVar2);
  uVar3 = uVar4 - ((int)uVar2 < 0) & 0xff;
  if (uVar3 == 0) {
    if (*(byte *)(param_1 + 0xc) == *(byte *)(param_2 + 0xc)) {
      pbStack_64 = *(byte **)(param_1 + 0x14);
      iStack_60 = *(int *)(param_1 + 0x18);
      local_46 = 0;
      local_40 = *(int *)(param_2 + 0x18);
      uVar2 = 0;
      if (iStack_60 != 0) {
        uVar4 = LZCOUNT(*pbStack_64 - 0x2f);
      }
      local_48 = 0x201;
      local_28 = 0x201;
      if (iStack_60 != 0) {
        local_46 = (undefined1)(uVar4 >> 5);
      }
      local_44 = *(byte **)(param_2 + 0x14);
      bVar9 = local_40 != 0;
      if (bVar9) {
        uVar2 = (uint)*local_44;
      }
      local_5c = 6;
      if (bVar9) {
        uVar2 = uVar2 - 0x2f;
      }
      local_3c = 6;
      if (bVar9) {
        uVar2 = (uint)(uVar2 == 0);
      }
      local_26 = (undefined1)uVar2;
      cVar1 = FUN_015f776c(&pbStack_64,&local_44);
      uVar7 = *(undefined4 *)(param_1 + 4);
      uVar8 = *(uint *)(param_1 + 8);
      uVar6 = (uint)(cVar1 < '\0');
    }
    else {
      uVar6 = (uint)(*(byte *)(param_1 + 0xc) < *(byte *)(param_2 + 0xc));
    }
  }
  else if (uVar3 != 2) {
    uVar6 = uVar2 >> 0x1f;
  }
  uVar3 = *(uint *)(param_3 + 8);
  uVar2 = uVar3;
  if (uVar8 < uVar3) {
    uVar2 = uVar8;
  }
  iVar5 = FUN_016dd50a(uVar7,*(undefined4 *)(param_3 + 4),uVar2);
  if (iVar5 == 0) {
    iVar5 = uVar8 - uVar3;
  }
  uVar8 = (uint)(iVar5 < 0);
  uVar2 = (0 < iVar5) - uVar8 & 0xff;
  if (uVar2 == 0) {
    bVar9 = *(byte *)(param_1 + 0xc) < *(byte *)(param_3 + 0xc);
    if (*(byte *)(param_1 + 0xc) == *(byte *)(param_3 + 0xc)) {
      pbStack_64 = *(byte **)(param_1 + 0x14);
      iStack_60 = *(int *)(param_1 + 0x18);
      bVar9 = iStack_60 != 0;
      local_46 = 0;
      local_40 = *(int *)(param_3 + 0x18);
      uVar2 = 0;
      if (bVar9) {
        uVar8 = (uint)*pbStack_64;
      }
      local_5c = 6;
      if (bVar9) {
        uVar8 = LZCOUNT(uVar8 - 0x2f);
      }
      local_3c = 6;
      if (bVar9) {
        local_46 = (undefined1)(uVar8 >> 5);
      }
      local_44 = *(byte **)(param_3 + 0x14);
      bVar9 = local_40 != 0;
      if (bVar9) {
        uVar2 = (uint)*local_44;
      }
      local_48 = 0x201;
      if (bVar9) {
        uVar2 = LZCOUNT(uVar2 - 0x2f);
      }
      local_28 = 0x201;
      if (bVar9) {
        uVar2 = uVar2 >> 5;
      }
      local_26 = (undefined1)uVar2;
      cVar1 = FUN_015f776c(&pbStack_64,&local_44);
      bVar9 = cVar1 < '\0';
    }
    uVar2 = (uint)bVar9;
  }
  else {
    if (uVar2 == 2) {
      if (uVar6 != 0) {
        return param_1;
      }
      goto LAB_009ff16c;
    }
    uVar2 = -(iVar5 >> 0x1f);
  }
  if (uVar6 != uVar2) {
    return param_1;
  }
LAB_009ff16c:
  uVar8 = *(uint *)(param_3 + 8);
  uVar3 = *(uint *)(param_2 + 8);
  uVar2 = uVar8;
  if (uVar3 < uVar8) {
    uVar2 = uVar3;
  }
  uVar2 = FUN_016dd50a(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 4),uVar2);
  if (uVar2 == 0) {
    uVar2 = uVar3 - uVar8;
  }
  uVar8 = 0;
  if (0 < (int)uVar2 == (int)uVar2 < 0) {
    if (*(byte *)(param_2 + 0xc) == *(byte *)(param_3 + 0xc)) {
      iStack_60 = *(int *)(param_2 + 0x18);
      local_46 = 0;
      pbStack_64 = *(byte **)(param_2 + 0x14);
      uVar2 = 0;
      local_40 = *(int *)(param_3 + 0x18);
      uVar8 = 0;
      if (iStack_60 != 0) {
        uVar8 = LZCOUNT(*pbStack_64 - 0x2f);
      }
      local_48 = 0x201;
      local_28 = 0x201;
      if (iStack_60 != 0) {
        local_46 = (undefined1)(uVar8 >> 5);
      }
      local_44 = *(byte **)(param_3 + 0x14);
      bVar9 = local_40 != 0;
      if (bVar9) {
        uVar2 = (uint)*local_44;
      }
      local_5c = 6;
      if (bVar9) {
        uVar2 = uVar2 - 0x2f;
      }
      local_3c = 6;
      if (bVar9) {
        uVar2 = (uint)(uVar2 == 0);
      }
      local_26 = (undefined1)uVar2;
      cVar1 = FUN_015f776c(&pbStack_64,&local_44);
      uVar8 = (uint)(cVar1 < '\0');
    }
    else {
      uVar8 = (uint)(*(byte *)(param_2 + 0xc) < *(byte *)(param_3 + 0xc));
    }
  }
  else if ((char)((0 < (int)uVar2) - ((int)uVar2 < 0)) != '\x02') {
    uVar8 = uVar2 >> 0x1f;
  }
  if (uVar6 != uVar8) {
    param_2 = param_3;
  }
  return param_2;
}

