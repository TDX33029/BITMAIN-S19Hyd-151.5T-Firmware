// FUN_019b37f8 @ 019b37f8 size=304 calls_out=5 calls_in=10
// strings: 

/* WARNING: Removing unreachable block (ram,0x019b3890) */

void FUN_019b37f8(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  
  uVar8 = thunk_FUN_01bee35a(param_1,0x240);
  uVar3 = *(uint *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
  if (uVar3 < 3) {
    piVar6 = (int *)FUN_019b03e8();
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
      pcVar1 = (code *)software_udf(0xfdee,0x19b3928);
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
LAB_019b38e4:
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc(piVar6);
    }
    return;
  }
LAB_019b386c:
  if ((*piVar7 == -1) &&
     (uVar3 = FUN_01be6c3c(0xf0,piVar7,0x89,0xffffffff,0,0,0xffffffff), 0x7fffffff < uVar3))
  goto code_r0x019b38a8;
  goto LAB_019b38c8;
code_r0x019b38a8:
  piVar5 = (int *)FUN_01be3244();
  if (*piVar5 != 4) {
LAB_019b38c8:
    while (*piVar7 == 1) {
      bVar2 = (bool)hasExclusiveAccess(piVar7);
      if (bVar2) {
        *piVar7 = 0;
        DataMemoryBarrier(0xb);
        goto LAB_019b38e4;
      }
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  }
  goto LAB_019b386c;
}

