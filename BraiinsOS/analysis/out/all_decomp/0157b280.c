// FUN_0157b280 @ 0157b280 size=844 calls_out=5 calls_in=4
// strings: 

void FUN_0157b280(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  undefined4 local_30 [3];
  
  uVar9 = *(uint *)(param_2 + 0x10);
  uVar10 = *(uint *)(param_2 + 0x14);
  uVar8 = 0;
  uVar14 = CONCAT44(param_6,param_5);
  uVar11 = uVar8;
  if (uVar10 < uVar9) {
    uVar11 = uVar9 - uVar10;
    iVar7 = uVar10 + 2;
    iVar3 = uVar10 + *(int *)(param_2 + 0xc);
    do {
      iVar3 = iVar3 + 1;
      uVar10 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + iVar7 + -2);
      if (9 < uVar10 - 0x30) {
        if (uVar10 == 0x2e) {
          uVar11 = iVar7 - 1;
          *(uint *)(param_2 + 0x14) = uVar11;
          if (uVar11 < uVar9) {
            iVar4 = 0;
            goto LAB_0157b450;
          }
          local_30[0] = 5;
          goto LAB_0157b5a8;
        }
        uVar11 = uVar8;
        if (uVar10 == 0x45 || uVar10 == 0x65) {
          uVar14 = CONCAT44(param_6,param_5);
          goto LAB_0157b31c;
        }
        break;
      }
      iVar4 = iVar7 + -1;
      iVar7 = iVar7 + 1;
      uVar8 = uVar8 + 1;
      *(int *)(param_2 + 0x14) = iVar4;
    } while (iVar7 - uVar9 != 2);
  }
  dVar12 = (double)FUN_01845f30();
  uVar8 = uVar11;
  if ((int)uVar11 < 0) {
    uVar8 = -uVar11;
  }
  while (0x134 < uVar8) {
    if (dVar12 == 0.0) goto LAB_0157b3dc;
    if (uVar11 < 0x80000000) goto LAB_0157b3b8;
    dVar12 = dVar12 / 1e+308;
    uVar11 = uVar11 + 0x134;
    uVar8 = uVar11;
    if ((int)uVar11 < 0) {
      uVar8 = -uVar11;
    }
  }
  if ((int)uVar11 < 0) {
    dVar12 = dVar12 / (double)(&DAT_0040ddb8)[uVar8];
  }
  else {
    dVar12 = dVar12 * (double)(&DAT_0040ddb8)[uVar8];
    if (SUB84(dVar12,0) == 0 && ((uint)((ulonglong)dVar12 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
LAB_0157b3b8:
      local_30[0] = 0xe;
      uVar1 = FUN_005b8c9c(param_2,local_30);
LAB_0157b5b8:
      *param_1 = 1;
      param_1[1] = uVar1;
      return;
    }
  }
LAB_0157b3dc:
  dVar13 = -dVar12;
  if (param_3 != 0) {
    dVar13 = dVar12;
  }
  *param_1 = 0;
  *(double *)(param_1 + 2) = dVar13;
  return;
  while( true ) {
    if ((0x19999998 < uVar10 && (uint)((uint)uVar14 < 0x99999999) <= 0x19999999 - uVar10) &&
       ((uVar14 != 0x1999999999999999 || (5 < uVar6)))) {
      FUN_0157b698(param_1,param_2,param_3,iVar3,uVar14,iVar4 + uVar8);
      return;
    }
    uVar14 = (uVar14 & 0xffffffff) * 10 + (CONCAT44(uVar10 * 10,uVar5) & 0xffffffff000000ff);
    iVar2 = iVar7 - iVar4;
    iVar4 = iVar4 + -1;
    *(int *)(param_2 + 0x14) = iVar2;
    if (~uVar9 + iVar7 == iVar4) break;
LAB_0157b450:
    uVar10 = (uint)(uVar14 >> 0x20);
    uVar5 = *(byte *)(iVar3 - iVar4) - 0x30;
    uVar6 = uVar5 & 0xff;
    if (9 < uVar6) {
      if (iVar4 == 0) {
        local_30[0] = 0xd;
LAB_0157b5a8:
        uVar1 = FUN_008f9984(param_2,local_30);
        goto LAB_0157b5b8;
      }
      uVar8 = iVar4 + uVar8;
      if ((*(byte *)(iVar3 - iVar4) | 0x20) == 0x65) {
LAB_0157b31c:
        FUN_0126f078(param_1,param_2,param_3,iVar3,uVar14,uVar8);
        return;
      }
      goto LAB_0157b4fc;
    }
  }
  uVar8 = (uVar11 - uVar9) + uVar8;
LAB_0157b4fc:
  dVar12 = (double)FUN_01845f30((int)uVar14);
  uVar11 = uVar8;
  if ((int)uVar8 < 0) {
    uVar11 = -uVar8;
  }
  while (0x134 < uVar11) {
    if (dVar12 == 0.0) goto LAB_0157b3dc;
    if (uVar8 < 0x80000000) goto LAB_0157b3b8;
    dVar12 = dVar12 / 1e+308;
    uVar8 = uVar8 + 0x134;
    uVar11 = uVar8;
    if ((int)uVar8 < 0) {
      uVar11 = -uVar8;
    }
  }
  if ((int)uVar8 < 0) {
    dVar12 = dVar12 / (double)(&DAT_0040ddb8)[uVar11];
  }
  else {
    dVar12 = dVar12 * (double)(&DAT_0040ddb8)[uVar11];
    if (SUB84(dVar12,0) == 0 && ((uint)((ulonglong)dVar12 >> 0x20) & 0x7fffffff) == 0x7ff00000)
    goto LAB_0157b3b8;
  }
  goto LAB_0157b3dc;
}

