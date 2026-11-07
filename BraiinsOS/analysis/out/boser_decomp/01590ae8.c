// FUN_01590ae8 @ 01590ae8 size=280 calls_out=2 calls_in=1
// strings: 

bool FUN_01590ae8(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  double *pdVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 extraout_s1;
  double dVar7;
  double dVar8;
  longlong lVar9;
  
  pdVar2 = (double *)(param_1 + 2);
  if ((*param_1 & 3) == 2) {
    dVar8 = *pdVar2;
    if (dVar8 < -9.223372036854776e+18) {
      return false;
    }
    if (9.223372036854776e+18 <= dVar8) {
      return true;
    }
    uVar6 = FUN_01be6548(SUB84(dVar8,0),1);
    dVar7 = (double)CONCAT44(extraout_s1,uVar6);
    lVar9 = FUN_01bf0bf8(uVar6,extraout_s1);
    if (dVar7 < -9.223372036854776e+18) {
      lVar9 = -0x8000000000000000;
    }
    if (9.223372036854775e+18 < dVar7) {
      lVar9 = 0x7fffffffffffffff;
    }
    if (NAN(dVar7)) {
      lVar9 = 0;
    }
    iVar1 = (int)((ulonglong)lVar9 >> 0x20);
    if (lVar9 == CONCAT44(param_4,param_3)) {
      bVar4 = dVar8 < dVar7;
      bVar5 = NAN(dVar8) || NAN(dVar7);
    }
    else {
      bVar4 = (uint)lVar9 < param_3;
      bVar5 = SBORROW4(iVar1,param_4) != SBORROW4(iVar1 - param_4,(uint)bVar4);
      bVar4 = (int)(iVar1 - (param_4 + bVar4)) < 0;
    }
  }
  else {
    if (*param_1 == 0) {
      return (int)param_4 < (int)(uint)(param_3 == 0) ||
             (param_4 < param_1[3] || param_1[3] - param_4 < (uint)(param_3 <= *(uint *)pdVar2));
    }
    uVar3 = param_1[3];
    bVar5 = SBORROW4(uVar3,param_4) != SBORROW4(uVar3 - param_4,(uint)(*(uint *)pdVar2 < param_3));
    bVar4 = (int)(uVar3 - (param_4 + (*(uint *)pdVar2 < param_3))) < 0;
  }
  return bVar4 == bVar5;
}

