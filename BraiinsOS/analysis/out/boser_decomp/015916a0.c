// FUN_015916a0 @ 015916a0 size=284 calls_out=2 calls_in=1
// strings: 

bool FUN_015916a0(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  double *pdVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 extraout_s1;
  double dVar7;
  double dVar8;
  longlong lVar9;
  
  pdVar1 = (double *)(param_1 + 2);
  if ((*param_1 & 3) == 2) {
    dVar8 = *pdVar1;
    if (9.223372036854776e+18 <= dVar8) {
      return false;
    }
    if (dVar8 < -9.223372036854776e+18) {
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
    iVar2 = (int)((ulonglong)lVar9 >> 0x20);
    if (lVar9 == CONCAT44(param_4,param_3)) {
      return dVar8 < dVar7;
    }
    bVar4 = (uint)lVar9 < param_3;
    bVar5 = SBORROW4(iVar2,param_4) != SBORROW4(iVar2 - param_4,(uint)bVar4);
    iVar2 = iVar2 - (param_4 + bVar4);
  }
  else {
    if (*param_1 == 0) {
      return (int)-(param_4 + (param_3 != 0)) < 0 !=
             (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(param_3 != 0))) &&
             (param_1[3] <= param_4 && (uint)(param_3 <= *(uint *)pdVar1) <= param_1[3] - param_4);
    }
    uVar3 = param_1[3];
    bVar5 = SBORROW4(uVar3,param_4) != SBORROW4(uVar3 - param_4,(uint)(*(uint *)pdVar1 < param_3));
    iVar2 = uVar3 - (param_4 + (*(uint *)pdVar1 < param_3));
  }
  return iVar2 < 0 != bVar5;
}

