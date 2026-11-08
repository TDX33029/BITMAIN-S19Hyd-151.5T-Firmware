// FUN_012d8c14 @ 012d8c14 size=980 calls_out=6 calls_in=2
// strings: 

void FUN_012d8c14(undefined4 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
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
    FUN_013073dc(&DAT_00533467,0x2b,&local_3c,&DAT_01ce36f8,&DAT_01d069d8);
  }
  uVar9 = (uint)local_2c & 0xff;
  if (*(char *)(local_30 + 0xe) == '\0') {
    iVar4 = local_30[4];
    piVar6 = (int *)local_30[3];
    *(undefined1 *)(local_30 + 0xe) = 1;
    if (iVar4 != 0) {
      piVar8 = piVar6;
      do {
        piVar7 = piVar8 + 3;
        piVar5 = (int *)(*piVar8 + 0xc);
        if (*piVar5 == 0) {
          DataMemoryBarrier(0xb);
LAB_012d8c88:
          bVar1 = (bool)hasExclusiveAccess(piVar5);
          if (!bVar1) goto code_r0x012d8c94;
          *piVar5 = 2;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          piVar8 = (int *)(*(int *)(*piVar8 + 8) + 0x18);
          do {
            iVar3 = *piVar8;
            bVar1 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar1);
          *piVar8 = 1;
          if (iVar3 == -1) {
            FUN_01be6c3c(0xf0,piVar8,0x81,1);
          }
          goto LAB_012d8ca8;
        }
LAB_012d8ca0:
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
LAB_012d8ca8:
        piVar8 = piVar7;
      } while (piVar7 != piVar6 + iVar4 * 3);
    }
    local_34 = (undefined4 *)local_30[6];
    local_28 = local_30[7];
    local_30[7] = 0;
    local_24 = 0;
    local_2c = local_30 + 5;
    local_30 = local_34 + local_28 * 3;
    if (local_28 != 0) {
      do {
        piVar5 = (int *)*local_34;
        piVar6 = local_34 + 1;
        local_34 = local_34 + 3;
        piVar8 = piVar5 + 3;
        if (*piVar8 == 0) {
          DataMemoryBarrier(0xb);
LAB_012d8d50:
          bVar1 = (bool)hasExclusiveAccess(piVar8);
          if (!bVar1) goto code_r0x012d8d5c;
          *piVar8 = *piVar6;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          piVar6 = (int *)(piVar5[2] + 0x18);
          do {
            iVar4 = *piVar6;
            bVar1 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar1);
          *piVar6 = 1;
          if (iVar4 == -1) {
            FUN_01be6c3c(0xf0,piVar6,0x81,1);
          }
          goto LAB_012d8d70;
        }
LAB_012d8d68:
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
LAB_012d8d70:
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019db128(piVar5);
        }
      } while (local_34 != local_30);
    }
    FUN_01656d48(&local_34);
    iVar4 = puVar2[10];
    if (iVar4 != 0) {
      piVar8 = (int *)puVar2[9];
      piVar6 = piVar8;
      do {
        piVar7 = piVar6 + 3;
        piVar5 = (int *)(*piVar6 + 0xc);
        if (*piVar5 == 0) {
          DataMemoryBarrier(0xb);
LAB_012d8e30:
          bVar1 = (bool)hasExclusiveAccess(piVar5);
          if (!bVar1) goto code_r0x012d8e3c;
          *piVar5 = 2;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          piVar6 = (int *)(*(int *)(*piVar6 + 8) + 0x18);
          do {
            iVar3 = *piVar6;
            bVar1 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar1);
          *piVar6 = 1;
          if (iVar3 == -1) {
            FUN_01be6c3c(0xf0,piVar6,0x81,1);
          }
          goto LAB_012d8e50;
        }
LAB_012d8e48:
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
LAB_012d8e50:
        piVar6 = piVar7;
      } while (piVar7 != piVar8 + iVar4 * 3);
    }
    local_34 = (undefined4 *)puVar2[0xc];
    local_28 = puVar2[0xd];
    puVar2[0xd] = 0;
    local_24 = 0;
    local_2c = puVar2 + 0xb;
    local_30 = local_34 + local_28 * 3;
    if (local_28 != 0) {
      do {
        piVar5 = (int *)*local_34;
        piVar6 = local_34 + 1;
        local_34 = local_34 + 3;
        piVar8 = piVar5 + 3;
        if (*piVar8 == 0) {
          DataMemoryBarrier(0xb);
LAB_012d8ef8:
          bVar1 = (bool)hasExclusiveAccess(piVar8);
          if (!bVar1) goto code_r0x012d8f04;
          *piVar8 = *piVar6;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          piVar6 = (int *)(piVar5[2] + 0x18);
          do {
            iVar4 = *piVar6;
            bVar1 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar1);
          *piVar6 = 1;
          if (iVar4 == -1) {
            FUN_01be6c3c(0xf0,piVar6,0x81,1);
          }
          goto LAB_012d8f18;
        }
LAB_012d8f10:
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
LAB_012d8f18:
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019db128(piVar5);
        }
      } while (local_34 != local_30);
    }
    FUN_01656d48(&local_34);
  }
  FUN_00a97e8c(puVar2,uVar9);
  return;
code_r0x012d8c94:
  if (*piVar5 != 0) goto LAB_012d8ca0;
  goto LAB_012d8c88;
code_r0x012d8d5c:
  if (*piVar8 != 0) goto LAB_012d8d68;
  goto LAB_012d8d50;
code_r0x012d8e3c:
  if (*piVar5 != 0) goto LAB_012d8e48;
  goto LAB_012d8e30;
code_r0x012d8f04:
  if (*piVar8 != 0) goto LAB_012d8f10;
  goto LAB_012d8ef8;
}

