// FUN_01573360 @ 01573360 size=628 calls_out=7 calls_in=0
// strings: 

void FUN_01573360(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint local_90;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar6 = (undefined4 *)FUN_01671160();
  uVar11 = *puVar6;
  iVar12 = puVar6[1];
  puVar6 = (undefined4 *)FUN_01671044();
  uVar11 = (**(code **)(iVar12 + 0xc))(uVar11);
  FUN_00653054(&local_48,puVar6[2],*puVar6,puVar6[1],puVar6[2],puVar6[3],puVar6 + 8,uVar11);
  iVar12 = thunk_FUN_01be5118(0x38);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x38);
  }
  puVar6 = (undefined4 *)(iVar12 + 0x30);
  *puVar6 = 0xffffffff;
  *(undefined4 *)(iVar12 + 0x34) = 0xffffffff;
  local_68 = local_48;
  uStack_64 = uStack_44;
  local_60 = uStack_40;
  uStack_5c = uStack_3c;
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  bVar5 = false;
  local_6c = 0;
  local_70 = 3;
  uVar7 = FUN_01676068(&local_68,&DAT_00569e88,0x10);
  uVar10 = uVar7;
  do {
    uVar13 = *(uint *)((int)puVar6 + (uVar10 & 3));
    uVar8 = uVar13 ^ (uVar7 >> 0x19) * 0x1010101;
    uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
    while (uVar8 != 0) {
      uVar9 = uVar8 >> 8;
      uVar1 = uVar8 >> 0x10;
      uVar2 = uVar8 >> 0x18;
      uVar3 = uVar8 << 0x18;
      uVar8 = uVar8 - 1 & uVar8;
      uVar9 = uVar10 + ((uint)LZCOUNT(uVar3 | (uVar9 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                       >> 3) & 3;
      if ((puVar6[uVar9 * -3 + -2] == 0x10) &&
         (iVar12 = thunk_FUN_01bed842(&DAT_00569e88,puVar6[uVar9 * -3 + -3],0x10), iVar12 == 0))
      goto LAB_01573598;
    }
    uVar8 = uVar13 & 0x80808080;
    if (bVar5) goto LAB_015734fc;
    if (uVar8 == 0) {
      bVar5 = false;
    }
    else {
      local_90 = uVar10 + ((uint)LZCOUNT((uVar13 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                         (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & 3;
LAB_015734fc:
      if ((uVar8 & uVar13 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar6 + local_90);
        if (-1 < (int)uVar10) {
          local_90 = 0;
        }
        bVar4 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)puVar6 + local_90) = bVar4;
        if (-1 < (int)uVar10) {
          uVar10 = 0xff;
        }
        *(byte *)((int)puVar6 + (local_90 & 3) + 4) = bVar4;
        local_70 = uVar10 & 1 ^ 3;
        puVar6[local_90 * -3 + -3] = &DAT_00569e88;
        puVar6[local_90 * -3 + -2] = 0x10;
        local_6c = 1;
        uVar9 = local_90;
LAB_01573598:
        puVar6[uVar9 * -3 + -1] = FUN_015735dc;
        *param_1 = puVar6;
        param_1[1] = 3;
        param_1[2] = local_70;
        param_1[3] = local_6c;
        param_1[4] = local_68;
        param_1[5] = uStack_64;
        param_1[6] = local_60;
        param_1[7] = uStack_5c;
        param_1[8] = local_58;
        param_1[9] = uStack_54;
        param_1[10] = uStack_50;
        param_1[0xb] = uStack_4c;
        return;
      }
      bVar5 = true;
    }
    uVar10 = uVar10 & 3;
  } while( true );
}

