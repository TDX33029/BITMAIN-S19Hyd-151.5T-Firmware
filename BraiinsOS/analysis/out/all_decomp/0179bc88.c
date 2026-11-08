// FUN_0179bc88 @ 0179bc88 size=908 calls_out=2 calls_in=1
// strings: 

uint * FUN_0179bc88(uint *param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if ((param_4 == 0xffffffff && param_3 == 0xffffffff) &&
     (uVar2 = *(uint *)(param_2 + 0x38), 0 < (int)uVar2)) {
    param_4 = (int)uVar2 >> 0x1f;
    param_3 = uVar2;
  }
  FUN_01799ec4(&local_48,*(undefined4 *)(param_2 + 0x2c),param_3,param_4,param_5,param_6);
  uVar2 = *(uint *)(param_2 + 0x54);
  bVar12 = uVar2 == 1;
  if (bVar12) {
    uVar2 = 0x1b;
  }
  if (!bVar12) {
    uVar2 = local_48;
  }
  if (*(uint *)(param_2 + 4) != 0) {
    uVar2 = *(uint *)(param_2 + 4);
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  if (*(uint *)(param_2 + 0xc) == 0) {
    uVar1 = local_40;
  }
  uVar6 = *(uint *)(param_2 + 8);
  if (*(uint *)(param_2 + 8) == 0) {
    uVar6 = local_44;
  }
  uVar11 = *(uint *)(param_2 + 0x10);
  if (*(uint *)(param_2 + 0x10) == 0) {
    uVar11 = local_3c;
  }
  uVar7 = *(uint *)(param_2 + 0x14);
  if (*(uint *)(param_2 + 0x14) == 0) {
    uVar7 = local_38;
  }
  uVar8 = *(uint *)(param_2 + 0x18);
  if (*(uint *)(param_2 + 0x18) == 0) {
    uVar8 = local_34;
  }
  uVar10 = *(uint *)(param_2 + 0x1c);
  if (*(uint *)(param_2 + 0x1c) == 0) {
    uVar10 = local_30;
  }
  if (param_6 == 1) {
    if (param_4 == 0 && (0x20000000 < param_3) <= param_4) {
      if (param_3 < 0x40) {
        if (5 < uVar2) {
          uVar2 = 6;
        }
      }
      else {
        uVar9 = 0x20 - LZCOUNT(param_3 - 1);
        if (uVar9 <= uVar2) {
          uVar2 = uVar9;
        }
      }
LAB_0179bf84:
      if (uVar2 + 1 <= uVar1) {
        uVar1 = uVar2 + 1;
      }
      if (uVar2 < uVar6 - (5 < uVar10)) {
        uVar6 = (5 < uVar10) + uVar2;
        if (uVar2 < 10) {
          uVar2 = 10;
        }
        goto LAB_0179be78;
      }
    }
    else if (param_4 != 0xffffffff || param_3 != 0xffffffff) goto LAB_0179bf84;
    if (uVar2 < 10) {
      uVar2 = 10;
    }
  }
  else {
    if ((param_6 == 2) && (param_5 != 0 && (param_4 == 0xffffffff && param_3 == 0xffffffff))) {
      if (param_5 < 0x20000001) {
        param_3 = 0x201;
        uVar9 = 0x20 - LZCOUNT(param_5 + 0x200);
        if (uVar9 <= uVar2) {
          uVar2 = uVar9;
        }
        param_4 = 0;
      }
      else {
        param_4 = 0;
        param_3 = 0x201;
      }
LAB_0179bdd0:
      param_4 = param_4 + CARRY4(param_3,param_5);
      uVar3 = 1 << (uVar2 - 0x20 & 0xff) | 1U >> (0x20 - uVar2 & 0xff);
      uVar9 = 1 << (uVar2 & 0xff);
      if (param_4 < uVar3 || uVar3 - param_4 < (uint)(param_3 + param_5 <= uVar9)) {
LAB_0179bfd8:
        uVar3 = uVar2 + 1;
        uVar9 = uVar2;
      }
      else {
        uVar3 = uVar3 + CARRY4(uVar9,param_5);
        if (uVar3 == 0 && (0x3fffffff < uVar9 + param_5) <= uVar3) {
          iVar4 = LZCOUNT((uVar9 + param_5) - 1);
          uVar3 = 0x21 - iVar4;
          uVar9 = 0x20 - iVar4;
        }
        else {
          uVar3 = 0x1f;
          uVar9 = 0x1e;
        }
      }
      if (uVar3 <= uVar1) {
        uVar1 = uVar3;
      }
      if (uVar9 < uVar6 - (5 < uVar10)) {
        uVar6 = (5 < uVar10) + uVar9;
      }
    }
    else {
      if (param_5 < 0x20000001 && (param_4 == 0 && (0x20000000 < param_3) <= param_4)) {
        if (param_5 + param_3 < 0x40) {
          uVar9 = 6;
        }
        else {
          uVar9 = 0x20 - LZCOUNT((param_5 + param_3) - 1);
        }
        if (uVar9 <= uVar2) {
          uVar2 = uVar9;
        }
LAB_0179bdc4:
        if (param_5 != 0) goto LAB_0179bdd0;
        goto LAB_0179bfd8;
      }
      if (param_4 != 0xffffffff || param_3 != 0xffffffff) goto LAB_0179bdc4;
    }
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    if ((param_6 == 2) && (uVar10 - 1 < 2)) {
      if (0x17 < uVar1) {
        uVar1 = 0x18;
      }
      if (0x17 < uVar6) {
        uVar6 = 0x18;
      }
      goto LAB_0179beac;
    }
  }
LAB_0179be78:
  uVar9 = uVar11;
  if (5 < uVar11) {
    uVar9 = 6;
  }
  uVar3 = uVar10 - 3;
  if (uVar9 < 4) {
    uVar9 = 4;
  }
  uVar5 = uVar9 + 0x18;
  if (uVar1 < uVar9 + 0x18) {
    uVar5 = uVar1;
  }
  bVar13 = 1 < uVar3;
  bVar12 = uVar3 == 2;
  if (uVar3 < 3) {
    bVar13 = *(int *)(param_2 + 0x84) != 0;
    bVar12 = *(int *)(param_2 + 0x84) == 1;
  }
  if (!bVar13 || bVar12) {
    uVar1 = uVar5;
  }
LAB_0179beac:
  *param_1 = uVar2;
  param_1[1] = uVar6;
  param_1[2] = uVar1;
  param_1[3] = uVar11;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar10;
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return param_1;
}

