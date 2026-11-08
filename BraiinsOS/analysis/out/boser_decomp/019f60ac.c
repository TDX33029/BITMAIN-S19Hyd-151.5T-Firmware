// FUN_019f60ac @ 019f60ac size=144 calls_out=1 calls_in=5
// strings: 

void FUN_019f60ac(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  
  if ((undefined1 *)param_1[8] != &DAT_3b9aca00) {
    FUN_019b0710(&local_28,param_2,param_1[6],param_1[7],(undefined1 *)param_1[8]);
    uVar8 = *param_1;
    uVar3 = (uint)((ulonglong)local_28 * 1000000000);
    lVar2 = (ulonglong)uStack_24 * 1000000000 + ((ulonglong)local_28 * 1000000000 >> 0x20);
    uVar5 = (uint)lVar2;
    uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = uVar3 + uStack_20;
    bVar1 = CARRY4(uVar5,(uint)CARRY4(uVar3,uStack_20));
    iVar7 = uVar5 + CARRY4(uVar3,uStack_20);
    if (uVar6 + bVar1 != 0 || CARRY4(uVar6,(uint)bVar1)) {
      uVar4 = 0xffffffff;
      iVar7 = -1;
    }
    *param_1 = uVar8 + uVar4;
    param_1[1] = param_1[1] + iVar7 + (uint)CARRY4(uVar8,uVar4);
  }
  return;
}

