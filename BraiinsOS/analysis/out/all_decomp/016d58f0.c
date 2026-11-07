// FUN_016d58f0 @ 016d58f0 size=566 calls_out=0 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x016d51f2) */

undefined4 FUN_016d58f0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  double in_d0;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar2 = (uint)((ulonglong)in_d0 >> 0x20);
  uVar4 = SUB84(in_d0,0);
  if (uVar2 + 0xc0115b51 < 0x210aa) {
    if (uVar2 == 0x3ff00000 && uVar4 == 0) {
      in_d0 = 0.0;
    }
    else {
      dVar6 = in_d0 - 1.0;
      dVar7 = dVar6 * dVar6;
      dVar9 = (double)((ulonglong)dVar6 & 0xffffffff00000000) * 1.4426950407214463;
      dVar10 = (dVar6 * 0.48089834696298744 + -0.7213475204444817) * dVar7;
      dVar8 = dVar9 + dVar10;
      in_d0 = (dVar9 - dVar8) + dVar10 +
              (dVar6 - (double)((ulonglong)dVar6 & 0xffffffff00000000)) * 1.4426950407214463 +
              dVar6 * 1.6751713164886512e-10 +
              (dVar6 * 0.2885390081805197 + -0.360673760222145 +
               (dVar6 * 0.2060992861022954 + -0.24044917405728863) * dVar7 +
              (dVar6 * 0.1603032746063156 + -0.18033596705327856 +
              (dVar6 * 0.13046826811283835 + -0.14483316576701266) * dVar7) * dVar7 * dVar7) *
              dVar7 * dVar7 + dVar8;
    }
  }
  else {
    uVar5 = uVar2 >> 0x10;
    if (0x7fdf < uVar5 - 0x10) {
      if (((ulonglong)in_d0 & 0x7fffffff) == 0 && uVar2 * 2 + (uint)CARRY4(uVar4,uVar4) == 0) {
        return 0;
      }
      if (uVar2 == 0x7ff00000 && uVar4 == 0) goto LAB_016d59f4;
      if (((int)(uVar5 << 0x10) < 0) || ((~uVar5 & 0x7ff0) == 0)) {
        dVar6 = (double)(((ulonglong)uVar2 << 0x20) + ((ulonglong)in_d0 & 0xffffffff));
        dVar6 = dVar6 - dVar6;
        return SUB84(dVar6 / dVar6,0);
      }
      uVar4 = SUB84(in_d0 * 4503599627370496.0,0);
      uVar2 = (int)((ulonglong)(in_d0 * 4503599627370496.0) >> 0x20) + 0xfcc00000;
    }
    uVar3 = uVar2 + 0xc01a0000;
    uVar5 = (uVar3 & 0xfffff) >> 0xe;
    dVar8 = (double)VectorSignedToFloat((int)uVar3 >> 0x14,(byte)(in_fpscr >> 0x16) & 3);
    iVar1 = uVar5 * 0x10;
    dVar7 = (((double)CONCAT44(uVar2 - (uVar3 & 0xfff00000),uVar4) -
             (double)(&DAT_00425f70)[(uVar5 + 0x49) * 2]) - *(double *)(&DAT_00426408 + iVar1)) *
            *(double *)(&DAT_00426000 + iVar1);
    dVar6 = dVar7 * dVar7;
    dVar10 = (double)((ulonglong)dVar7 & 0xffffffff00000000) * 1.4426950407214463;
    dVar9 = dVar10 + dVar8 + *(double *)(&DAT_00426008 + iVar1);
    in_d0 = (dVar7 - (double)((ulonglong)dVar7 & 0xffffffff00000000)) * 1.4426950407214463 +
            dVar7 * 1.6751713164886512e-10 +
            ((dVar8 + *(double *)(&DAT_00426008 + iVar1)) - dVar9) + dVar10 +
            (dVar7 * 0.4808983469629985 + -0.7213475204444882 +
             (dVar7 * 0.2885390073180969 + -0.36067375954075914) * dVar6 +
            (dVar7 * 0.2061202382173603 + -0.2404693555628422) * dVar6 * dVar6) * dVar6 + dVar9;
  }
LAB_016d59f4:
  return SUB84(in_d0,0);
}

