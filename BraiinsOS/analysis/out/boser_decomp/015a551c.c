// FUN_015a551c @ 015a551c size=156 calls_out=1 calls_in=0
// strings: 

void FUN_015a551c(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*param_3 == '\x03') {
    piVar4 = (int *)*param_2;
    local_24 = 0;
    uStack_2c = 0;
    uStack_28 = 4;
    local_20 = 0;
    local_30 = 0x80000000;
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15a55b4);
      (*pcVar1)();
    }
    FUN_0155ff10(&local_30);
    *param_1 = local_30;
    param_1[1] = uStack_2c;
    param_1[2] = uStack_28;
    param_1[3] = local_24;
    param_1[4] = local_20;
    param_1[5] = uStack_1c;
    param_1[6] = uStack_18;
  }
  else {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

