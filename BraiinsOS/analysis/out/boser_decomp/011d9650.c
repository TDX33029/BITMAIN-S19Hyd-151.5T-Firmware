// FUN_011d9650 @ 011d9650 size=152 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_011d9650(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  int *local_20;
  undefined4 uStack_1c;
  int *local_18;
  undefined4 local_14;
  
  piVar3 = (int *)*param_1;
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (-1 < iVar4) {
    local_18 = (int *)param_1[2];
    uStack_1c = param_1[1];
    do {
      iVar4 = *local_18;
      bVar2 = (bool)hasExclusiveAccess(local_18);
    } while (!bVar2);
    *local_18 = iVar4 + 1;
    local_20 = piVar3;
    if (-1 < iVar4) {
      local_14 = param_1[3];
      uVar5 = FUN_011d96fc(param_2,param_3,&local_20);
      FUN_011d95e0(param_1);
      return uVar5;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x11d96e4);
  (*pcVar1)();
}

