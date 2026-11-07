// FUN_01153164 @ 01153164 size=648 calls_out=3 calls_in=2
// strings: 

void FUN_01153164(undefined4 *param_1,uint *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_2c;
  uint local_28;
  
  uVar6 = 0xffffffdc;
  uVar7 = *param_2;
  uVar5 = param_2[2];
  if (param_3 >> 0x10 != 0) {
    uVar6 = 0xffffffdd;
  }
  if (param_3 < 0x10) {
    uVar6 = 0xffffff90;
  }
  if (uVar7 == uVar5) {
    uVar7 = 8;
    if (8 < uVar5 * 2) {
      uVar7 = uVar5 << 1;
    }
    FUN_01150958(&local_2c,uVar5,param_2[1],uVar7,1,1);
    if (local_2c != 0) {
      *param_1 = 0;
      param_1[1] = 0x2601;
      param_1[2] = 0;
      return;
    }
    uVar5 = param_2[2];
    *param_2 = uVar7;
    param_2[1] = local_28;
  }
  uVar1 = FUN_011530f4(uVar6,param_3);
  if (uVar7 == uVar5) {
    FUN_01150aa8(param_2,uVar7,1);
    uVar5 = param_2[2];
  }
  *(undefined1 *)(param_2[1] + uVar5) = uVar1;
  uVar7 = param_2[2];
  uVar5 = uVar7 + 1;
  param_2[2] = uVar5;
  if (uVar6 == 0xffffffdd) {
    uVar3 = *param_2;
    if (uVar3 - uVar5 < 4) {
      uVar7 = uVar7 + 5;
      if (uVar7 < uVar5) {
LAB_01153284:
        *param_1 = 1;
        param_1[1] = 0x2601;
        param_1[2] = 0;
        return;
      }
      if (uVar7 <= uVar3 * 2) {
        uVar7 = uVar3 << 1;
      }
      if (uVar7 < 9) {
        uVar7 = 8;
      }
      FUN_01150958(&local_2c,uVar3,param_2[1],uVar7,1,1);
      if (local_2c == 1) goto LAB_01153284;
      uVar5 = param_2[2];
      *param_2 = uVar7;
      uVar3 = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
              param_3 >> 0x18;
      param_2[1] = local_28;
      if (uVar7 - uVar5 < 4) {
        FUN_01150aa8(param_2,uVar5,4);
        uVar5 = param_2[2];
      }
    }
    else {
      uVar3 = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
              param_3 >> 0x18;
    }
    *(uint *)(param_2[1] + uVar5) = uVar3;
    iVar2 = 4;
  }
  else {
    if ((uVar6 & 0xff) != 0xdc) goto LAB_011532dc;
    uVar3 = *param_2;
    uVar4 = (ushort)(param_3 >> 8);
    if (uVar3 - uVar5 < 2) {
      uVar7 = uVar7 + 3;
      if (uVar7 < uVar5) goto LAB_01153284;
      if (uVar7 <= uVar3 * 2) {
        uVar7 = uVar3 << 1;
      }
      if (uVar7 < 9) {
        uVar7 = 8;
      }
      FUN_01150958(&local_2c,uVar3,param_2[1],uVar7,1,1);
      if (local_2c == 1) goto LAB_01153284;
      uVar5 = param_2[2];
      uVar4 = (ushort)((param_3 << 0x18) >> 0x10) | uVar4 & 0xff;
      *param_2 = uVar7;
      param_2[1] = local_28;
      if (uVar7 - uVar5 < 2) {
        FUN_01150aa8(param_2,uVar5,2);
        uVar5 = param_2[2];
      }
    }
    else {
      uVar4 = (ushort)((param_3 << 0x18) >> 0x10) | uVar4 & 0xff;
    }
    *(ushort *)(param_2[1] + uVar5) = uVar4;
    iVar2 = 2;
  }
  param_2[2] = param_2[2] + iVar2;
LAB_011532dc:
  *(char *)((int)param_1 + 5) = (char)param_3;
  *(char *)(param_1 + 1) = (char)uVar6;
  *param_1 = 2;
  return;
}

