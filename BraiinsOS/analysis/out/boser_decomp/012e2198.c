// FUN_012e2198 @ 012e2198 size=580 calls_out=6 calls_in=2
// strings: 

void FUN_012e2198(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  int local_40;
  undefined1 local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  FUN_01656cb0(&local_38,param_1);
  puVar1 = local_34;
  if (local_38 == (undefined4 *)0x1) {
    local_3c = (undefined1)local_30;
    local_40 = (int)local_34;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01ce3778,&DAT_01d06948);
  }
  uVar9 = local_30 & 0xff;
  iVar2 = *(int *)((int)local_34 + 0x10);
  if (iVar2 != 0) {
    piVar7 = *(int **)((int)local_34 + 0xc);
    piVar6 = piVar7;
    do {
      piVar8 = piVar6 + 3;
      piVar5 = (int *)(*piVar6 + 0xc);
      if (*piVar5 == 0) {
        DataMemoryBarrier(0xb);
LAB_012e2200:
        bVar10 = (bool)hasExclusiveAccess(piVar5);
        if (!bVar10) goto code_r0x012e220c;
        *piVar5 = 2;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar6 = (int *)(*(int *)(*piVar6 + 8) + 0x18);
        do {
          iVar3 = *piVar6;
          bVar10 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar10);
        *piVar6 = 1;
        if (iVar3 == -1) {
          FUN_01be6c3c(0xf0,piVar6,0x81,1);
        }
        goto LAB_012e2220;
      }
LAB_012e2218:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_012e2220:
      piVar6 = piVar8;
    } while (piVar8 != piVar7 + iVar2 * 3);
  }
  local_38 = *(undefined4 **)((int)local_34 + 0x18);
  local_2c = *(int *)((int)local_34 + 0x1c);
  *(undefined4 *)((int)local_34 + 0x1c) = 0;
  local_28 = 0;
  local_30 = (int)local_34 + 0x14;
  local_34 = local_38 + local_2c * 3;
  if (local_2c != 0) {
    do {
      piVar5 = (int *)*local_38;
      piVar6 = local_38 + 1;
      local_38 = local_38 + 3;
      piVar7 = piVar5 + 3;
      if (*piVar7 == 0) {
        DataMemoryBarrier(0xb);
LAB_012e22c8:
        bVar10 = (bool)hasExclusiveAccess(piVar7);
        if (!bVar10) goto code_r0x012e22d4;
        *piVar7 = *piVar6;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar6 = (int *)(piVar5[2] + 0x18);
        do {
          iVar2 = *piVar6;
          bVar10 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar10);
        *piVar6 = 1;
        if (iVar2 == -1) {
          FUN_01be6c3c(0xf0,piVar6,0x81,1);
        }
        goto LAB_012e22e8;
      }
LAB_012e22e0:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_012e22e8:
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar5;
        bVar10 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar10);
      *piVar5 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db128(piVar5);
      }
    } while (local_38 != local_34);
  }
  FUN_01656d48(&local_38);
  uVar4 = 0;
  bVar10 = *(int *)((int)puVar1 + 0x10) == 0;
  if (bVar10) {
    uVar4 = *(uint *)((int)puVar1 + 0x1c);
  }
  DataMemoryBarrier(0xb);
  if (bVar10) {
    uVar4 = (uint)(uVar4 == 0);
  }
  *(char *)(param_1 + 0x20) = (char)uVar4;
  DataMemoryBarrier(0xb);
  FUN_00a97e8c(puVar1,uVar9);
  return;
code_r0x012e220c:
  if (*piVar5 != 0) goto LAB_012e2218;
  goto LAB_012e2200;
code_r0x012e22d4:
  if (*piVar7 != 0) goto LAB_012e22e0;
  goto LAB_012e22c8;
}

