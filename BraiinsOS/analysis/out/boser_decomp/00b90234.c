// FUN_00b90234 @ 00b90234 size=672 calls_out=2 calls_in=2
// strings: 

uint * FUN_00b90234(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  byte *pbStack_64;
  uint uStack_60;
  undefined1 local_5c;
  undefined2 local_48;
  undefined1 local_46;
  byte *local_44;
  uint local_40;
  undefined1 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (uint *)FUN_00b90234(param_1,param_1 + param_4 * 0x18,param_1 + param_4 * 0x2a,param_4
                                  );
    param_2 = (uint *)FUN_00b90234(param_2,param_2 + param_4 * 0x18,param_2 + param_4 * 0x2a,param_4
                                  );
    param_3 = (uint *)FUN_00b90234(param_3,param_3 + param_4 * 0x18,param_3 + param_4 * 0x2a,param_4
                                  );
  }
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar2 == uVar4 && uVar3 == uVar5) {
    pbStack_64 = (byte *)param_1[3];
    uStack_60 = param_1[4];
    bVar6 = uStack_60 != 0;
    uVar2 = 0;
    local_44 = (byte *)param_2[3];
    local_40 = param_2[4];
    uVar3 = 0;
    if (bVar6) {
      uVar2 = (uint)*pbStack_64;
    }
    local_48 = 0x201;
    if (bVar6) {
      uVar2 = LZCOUNT(uVar2 - 0x2f);
    }
    local_28 = 0x201;
    if (bVar6) {
      uVar2 = uVar2 >> 5;
    }
    bVar6 = local_40 != 0;
    local_46 = (undefined1)uVar2;
    if (bVar6) {
      uVar3 = *local_44 - 0x2f;
    }
    local_5c = 6;
    if (bVar6) {
      uVar3 = LZCOUNT(uVar3);
    }
    local_3c = 6;
    if (bVar6) {
      uVar3 = uVar3 >> 5;
    }
    local_26 = (undefined1)uVar3;
    cVar1 = FUN_019af7b8(&pbStack_64,&local_44);
    bVar6 = cVar1 < '\0';
    uVar2 = *param_1;
    uVar3 = param_1[1];
  }
  else {
    bVar6 = false;
    if ((int)(uVar3 - (uVar5 + (uVar2 < uVar4))) < 0 !=
        (SBORROW4(uVar3,uVar5) != SBORROW4(uVar3 - uVar5,(uint)(uVar2 < uVar4)))) {
      bVar6 = true;
    }
  }
  uVar5 = *param_3;
  uVar4 = param_3[1];
  if (uVar2 == uVar5 && uVar3 == uVar4) {
    pbStack_64 = (byte *)param_1[3];
    uStack_60 = param_1[4];
    bVar7 = uStack_60 != 0;
    uVar2 = 0;
    local_44 = (byte *)param_3[3];
    local_40 = param_3[4];
    uVar3 = 0;
    if (bVar7) {
      uVar2 = (uint)*pbStack_64;
    }
    local_48 = 0x201;
    if (bVar7) {
      uVar2 = LZCOUNT(uVar2 - 0x2f);
    }
    local_28 = 0x201;
    if (bVar7) {
      uVar2 = uVar2 >> 5;
    }
    bVar7 = local_40 != 0;
    local_46 = (undefined1)uVar2;
    if (bVar7) {
      uVar3 = *local_44 - 0x2f;
    }
    local_5c = 6;
    if (bVar7) {
      uVar3 = LZCOUNT(uVar3);
    }
    local_3c = 6;
    if (bVar7) {
      uVar3 = uVar3 >> 5;
    }
    local_26 = (undefined1)uVar3;
    cVar1 = FUN_019af7b8(&pbStack_64,&local_44);
    bVar7 = cVar1 < '\0';
  }
  else {
    bVar7 = false;
    if ((int)(uVar3 - (uVar4 + (uVar2 < uVar5))) < 0 !=
        (SBORROW4(uVar3,uVar4) != SBORROW4(uVar3 - uVar4,(uint)(uVar2 < uVar5)))) {
      bVar7 = true;
    }
  }
  if (bVar6 == bVar7) {
    uVar3 = *param_3;
    uVar5 = *param_2;
    uVar2 = param_3[1];
    uVar4 = param_2[1];
    if (uVar5 == uVar3 && uVar4 == uVar2) {
      pbStack_64 = (byte *)param_2[3];
      uStack_60 = param_2[4];
      bVar7 = uStack_60 != 0;
      uVar2 = 0;
      local_44 = (byte *)param_3[3];
      uVar3 = 0;
      if (bVar7) {
        uVar2 = (uint)*pbStack_64;
      }
      local_40 = param_3[4];
      if (bVar7) {
        uVar2 = uVar2 - 0x2f;
      }
      local_48 = 0x201;
      if (bVar7) {
        uVar2 = (uint)(uVar2 == 0);
      }
      bVar7 = local_40 != 0;
      local_46 = (undefined1)uVar2;
      if (bVar7) {
        uVar3 = *local_44 - 0x2f;
      }
      local_5c = 6;
      if (bVar7) {
        uVar3 = LZCOUNT(uVar3);
      }
      local_3c = 6;
      local_28 = 0x201;
      if (bVar7) {
        uVar3 = uVar3 >> 5;
      }
      local_26 = (undefined1)uVar3;
      cVar1 = FUN_019af7b8(&pbStack_64,&local_44);
      bVar7 = cVar1 < '\0';
    }
    else {
      bVar7 = false;
      if ((int)(uVar4 - (uVar2 + (uVar5 < uVar3))) < 0 !=
          (SBORROW4(uVar4,uVar2) != SBORROW4(uVar4 - uVar2,(uint)(uVar5 < uVar3)))) {
        bVar7 = true;
      }
    }
    param_1 = param_2;
    if (bVar6 != bVar7) {
      param_1 = param_3;
    }
  }
  return param_1;
}

