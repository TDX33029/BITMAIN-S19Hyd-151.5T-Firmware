// FUN_0134a74c @ 0134a74c size=248 calls_out=5 calls_in=0
// strings: 

void FUN_0134a74c(int *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 ***pppuVar2;
  undefined4 uVar3;
  undefined4 ***pppuVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 ***local_9c;
  undefined4 ***local_98;
  code *local_94;
  undefined4 ***local_18;
  code *local_14;
  
  pppuVar4 = (undefined4 ***)*param_1;
  if ((int)pppuVar4 < 0) {
    uVar6 = FUN_0134a8c0(pppuVar4);
    if ((int)uVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0134a7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0xc))(*param_2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      return;
    }
    pppuVar2 = &local_98;
    uVar3 = *param_2;
    uVar5 = param_2[1];
    local_94 = FUN_012fd02c;
    local_98 = &local_18;
    puVar1 = &DAT_005a856b;
    local_18 = pppuVar4;
  }
  else {
    local_9c = pppuVar4;
    FUN_01bed93e(&local_98,0,0x80);
    uVar6 = FUN_0134a854(pppuVar4,&local_98);
    if ((int)uVar6 != 0) {
      FUN_012fb940(param_2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      return;
    }
    pppuVar2 = &local_18;
    uVar3 = *param_2;
    uVar5 = param_2[1];
    puVar1 = &DAT_005820d5;
    local_14 = FUN_012fce60;
    local_18 = &local_9c;
  }
  FUN_012fa178(uVar3,uVar5,puVar1,pppuVar2);
  return;
}

