// FUN_019ae574 @ 019ae574 size=312 calls_out=3 calls_in=8
// strings: 

void FUN_019ae574(int *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  
  FUN_019ac130(&local_28,1);
  uVar1 = local_28 + param_3;
  uVar5 = local_24 + param_4 + (uint)CARRY4(local_28,param_3);
  local_28 = 0;
  if ((int)param_4 < 0 != (int)((local_24 ^ uVar5) & ~(local_24 ^ param_4)) < 0) goto LAB_019ae658;
  puVar4 = local_20 + param_5;
  if (&DAT_3b9aca00 <= puVar4) {
    bVar7 = 0xfffffffe < uVar1;
    uVar1 = uVar1 + 1;
    uVar6 = uVar5 + bVar7;
    if ((int)((uVar5 ^ uVar6) & ~uVar5) < 0) goto LAB_019ae658;
    puVar4 = puVar4 + -1000000000;
    local_28 = 0;
    uVar5 = uVar6;
    if (puVar4 == &DAT_3b9aca00) goto LAB_019ae658;
  }
  bVar7 = uVar5 - (uVar1 < 0x80000000) == -1;
  local_28 = (uint)bVar7;
  if (bVar7) {
    local_24 = uVar1;
    local_20 = puVar4;
  }
LAB_019ae658:
  while( true ) {
    if (*param_1 != -1) {
      return;
    }
    puVar2 = (uint *)0x0;
    if (local_28 != 0) {
      puVar2 = &local_24;
    }
    uVar5 = FUN_01be6c3c(0xf0,param_1,0x89,0xffffffff,puVar2,0,0xffffffff);
    if (uVar5 < 0x80000000) break;
    piVar3 = (int *)FUN_01be3244();
    if (*piVar3 != 4) {
      return;
    }
  }
  return;
}

