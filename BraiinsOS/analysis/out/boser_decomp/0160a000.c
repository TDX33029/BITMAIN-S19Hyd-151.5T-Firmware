// FUN_0160a000 @ 0160a000 size=280 calls_out=2 calls_in=2
// strings: 

void FUN_0160a000(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 uint param_5,uint param_6,undefined1 *param_7)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  
  uVar5 = 0xffffffff;
  if (param_7 != &DAT_3b9aca00) {
    if (param_7 < (undefined1 *)0x3b8b87c1) {
      puVar9 = param_7 + 999999;
      uVar5 = param_6;
      uVar7 = param_5;
    }
    else {
      uVar5 = param_6 + (0xfffffffe < param_5);
      uVar7 = param_5 + 1;
      if (CARRY4(param_6,(uint)(0xfffffffe < param_5))) {
        puVar9 = &DAT_3b9aca00;
      }
      else {
        puVar9 = param_7 + -0x3b8b87c1;
      }
    }
    if (puVar9 != &DAT_3b9aca00) {
      param_6 = uVar5;
      param_5 = uVar7;
      param_7 = puVar9;
    }
    uVar10 = (uint)((ulonglong)param_5 * 1000);
    lVar2 = (ulonglong)param_6 * 1000 + ((ulonglong)param_5 * 1000 >> 0x20);
    uVar8 = (uint)lVar2;
    uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = (uint)param_7 / 1000000;
    uVar5 = uVar10 + uVar7;
    bVar1 = CARRY4(uVar8,(uint)CARRY4(uVar10,uVar7));
    if (0x7ffffffe < uVar5) {
      uVar5 = 0x7fffffff;
    }
    if (uVar8 + CARRY4(uVar10,uVar7) != 0) {
      uVar5 = 0x7fffffff;
    }
    if (uVar6 + bVar1 != 0 || CARRY4(uVar6,(uint)bVar1)) {
      uVar5 = 0x7fffffff;
    }
  }
  param_3[2] = 0;
  iVar3 = FUN_01be3e68(param_2,param_3[1],*param_3,uVar5);
  if (iVar3 < 0) {
    puVar4 = (undefined4 *)FUN_01be3244();
    uVar11 = *puVar4;
    *param_1 = 0;
    param_1[1] = uVar11;
    return;
  }
  param_3[2] = iVar3;
  *(undefined1 *)param_1 = 4;
  return;
}

