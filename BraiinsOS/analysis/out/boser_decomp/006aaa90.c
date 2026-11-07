// FUN_006aaa90 @ 006aaa90 size=1060 calls_out=10 calls_in=1
// strings: 

void FUN_006aaa90(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int local_98;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar9 = 0;
  if ((int)param_3 < 0) {
LAB_006aaaa8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar9,param_3);
  }
  local_98 = 0;
  if (param_3 == 0) {
    uVar3 = 1;
    local_8c = 0;
  }
  else {
    uVar9 = 1;
    uVar3 = FUN_01298504(param_3,1);
    local_8c = param_3;
    if (uVar3 == 0) goto LAB_006aaaa8;
  }
  FUN_01bed4e2(uVar3,param_2,param_3);
  uVar4 = FUN_01adafd4(param_1[4],param_1[5],param_1[6],param_1[7],uVar3,param_3);
  uVar10 = param_1[1];
  iVar11 = *param_1;
  uVar8 = uVar4;
  while( true ) {
    uVar8 = uVar10 & uVar8;
    uVar13 = *(uint *)(iVar11 + uVar8);
    uVar5 = uVar13 ^ (uVar4 >> 0x19) * 0x1010101;
    for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar12 = iVar11 + (uVar8 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                                (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                        uVar10) * -0x40;
      if ((*(uint *)(uVar12 - 0x38) == param_3) &&
         (iVar6 = thunk_FUN_01bed842(*(undefined4 *)(uVar12 - 0x3c),uVar3,param_3), iVar6 == 0)) {
        FUN_019bb7e0(local_8c,uVar3);
        bVar2 = true;
        goto LAB_006aac6c;
      }
    }
    if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
    local_98 = local_98 + 4;
    uVar8 = uVar8 + local_98;
  }
  if (param_1[2] == 0) {
    FUN_006b5e88(param_1,param_1 + 4);
  }
  bVar2 = local_8c == 0x80000000;
  uVar12 = uVar4;
  if (local_8c == 0x80000000) {
LAB_006aac6c:
    uVar9 = 0;
    if ((int)param_5 < 0) {
LAB_006aac78:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,param_5);
    }
    if (param_5 == 0) {
      uVar4 = 1;
      uVar8 = 0;
    }
    else {
      uVar9 = 1;
      uVar4 = FUN_01298504(param_5,1);
      uVar8 = param_5;
      if (uVar4 == 0) goto LAB_006aac78;
    }
    FUN_01bed4e2(uVar4,param_4,param_5);
    local_58 = uVar8;
    local_54 = uVar4;
    local_50 = param_5;
    FUN_006dd1ec(uVar12 - 0x30,&local_58);
    local_8c = 0x80000000;
  }
  FUN_006e01d0(&local_58);
  uVar8 = 0;
  if ((int)param_5 < 0) {
LAB_006aacf8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar8,param_5);
  }
  if (param_5 == 0) {
    local_84 = 1;
  }
  else {
    uVar8 = 1;
    local_84 = FUN_01298504(param_5,1);
    if (local_84 == 0) goto LAB_006aacf8;
    uVar8 = param_5;
  }
  FUN_01bed4e2(local_84,param_4,param_5);
  local_88 = uVar8;
  local_80 = param_5;
  FUN_006dd1ec(&local_58,&local_88);
  local_88 = local_58;
  local_84 = local_54;
  local_80 = local_50;
  uStack_7c = uStack_4c;
  uStack_78 = local_48;
  uStack_74 = uStack_44;
  local_70 = local_40;
  uStack_6c = uStack_3c;
  uStack_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  if (bVar2) {
    FUN_00be3ec0(&local_88);
  }
  else {
    puVar7 = (uint *)((uint)&local_58 | 4);
    *puVar7 = local_58;
    puVar7[1] = local_54;
    puVar7[2] = local_50;
    puVar7[3] = uStack_4c;
    puVar7[4] = local_48;
    puVar7[5] = uStack_44;
    puVar7[6] = local_40;
    puVar7[7] = uStack_3c;
    puVar7[8] = local_38;
    puVar7[9] = uStack_34;
    puVar7[10] = uStack_30;
    puVar7[0xb] = uStack_2c;
    puVar7 = (uint *)*param_1;
    uVar8 = param_1[1];
    uVar4 = uVar8 & uVar12;
    uVar10 = *(uint *)((int)puVar7 + uVar4) & 0x80808080;
    if (uVar10 == 0) {
      iVar11 = 4;
      do {
        uVar4 = uVar4 + iVar11;
        iVar11 = iVar11 + 4;
        uVar4 = uVar4 & uVar8;
        uVar10 = *(uint *)((int)puVar7 + uVar4) & 0x80808080;
      } while (uVar10 == 0);
    }
    uVar4 = uVar4 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                   (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) & uVar8;
    uVar10 = (uint)*(char *)((int)puVar7 + uVar4);
    if (-1 < (int)uVar10) {
      uVar4 = *puVar7 & 0x80808080;
      uVar4 = LZCOUNT((*puVar7 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
      uVar10 = (uint)*(byte *)((int)puVar7 + (uVar4 >> 3));
      uVar4 = uVar4 >> 3;
    }
    iVar11 = param_1[2];
    bVar1 = (byte)(uVar12 >> 0x19);
    *(byte *)((int)puVar7 + uVar4) = bVar1;
    param_1[2] = iVar11 - (uVar10 & 1);
    *(byte *)((int)puVar7 + (uVar4 - 4 & uVar8) + 4) = bVar1;
    puVar7[uVar4 * -0x10 + -0x10] = local_8c;
    puVar7[uVar4 * -0x10 + -0xf] = uVar3;
    puVar7[uVar4 * -0x10 + -0xe] = param_3;
    puVar7[uVar4 * -0x10 + -0xd] = local_58;
    puVar7[uVar4 * -0x10 + -0xc] = local_54;
    puVar7[uVar4 * -0x10 + -0xb] = local_50;
    puVar7[uVar4 * -0x10 + -10] = uStack_4c;
    puVar7[uVar4 * -0x10 + -9] = local_48;
    puVar7[uVar4 * -0x10 + -8] = uStack_44;
    puVar7[uVar4 * -0x10 + -7] = local_40;
    puVar7[uVar4 * -0x10 + -6] = uStack_3c;
    puVar7[uVar4 * -0x10 + -5] = local_38;
    puVar7[uVar4 * -0x10 + -4] = uStack_34;
    puVar7[uVar4 * -0x10 + -3] = uStack_30;
    puVar7[uVar4 * -0x10 + -2] = uStack_2c;
    puVar7[uVar4 * -0x10 + -1] = uStack_28;
    param_1[3] = param_1[3] + 1;
  }
  return;
}

