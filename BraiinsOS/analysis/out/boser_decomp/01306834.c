// FUN_01306834 @ 01306834 size=720 calls_out=0 calls_in=1
// strings: 

void FUN_01306834(uint *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6
                 )

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  
  uVar10 = 0;
  param_1[2] = 0x7ff;
  *param_1 = 0;
  param_1[1] = 0;
  if (((int)(param_4 - ((param_3 < 0xfffffeaa) - 1)) < 0 ==
       (SBORROW4(param_4,-1) != SBORROW4(param_4 + 1,(uint)(param_3 < 0xfffffeaa)))) &&
     (param_5 != 0 || param_6 != 0)) {
    if ((int)-(param_4 + (uint)(0x134 < param_3)) < 0 !=
        (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(0x134 < param_3)))) {
      return;
    }
    iVar11 = LZCOUNT(param_5) + 0x20;
    if (param_6 != 0) {
      iVar11 = LZCOUNT(param_6);
    }
    iVar1 = param_3 * 0x10;
    uVar6 = iVar11 - 0x20;
    uVar10 = param_5 << iVar11;
    if (-1 < (int)uVar6) {
      uVar10 = 0;
    }
    uVar3 = (ulonglong)uVar10 * (ulonglong)*(uint *)(&DAT_00424020 + iVar1);
    uVar8 = (uint)uVar3;
    lVar2 = (ulonglong)uVar10 * (ulonglong)*(uint *)(&DAT_00424024 + iVar1) + (uVar3 >> 0x20);
    uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = param_5 >> (0x20U - iVar11 & 0xff) | param_6 << iVar11;
    if (-1 < (int)uVar6) {
      uVar9 = param_5 << (uVar6 & 0xff);
    }
    lVar4 = (ulonglong)uVar9 * (ulonglong)*(uint *)(&DAT_00424020 + iVar1);
    uVar7 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar6 = (uint)(lVar2 + lVar4);
    lVar2 = (ulonglong)uVar9 * (ulonglong)*(uint *)(&DAT_00424024 + iVar1) +
            (ulonglong)
            CONCAT14(CARRY4(uVar12,uVar7) ||
                     CARRY4(uVar12 + uVar7,(uint)CARRY4((uint)lVar4,(uint)lVar2)),
                     (int)((ulonglong)(lVar2 + lVar4) >> 0x20));
    uVar12 = (uint)lVar2;
    if ((~uVar12 & 0x1ff) == 0) {
      lVar5 = (ulonglong)uVar9 * (ulonglong)*(uint *)(&DAT_00424028 + iVar1);
      uVar7 = (uint)((ulonglong)lVar5 >> 0x20);
      lVar4 = (ulonglong)uVar10 * (ulonglong)*(uint *)(&DAT_0042402c + iVar1) +
              ((ulonglong)uVar10 * (ulonglong)*(uint *)(&DAT_00424028 + iVar1) >> 0x20);
      uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
      bVar13 = CARRY4((uint)lVar5,(uint)lVar4);
      lVar5 = (ulonglong)uVar9 * (ulonglong)*(uint *)(&DAT_0042402c + iVar1) +
              (ulonglong)
              CONCAT14(CARRY4(uVar10,uVar7) || CARRY4(uVar10 + uVar7,(uint)bVar13),
                       uVar10 + uVar7 + (uint)bVar13);
      uVar10 = (uint)((ulonglong)lVar5 >> 0x20);
      lVar4 = lVar5 + CONCAT44(uVar6,uVar8);
      bVar13 = CARRY4(uVar10,uVar6) || CARRY4(uVar10 + uVar6,(uint)CARRY4((uint)lVar5,uVar8));
      lVar2 = CONCAT44((int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar12,(uint)bVar13),
                       uVar12 + bVar13);
    }
    else {
      lVar4 = CONCAT44(uVar6,uVar8);
    }
    uVar6 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar10 = param_4 + (uint)(0xffffffe4 < param_3);
    if ((uVar10 == 0 && (0x52 < param_3 + 0x1b) <= uVar10) || (uVar10 = 0xffffffff, lVar4 != -1)) {
      uVar10 = 9 - ((int)uVar9 >> 0x1f);
      uVar12 = (uint)lVar2 >> uVar10 | (uVar9 << 1) << (uVar10 ^ 0x1f);
      uVar8 = uVar9 >> uVar10;
      uVar9 = ((((int)(param_3 * 0x3526a) >> 0x10) - iVar11) - ((int)uVar9 >> 0x1f)) + 0x3f;
      if ((int)uVar9 < -0x3fe) {
        uVar10 = 0;
        if (uVar9 < 0xfffffbc3) goto LAB_01306af8;
        uVar6 = -uVar9 - 0x3fe;
        uVar9 = -uVar9 - 0x41e;
        uVar10 = uVar8 >> (uVar6 & 0xff);
        if (-1 < (int)uVar9) {
          uVar10 = 0;
        }
        uVar12 = uVar12 >> (uVar6 & 0xff) | uVar8 << (0x20 - uVar6 & 0xff);
        if (-1 < (int)uVar9) {
          uVar12 = uVar8 >> (uVar9 & 0xff);
        }
        uVar10 = uVar10 + CARRY4(uVar12 & 1,uVar12);
        uVar6 = uVar10 >> 1;
        uVar9 = (uint)((byte)uVar10 & 1) << 0x1f | (uVar12 & 1) + uVar12 >> 1;
        uVar10 = (uint)(uVar10 >> 0x15 != 0);
      }
      else {
        uVar7 = param_4 + (uint)(0xfffffffb < param_3);
        if ((((uVar7 == 0 && (0x1b < param_3 + 4) <= uVar7) &&
             (uVar6 == 0 && (1 < (uint)lVar4) <= uVar6)) && (uVar12 & 3) == 1) &&
            lVar2 == CONCAT44(uVar8 << uVar10 | (uVar12 >> 1) >> (uVar10 ^ 0x1f),uVar12 << uVar10))
        {
          uVar12 = uVar12 & 0xfffffffc;
          uVar8 = uVar8 & 0xffffff;
        }
        iVar11 = 0x3ff;
        uVar8 = uVar8 + CARRY4(uVar12 & 1,uVar12);
        if (uVar8 >> 0x16 != 0) {
          iVar11 = 0x400;
        }
        uVar10 = iVar11 + uVar9;
        if (0x7fe < uVar10) {
          return;
        }
        uVar9 = (uint)((byte)uVar8 & 1) << 0x1f | (uVar12 & 1) + uVar12 >> 1;
        uVar6 = uVar8 >> 1 & 0x7fefffff;
        if (uVar8 >> 0x16 != 0) {
          uVar6 = 0;
          uVar9 = 0;
        }
      }
      *param_1 = uVar9;
      param_1[1] = uVar6;
    }
  }
LAB_01306af8:
  param_1[2] = uVar10;
  return;
}

