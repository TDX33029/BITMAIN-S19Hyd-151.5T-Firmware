// FUN_00fb612c @ 00fb612c size=680 calls_out=0 calls_in=1
// strings: 

void FUN_00fb612c(uint *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6
                 )

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  uVar8 = 0;
  param_1[2] = 0xff;
  *param_1 = 0;
  param_1[1] = 0;
  if (((int)(param_4 - ((param_3 < 0xffffffbf) - 1)) < 0 ==
       (SBORROW4(param_4,-1) != SBORROW4(param_4 + 1,(uint)(param_3 < 0xffffffbf)))) &&
     (param_5 != 0 || param_6 != 0)) {
    if ((int)-(param_4 + (uint)(0x26 < param_3)) < 0 !=
        (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(0x26 < param_3)))) {
      return;
    }
    iVar10 = LZCOUNT(param_5) + 0x20;
    if (param_6 != 0) {
      iVar10 = LZCOUNT(param_6);
    }
    iVar9 = param_3 * 0x10;
    uVar4 = iVar10 - 0x20;
    uVar8 = param_5 << iVar10;
    if (-1 < (int)uVar4) {
      uVar8 = 0;
    }
    uVar2 = (ulonglong)uVar8 * (ulonglong)*(uint *)(&DAT_003611f0 + iVar9);
    uVar6 = (uint)uVar2;
    lVar1 = (ulonglong)uVar8 * (ulonglong)*(uint *)(&DAT_003611f4 + iVar9) + (uVar2 >> 0x20);
    uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar7 = param_5 >> (0x20U - iVar10 & 0xff) | param_6 << iVar10;
    if (-1 < (int)uVar4) {
      uVar7 = param_5 << (uVar4 & 0xff);
    }
    lVar3 = (ulonglong)uVar7 * (ulonglong)*(uint *)(&DAT_003611f0 + iVar9);
    uVar4 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar12 = (uint)(lVar1 + lVar3);
    lVar1 = (ulonglong)uVar7 * (ulonglong)*(uint *)(&DAT_003611f4 + iVar9) +
            (ulonglong)
            CONCAT14(CARRY4(uVar11,uVar4) ||
                     CARRY4(uVar11 + uVar4,(uint)CARRY4((uint)lVar3,(uint)lVar1)),
                     (int)((ulonglong)(lVar1 + lVar3) >> 0x20));
    uVar4 = (uint)lVar1;
    uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
    if (uVar4 == 0xffffffff && (~uVar11 & 0x3f) == 0) {
      lVar3 = (ulonglong)uVar7 * (ulonglong)*(uint *)(&DAT_003611f8 + iVar9);
      uVar5 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar1 = (ulonglong)uVar8 * (ulonglong)*(uint *)(&DAT_003611fc + iVar9) +
              ((ulonglong)uVar8 * (ulonglong)*(uint *)(&DAT_003611f8 + iVar9) >> 0x20);
      uVar8 = (uint)((ulonglong)lVar1 >> 0x20);
      bVar13 = CARRY4((uint)lVar3,(uint)lVar1);
      lVar1 = (ulonglong)uVar7 * (ulonglong)*(uint *)(&DAT_003611fc + iVar9) +
              (ulonglong)
              CONCAT14(CARRY4(uVar8,uVar5) || CARRY4(uVar8 + uVar5,(uint)bVar13),
                       uVar8 + uVar5 + (uint)bVar13);
      uVar8 = (uint)((ulonglong)lVar1 >> 0x20);
      lVar3 = lVar1 + CONCAT44(uVar12,uVar6);
      bVar13 = CARRY4(uVar8,uVar12) || CARRY4(uVar8 + uVar12,(uint)CARRY4((uint)lVar1,uVar6));
      lVar1 = CONCAT44(uVar11 + CARRY4(uVar4,(uint)bVar13),uVar4 + bVar13);
    }
    else {
      lVar3 = CONCAT44(uVar12,uVar6);
    }
    uVar4 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
    if (((int)(-1 - (param_4 + (uint)(0xffffffe4 < param_3))) < 0 !=
         (SBORROW4(-1,param_4) != SBORROW4(-1 - param_4,(uint)(0xffffffe4 < param_3)))) ||
       (uVar8 = 0xffffffff, lVar3 != -1)) {
      uVar8 = uVar7 >> 0x1f | 0x26;
      uVar6 = uVar7 >> (uVar7 >> 0x1f | 6);
      uVar7 = ((((int)(param_3 * 0x3526a) >> 0x10) - iVar10) - ((int)uVar7 >> 0x1f)) + 0x3f;
      if ((int)uVar7 < -0x7e) {
        uVar8 = 0;
        if (uVar7 < 0xffffff43) goto LAB_00fb63c8;
        uVar6 = uVar6 >> (-uVar7 - 0x7e & 0xff);
        if (-1 < (int)(-0x9e - uVar7)) {
          uVar6 = 0;
        }
        uVar6 = (uVar6 & 1) + uVar6;
        uVar8 = (uint)(uVar6 >> 0x18 != 0);
        uVar6 = uVar6 >> 1;
      }
      else {
        uVar11 = param_4 + (uint)(0xffffffee < param_3);
        uVar12 = uVar8 - 0x20;
        iVar10 = uVar6 << uVar8;
        if (-1 < (int)uVar12) {
          iVar10 = 0;
        }
        uVar8 = uVar6 >> (0x20 - uVar8 & 0xff);
        if (-1 < (int)uVar12) {
          uVar8 = uVar6 << (uVar12 & 0xff);
        }
        iVar9 = 0x7f;
        if ((((uVar11 == 0 && (0x1b < param_3 + 0x11) <= uVar11) &&
             (uVar4 == 0 && (1 < (uint)lVar3) <= uVar4)) && (uVar6 & 3) == 1) &&
            lVar1 == CONCAT44(uVar8,iVar10)) {
          uVar6 = uVar6 & 0x3fffffc;
        }
        bVar13 = CARRY4(uVar6 & 1,uVar6);
        uVar6 = (uVar6 & 1) + uVar6;
        uVar4 = uVar6 >> 0x19;
        if (bVar13 || uVar4 != 0) {
          iVar9 = 0x80;
        }
        uVar8 = iVar9 + uVar7;
        if (0xfe < uVar8) {
          return;
        }
        uVar6 = (uint)bVar13 << 0x1f | uVar6 >> 1 & 0xff7fffff;
        if (bVar13 || uVar4 != 0) {
          uVar6 = 0;
        }
      }
      *param_1 = uVar6;
      param_1[1] = 0;
    }
  }
LAB_00fb63c8:
  param_1[2] = uVar8;
  return;
}

