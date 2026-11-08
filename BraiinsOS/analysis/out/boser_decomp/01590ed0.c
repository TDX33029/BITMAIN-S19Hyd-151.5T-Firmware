// FUN_01590ed0 @ 01590ed0 size=264 calls_out=2 calls_in=1
// strings: 

bool FUN_01590ed0(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 extraout_s1;
  double dVar6;
  double dVar7;
  longlong lVar8;
  
  pdVar1 = (double *)(param_1 + 2);
  if ((*param_1 & 3) == 2) {
    dVar7 = *pdVar1;
    if (dVar7 < 0.0) {
      return false;
    }
    if (1.8446744073709552e+19 <= dVar7) {
      return true;
    }
    uVar5 = FUN_01be6548(SUB84(dVar7,0),1);
    dVar6 = (double)CONCAT44(extraout_s1,uVar5);
    lVar8 = FUN_01bf0b64(uVar5,extraout_s1);
    if (dVar6 < 0.0) {
      lVar8 = 0;
    }
    if (1.844674407370955e+19 < dVar6) {
      lVar8 = -1;
    }
    uVar2 = (uint)((ulonglong)lVar8 >> 0x20);
    if (lVar8 == CONCAT44(param_4,param_3)) {
      return dVar6 < dVar7;
    }
    bVar4 = uVar2 < param_4 || param_4 - uVar2 < (uint)((uint)lVar8 <= param_3);
  }
  else {
    if (*param_1 != 0) {
      uVar2 = *(uint *)pdVar1;
      uVar3 = param_1[3];
      return (int)-(uVar3 + (uVar2 != 0)) < 0 !=
             (SBORROW4(0,uVar3) != SBORROW4(-uVar3,(uint)(uVar2 != 0))) &&
             (param_4 <= uVar3 && (uint)(uVar2 <= param_3) <= param_4 - uVar3);
    }
    bVar4 = param_1[3] < param_4 || param_4 - param_1[3] < (uint)(*(uint *)pdVar1 <= param_3);
  }
  return !bVar4;
}

