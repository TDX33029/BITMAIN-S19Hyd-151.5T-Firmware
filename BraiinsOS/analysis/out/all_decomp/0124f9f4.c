// FUN_0124f9f4 @ 0124f9f4 size=216 calls_out=2 calls_in=2
// strings: 

undefined4 * FUN_0124f9f4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (undefined4 *)
              FUN_0124f9f4(param_1,param_1 + param_4 * 0x10,param_1 + param_4 * 0x1c,param_4);
    param_2 = (undefined4 *)
              FUN_0124f9f4(param_2,param_2 + param_4 * 0x10,param_2 + param_4 * 0x1c,param_4);
    param_3 = (undefined4 *)
              FUN_0124f9f4(param_3,param_3 + param_4 * 0x10,param_3 + param_4 * 0x1c,param_4);
  }
  uVar1 = *(undefined1 *)(param_1 + 1);
  uVar8 = *param_1;
  uVar2 = *(undefined1 *)(param_2 + 1);
  uVar6 = *param_2;
  iVar4 = FUN_0124facc(uVar8,uVar1);
  uVar7 = *param_3;
  uVar3 = *(undefined1 *)(param_3 + 1);
  iVar5 = FUN_0124facc(uVar8,uVar1,uVar7,uVar3);
  if (iVar4 == iVar5) {
    iVar5 = FUN_0124facc(uVar6,uVar2,uVar7,uVar3);
    param_1 = param_2;
    if (iVar4 != iVar5) {
      param_1 = param_3;
    }
  }
  return param_1;
}

