// FUN_012e9ce8 @ 012e9ce8 size=996 calls_out=6 calls_in=1
// strings: 

void FUN_012e9ce8(undefined4 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *local_3c;
  undefined1 local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int local_28;
  undefined4 local_24;
  
  FUN_01656cb0(&local_34,param_1);
  puVar2 = local_30;
  if (local_34 == (undefined4 *)&DAT_00000001) {
    local_38 = local_2c._0_1_;
    local_3c = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_3c,&DAT_01ce3ba0,&DAT_01cf36f8);
  }
  uVar10 = (uint)local_2c & 0xff;
  if (*(char *)(local_30 + 0xe) == '\0') {
    iVar4 = local_30[4];
    piVar7 = (int *)local_30[3];
    *(undefined1 *)(local_30 + 0xe) = 1;
    if (iVar4 != 0) {
      piVar9 = piVar7;
      do {
        piVar8 = piVar9 + 3;
        piVar5 = (int *)(*piVar9 + 0x14);
        if (*piVar5 == 0) {
          DataMemoryBarrier(0xb);
LAB_012e9d5c:
          bVar1 = (bool)hasExclusiveAccess(piVar5);
          if (!bVar1) goto code_r0x012e9d68;
          *piVar5 = 2;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          piVar9 = (int *)(*(int *)(*piVar9 + 0x10) + 0x18);
          do {
            iVar3 = *piVar9;
            bVar1 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar1);
          *piVar9 = 1;
          if (iVar3 == -1) {
            FUN_01be6c3c(0xf0,piVar9,0x81,1);
          }
          goto LAB_012e9d7c;
        }
LAB_012e9d74:
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
LAB_012e9d7c:
        piVar9 = piVar8;
      } while (piVar8 != piVar7 + iVar4 * 3);
    }
    local_34 = (undefined4 *)local_30[6];
    local_28 = local_30[7];
    local_30[7] = 0;
    local_24 = 0;
    local_2c = local_30 + 5;
    local_30 = local_34 + local_28 * 3;
    puVar6 = local_34;
    if (local_28 != 0) {
      do {
        puVar6 = local_34 + 3;
        piVar7 = (int *)*local_34;
        if (piVar7 == (int *)0x0) break;
        piVar9 = piVar7 + 5;
        if (*piVar9 == 0) {
          DataMemoryBarrier(0xb);
LAB_012e9e2c:
          bVar1 = (bool)hasExclusiveAccess(piVar9);
          if (!bVar1) goto code_r0x012e9e38;
          *piVar9 = local_34[1];
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          piVar9 = (int *)(piVar7[4] + 0x18);
          do {
            iVar4 = *piVar9;
            bVar1 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar1);
          *piVar9 = 1;
          local_34 = puVar6;
          if (iVar4 == -1) {
            FUN_01be6c3c(0xf0,piVar9,0x81,1);
          }
          goto LAB_012e9e4c;
        }
LAB_012e9e44:
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        local_34 = puVar6;
LAB_012e9e4c:
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar7;
          bVar1 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar1);
        *piVar7 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01319d44(piVar7);
        }
        puVar6 = local_34;
      } while (local_34 != local_30);
    }
    local_34 = puVar6;
    FUN_012ec1f4(&local_34);
    iVar4 = puVar2[10];
    if (iVar4 != 0) {
      piVar9 = (int *)puVar2[9];
      piVar7 = piVar9;
      do {
        piVar8 = piVar7 + 3;
        piVar5 = (int *)(*piVar7 + 0x14);
        if (*piVar5 == 0) {
          DataMemoryBarrier(0xb);
LAB_012e9f0c:
          bVar1 = (bool)hasExclusiveAccess(piVar5);
          if (!bVar1) goto code_r0x012e9f18;
          *piVar5 = 2;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          piVar7 = (int *)(*(int *)(*piVar7 + 0x10) + 0x18);
          do {
            iVar3 = *piVar7;
            bVar1 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar1);
          *piVar7 = 1;
          if (iVar3 == -1) {
            FUN_01be6c3c(0xf0,piVar7,0x81,1);
          }
          goto LAB_012e9f2c;
        }
LAB_012e9f24:
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
LAB_012e9f2c:
        piVar7 = piVar8;
      } while (piVar8 != piVar9 + iVar4 * 3);
    }
    local_34 = (undefined4 *)puVar2[0xc];
    local_28 = puVar2[0xd];
    puVar2[0xd] = 0;
    local_24 = 0;
    local_2c = puVar2 + 0xb;
    local_30 = local_34 + local_28 * 3;
    puVar6 = local_34;
    if (local_28 != 0) {
      do {
        puVar6 = local_34 + 3;
        piVar7 = (int *)*local_34;
        if (piVar7 == (int *)0x0) break;
        piVar9 = piVar7 + 5;
        if (*piVar9 == 0) {
          DataMemoryBarrier(0xb);
LAB_012e9fdc:
          bVar1 = (bool)hasExclusiveAccess(piVar9);
          if (!bVar1) goto code_r0x012e9fe8;
          *piVar9 = local_34[1];
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          piVar9 = (int *)(piVar7[4] + 0x18);
          do {
            iVar4 = *piVar9;
            bVar1 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar1);
          *piVar9 = 1;
          local_34 = puVar6;
          if (iVar4 == -1) {
            FUN_01be6c3c(0xf0,piVar9,0x81,1);
          }
          goto LAB_012e9ffc;
        }
LAB_012e9ff4:
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        local_34 = puVar6;
LAB_012e9ffc:
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar7;
          bVar1 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar1);
        *piVar7 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01319d44(piVar7);
        }
        puVar6 = local_34;
      } while (local_34 != local_30);
    }
    local_34 = puVar6;
    FUN_012ec1f4(&local_34);
  }
  FUN_012e8f40(puVar2,uVar10);
  return;
code_r0x012e9d68:
  if (*piVar5 != 0) goto LAB_012e9d74;
  goto LAB_012e9d5c;
code_r0x012e9e38:
  if (*piVar9 != 0) goto LAB_012e9e44;
  goto LAB_012e9e2c;
code_r0x012e9f18:
  if (*piVar5 != 0) goto LAB_012e9f24;
  goto LAB_012e9f0c;
code_r0x012e9fe8:
  if (*piVar9 != 0) goto LAB_012e9ff4;
  goto LAB_012e9fdc;
}

