// FUN_019a65b4 @ 019a65b4 size=304 calls_out=6 calls_in=6
// strings: 

void FUN_019a65b4(undefined2 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int local_90;
  uint local_8c;
  uint local_60;
  uint local_5c;
  
  uVar4 = *param_2;
  iVar6 = 0;
  FUN_01bed93e(&local_90,0,0x68);
  uVar7 = FUN_01bf05c2(uVar4,&local_90);
  if ((int)uVar7 == -1) {
LAB_019a6644:
    FUN_01be3244();
  }
  else {
    lVar8 = FUN_01bf033e(uVar4,(int)((ulonglong)uVar7 >> 0x20),0,0,1);
    uVar3 = (uint)((ulonglong)lVar8 >> 0x20);
    if (lVar8 == -1) goto LAB_019a6644;
    uVar4 = local_60 - (uint)lVar8;
    iVar6 = 1;
    if (local_5c <= uVar3 && (uint)((uint)lVar8 <= local_60) <= local_5c - uVar3) {
      uVar4 = 0;
    }
  }
  uVar2 = *param_3;
  uVar1 = param_3[2];
  uVar3 = 0;
  if (iVar6 != 0) {
    uVar3 = uVar4;
  }
  if (uVar3 <= uVar2 - uVar1) {
LAB_019a66c4:
    FUN_019a1428(param_1,param_2,param_3,iVar6,uVar4);
    return;
  }
  uVar5 = uVar3 + uVar1;
  if (!CARRY4(uVar3,uVar1)) {
    if (uVar5 <= uVar2 * 2) {
      uVar5 = uVar2 << 1;
    }
    if (uVar5 < 9) {
      uVar5 = 8;
    }
    FUN_0197ad30(&local_90,uVar2,param_3[1],uVar5,1,1);
    if (local_90 != 1) {
      *param_3 = uVar5;
      param_3[1] = local_8c;
      goto LAB_019a66c4;
    }
  }
  *param_1 = 0x2601;
  return;
}

