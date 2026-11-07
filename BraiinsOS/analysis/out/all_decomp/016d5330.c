// FUN_016d5330 @ 016d5330 size=440 calls_out=0 calls_in=5
// strings: 

undefined4 FUN_016d5330(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  double in_d0;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar4 = (uint)((ulonglong)in_d0 >> 0x20);
  uVar2 = (uVar4 & 0x7fffffff) >> 0x14;
  if (uVar2 - 0x3c9 < 0x3f) {
LAB_016d5346:
    dVar6 = in_d0 * 184.6649652337873 + 6755399441055744.0;
    dVar5 = dVar6 - 6755399441055744.0;
    uVar4 = SUB84(dVar6,0);
    iVar1 = (uVar4 & 0x7f) * 2 + 0xf;
    dVar5 = in_d0 + dVar5 * -0.005415212348111709 + dVar5 * -1.2864023111638346e-14;
    uVar3 = *(undefined4 *)(&DAT_00425700 + iVar1);
    dVar6 = dVar5 * dVar5;
    iVar1 = *(int *)((int)&DAT_00425700 + iVar1 * 8 + 4) + uVar4 * 0x2000;
    dVar5 = dVar5 + *(double *)(&DAT_00425770 + (uVar4 & 0x7f) * 0x10) +
            (dVar5 * 0.16666666666665886 + 0.49999999999996786) * dVar6 +
            (dVar5 * 0.008333335853059549 + 0.0416666808410674) * dVar6 * dVar6;
    if (uVar2 == 0) {
      if ((int)uVar4 < 0) {
        dVar7 = (double)CONCAT44(iVar1 + 0x3fe00000,uVar3);
        dVar6 = dVar7 + dVar5 * dVar7;
        if (dVar6 < 1.0) {
          dVar5 = ((1.0 - (dVar6 + 1.0)) + dVar6 + (dVar7 - dVar6) + dVar5 * dVar7 + dVar6 + 1.0) -
                  1.0;
          if (dVar5 == 0.0) {
            uVar3 = 0;
          }
          else {
            uVar3 = SUB84(dVar5 * 2.2250738585072014e-308,0);
          }
        }
        else {
          uVar3 = SUB84(dVar6 * 2.2250738585072014e-308,0);
        }
      }
      else {
        dVar6 = (double)CONCAT44(iVar1 + -0x3f100000,uVar3);
        uVar3 = SUB84((dVar6 + dVar5 * dVar6) * 5.486124068793689e+303,0);
      }
    }
    else {
      uVar3 = SUB84((double)CONCAT44(iVar1,uVar3) + dVar5 * (double)CONCAT44(iVar1,uVar3),0);
    }
  }
  else {
    if (-1 < (int)(uVar2 - 0x3c9)) {
      if (uVar2 < 0x409) {
        uVar2 = 0;
        goto LAB_016d5346;
      }
      if (uVar4 == 0xfff00000 && SUB84(in_d0,0) == 0) {
        return 0;
      }
      if (uVar2 != 0x7ff) {
        if ((longlong)in_d0 < 0) {
          dVar5 = 1.2882297539194267e-231;
        }
        else {
          dVar5 = 3.105036184601418e+231;
        }
        return SUB84(dVar5 * dVar5,0);
      }
    }
    uVar3 = SUB84(in_d0 + 1.0,0);
  }
  return uVar3;
}

