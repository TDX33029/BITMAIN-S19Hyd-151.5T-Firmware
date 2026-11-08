// FUN_01408d28 @ 01408d28 size=108 calls_out=1 calls_in=3
// strings: 

void FUN_01408d28(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r12;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar6 = 0x1408d50;
  FUN_006666fc(&local_28,param_2[5],param_2[6]);
  puVar2 = (uint *)*param_2;
  do {
    uVar3 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar3 + 1;
  uVar4 = 0;
  uVar5 = extraout_r12;
  if (uVar3 < 0x80000000) {
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar4 = param_2[3];
  }
  if ((int)uVar3 < 0) {
    software_udf(0xfdee,0x1408d90);
    return;
  }
  param_1[4] = local_28;
  param_1[5] = uStack_24;
  param_1[6] = uStack_20;
  *param_1 = puVar2;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar4;
  return;
}

