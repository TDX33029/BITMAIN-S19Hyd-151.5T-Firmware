// FUN_019e6e74 @ 019e6e74 size=252 calls_out=4 calls_in=30
// strings: 

void FUN_019e6e74(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  
  FUN_019ac130(&local_28,1);
  uVar5 = local_28 + param_3;
  uVar1 = local_24 + param_4 + (uint)CARRY4(local_28,param_3);
  if ((int)param_4 < 0 == (int)((local_24 ^ uVar1) & ~(local_24 ^ param_4)) < 0) {
    puVar4 = local_20 + param_5;
    if (&DAT_3b9aca00 <= puVar4) {
      bVar6 = 0xfffffffe < uVar5;
      uVar5 = uVar5 + 1;
      uVar3 = uVar1 + bVar6;
      if ((int)((uVar1 ^ uVar3) & ~uVar1) < 0) goto LAB_019e6f00;
      puVar4 = puVar4 + -1000000000;
      uVar1 = uVar3;
    }
    uVar7 = FUN_019ef7f4(param_6);
  }
  else {
LAB_019e6f00:
    FUN_019f9078(&local_28);
    uVar7 = FUN_019ef7f4(param_6);
    uVar5 = local_28;
    uVar1 = local_24;
    puVar4 = local_20;
  }
  uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
  FUN_019dc4f8(param_1,(int)uVar7,uVar2,uVar2,uVar5,uVar1,puVar4,param_6);
  return;
}

