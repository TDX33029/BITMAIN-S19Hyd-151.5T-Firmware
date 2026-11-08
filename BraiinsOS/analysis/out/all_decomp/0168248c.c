// FUN_0168248c @ 0168248c size=620 calls_out=7 calls_in=6
// strings: 

int FUN_0168248c(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined1 auStack_78 [72];
  uint local_30;
  
  puVar5 = (uint *)param_1[3];
  uVar7 = param_1[4];
  uVar2 = uVar7 & param_2;
  uVar9 = param_1[6];
  uVar6 = *(uint *)((int)puVar5 + uVar2) & 0x80808080;
  if (uVar6 == 0) {
    iVar3 = 4;
    do {
      uVar2 = uVar2 + iVar3;
      iVar3 = iVar3 + 4;
      uVar2 = uVar2 & uVar7;
      uVar6 = *(uint *)((int)puVar5 + uVar2) & 0x80808080;
    } while (uVar6 == 0);
  }
  uVar2 = uVar2 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                 (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar7;
  bVar1 = *(byte *)((int)puVar5 + uVar2);
  if ((char)bVar1 < '\0') {
    uVar6 = param_1[5];
  }
  else {
    uVar2 = *puVar5 & 0x80808080;
    uVar2 = LZCOUNT((*puVar5 & 0x80) << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                    (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18);
    bVar1 = *(byte *)((int)puVar5 + (uVar2 >> 3));
    uVar2 = uVar2 >> 3;
    uVar6 = param_1[5];
  }
  uVar8 = bVar1 & 1;
  uVar4 = uVar9;
  if (((bVar1 & 1) != 0) && (uVar6 == 0)) {
    FUN_0167cb88(param_1 + 3,1,param_1[1],param_1[2]);
    puVar5 = (uint *)param_1[3];
    uVar7 = param_1[4];
    uVar2 = FUN_01021d34(puVar5,uVar7,param_2,0);
    uVar6 = param_1[5];
    uVar8 = *(byte *)((int)puVar5 + uVar2) & 1;
    uVar4 = param_1[6];
  }
  bVar1 = (byte)(param_2 >> 0x19);
  *(byte *)((int)puVar5 + uVar2) = bVar1;
  *(byte *)((int)puVar5 + (uVar2 - 4 & uVar7) + 4) = bVar1;
  puVar5[-1 - uVar2] = uVar9;
  uVar2 = *param_1;
  uVar7 = param_1[2];
  param_1[5] = uVar6 - uVar8;
  param_1[6] = uVar4 + 1;
  if (uVar7 == uVar2) {
    uVar6 = param_1[5] + param_1[6];
    uVar2 = 0xaaaaaa;
    if (uVar6 < 0xaaaaaa) {
      uVar2 = uVar6;
    }
    if (((uVar2 - uVar7 < 2) || (uVar6 < uVar7)) ||
       (FUN_0166e228(&local_e8,uVar7,param_1[1],uVar2,8,0xc0), local_e8 == 1)) {
      uVar2 = uVar7 + 1;
      FUN_0166e228(&local_e8,uVar7,param_1[1],uVar2,8,0xc0);
      if (local_e8 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_e4,local_e0);
      }
    }
    *param_1 = uVar2;
    param_1[1] = local_e4;
  }
  FUN_016dd1aa(auStack_78,param_3,0x48);
  FUN_016dd1aa(&local_e8,param_4,0x70);
  local_30 = param_2;
  if (uVar7 == uVar2) {
    FUN_0166e1c4(param_1);
  }
  FUN_016dd1aa(param_1[1] + uVar7 * 0xc0,&local_e8,0xc0);
  param_1[2] = uVar7 + 1;
  if (uVar7 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar9,uVar7 + 1,&DAT_018adbe8);
  }
  return param_1[1] + uVar9 * 0xc0;
}

