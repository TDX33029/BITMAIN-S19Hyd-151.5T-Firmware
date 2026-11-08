// FUN_01349330 @ 01349330 size=240 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_01349330(int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = param_2 + 0x13;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *(char *)piVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar5 == '\0') {
    iVar5 = *param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x134941c);
      (*pcVar1)();
    }
    do {
      DataMemoryBarrier(0xb);
      if (iVar5 == 0x48) {
        do {
          iVar5 = *param_2;
          bVar2 = (bool)hasExclusiveAccess(param_2);
        } while (!bVar2);
        *param_2 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01349164(param_2);
          return 1;
        }
        return 1;
      }
      param_2[0x12] = iVar5;
      DataMemoryBarrier(0xb);
      iVar4 = *param_1;
      if (iVar4 == iVar5) {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(param_1);
          if (bVar2) {
            *param_1 = (int)(param_2 + 2);
            bVar2 = true;
            goto LAB_013493d4;
          }
          iVar4 = *param_1;
        } while (iVar4 == iVar5);
      }
      bVar2 = false;
      ClearExclusiveLocal();
LAB_013493d4:
      DataMemoryBarrier(0xb);
      iVar5 = iVar4;
    } while (!bVar2);
  }
  return 0;
}

