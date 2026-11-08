// FUN_009286c8 @ 009286c8 size=412 calls_out=2 calls_in=17
// strings: 

void FUN_009286c8(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar2 = *(int *)param_1[2];
  if (iVar2 != 0) {
    puVar7 = (uint *)(iVar2 + 0x2f8);
    do {
      uVar6 = *puVar7;
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = uVar6 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar6 & 10) == 8) {
      (**(code **)(*(int *)(iVar2 + 0x2e8) + 8))(*(undefined4 *)(iVar2 + 0x2ec));
    }
  }
  if (*(char *)(param_1 + 4) != '\0') {
    piVar3 = (int *)param_1[3];
    uVar10 = *param_1;
    uVar9 = param_1[1];
    uVar6 = *(uint *)(*piVar3 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      if ((uVar6 & 1) != 0) {
        return;
      }
      if (uVar6 + 2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0197a954();
      }
      puVar7 = (uint *)(*piVar3 + 0x80);
      uVar8 = *puVar7;
      if (uVar8 == uVar6) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
          if (bVar1) {
            *puVar7 = uVar6 + 2;
            bVar1 = true;
            uVar6 = uVar8;
            goto LAB_0092878c;
          }
          uVar8 = *puVar7;
        } while (uVar8 == uVar6);
      }
      bVar1 = false;
      ClearExclusiveLocal();
      uVar6 = uVar8;
LAB_0092878c:
      DataMemoryBarrier(0xb);
    } while (!bVar1);
    iVar2 = *piVar3;
    puVar7 = (uint *)(iVar2 + 0x24);
    do {
      uVar6 = *puVar7;
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = uVar6 + 1;
    DataMemoryBarrier(0xb);
    iVar4 = FUN_019d0190(iVar2 + 0x20,uVar6);
    puVar7 = (uint *)(iVar4 + 0x88);
    puVar5 = (undefined4 *)(iVar4 + (uVar6 & 0xf) * 8);
    *puVar5 = uVar10;
    puVar5[1] = uVar9;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = *puVar7 | 1 << (uVar6 & 0xf);
    puVar7 = (uint *)(iVar2 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar7;
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = uVar6 | 2;
    DataMemoryBarrier(0xb);
    if (uVar6 != 0) {
      return;
    }
    iVar4 = *(int *)(iVar2 + 0x40);
    *(undefined4 *)(iVar2 + 0x40) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = 0;
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00928858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar2 + 0x44));
      return;
    }
  }
  return;
}

