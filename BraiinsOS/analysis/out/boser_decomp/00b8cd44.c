// FUN_00b8cd44 @ 00b8cd44 size=512 calls_out=1 calls_in=2
// strings: 

void FUN_00b8cd44(uint *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  byte *pbVar11;
  bool bVar12;
  byte *local_64;
  uint local_60;
  undefined1 local_5c;
  undefined2 local_48;
  byte local_46;
  byte *local_44;
  uint local_40;
  undefined1 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar4 = param_2[-5];
  uVar6 = *param_2;
  uVar7 = param_2[1];
  puVar8 = param_2 + -6;
  uVar2 = *puVar8;
  if (uVar6 == uVar2 && uVar7 == uVar4) {
    local_64 = (byte *)param_2[3];
    local_60 = param_2[4];
    bVar12 = local_60 != 0;
    uVar2 = 0;
    local_44 = (byte *)param_2[-3];
    uVar4 = 0;
    if (bVar12) {
      uVar2 = (uint)*local_64;
    }
    local_40 = param_2[-2];
    if (bVar12) {
      uVar2 = LZCOUNT(uVar2 - 0x2f);
    }
    local_48 = 0x201;
    if (bVar12) {
      uVar2 = uVar2 >> 5;
    }
    bVar12 = local_40 != 0;
    local_46 = (byte)uVar2;
    if (bVar12) {
      uVar4 = *local_44 - 0x2f;
    }
    local_5c = 6;
    if (bVar12) {
      uVar4 = LZCOUNT(uVar4);
    }
    local_3c = 6;
    if (bVar12) {
      uVar4 = uVar4 >> 5;
    }
    local_26 = (undefined1)uVar4;
    local_28 = 0x201;
    cVar1 = FUN_019af7b8(&local_64,&local_44);
    if ((uint)(int)cVar1 < 0x80000000) {
      return;
    }
    uVar6 = *param_2;
    uVar7 = param_2[1];
  }
  else if ((int)(uVar7 - (uVar4 + (uVar6 < uVar2))) < 0 ==
           (SBORROW4(uVar7,uVar4) != SBORROW4(uVar7 - uVar4,(uint)(uVar6 < uVar2)))) {
    return;
  }
  uVar2 = param_2[2];
  uVar4 = param_2[5];
  pbVar11 = (byte *)param_2[3];
  uVar10 = param_2[4];
  *param_2 = *puVar8;
  param_2[1] = param_2[-5];
  param_2[2] = param_2[-4];
  param_2[3] = param_2[-3];
  param_2[4] = param_2[-2];
  param_2[5] = param_2[-1];
  if (puVar8 == param_1) {
LAB_00b8cf1c:
    puVar9 = puVar8;
  }
  else {
    do {
      puVar9 = puVar8 + -6;
      uVar5 = *puVar9;
      uVar3 = puVar8[-5];
      if (uVar6 == uVar5 && uVar7 == uVar3) {
        local_46 = 0;
        if (uVar10 != 0) {
          local_46 = *pbVar11;
        }
        uVar3 = 0;
        local_44 = (byte *)puVar8[-3];
        local_40 = puVar8[-2];
        if (uVar10 != 0) {
          local_46 = local_46 == 0x2f;
        }
        bVar12 = local_40 != 0;
        if (bVar12) {
          uVar3 = *local_44 - 0x2f;
        }
        local_5c = 6;
        if (bVar12) {
          uVar3 = LZCOUNT(uVar3);
        }
        local_48 = 0x201;
        if (bVar12) {
          uVar3 = uVar3 >> 5;
        }
        local_26 = (undefined1)uVar3;
        local_3c = 6;
        local_28 = 0x201;
        local_64 = pbVar11;
        local_60 = uVar10;
        cVar1 = FUN_019af7b8(&local_64,&local_44);
        if ((uint)(int)cVar1 < 0x80000000) goto LAB_00b8cf1c;
      }
      else if ((int)(uVar7 - (uVar3 + (uVar6 < uVar5))) < 0 ==
               (SBORROW4(uVar7,uVar3) != SBORROW4(uVar7 - uVar3,(uint)(uVar6 < uVar5))))
      goto LAB_00b8cf1c;
      *puVar8 = *puVar9;
      puVar8[1] = puVar8[-5];
      puVar8[2] = puVar8[-4];
      puVar8[3] = puVar8[-3];
      puVar8[4] = puVar8[-2];
      puVar8[5] = puVar8[-1];
      puVar8 = puVar9;
    } while (puVar9 != param_1);
  }
  puVar9[2] = uVar2;
  *puVar9 = uVar6;
  puVar9[1] = uVar7;
  puVar9[3] = (uint)pbVar11;
  puVar9[4] = uVar10;
  puVar9[5] = uVar4;
  return;
}

