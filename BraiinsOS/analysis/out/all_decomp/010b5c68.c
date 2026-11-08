// FUN_010b5c68 @ 010b5c68 size=544 calls_out=5 calls_in=3
// strings: 

void FUN_010b5c68(int param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  int local_2c;
  int *local_28;
  undefined1 *local_24;
  
  iVar7 = *(int *)(param_1 + 4);
  piVar2 = (int *)*param_2;
  piVar8 = (int *)(iVar7 + 0x14);
  do {
    iVar5 = *piVar8;
    if (iVar5 != 0) {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if (iVar5 != 2) goto LAB_010b5cac;
      iVar5 = piVar2[1];
      pcVar6 = *(code **)(*piVar2 + 8);
      goto LAB_010b5d98;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar1);
  *piVar8 = 1;
  DataMemoryBarrier(0xb);
LAB_010b5cac:
  if (iVar5 != 0) goto LAB_010b5da0;
  if (*(undefined4 **)(iVar7 + 0xc) == (undefined4 *)0x0) {
    iVar5 = piVar2[1];
LAB_010b5d08:
    uVar9 = (**(code **)*piVar2)(iVar5);
    if (*(int *)(iVar7 + 0xc) != 0) {
      (**(code **)(*(int *)(iVar7 + 0xc) + 0xc))(*(undefined4 *)(iVar7 + 0x10));
    }
    *(undefined8 *)(iVar7 + 0xc) = uVar9;
    iVar5 = *piVar8;
  }
  else {
    iVar5 = piVar2[1];
    if (*(int *)(iVar7 + 0x10) != iVar5 || *(undefined4 **)(iVar7 + 0xc) != (undefined4 *)*piVar2)
    goto LAB_010b5d08;
    iVar5 = *piVar8;
  }
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar8);
      if (bVar1) {
        *piVar8 = 0;
        DataMemoryBarrier(0xb);
        local_2c = *(int *)(iVar7 + 8);
        DataMemoryBarrier(0xb);
        if (local_2c == 0) goto LAB_010b5e14;
        goto LAB_010b5db0;
      }
    } while (*piVar8 == 1);
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  iVar3 = *(int *)(iVar7 + 0xc);
  iVar5 = *(int *)(iVar7 + 0x10);
  *(undefined4 *)(iVar7 + 0xc) = 0;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018576f8);
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar1);
  *piVar8 = 0;
  DataMemoryBarrier(0xb);
  pcVar6 = *(code **)(iVar3 + 4);
LAB_010b5d98:
  (*pcVar6)(iVar5);
LAB_010b5da0:
  local_2c = *(int *)(iVar7 + 8);
  DataMemoryBarrier(0xb);
  if (local_2c != 0) {
LAB_010b5db0:
    if (local_2c == 1) {
      return;
    }
    if (local_2c != 2) {
      local_28 = &local_2c;
      local_24 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0057199d,&local_28,&DAT_01884848);
    }
    if (*(char *)(param_1 + 0x10) != '\x02') {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(*(int *)(param_1 + 8) + 0x1c)) {
        FUN_010b7c7c((int *)(param_1 + 8),param_2);
        return;
      }
    }
  }
LAB_010b5e14:
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(puVar4 + 2) = 5;
  *puVar4 = 0;
  return;
}

