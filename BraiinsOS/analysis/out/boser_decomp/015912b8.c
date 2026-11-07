// FUN_015912b8 @ 015912b8 size=264 calls_out=2 calls_in=1
// strings: 

bool FUN_015912b8(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  double *pdVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 extraout_s1;
  double dVar5;
  double dVar6;
  longlong lVar7;
  
  pdVar1 = (double *)(param_1 + 2);
  if ((*param_1 & 3) == 2) {
    dVar6 = *pdVar1;
    if (1.8446744073709552e+19 <= dVar6) {
      return false;
    }
    if (dVar6 < 0.0) {
      return true;
    }
    uVar4 = FUN_01be6548(SUB84(dVar6,0),1);
    dVar5 = (double)CONCAT44(extraout_s1,uVar4);
    lVar7 = FUN_01bf0b64(uVar4,extraout_s1);
    if (dVar5 < 0.0) {
      lVar7 = 0;
    }
    if (1.844674407370955e+19 < dVar5) {
      lVar7 = -1;
    }
    uVar2 = (uint)((ulonglong)lVar7 >> 0x20);
    if (lVar7 == CONCAT44(param_4,param_3)) {
      return dVar6 <= dVar5;
    }
    bVar3 = uVar2 < param_4 || param_4 - uVar2 < (uint)((uint)lVar7 <= param_3);
  }
  else {
    if (*param_1 != 0) {
      uVar2 = param_1[3];
      return (int)uVar2 < (int)(uint)(*(uint *)pdVar1 == 0) ||
             (uVar2 < param_4 || param_4 - uVar2 < (uint)(*(uint *)pdVar1 <= param_3));
    }
    bVar3 = param_1[3] < param_4 || param_4 - param_1[3] < (uint)(*(uint *)pdVar1 <= param_3);
  }
  return bVar3;
}

