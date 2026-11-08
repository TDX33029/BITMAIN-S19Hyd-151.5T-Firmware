// FUN_01015674 @ 01015674 size=120 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_01015674(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
  piVar4 = (int *)*param_1;
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x10156e8);
    (*pcVar1)();
  }
  uVar5 = FUN_011d91a0(param_2,param_3,piVar4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fe74(piVar4);
  }
  return uVar5;
}

