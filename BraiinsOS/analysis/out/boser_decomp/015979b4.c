// FUN_015979b4 @ 015979b4 size=612 calls_out=4 calls_in=2
// strings: 

bool FUN_015979b4(uint *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_7c;
  int local_78;
  uint *local_60;
  uint local_5c;
  int local_58;
  int local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint *local_30;
  uint local_28;
  
  local_60 = (uint *)*param_2;
  local_5c = param_2[1];
  local_58 = param_2[2];
  local_54 = param_2[3];
  uStack_50 = param_2[4];
  uStack_4c = param_2[5];
  local_48 = param_2[6];
  uStack_44 = param_2[7];
  uStack_40 = param_2[8];
  uStack_3c = param_2[9];
  uStack_38 = param_2[10];
  uStack_34 = param_2[0xb];
  local_30 = param_1 + 2;
  uVar10 = param_1[1];
  uVar12 = *param_1;
LAB_015979f8:
  if (uVar12 == uVar10) {
LAB_01597bd8:
    if ((local_5c != 0) && (iVar7 = local_5c * 4 + 4, local_5c + iVar7 != -5)) {
      thunk_FUN_01be4678((int)local_60 - iVar7);
    }
    return uVar12 != uVar10;
  }
  *param_1 = uVar12 + 0x18;
  local_28 = uVar12;
  uVar5 = FUN_0155c9a8(&uStack_50,&local_28);
  if (local_58 == 0) {
    FUN_0152b8ac(&local_60,&uStack_50);
  }
  uVar9 = local_5c;
  puVar4 = local_60;
  bVar3 = false;
  local_78 = 0;
  uVar11 = uVar5;
  do {
    uVar11 = uVar9 & uVar11;
    uVar13 = *(uint *)((int)puVar4 + uVar11);
    uVar6 = uVar13 ^ (uVar5 >> 0x19) * 0x1010101;
    uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
    while (uVar6 != 0) {
      iVar7 = FUN_01578ae8(uVar12,local_60[-1 - (uVar11 + ((uint)LZCOUNT(uVar6 << 0x18 |
                                                                         (uVar6 >> 8 & 0xff) << 0x10
                                                                         | (uVar6 >> 0x10 & 0xff) <<
                                                                           8 | uVar6 >> 0x18) >> 3)
                                                & uVar9)]);
      uVar6 = uVar6 - 1 & uVar6;
      if (iVar7 != 0) goto LAB_01597bd8;
    }
    uVar8 = uVar13 & 0x80808080;
    uVar6 = local_7c;
    if (bVar3) {
LAB_01597af4:
      if ((uVar8 & uVar13 << 1) != 0) break;
      bVar3 = true;
      local_7c = uVar6;
    }
    else {
      if (uVar8 != 0) {
        uVar6 = uVar11 + ((uint)LZCOUNT((uVar13 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                        (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar9;
        goto LAB_01597af4;
      }
      bVar3 = false;
    }
    local_78 = local_78 + 4;
    uVar11 = local_78 + uVar11;
  } while( true );
  if (-1 < *(char *)((int)puVar4 + uVar6)) {
    uVar9 = *puVar4 & 0x80808080;
    uVar6 = (uint)LZCOUNT((*puVar4 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                          (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
  }
  bVar1 = *(byte *)((int)local_60 + uVar6);
  bVar2 = (byte)(uVar5 >> 0x19);
  *(byte *)((int)local_60 + uVar6) = bVar2;
  *(byte *)((int)local_60 + (local_5c & uVar6 - 4) + 4) = bVar2;
  local_60[-1 - uVar6] = uVar12;
  local_54 = local_54 + 1;
  local_58 = local_58 - (bVar1 & 1);
  uVar12 = uVar12 + 0x18;
  goto LAB_015979f8;
}

