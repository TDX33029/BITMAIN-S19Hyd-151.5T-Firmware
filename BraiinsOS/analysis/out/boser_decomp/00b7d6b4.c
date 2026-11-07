// FUN_00b7d6b4 @ 00b7d6b4 size=156 calls_out=1 calls_in=7
// strings: 

void FUN_00b7d6b4(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar3 = param_2 + 2;
  if ((char)*piVar3 == '\0') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar3);
      if (bVar2) {
        *(char *)piVar3 = '\x01';
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *param_2;
          bVar2 = (bool)hasExclusiveAccess(param_2);
        } while (!bVar2);
        *param_2 = iVar4 + 1;
        if (iVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xb7d74c);
          (*pcVar1)();
        }
        *param_1 = &DAT_80000016;
        param_1[1] = param_2;
        local_28 = 0x8000000e;
        FUN_00b719dc(&local_28);
        return;
      }
    } while ((char)*piVar3 == '\0');
  }
  ClearExclusiveLocal();
  *param_1 = 0x8000000e;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  param_1[4] = uStack_18;
  param_1[5] = uStack_14;
  return;
}

