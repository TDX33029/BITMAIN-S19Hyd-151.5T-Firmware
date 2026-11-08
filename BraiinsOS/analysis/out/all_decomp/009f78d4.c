// FUN_009f78d4 @ 009f78d4 size=696 calls_out=2 calls_in=2
// strings: 

void FUN_009f78d4(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  bool bVar13;
  undefined4 local_6c;
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
  
  uVar12 = param_2[-5];
  uVar10 = param_2[2];
  uVar11 = param_2[1];
  uVar6 = uVar12;
  if (uVar10 < uVar12) {
    uVar6 = uVar10;
  }
  iVar3 = FUN_016dd50a(uVar11,param_2[-6],uVar6);
  if (iVar3 == 0) {
    iVar3 = uVar10 - uVar12;
  }
  uVar12 = (uint)(iVar3 < 0);
  uVar6 = (0 < iVar3) - uVar12 & 0xff;
  if (uVar6 == 0) {
    if (*(byte *)(param_2 + 3) == *(byte *)(param_2 + -4)) {
      local_64 = (byte *)param_2[5];
      local_60 = param_2[6];
      local_46 = 0;
      local_40 = param_2[-1];
      uVar6 = 0;
      if (local_60 != 0) {
        uVar12 = LZCOUNT(*local_64 - 0x2f);
      }
      local_48 = 0x201;
      local_28 = 0x201;
      if (local_60 != 0) {
        local_46 = (undefined1)(uVar12 >> 5);
      }
      local_44 = (byte *)param_2[-2];
      bVar13 = local_40 != 0;
      if (bVar13) {
        uVar6 = (uint)*local_44;
      }
      local_5c = 6;
      if (bVar13) {
        uVar6 = uVar6 - 0x2f;
      }
      local_3c = 6;
      if (bVar13) {
        uVar6 = (uint)(uVar6 == 0);
      }
      local_26 = (undefined1)uVar6;
      cVar2 = FUN_015f776c(&local_64,&local_44);
      if ((uint)(int)cVar2 < 0x80000000) {
        return;
      }
      uVar11 = param_2[1];
      uVar10 = param_2[2];
    }
    else if (*(byte *)(param_2 + -4) <= *(byte *)(param_2 + 3)) {
      return;
    }
  }
  else {
    if (uVar6 == 2) {
      return;
    }
    if (-1 < iVar3) {
      return;
    }
  }
  uVar8 = *param_2;
  pbVar9 = (byte *)param_2[5];
  uVar7 = param_2[4];
  local_6c._0_3_ = (undefined3)*(undefined4 *)((int)param_2 + 0xd);
  local_6c._3_1_ = (undefined1)uVar7;
  bVar1 = *(byte *)(param_2 + 3);
  iVar3 = param_2[6];
  *param_2 = param_2[-7];
  param_2[1] = param_2[-6];
  param_2[2] = param_2[-5];
  param_2[3] = param_2[-4];
  param_2[4] = param_2[-3];
  param_2[5] = param_2[-2];
  param_2[6] = param_2[-1];
  puVar4 = param_2 + -7;
  while (puVar4 != param_1) {
    uVar12 = puVar4[-5];
    uVar6 = uVar12;
    if (uVar10 < uVar12) {
      uVar6 = uVar10;
    }
    iVar5 = FUN_016dd50a(uVar11,puVar4[-6],uVar6);
    if (iVar5 == 0) {
      iVar5 = uVar10 - uVar12;
    }
    if (0 < iVar5 == iVar5 < 0) {
      if (bVar1 == *(byte *)(puVar4 + -4)) {
        local_46 = false;
        local_44 = (byte *)puVar4[-2];
        local_40 = puVar4[-1];
        uVar6 = 0;
        if (iVar3 != 0) {
          local_46 = *pbVar9 == 0x2f;
        }
        bVar13 = local_40 != 0;
        if (bVar13) {
          uVar6 = *local_44 - 0x2f;
        }
        local_5c = 6;
        if (bVar13) {
          uVar6 = LZCOUNT(uVar6);
        }
        local_48 = 0x201;
        if (bVar13) {
          uVar6 = uVar6 >> 5;
        }
        local_26 = (undefined1)uVar6;
        local_3c = 6;
        local_28 = 0x201;
        local_64 = pbVar9;
        local_60 = iVar3;
        cVar2 = FUN_015f776c(&local_64,&local_44);
        if (-1 < cVar2) break;
      }
      else if (*(byte *)(puVar4 + -4) <= bVar1) break;
    }
    else if (((char)((0 < iVar5) - (iVar5 < 0)) == '\x02') || (-1 < iVar5)) break;
    *puVar4 = puVar4[-7];
    puVar4[1] = puVar4[-6];
    puVar4[2] = puVar4[-5];
    puVar4[3] = puVar4[-4];
    puVar4[4] = puVar4[-3];
    puVar4[5] = puVar4[-2];
    puVar4[6] = puVar4[-1];
    puVar4 = puVar4 + -7;
  }
  *puVar4 = uVar8;
  puVar4[1] = uVar11;
  puVar4[5] = pbVar9;
  *(undefined4 *)((int)puVar4 + 0xd) = local_6c;
  *(byte *)(puVar4 + 3) = bVar1;
  puVar4[2] = uVar10;
  puVar4[6] = iVar3;
  puVar4[4] = uVar7;
  return;
}

