// FUN_00cf55b4 @ 00cf55b4 size=204 calls_out=4 calls_in=1
// strings: 

bool FUN_00cf55b4(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = *param_1;
  puVar4 = (uint *)(iVar5 + 0x98);
  uVar3 = *(uint *)(iVar5 + 0x98);
  if ((uVar3 < 0xfffffff0) && ((uVar3 & 8) == 0)) {
    if (*puVar4 == uVar3) {
      bVar2 = (bool)hasExclusiveAccess(puVar4);
      if (bVar2) {
        *puVar4 = uVar3 + 0x10;
        DataMemoryBarrier(0xb);
        goto LAB_00cf5604;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0127d66c(puVar4);
LAB_00cf5604:
  FUN_0128236c(puVar4);
  FUN_0128236c((uint)puVar4 | 1);
  DataMemoryBarrier(0xb);
  cVar1 = *(char *)(iVar5 + 0x9c);
  FUN_01282570(puVar4);
  FUN_01282570((uint)puVar4 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *puVar4;
    bVar2 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar2);
  *puVar4 = uVar3 - 0x10;
  if ((uVar3 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar4);
    return cVar1 == '\x04';
  }
  return cVar1 == '\x04';
}

