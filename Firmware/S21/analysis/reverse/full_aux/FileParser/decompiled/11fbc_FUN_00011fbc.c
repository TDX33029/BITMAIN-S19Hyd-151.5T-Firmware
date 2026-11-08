// FUN_00011fbc @ 00011fbc  size=288  callers=1
// program: FileParser


int * FUN_00011fbc(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6
                  ,uint param_7,int param_8,uint param_9,int param_10,uint param_11,int param_12,
                  uint param_13,int param_14)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = param_11 + param_3;
  iVar3 = param_12 + param_4 + (uint)CARRY4(param_11,param_3);
  lVar5 = FUN_00011514(param_13 + uVar2 + param_9,
                       param_14 + iVar3 + (uint)CARRY4(param_13,uVar2) + param_10 +
                       (uint)CARRY4(param_13 + uVar2,param_9),0x15);
  uVar4 = uVar2 + param_5 + param_7;
  iVar1 = iVar3 + param_6 + (uint)CARRY4(uVar2,param_5) + param_8 +
          (uint)CARRY4(uVar2 + param_5,param_7);
  lVar6 = FUN_00011514(uVar4,iVar1,0x2c);
  *param_1 = uVar4 + param_9;
  param_1[1] = iVar1 + param_10 + (uint)CARRY4(uVar4,param_9);
  *(longlong *)(param_1 + 2) = lVar5 + lVar6 + CONCAT44(iVar3,uVar2);
  return param_1;
}

