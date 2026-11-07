// FUN_015e23d0 @ 015e23d0 size=92 calls_out=0 calls_in=0
// strings: 

void FUN_015e23d0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined4 uVar5;
  
  plVar3 = (longlong *)(**(code **)(param_3 + 0x10))(param_2);
  uVar5 = *(undefined4 *)((int)plVar3 + 4);
  lVar2 = *plVar3;
  lVar1 = *plVar3;
  uVar4 = *(uint *)(plVar3 + 3);
  *param_1 = (int)*plVar3;
  param_1[1] = uVar5;
  lVar1 = (ulonglong)uVar4 * 1000 + lVar1;
  param_1[6] = uVar4;
  lVar2 = (ulonglong)uVar4 * 800 + lVar2;
  if (uVar4 < 2) {
    lVar2 = lVar1;
  }
  *(longlong *)(param_1 + 2) = lVar1;
  *(longlong *)(param_1 + 4) = lVar2;
  return;
}

