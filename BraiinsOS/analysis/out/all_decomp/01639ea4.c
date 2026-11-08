// FUN_01639ea4 @ 01639ea4 size=248 calls_out=6 calls_in=4
// strings: inconsistent state in unpark

void FUN_01639ea4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 2;
  DataMemoryBarrier(0xb);
  if (iVar2 == 0) {
    return;
  }
  if (iVar2 != 1) {
    if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("inconsistent state in unpark",0x39,&DAT_018ac59c);
    }
    return;
  }
  piVar3 = param_1 + 2;
  if ((char)*piVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
    if (bVar1) {
      *(char *)piVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01639f1c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(piVar3);
LAB_01639f1c:
  FUN_0128236c(piVar3);
  FUN_01282570(piVar3);
  if ((char)*piVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
      if (bVar1) {
        *(char *)piVar3 = '\0';
        goto LAB_01639f70;
      }
    } while ((char)*piVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(piVar3);
LAB_01639f70:
  if (param_1[1] == 0) {
    return;
  }
  FUN_0127f8bc(param_1 + 1);
  return;
}

