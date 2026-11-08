// FUN_015f2c40 @ 015f2c40 size=92 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_015f2c40(uint param_1,uint param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = (**(code **)(*(int *)(param_3 + 0x14) + 0x10))(*(undefined4 *)(param_3 + 0x10));
  uVar5 = (uint)*(byte *)(iVar2 + 0x38);
  uVar3 = 0;
  if (uVar5 == 0) {
    plVar4 = (longlong *)
             (**(code **)(*(int *)(param_3 + 0x14) + 0x10))(*(undefined4 *)(param_3 + 0x10));
    lVar1 = (ulonglong)*(uint *)(plVar4 + 3) * 500 + *plVar4;
    uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar3 = 0;
    bVar7 = param_1 <= (uint)lVar1;
    uVar5 = uVar6 - (param_2 + !bVar7);
    if (param_2 < uVar6 || uVar6 - param_2 < (uint)bVar7) {
      uVar3 = 1;
    }
  }
  return CONCAT44(uVar5,uVar3);
}

