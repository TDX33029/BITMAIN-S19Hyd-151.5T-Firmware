// FUN_0075dd14 @ 0075dd14 size=1384 calls_out=15 calls_in=0
// strings: send stream capacity unexpectedly closedFuture polled twice

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0075dd14(int param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  code *pcVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  uint local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint auStack_58 [6];
  uint local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  piVar10 = (int *)(param_1 + 0x10);
  while( true ) {
    FUN_00682780(param_1);
    iVar3 = FUN_00682914(param_1);
    do {
      if (iVar3 != 0) goto LAB_0075dd98;
      FUN_0076cff4(&local_40,param_1,param_2);
      uVar4 = local_40 & 0xff;
      iVar3 = local_3c;
    } while (uVar4 == 5);
    if (uVar4 == 6) break;
    if (uVar4 != 7) {
      puVar7 = &local_b8;
      local_b8 = local_40;
      iStack_b4 = local_3c;
      iStack_b0 = local_38;
      uStack_ac = local_34;
      uStack_a8 = local_30;
      uStack_a4 = local_2c;
      goto LAB_0075e0d0;
    }
LAB_0075dd98:
    FUN_00682b24(&local_88,param_1,param_2,1);
    if ((local_88 & 0xff) != 6) {
      if ((local_88 & 0xff) == 5) {
        local_3c = local_84;
        local_40 = CONCAT31(local_40._1_3_,2);
        puVar7 = &local_40;
      }
      else {
        puVar7 = &local_a0;
        local_a0 = local_88;
        iStack_9c = local_84;
        iStack_98 = local_80;
        uStack_94 = local_7c;
        uStack_90 = local_78;
        uStack_8c = local_74;
      }
      goto LAB_0075e0d0;
    }
    FUN_006c0690(&local_40,piVar10);
    if ((local_40 & 1) == 0) {
      if (local_38 == 0) {
        piVar12 = (int *)*piVar10;
        if (piVar12 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar12;
            bVar1 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar1);
          *piVar12 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_014a582c(*piVar10);
          }
        }
        *piVar10 = 0;
      }
      local_7c = local_34;
      local_80 = local_38;
      local_78 = local_30;
      local_74 = local_2c;
    }
    else {
      iVar3 = *piVar10;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018a4ce8);
      }
      piVar12 = (int *)(iVar3 + 0x2c);
      do {
        iVar5 = *piVar12;
        if (iVar5 != 0) {
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          if (iVar5 != 2) goto LAB_0075de04;
          iVar5 = param_2[1];
          pcVar8 = *(code **)(*param_2 + 8);
          goto LAB_0075dfa0;
        }
        bVar1 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar1);
      *piVar12 = 1;
      DataMemoryBarrier(0xb);
LAB_0075de04:
      if (iVar5 == 0) {
        if (*(undefined4 **)(iVar3 + 0x24) == (undefined4 *)0x0) {
          iVar5 = param_2[1];
LAB_0075df04:
          uVar13 = (**(code **)*param_2)(iVar5);
          if (*(int *)(iVar3 + 0x24) != 0) {
            (**(code **)(*(int *)(iVar3 + 0x24) + 0xc))(*(undefined4 *)(iVar3 + 0x28));
          }
          *(undefined8 *)(iVar3 + 0x24) = uVar13;
          iVar5 = *piVar12;
        }
        else {
          iVar5 = param_2[1];
          if (*(int *)(iVar3 + 0x28) != iVar5 ||
              *(undefined4 **)(iVar3 + 0x24) != (undefined4 *)*param_2) goto LAB_0075df04;
          iVar5 = *piVar12;
        }
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar12);
            if (bVar1) {
              *piVar12 = 0;
              DataMemoryBarrier(0xb);
              goto LAB_0075dfa8;
            }
          } while (*piVar12 == 1);
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        iVar6 = *(int *)(iVar3 + 0x24);
        iVar5 = *(int *)(iVar3 + 0x28);
        *(undefined4 *)(iVar3 + 0x24) = 0;
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01882284);
        }
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar1);
        *piVar12 = 0;
        DataMemoryBarrier(0xb);
        pcVar8 = *(code **)(iVar6 + 4);
LAB_0075dfa0:
        (*pcVar8)(iVar5);
      }
LAB_0075dfa8:
      FUN_006c0690(&local_88,piVar10);
      if ((local_88 & 1) != 0) {
        return 1;
      }
    }
    if (local_80 == 0) {
      local_40 = 2;
      cVar2 = FUN_00682f50(param_1,&local_40,1);
      if (cVar2 == '\f') {
        return 0;
      }
      puVar7 = auStack_58;
      goto LAB_0075e0c4;
    }
    local_40 = 1;
    local_38 = local_80;
    local_34 = local_7c;
    local_30 = local_78;
    local_2c = local_74;
    cVar2 = FUN_00682f50(param_1,&local_40,0);
    if (cVar2 != '\f') goto LAB_0075e0c0;
  }
  piVar10 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(piVar10 + 2) = 9;
  *piVar10 = 0;
  FUN_00682d50(piVar10,"send stream capacity unexpectedly closedFuture polled twice",0x28);
LAB_0075e0d8:
  uVar4 = *(uint *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (uVar4 == 0) {
    iVar3 = *piVar10;
    if (iVar3 == 0) goto LAB_0075e190;
    puVar11 = (undefined4 *)piVar10[1];
    if ((code *)*puVar11 != (code *)0x0) {
      (*(code *)*puVar11)(iVar3);
    }
  }
  else {
    DataMemoryBarrier(0xb);
    local_40 = uVar4;
    if (*(char *)(uVar4 + 0x28) == '\0') {
      pcVar9 = (char *)(uVar4 + 0xc);
      DataMemoryBarrier(0xb);
      do {
        cVar2 = *pcVar9;
        bVar1 = (bool)hasExclusiveAccess(pcVar9);
      } while (!bVar1);
      *pcVar9 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar2 != '\0') goto LAB_0075e128;
      if (*(int *)(uVar4 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00566930,0x20,&DAT_018a5d08);
      }
      *(int **)(uVar4 + 8) = piVar10;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(uVar4 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(uVar4 + 0x28) == '\0') {
LAB_0075e1f8:
        FUN_006bb8c8(&local_40);
        return 0;
      }
      DataMemoryBarrier(0xb);
      do {
        cVar2 = *pcVar9;
        bVar1 = (bool)hasExclusiveAccess(pcVar9);
      } while (!bVar1);
      *pcVar9 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar2 != '\0') goto LAB_0075e1f8;
      piVar10 = *(int **)(uVar4 + 8);
      *(undefined4 *)(uVar4 + 8) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(uVar4 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      FUN_006bb8c8(&local_40);
      if (piVar10 == (int *)0x0) {
        return 0;
      }
    }
    else {
LAB_0075e128:
      FUN_006bb8c8(&local_40);
    }
    iVar3 = *piVar10;
    if (iVar3 == 0) goto LAB_0075e190;
    puVar11 = (undefined4 *)piVar10[1];
    if ((code *)*puVar11 != (code *)0x0) {
      (*(code *)*puVar11)(iVar3);
    }
  }
  if (puVar11[1] != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
LAB_0075e190:
  thunk_FUN_016d3fb4(piVar10);
  return 0;
LAB_0075e0c0:
  puVar7 = &local_70;
LAB_0075e0c4:
  *(char *)((int)puVar7 + 1) = cVar2;
  *(undefined1 *)puVar7 = 3;
LAB_0075e0d0:
  piVar10 = (int *)FUN_00682e78(puVar7);
  goto LAB_0075e0d8;
}

