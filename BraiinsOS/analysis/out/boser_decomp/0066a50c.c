// FUN_0066a50c @ 0066a50c size=144 calls_out=4 calls_in=2
// strings: 

void FUN_0066a50c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    if ((char)param_1[0xff] == '\0') {
      piVar2 = (int *)param_1[0xfc];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00687810(param_1[0xfc]);
      }
      FUN_00668c04(param_1 + 0xfd);
    }
    else {
      if ((char)param_1[0xff] != '\x03') {
        return;
      }
      FUN_00669d70(param_1 + 2);
    }
    FUN_005faf6c(param_1 + 0xfe);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  puVar3 = (undefined4 *)param_1[4];
  if (param_1[2] != 0 || param_1[3] != 0) {
    FUN_00b91e68(puVar3,param_1[5]);
    return;
  }
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00669fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)();
  return;
}

