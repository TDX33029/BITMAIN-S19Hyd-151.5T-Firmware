// FUN_016455a4 @ 016455a4 size=192 calls_out=3 calls_in=93
// strings: 

void FUN_016455a4(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int extraout_r2;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar8 = thunk_FUN_016de0ee(param_1,param_2,0x40);
  puVar4 = (undefined4 *)((ulonglong)uVar8 >> 0x20);
  iVar6 = (int)uVar8 + extraout_r2;
  if (*(char *)(iVar6 + 0x38) != '\x01') {
    if (*(char *)(iVar6 + 0x38) == '\x02') goto LAB_01645604;
    FUN_015e8e6c(iVar6,FUN_01655ec4);
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  piVar1 = (int *)(uint)*(byte *)(iVar6 + 0x32);
  bVar7 = piVar1 != (int *)&SUB_00000002;
  if (bVar7) {
    piVar1 = *(int **)(iVar6 + 0x20);
  }
  if (!bVar7 || piVar1 == (int *)0x0) {
LAB_01645604:
                    /* WARNING: Could not recover jumptable at 0x01645610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[2])(puVar4);
    return;
  }
  if (*piVar1 == 1) {
    bVar7 = piVar1[2] == 0x7fffffff;
    if (0x7ffffffe < (uint)piVar1[2]) {
      uVar8 = FUN_00fb71b0(&DAT_018ad07c);
      piVar1 = (int *)((ulonglong)uVar8 >> 0x20);
      uVar3 = (uint)uVar8;
      if (bVar7) {
        uVar3 = (uint)piVar1 & ((uint)param_1 >> 0x11 | (int)param_1 << 0xf);
      }
      if (uVar3 == 0) {
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar1;
          bVar7 = (bool)hasExclusiveAccess(piVar1);
        } while (!bVar7);
        *piVar1 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01659344(piVar1);
          return;
        }
      }
      else if (uVar3 != 2) {
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar1;
          bVar7 = (bool)hasExclusiveAccess(piVar1);
        } while (!bVar7);
        *piVar1 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_016586fc(piVar1);
          return;
        }
        return;
      }
      return;
    }
    if (piVar1[3] == 0) goto LAB_01645604;
  }
  piVar2 = piVar1 + 4;
  if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018ad0dc);
  }
  *piVar2 = -1;
  if (piVar1[7] != 0) {
    iVar6 = piVar1[6] + piVar1[7] * 8;
    puVar5 = *(undefined4 **)(iVar6 + -4);
    bVar7 = puVar5 == puVar4;
    if (bVar7) {
      puVar5 = *(undefined4 **)(iVar6 + -8);
      iVar6 = 0;
    }
    if (bVar7 && puVar5 == param_1) goto LAB_01655ba4;
  }
  uVar8 = (*(code *)*param_1)(puVar4);
  iVar6 = piVar1[7];
  if (iVar6 == piVar1[5]) {
    FUN_01643104(piVar1 + 5);
  }
  *(undefined8 *)(piVar1[6] + iVar6 * 8) = uVar8;
  piVar1[7] = iVar6 + 1;
  iVar6 = *piVar2 + 1;
LAB_01655ba4:
  *piVar2 = iVar6;
  return;
}

