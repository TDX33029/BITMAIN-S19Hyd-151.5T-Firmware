// FUN_015fbbf8 @ 015fbbf8 size=304 calls_out=5 calls_in=9
// strings: 

/* WARNING: Removing unreachable block (ram,0x015fbc90) */

void FUN_015fbbf8(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  
  uVar8 = thunk_FUN_016de0ee(param_1,0x248);
  uVar3 = *(uint *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
  if (uVar3 < 3) {
    piVar6 = (int *)FUN_015f7ed0();
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
      pcVar1 = (code *)software_udf(0xfdee,0x15fbd28);
      (*pcVar1)();
    }
  }
  piVar7 = piVar6 + 6;
  do {
    iVar4 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar4 + -1;
  DataMemoryBarrier(0xb);
  if (iVar4 == 1) {
LAB_015fbce4:
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(piVar6);
    }
    return;
  }
LAB_015fbc6c:
  if ((*piVar7 == -1) &&
     (uVar3 = FUN_016d6968(0xf0,piVar7,0x89,0xffffffff,0,0,0xffffffff), 0x7fffffff < uVar3))
  goto code_r0x015fbca8;
  goto LAB_015fbcc8;
code_r0x015fbca8:
  piVar5 = (int *)FUN_016d2bc8();
  if (*piVar5 != 4) {
LAB_015fbcc8:
    while (*piVar7 == 1) {
      bVar2 = (bool)hasExclusiveAccess(piVar7);
      if (bVar2) {
        *piVar7 = 0;
        DataMemoryBarrier(0xb);
        goto LAB_015fbce4;
      }
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  }
  goto LAB_015fbc6c;
}

