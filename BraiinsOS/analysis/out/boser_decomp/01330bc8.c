// FUN_01330bc8 @ 01330bc8 size=896 calls_out=4 calls_in=2
// strings: 

void FUN_01330bc8(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_58;
  uint local_38;
  int local_34;
  byte *local_30;
  uint local_2c;
  int local_28;
  
  iVar8 = *(int *)(param_2 + 0x10);
  uVar9 = *(uint *)(param_2 + 0x14);
  if (param_3 != 0) {
    if (param_3 < uVar9) {
      if (*(char *)(iVar8 + param_3) < -0x40) {
LAB_01330c00:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar8,uVar9,param_3,uVar9,&DAT_01ce639c);
      }
    }
    else if (uVar9 != param_3) goto LAB_01330c00;
  }
  FUN_0132ddfc(&local_38,iVar8 + param_3,uVar9 - param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_38 == 2) {
    param_1[5] = param_3;
    *param_1 = 2;
    param_1[1] = 0xe;
    return;
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    uVar2 = FUN_01a9c24c(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                         *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),local_30,
                         local_2c);
    uVar9 = uVar2 >> 0x19;
    uVar7 = *(uint *)(param_2 + 0x1c);
    iVar8 = *(int *)(param_2 + 0x18);
    local_58 = 0;
    while( true ) {
      uVar2 = uVar7 & uVar2;
      uVar3 = *(uint *)(iVar8 + uVar2);
      uVar4 = uVar3 ^ uVar9 * 0x1010101;
      uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
      while (uVar4 != 0) {
        uVar11 = uVar4 - 1 & uVar4;
        uVar10 = uVar2 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                        (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar7;
        iVar5 = iVar8 + -0x10 + uVar10 * -0x10;
        uVar4 = uVar11;
        if ((local_2c == *(uint *)(iVar5 + 8)) &&
           (iVar5 = thunk_FUN_01bed842(local_30,*(undefined4 *)(iVar5 + 4),local_2c), iVar5 == 0)) {
          uVar9 = *(uint *)(iVar8 + uVar10 * -0x10 + -4);
          goto LAB_01330de8;
        }
      }
      if ((uVar3 & 0x80808080 & uVar3 << 1) != 0) break;
      local_58 = local_58 + 4;
      uVar2 = uVar2 + local_58;
    }
  }
  if (local_2c == 0) {
    if ((local_38 & 1) == 0) {
      local_38 = 0;
      goto LAB_01330f20;
    }
  }
  else {
    if (local_2c == 1) {
      bVar1 = *local_30;
      if (bVar1 != 0x2b && bVar1 != 0x2d) goto LAB_01330e40;
    }
    else {
      bVar1 = *local_30;
LAB_01330e40:
      uVar2 = local_2c;
      pbVar6 = local_30;
      if (bVar1 == 0x2b) {
        pbVar6 = local_30 + 1;
        uVar2 = local_2c - 1;
      }
      if (uVar2 < 9) {
        uVar9 = 0;
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          bVar1 = *pbVar6;
          if (9 < bVar1 - 0x30) goto LAB_01330ed4;
          pbVar6 = pbVar6 + 1;
          uVar9 = (bVar1 - 0x30) + uVar9 * 10;
        }
        goto LAB_01330de8;
      }
      uVar9 = 0;
      while( true ) {
        if (uVar2 == 0) goto LAB_01330de8;
        uVar7 = (uint)((ulonglong)uVar9 * 10);
        if ((int)((ulonglong)uVar9 * 10 >> 0x20) != 0) break;
        uVar4 = *pbVar6 - 0x30;
        uVar9 = uVar4 + uVar7;
        if ((9 < uVar4) || (uVar2 = uVar2 - 1, pbVar6 = pbVar6 + 1, CARRY4(uVar4,uVar7))) break;
      }
    }
LAB_01330ed4:
    if ((local_38 & 1) == 0) {
      local_38 = 0;
      goto LAB_01330f20;
    }
    local_38 = 1;
    if (local_2c != 0) goto LAB_01330f20;
  }
  uVar2 = local_34 - (local_34 >> 0x1f);
  local_38 = 0;
  uVar9 = *(uint *)(param_2 + 0x3c) + uVar2;
  if (uVar2 < 0x80000000 != CARRY4(*(uint *)(param_2 + 0x3c),uVar2)) {
LAB_01330de8:
    *param_1 = 1;
    param_1[1] = uVar9;
    param_1[2] = local_38;
    param_1[3] = local_34;
    param_1[4] = local_28 + param_3;
    param_1[5] = 0;
    return;
  }
LAB_01330f20:
  param_1[4] = local_28 + param_3;
  param_1[2] = local_38;
  param_1[3] = local_34;
  param_1[5] = local_30;
  param_1[6] = local_2c;
  *param_1 = 0;
  return;
}

