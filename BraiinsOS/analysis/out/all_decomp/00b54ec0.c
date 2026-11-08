// FUN_00b54ec0 @ 00b54ec0 size=600 calls_out=9 calls_in=0
// strings: BUG: poisoned

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b54ec0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int *local_118;
  undefined1 local_114;
  
  piVar4 = (int *)(param_2 + 0x4e4);
  do {
    if (*piVar4 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar4);
      goto LAB_00b54ef8;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = 1;
  DataMemoryBarrier(0xb);
LAB_00b54ef8:
  uVar7 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_2 + 0x4e8);
  }
  else {
    uVar7 = FUN_015bf3f8();
    uVar7 = uVar7 ^ 1;
    cVar1 = *(char *)(param_2 + 0x4e8);
  }
  if (cVar1 != '\0') {
    local_114 = (undefined1)uVar7;
    local_118 = piVar4;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: poisoned",0xd,&local_118,&DAT_018703d8,&DAT_0186fc80);
  }
  if (*(int *)(param_2 + 0x4ec) == 0) {
    *param_1 = 2;
    if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar6 = FUN_015bf3f8(), iVar6 == 0)
       ) {
      *(undefined1 *)(param_2 + 0x4e8) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = 0;
    goto LAB_00b55068;
  }
  iVar6 = *(int *)(*(int *)(param_2 + 0x4ec) + 0xc);
  puVar5 = (uint *)(iVar6 + 0x98);
  uVar3 = *(uint *)(iVar6 + 0x98);
  if ((uVar3 < 0xfffffff0) && ((uVar3 & 8) == 0)) {
    if (*puVar5 != uVar3) {
      ClearExclusiveLocal();
      goto LAB_00b54fac;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar5);
    if (!bVar2) goto LAB_00b54fac;
    *puVar5 = uVar3 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00b54fac:
    FUN_0127d66c(puVar5);
  }
  FUN_0128236c(puVar5);
  FUN_0128236c((uint)puVar5 | 1);
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar6 + 0xa0) == 2) {
    *param_1 = 2;
  }
  else {
    FUN_00b2392c(&local_118,(int *)(iVar6 + 0xa0));
    FUN_016dd1aa(param_1,&local_118,0xf0);
  }
  FUN_01282570(puVar5);
  FUN_01282570((uint)puVar5 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *puVar5;
    bVar2 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar2);
  *puVar5 = uVar3 - 0x10;
  if ((uVar3 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar5);
  }
  if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar6 = FUN_015bf3f8(), iVar6 == 0))
  {
    *(undefined1 *)(param_2 + 0x4e8) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = 0;
LAB_00b55068:
  if (iVar6 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar4,0x81,1,param_5);
    return;
  }
  return;
}

