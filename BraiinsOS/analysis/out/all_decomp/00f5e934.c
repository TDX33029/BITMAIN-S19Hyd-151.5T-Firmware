// FUN_00f5e934 @ 00f5e934 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_00f5e934(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int extraout_r2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  
  iVar3 = *param_2;
  puVar4 = (uint *)(iVar3 + 8);
  do {
    uVar1 = *puVar4;
    bVar5 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar5);
  *puVar4 = uVar1 + 1;
  bVar6 = 0xfffffffe < uVar1;
  bVar5 = uVar1 == 0xffffffff;
  if (-1 < (int)uVar1) {
    *param_1 = &PTR_FUN_0187f9c8;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = iVar3;
    return;
  }
  uVar7 = FUN_00f6015c();
  puVar2 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
  if (bVar5) {
    puVar2 = (undefined4 *)(extraout_r2 + ((uint)bVar6 << 0x1f | uVar1 + 1 >> 1));
  }
  FUN_00f5e6a4((int)uVar7,*puVar2);
                    /* WARNING: Could not recover jumptable at 0x00f5e97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xf5e96c)();
  return;
}

