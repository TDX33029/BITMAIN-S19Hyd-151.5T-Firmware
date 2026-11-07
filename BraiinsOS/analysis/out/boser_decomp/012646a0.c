// FUN_012646a0 @ 012646a0 size=572 calls_out=2 calls_in=2
// strings: 

void FUN_012646a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  bool bVar14;
  undefined4 local_6c;
  byte *local_64;
  int local_60;
  undefined1 local_5c;
  undefined2 local_48;
  byte local_46;
  byte *local_44;
  int local_40;
  undefined1 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar12 = param_2[1];
  uVar11 = param_2[2];
  bVar2 = FUN_01268158(uVar12,uVar11,param_2[-6],param_2[-5]);
  if (bVar2 == 2) {
    if (*(byte *)(param_2 + 3) == *(byte *)(param_2 + -4)) {
      local_64 = (byte *)param_2[5];
      local_60 = param_2[6];
      uVar7 = 0;
      local_44 = (byte *)param_2[-2];
      local_40 = param_2[-1];
      uVar5 = 0;
      if (local_60 != 0) {
        uVar7 = *local_64 - 0x2f;
      }
      local_48 = 0x201;
      if (local_60 != 0) {
        uVar7 = (uint)(uVar7 == 0);
      }
      bVar14 = local_40 != 0;
      local_46 = (byte)uVar7;
      if (bVar14) {
        uVar5 = *local_44 - 0x2f;
      }
      local_5c = 6;
      if (bVar14) {
        uVar5 = LZCOUNT(uVar5);
      }
      local_3c = 6;
      local_28 = 0x201;
      if (bVar14) {
        uVar5 = uVar5 >> 5;
      }
      local_26 = (undefined1)uVar5;
      cVar3 = FUN_019af7b8(&local_64,&local_44);
      if ((uint)(int)cVar3 < 0x80000000) {
        return;
      }
      uVar12 = param_2[1];
      uVar11 = param_2[2];
    }
    else if (*(byte *)(param_2 + -4) <= *(byte *)(param_2 + 3)) {
      return;
    }
  }
  else if ((bVar2 & 1) == 0) {
    return;
  }
  uVar9 = *param_2;
  pbVar10 = (byte *)param_2[5];
  uVar8 = param_2[4];
  local_6c._0_3_ = (undefined3)*(undefined4 *)((int)param_2 + 0xd);
  local_6c._3_1_ = (undefined1)uVar8;
  bVar2 = *(byte *)(param_2 + 3);
  iVar13 = param_2[6];
  *param_2 = param_2[-7];
  param_2[1] = param_2[-6];
  param_2[2] = param_2[-5];
  puVar1 = param_2 + -7;
  while( true ) {
    puVar6 = puVar1;
    param_2[3] = param_2[-4];
    param_2[4] = param_2[-3];
    param_2[5] = param_2[-2];
    param_2[6] = param_2[-1];
    if (puVar6 == param_1) break;
    bVar4 = FUN_01268158(uVar12,uVar11,puVar6[-6],puVar6[-5]);
    if (bVar4 == 2) {
      if (bVar2 == *(byte *)(puVar6 + -4)) {
        local_46 = 0;
        uVar7 = 0;
        if (iVar13 != 0) {
          local_46 = *pbVar10;
        }
        local_44 = (byte *)puVar6[-2];
        local_40 = puVar6[-1];
        if (iVar13 != 0) {
          local_46 = local_46 == 0x2f;
        }
        bVar14 = local_40 != 0;
        if (bVar14) {
          uVar7 = *local_44 - 0x2f;
        }
        local_5c = 6;
        if (bVar14) {
          uVar7 = LZCOUNT(uVar7);
        }
        local_48 = 0x201;
        if (bVar14) {
          uVar7 = uVar7 >> 5;
        }
        local_26 = (undefined1)uVar7;
        local_3c = 6;
        local_28 = 0x201;
        local_64 = pbVar10;
        local_60 = iVar13;
        cVar3 = FUN_019af7b8(&local_64,&local_44);
        if ((uint)(int)cVar3 < 0x80000000) break;
      }
      else if (*(byte *)(puVar6 + -4) <= bVar2) break;
    }
    else if ((bVar4 & 1) == 0) break;
    *puVar6 = puVar6[-7];
    puVar6[1] = puVar6[-6];
    puVar6[2] = puVar6[-5];
    puVar1 = puVar6 + -7;
    param_2 = puVar6;
  }
  *puVar6 = uVar9;
  puVar6[1] = uVar12;
  puVar6[5] = pbVar10;
  *(undefined4 *)((int)puVar6 + 0xd) = local_6c;
  *(byte *)(puVar6 + 3) = bVar2;
  puVar6[2] = uVar11;
  puVar6[6] = iVar13;
  puVar6[4] = uVar8;
  return;
}

