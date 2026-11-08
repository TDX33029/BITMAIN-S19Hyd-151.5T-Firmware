// FUN_01147294 @ 01147294 size=876 calls_out=4 calls_in=2
// strings: 

void FUN_01147294(undefined4 *param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_30;
  uint local_2c;
  
  uVar7 = 0xffffffc5;
  if (param_4 >> 0x10 != 0) {
    uVar7 = 0xffffffc6;
  }
  if (param_4 < 0x100) {
    uVar7 = 0xffffffc4;
  }
  FUN_01153008(&local_30,param_2,uVar7);
  if ((char)local_30 == '\x04') {
    uVar2 = param_2[2];
    if (uVar7 == 0xffffffc5) {
      uVar7 = *param_2;
      uVar4 = (ushort)(param_4 >> 8);
      if (uVar7 - uVar2 < 2) {
        if (uVar2 < 0xfffffffe) {
          uVar6 = uVar2 + 2;
          if (uVar6 <= uVar7 * 2) {
            uVar6 = uVar7 << 1;
          }
          if (uVar6 < 9) {
            uVar6 = 8;
          }
          FUN_01150958(&local_30,uVar7,param_2[1],uVar6,1,1);
          if (local_30 != 1) {
            uVar4 = (ushort)((param_4 << 0x18) >> 0x10) | uVar4 & 0xff;
            uVar2 = param_2[2];
            *param_2 = uVar6;
            param_2[1] = local_2c;
            if (uVar6 - uVar2 < 2) {
              FUN_01150aa8(param_2,uVar2,2);
              uVar2 = param_2[2];
            }
            goto LAB_0114742c;
          }
        }
LAB_011473ec:
        uVar7 = 0x26;
        local_30 = 1;
        uVar2 = 0;
        local_2c = 0;
        uVar5 = 1;
        goto LAB_011473f4;
      }
      uVar4 = (ushort)((param_4 << 0x18) >> 0x10) | uVar4 & 0xff;
LAB_0114742c:
      *(ushort *)(param_2[1] + uVar2) = uVar4;
      iVar1 = 2;
    }
    else if ((uVar7 & 0xff) == 0xc4) {
      uVar7 = *param_2;
      if (uVar7 == uVar2) {
        uVar7 = 8;
        if (8 < uVar2 * 2) {
          uVar7 = uVar2 << 1;
        }
        FUN_01150958(&local_30,uVar2,param_2[1],uVar7,1,1);
        if (local_30 != 0) goto LAB_011473ec;
        uVar2 = param_2[2];
        *param_2 = uVar7;
        param_2[1] = local_2c;
        if (uVar7 == uVar2) goto LAB_0114755c;
      }
      else if (uVar7 == uVar2) {
LAB_0114755c:
        FUN_01150aa8(param_2,uVar7,1);
        uVar2 = param_2[2];
      }
      *(char *)(param_2[1] + uVar2) = (char)param_4;
      iVar1 = 1;
    }
    else {
      uVar7 = *param_2;
      if (uVar7 - uVar2 < 4) {
        if (uVar2 < 0xfffffffc) {
          uVar6 = uVar2 + 4;
          if (uVar6 <= uVar7 * 2) {
            uVar6 = uVar7 << 1;
          }
          if (uVar6 < 9) {
            uVar6 = 8;
          }
          FUN_01150958(&local_30,uVar7,param_2[1],uVar6,1,1);
          if (local_30 != 1) {
            uVar2 = param_2[2];
            *param_2 = uVar6;
            param_2[1] = local_2c;
            uVar7 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8
                    | param_4 >> 0x18;
            if (uVar6 - uVar2 < 4) {
              FUN_01150aa8(param_2,uVar2,4);
              uVar2 = param_2[2];
            }
            goto LAB_01147444;
          }
        }
        goto LAB_011473ec;
      }
      uVar7 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
              param_4 >> 0x18;
LAB_01147444:
      *(uint *)(param_2[1] + uVar2) = uVar7;
      iVar1 = 4;
    }
    uVar3 = *param_2;
    uVar2 = param_2[2] + iVar1;
    param_2[2] = uVar2;
    uVar7 = uVar3 - uVar2;
    if (param_4 <= uVar7) {
LAB_011474cc:
      if (uVar7 < param_4) {
        FUN_01150aa8(param_2,uVar2,param_4);
        uVar2 = param_2[2];
      }
      FUN_016dd1aa(param_2[1] + uVar2,param_3,param_4);
      param_2[2] = param_2[2] + param_4;
      *param_1 = 5;
      return;
    }
    uVar8 = param_4 + uVar2;
    uVar6 = 0;
    uVar7 = 0x2601;
    uVar5 = 1;
    if (!CARRY4(param_4,uVar2)) {
      if (uVar8 <= uVar3 * 2) {
        uVar8 = uVar3 << 1;
      }
      if (uVar8 < 9) {
        uVar8 = 8;
      }
      FUN_01150958(&local_30,uVar3,param_2[1],uVar8,1,1);
      if (local_30 != 1) {
        uVar2 = param_2[2];
        uVar7 = uVar8 - uVar2;
        *param_2 = uVar8;
        param_2[1] = local_2c;
        goto LAB_011474cc;
      }
    }
  }
  else {
    uVar5 = 0;
    uVar7 = local_30 >> 8;
    uVar2 = local_30 >> 0x10 | local_2c << 0x10;
    local_2c = local_2c >> 0x10;
LAB_011473f4:
    uVar6 = local_2c << 0x10 | uVar2 >> 0x10;
    uVar7 = local_30 & 0xff | uVar2 << 0x10 | (uVar7 & 0xff) << 8;
  }
  param_1[1] = uVar5;
  param_1[2] = uVar7;
  param_1[3] = uVar6;
  *param_1 = 0;
  return;
}

