// FUN_01014754 @ 01014754 size=336 calls_out=1 calls_in=2
// strings: 

void FUN_01014754(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  byte *local_64;
  int local_60;
  undefined1 local_5c;
  undefined2 local_48;
  undefined1 local_46;
  byte *local_44;
  int local_40;
  undefined1 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  local_64 = (byte *)param_2[1];
  local_60 = param_2[2];
  bVar8 = local_60 != 0;
  uVar4 = 0;
  local_44 = (byte *)param_2[-2];
  local_40 = param_2[-1];
  if (bVar8) {
    uVar4 = (uint)*local_64;
  }
  uVar2 = 0;
  if (bVar8) {
    uVar4 = LZCOUNT(uVar4 - 0x2f);
  }
  local_48 = 0x201;
  if (bVar8) {
    uVar4 = uVar4 >> 5;
  }
  bVar8 = local_40 != 0;
  local_46 = (undefined1)uVar4;
  if (bVar8) {
    uVar2 = *local_44 - 0x2f;
  }
  local_5c = 6;
  if (bVar8) {
    uVar2 = LZCOUNT(uVar2);
  }
  local_3c = 6;
  if (bVar8) {
    uVar2 = uVar2 >> 5;
  }
  local_28 = 0x201;
  local_26 = (undefined1)uVar2;
  cVar1 = FUN_019af7b8(&local_64,&local_44);
  if (0x7fffffff < (uint)(int)cVar1) {
    pbVar7 = (byte *)param_2[1];
    iVar6 = param_2[2];
    uVar3 = *param_2;
    do {
      puVar5 = param_2;
      param_2 = puVar5 + -3;
      *puVar5 = *param_2;
      puVar5[1] = puVar5[-2];
      puVar5[2] = puVar5[-1];
      if (param_2 == param_1) break;
      bVar8 = iVar6 != 0;
      uVar4 = 0;
      if (bVar8) {
        uVar4 = (uint)*pbVar7;
      }
      uVar2 = 0;
      local_44 = (byte *)puVar5[-5];
      local_40 = puVar5[-4];
      if (bVar8) {
        uVar4 = uVar4 - 0x2f;
      }
      local_5c = 6;
      if (bVar8) {
        uVar4 = (uint)(uVar4 == 0);
      }
      bVar8 = local_40 != 0;
      local_46 = (undefined1)uVar4;
      if (bVar8) {
        uVar2 = *local_44 - 0x2f;
      }
      local_48 = 0x201;
      if (bVar8) {
        uVar2 = LZCOUNT(uVar2);
      }
      local_3c = 6;
      if (bVar8) {
        uVar2 = uVar2 >> 5;
      }
      local_26 = (undefined1)uVar2;
      local_28 = 0x201;
      local_64 = pbVar7;
      local_60 = iVar6;
      cVar1 = FUN_019af7b8(&local_64,&local_44);
    } while (cVar1 < '\0');
    puVar5[-3] = uVar3;
    puVar5[-2] = pbVar7;
    puVar5[-1] = iVar6;
  }
  return;
}

