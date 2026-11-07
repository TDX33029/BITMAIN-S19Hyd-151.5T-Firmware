// FUN_019b0ae4 @ 019b0ae4 size=232 calls_out=4 calls_in=3
// strings: 

void FUN_019b0ae4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  
  uVar8 = thunk_FUN_01bee35a(param_1,0x240);
  uVar3 = *(uint *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
  if (uVar3 < 3) {
    piVar6 = (int *)FUN_019b03e8();
  }
  else {
    piVar6 = (int *)(uVar3 - 8);
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x19b0bfc);
      (*pcVar1)();
    }
  }
  piVar7 = piVar6 + 6;
  do {
    iVar4 = *piVar7;
    iVar5 = iVar4 + -1;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar5;
  DataMemoryBarrier(0xb);
  if (iVar4 != 1) {
    FUN_019ae574(piVar7,iVar5,param_1,param_2,param_3);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = 0;
    DataMemoryBarrier(0xb);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019a2ffc(piVar6);
    return;
  }
  return;
}

