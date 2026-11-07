// FUN_01563000 @ 01563000 size=1168 calls_out=12 calls_in=1
// strings: 

byte FUN_01563000(int param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  byte bVar15;
  uint local_90;
  int local_78;
  int local_74;
  uint local_70;
  int local_64;
  undefined4 local_60;
  undefined4 *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar13 = (undefined4 *)(param_1 + 0x30);
  puVar11 = (uint *)*puVar13;
  iVar3 = param_1;
  if (puVar11 != (uint *)0x0) {
    iVar3 = *(int *)(param_1 + 0x3c);
  }
  if (puVar11 != (uint *)0x0 && iVar3 != 0) {
    uVar6 = FUN_0155d010(param_1 + 0x40,param_2,param_3);
    uVar5 = uVar6 >> 0x19;
    uVar10 = *(uint *)(param_1 + 0x34);
    local_74 = 0;
    while( true ) {
      uVar6 = uVar10 & uVar6;
      uVar7 = *(uint *)((int)puVar11 + uVar6);
      uVar14 = uVar7 ^ uVar5 * 0x1010101;
      uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
      while (uVar14 != 0) {
        uVar9 = uVar14 - 1 & uVar14;
        uVar8 = uVar6 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                       (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) & uVar10
        ;
        uVar14 = uVar9;
        if ((param_3 == puVar11[uVar8 * -4 + -2]) &&
           (iVar3 = thunk_FUN_01bed842(param_2,puVar11[uVar8 * -4 + -3],param_3), iVar3 == 0)) {
          bVar15 = (byte)puVar11[uVar8 * -4 + -1];
          goto LAB_015633e4;
        }
      }
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
      local_74 = local_74 + 4;
      uVar6 = uVar6 + local_74;
    }
  }
  FUN_0157bf74(&local_64,param_2,param_3);
  bVar15 = local_64 != -0x7fffffff;
  if (-0x7fffffff < local_64) {
    FUN_019bb7e0(local_64,local_60);
  }
  if (puVar11 == (uint *)0x0) {
    puVar4 = (undefined4 *)FUN_01671160();
    uVar12 = *puVar4;
    iVar3 = puVar4[1];
    puVar4 = (undefined4 *)FUN_01671044();
    uVar12 = (**(code **)(iVar3 + 0xc))(uVar12);
    FUN_00653054(&uStack_48,puVar4[2],*puVar4,puVar4[1],puVar4[2],puVar4[3],puVar4 + 8,uVar12);
    local_58 = &DAT_0056d238;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    *puVar13 = &DAT_0056d238;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = uStack_48;
    *(undefined4 *)(param_1 + 0x44) = uStack_44;
    *(undefined4 *)(param_1 + 0x48) = local_40;
    *(undefined4 *)(param_1 + 0x4c) = uStack_3c;
    *(undefined4 *)(param_1 + 0x50) = uStack_38;
    *(undefined4 *)(param_1 + 0x54) = uStack_34;
    *(undefined4 *)(param_1 + 0x58) = uStack_30;
    *(undefined4 *)(param_1 + 0x5c) = uStack_2c;
    puVar11 = (uint *)*puVar13;
  }
  uVar12 = 0;
  if ((int)param_3 < 0) {
LAB_015630ec:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar12,param_3);
  }
  if (param_3 == 0) {
    uVar5 = 1;
    local_70 = 0;
  }
  else {
    uVar12 = 1;
    uVar5 = FUN_01298504(param_3,1);
    local_70 = param_3;
    if (uVar5 == 0) goto LAB_015630ec;
  }
  FUN_01bed4e2(uVar5,param_2,param_3);
  uVar6 = FUN_01676700(param_1 + 0x40,uVar5,param_3);
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_01530a88(puVar13,param_1 + 0x40);
    puVar11 = (uint *)*puVar13;
  }
  uVar14 = *(uint *)(param_1 + 0x34);
  bVar2 = false;
  local_78 = 0;
  uVar10 = uVar6;
  do {
    uVar10 = uVar14 & uVar10;
    uVar7 = *(uint *)((int)puVar11 + uVar10);
    uVar8 = uVar7 ^ (uVar6 >> 0x19) * 0x1010101;
    for (uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = uVar10 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                      (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar14;
      if ((param_3 == puVar11[uVar9 * -4 + -2]) &&
         (iVar3 = thunk_FUN_01bed842(uVar5,puVar11[uVar9 * -4 + -3],param_3), iVar3 == 0)) {
        *(bool *)(puVar11 + uVar9 * -4 + -1) = local_64 != -0x7fffffff;
        FUN_019bb7e0(local_70,uVar5);
        goto LAB_015633e4;
      }
    }
    uVar8 = uVar7 & 0x80808080;
    if (bVar2) goto LAB_01563374;
    if (uVar8 == 0) {
      bVar2 = false;
    }
    else {
      local_90 = uVar10 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                         (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar14
      ;
LAB_01563374:
      if ((uVar8 & uVar7 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar11 + local_90);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar11 & 0x80808080;
          uVar7 = LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar11 + (uVar7 >> 3));
          local_90 = uVar7 >> 3;
        }
        bVar1 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar11 + local_90) = bVar1;
        *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - (uVar10 & 1);
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
        *(byte *)((int)puVar11 + (uVar14 & local_90 - 4) + 4) = bVar1;
        *(bool *)(puVar11 + local_90 * -4 + -1) = local_64 != -0x7fffffff;
        puVar11[local_90 * -4 + -4] = local_70;
        puVar11[local_90 * -4 + -3] = uVar5;
        puVar11[local_90 * -4 + -2] = param_3;
LAB_015633e4:
        return bVar15 & 1;
      }
      bVar2 = true;
    }
    local_78 = local_78 + 4;
    uVar10 = local_78 + uVar10;
  } while( true );
}

