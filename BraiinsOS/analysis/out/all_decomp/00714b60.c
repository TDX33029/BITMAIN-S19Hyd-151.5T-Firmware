// FUN_00714b60 @ 00714b60 size=700 calls_out=4 calls_in=3
// strings: 

void FUN_00714b60(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int extraout_r1;
  int extraout_r1_00;
  bool bVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined *local_2c;
  undefined4 *local_28;
  
  uVar13 = (**(code **)(*(int *)(param_1 + 0x1c) + 0x2c))
                     (*(int *)(param_1 + 0x18) +
                      (*(int *)(*(int *)(param_1 + 0x1c) + 8) - 1U & 0xfffffff8) + 8);
  iVar6 = (int)((ulonglong)uVar13 >> 0x20);
  piVar9 = (int *)uVar13;
  if (piVar9 != (int *)0xffffffff) {
    iVar4 = *piVar9;
    do {
      if (iVar4 == 0) goto LAB_00714c68;
      if (iVar4 < 0) {
        local_28 = &DAT_0157d360;
        local_2c = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00590e71,&local_2c,&DAT_018ae288);
      }
      iVar2 = *piVar9;
      if (iVar2 == iVar4) {
        bVar1 = (bool)hasExclusiveAccess(piVar9);
        if (bVar1) {
          *piVar9 = iVar4 + 1;
        }
        bVar7 = false;
        if (bVar1) {
          DataMemoryBarrier(0xb);
          bVar7 = true;
        }
      }
      else {
        bVar7 = false;
        ClearExclusiveLocal();
      }
      iVar4 = iVar2;
    } while (!bVar7);
    (**(code **)(iVar6 + 0x2c))((int)piVar9 + (*(int *)(iVar6 + 8) - 1U & 0xfffffff8) + 8);
    puVar3 = (uint *)(**(code **)(extraout_r1 + 0x34))();
    do {
      uVar8 = *puVar3;
      bVar7 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar7);
    *puVar3 = uVar8 + param_3;
    puVar3[1] = puVar3[1] + param_4 + (uint)CARRY4(uVar8,param_3);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar9;
      bVar7 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar7);
    *piVar9 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(piVar9,iVar6);
    }
LAB_00714c68:
    piVar5 = piVar9 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar7 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar7);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      uVar8 = *(uint *)(iVar6 + 8);
      if (uVar8 < 5) {
        uVar8 = 4;
      }
      if ((*(int *)(iVar6 + 4) + uVar8 + 7 & -uVar8) != 0) {
        thunk_FUN_016d3fb4(piVar9);
      }
    }
  }
  iVar6 = *(int *)(param_1 + 0x14);
  if (iVar6 != 0) {
    puVar10 = *(undefined4 **)(param_1 + 0x10);
    puVar11 = puVar10;
    do {
      puVar12 = puVar11 + 2;
      piVar9 = (int *)*puVar11;
      if (piVar9 != (int *)0xffffffff) {
        iVar4 = *piVar9;
        do {
          if (iVar4 == 0) goto LAB_00714cd0;
          if (iVar4 < 0) {
            local_28 = &DAT_0157d360;
            local_2c = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00590e71,&local_2c,&DAT_018ae288);
          }
          iVar2 = *piVar9;
          if (iVar2 == iVar4) {
            bVar1 = (bool)hasExclusiveAccess(piVar9);
            if (bVar1) {
              *piVar9 = iVar4 + 1;
            }
            bVar7 = false;
            if (bVar1) {
              DataMemoryBarrier(0xb);
              bVar7 = true;
            }
          }
          else {
            bVar7 = false;
            ClearExclusiveLocal();
          }
          iVar4 = iVar2;
        } while (!bVar7);
        iVar4 = puVar11[1];
        (**(code **)(iVar4 + 0x28))((int)piVar9 + (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8);
        puVar3 = (uint *)(**(code **)(extraout_r1_00 + 0x30))();
        do {
          uVar8 = *puVar3;
          bVar7 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar7);
        *puVar3 = uVar8 + param_3;
        puVar3[1] = puVar3[1] + param_4 + (uint)CARRY4(uVar8,param_3);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar9;
          bVar7 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar7);
        *piVar9 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(piVar9,iVar4);
        }
      }
LAB_00714cd0:
      puVar11 = puVar12;
    } while (puVar12 != puVar10 + iVar6 * 2);
  }
  return;
}

