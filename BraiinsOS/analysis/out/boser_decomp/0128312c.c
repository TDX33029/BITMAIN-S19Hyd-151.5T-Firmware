// FUN_0128312c @ 0128312c size=76 calls_out=2 calls_in=0
// strings: 

void FUN_0128312c(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
  iVar3 = *param_2;
  piVar4 = (int *)(iVar3 + 8);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + 1;
  if (iVar2 < 0) {
    uVar5 = FUN_0128479c();
    FUN_01282f28((int)uVar5,*(undefined4 *)((ulonglong)uVar5 >> 0x20));
                    /* WARNING: Could not recover jumptable at 0x01283174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)0x1283164)();
    return;
  }
  *param_1 = &DAT_01c25ae0;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = iVar3;
  return;
}

