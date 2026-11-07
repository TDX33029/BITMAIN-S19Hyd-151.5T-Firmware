// FUN_01799ec4 @ 01799ec4 size=1056 calls_out=0 calls_in=3
// strings: 

uint * FUN_01799ec4(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_2c;
  
  bVar4 = param_4 == 0xffffffff && param_3 == 0xffffffff;
  if (param_6 == 1) {
    uVar5 = 0;
    bVar6 = false;
LAB_0179a1a8:
    if ((bool)(bVar6 | (param_4 != 0xffffffff || param_3 != 0xffffffff))) {
      uVar2 = 0;
      goto LAB_01799f1c;
    }
    bVar4 = true;
    iVar1 = 0;
  }
  else {
    bVar6 = param_5 != 0;
    uVar5 = param_5;
    if (!bVar6 || (param_4 != 0xffffffff || param_3 != 0xffffffff)) goto LAB_0179a1a8;
    uVar2 = 500;
    bVar4 = bVar6 && bVar4;
LAB_01799f1c:
    uVar3 = param_3 + uVar2 + uVar5;
    iVar1 = param_4 + CARRY4(param_3,uVar2) + (uint)CARRY4(param_3 + uVar2,uVar5);
    iVar1 = (uint)((uint)-iVar1 < (uint)(uVar3 < 0x40001)) +
            (uint)((uint)-iVar1 < (uint)(uVar3 < 0x20001)) +
            (uint)((uint)-iVar1 < (uint)(uVar3 < 0x4001));
  }
  if (param_2 == 0) {
    param_2 = (&DAT_0045062c)[iVar1 * 0xa1];
    local_44 = (&DAT_00450618)[iVar1 * 0xa1];
    local_40 = (&DAT_0045061c)[iVar1 * 0xa1];
    local_3c = (&DAT_00450620)[iVar1 * 0xa1];
    local_38 = (&DAT_00450624)[iVar1 * 0xa1];
    local_34 = (&DAT_00450628)[iVar1 * 0xa1];
    local_2c = (&DAT_00450630)[iVar1 * 0xa1];
  }
  else {
    uVar5 = param_2;
    if (0x15 < (int)param_2) {
      uVar5 = 0x16;
    }
    bVar6 = -1 < (int)param_2;
    iVar1 = (uVar5 & ~((int)uVar5 >> 0x1f)) * 0x1c + iVar1 * 0x284;
    if (bVar6) {
      param_2 = *(uint *)(&DAT_004505d8 + iVar1);
    }
    local_44 = *(uint *)(&DAT_004505c4 + iVar1);
    local_40 = *(uint *)(&DAT_004505c8 + iVar1);
    local_3c = *(uint *)(&DAT_004505cc + iVar1);
    local_38 = *(uint *)(&DAT_004505d0 + iVar1);
    local_34 = *(uint *)(&DAT_004505d4 + iVar1);
    local_2c = *(uint *)(&DAT_004505dc + iVar1);
    if (!bVar6) {
      if ((int)param_2 < -0x20000) {
        param_2 = 0xfffe0000;
      }
      param_2 = -param_2;
    }
  }
  if (param_6 == 1) {
    if (param_4 == 0 && (0x20000000 < param_3) <= param_4) {
      if (param_3 < 0x40) {
        if (5 < local_44) {
          local_44 = 6;
        }
      }
      else {
        uVar5 = 0x20 - LZCOUNT(param_3 - 1);
        if (uVar5 <= local_44) {
          local_44 = uVar5;
        }
      }
LAB_0179a248:
      if (local_44 + 1 <= local_3c) {
        local_3c = local_44 + 1;
      }
      if (local_40 - (5 < local_2c) <= local_44) goto LAB_0179a2a0;
      local_40 = (5 < local_2c) + local_44;
      if (local_44 < 10) {
        local_44 = 10;
      }
    }
    else {
      if (param_4 != 0xffffffff || param_3 != 0xffffffff) goto LAB_0179a248;
LAB_0179a2a0:
      if (local_44 < 10) {
        local_44 = 10;
      }
    }
  }
  else {
    if (param_6 == 2) {
      if (param_5 == 0) {
        bVar4 = false;
      }
      if (!bVar4) goto LAB_0179a018;
      if (param_5 < 0x20000001) {
        param_4 = 0;
        param_3 = 0x201;
        uVar5 = 0x20 - LZCOUNT(param_5 + 0x200);
        if (uVar5 <= local_44) {
          local_44 = uVar5;
        }
      }
      else {
        param_4 = 0;
        param_3 = 0x201;
      }
LAB_0179a06c:
      param_4 = param_4 + CARRY4(param_3,param_5);
      uVar3 = 1 << (local_44 - 0x20 & 0xff) | 1U >> (0x20 - local_44 & 0xff);
      uVar2 = 1 << (local_44 & 0xff);
      uVar5 = local_44;
      if (param_4 < uVar3 || uVar3 - param_4 < (uint)(param_3 + param_5 <= uVar2)) {
LAB_0179a2ac:
        uVar2 = uVar5 + 1;
        local_44 = uVar5;
      }
      else {
        uVar3 = uVar3 + CARRY4(uVar2,param_5);
        if (uVar3 == 0 && (0x3fffffff < uVar2 + param_5) <= uVar3) {
          iVar1 = LZCOUNT((uVar2 + param_5) - 1);
          uVar5 = 0x20 - iVar1;
          uVar2 = 0x21 - iVar1;
        }
        else {
          uVar2 = 0x1f;
          uVar5 = 0x1e;
        }
      }
      if (uVar2 <= local_3c) {
        local_3c = uVar2;
      }
      uVar2 = local_40;
      if (5 < local_2c) {
        uVar2 = local_40 - 1;
      }
      if ((uVar5 < uVar2) && (local_40 = uVar5, 5 < local_2c)) {
        local_40 = uVar5 + 1;
      }
    }
    else {
LAB_0179a018:
      if (param_5 < 0x20000001 && (param_4 == 0 && (0x20000000 < param_3) <= param_4)) {
        if (param_5 + param_3 < 0x40) {
          uVar5 = 6;
        }
        else {
          uVar5 = 0x20 - LZCOUNT((param_5 + param_3) - 1);
        }
        if (uVar5 <= local_44) {
          local_44 = uVar5;
        }
LAB_0179a060:
        uVar5 = local_44;
        if (param_5 != 0) goto LAB_0179a06c;
        goto LAB_0179a2ac;
      }
      if (param_4 != 0xffffffff || param_3 != 0xffffffff) goto LAB_0179a060;
    }
    if (local_44 < 10) {
      local_44 = 10;
    }
    if ((param_6 == 2) && (local_2c - 1 < 2)) {
      if (0x17 < local_3c) {
        local_3c = 0x18;
      }
      if (0x17 < local_40) {
        local_40 = 0x18;
      }
      goto LAB_0179a130;
    }
  }
  if (local_2c - 3 < 3) {
    uVar5 = local_38;
    if (5 < local_38) {
      uVar5 = 6;
    }
    if (uVar5 < 4) {
      uVar5 = 4;
    }
    if (uVar5 + 0x18 <= local_3c) {
      local_3c = uVar5 + 0x18;
    }
  }
LAB_0179a130:
  *param_1 = local_44;
  param_1[1] = local_40;
  param_1[2] = local_3c;
  param_1[3] = local_38;
  param_1[4] = local_34;
  param_1[5] = param_2;
  param_1[6] = local_2c;
  return param_1;
}

