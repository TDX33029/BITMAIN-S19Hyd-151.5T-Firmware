// FUN_012e4bf4 @ 012e4bf4 size=972 calls_out=9 calls_in=3
// strings: 

void FUN_012e4bf4(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *local_3c;
  undefined1 local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int local_28;
  undefined4 local_24;
  
  if (param_1 == 0) {
    piVar9 = param_2 + 0x28;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      puVar7 = (uint *)(param_2 + 8);
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar7;
        bVar1 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar1);
      *puVar7 = uVar4 | param_2[0x12];
      DataMemoryBarrier(0xb);
      if ((param_2[0x12] & uVar4) == 0) {
        FUN_012e2198(param_2 + 0x1c);
      }
      piVar9 = param_2 + 0x2a;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar9;
        bVar1 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar1);
      *(char *)piVar9 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)iVar3 != '\0') {
        if (param_2[0x26] != 0) {
          thunk_FUN_01be4678(param_2[0x25]);
        }
        FUN_012eacbc(param_2 + 0x15);
        FUN_012eacbc(param_2 + 0x1e);
        thunk_FUN_01be4678(param_2);
        return;
      }
    }
  }
  else if (param_1 == 1) {
    piVar9 = param_2 + 0x20;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      puVar7 = (uint *)(param_2 + 8);
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar7;
        bVar1 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar1);
      *puVar7 = uVar4 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar4 & 1) == 0) {
        FUN_01656cb0(&local_34,param_2 + 0x10);
        puVar2 = local_30;
        if (local_34 == (undefined4 *)&DAT_00000001) {
          local_38 = local_2c._0_1_;
          local_3c = local_30;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_3c,&DAT_01ce3748,&DAT_01d06948);
        }
        uVar4 = (uint)local_2c & 0xff;
        iVar3 = local_30[4];
        if (iVar3 != 0) {
          piVar10 = (int *)local_30[3];
          piVar9 = piVar10;
          do {
            piVar11 = piVar9 + 3;
            piVar8 = (int *)(*piVar9 + 0xc);
            if (*piVar8 == 0) {
              DataMemoryBarrier(0xb);
LAB_012e4cbc:
              bVar1 = (bool)hasExclusiveAccess(piVar8);
              if (!bVar1) goto code_r0x012e4cc8;
              *piVar8 = 2;
              DataMemoryBarrier(0xb);
              DataMemoryBarrier(0xb);
              piVar9 = (int *)(*(int *)(*piVar9 + 8) + 0x18);
              do {
                iVar5 = *piVar9;
                bVar1 = (bool)hasExclusiveAccess(piVar9);
              } while (!bVar1);
              *piVar9 = 1;
              if (iVar5 == -1) {
                FUN_01be6c3c(0xf0,piVar9,0x81,1);
              }
              goto LAB_012e4cdc;
            }
LAB_012e4cd4:
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
LAB_012e4cdc:
            piVar9 = piVar11;
          } while (piVar11 != piVar10 + iVar3 * 3);
        }
        local_34 = (undefined4 *)local_30[6];
        local_28 = local_30[7];
        local_30[7] = 0;
        local_24 = 0;
        local_2c = local_30 + 5;
        local_30 = local_34 + local_28 * 3;
        if (local_28 != 0) {
          do {
            piVar8 = (int *)*local_34;
            piVar9 = local_34 + 1;
            local_34 = local_34 + 3;
            piVar10 = piVar8 + 3;
            if (*piVar10 == 0) {
              DataMemoryBarrier(0xb);
LAB_012e4e7c:
              bVar1 = (bool)hasExclusiveAccess(piVar10);
              if (!bVar1) goto code_r0x012e4e88;
              *piVar10 = *piVar9;
              DataMemoryBarrier(0xb);
              DataMemoryBarrier(0xb);
              piVar9 = (int *)(piVar8[2] + 0x18);
              do {
                iVar3 = *piVar9;
                bVar1 = (bool)hasExclusiveAccess(piVar9);
              } while (!bVar1);
              *piVar9 = 1;
              if (iVar3 == -1) {
                FUN_01be6c3c(0xf0,piVar9,0x81,1);
              }
              goto LAB_012e4e9c;
            }
LAB_012e4e94:
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
LAB_012e4e9c:
            DataMemoryBarrier(0xb);
            do {
              iVar3 = *piVar8;
              bVar1 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar1);
            *piVar8 = iVar3 + -1;
            if (iVar3 == 1) {
              DataMemoryBarrier(0xb);
              FUN_019db128(piVar8);
            }
          } while (local_34 != local_30);
        }
        FUN_01656d48(&local_34);
        uVar6 = 0;
        if (puVar2[4] == 0) {
          uVar6 = puVar2[7];
        }
        DataMemoryBarrier(0xb);
        if (puVar2[4] == 0) {
          uVar6 = (uint)(uVar6 == 0);
        }
        *(char *)(param_2 + 0x18) = (char)uVar6;
        DataMemoryBarrier(0xb);
        FUN_00a97e8c(puVar2,uVar4);
      }
      piVar9 = param_2 + 0x22;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar9;
        bVar1 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar1);
      *(char *)piVar9 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)iVar3 != '\0') {
        FUN_012eacec(param_2);
      }
    }
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      FUN_012d8c14(param_2 + 2);
      piVar9 = param_2 + 0x11;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar9;
        bVar1 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar1);
      *(char *)piVar9 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)iVar3 != '\0') {
        FUN_012eacbc(param_2 + 4);
        FUN_012eacbc(param_2 + 10);
        thunk_FUN_01be4678(param_2);
        return;
      }
    }
  }
  return;
code_r0x012e4cc8:
  if (*piVar8 != 0) goto LAB_012e4cd4;
  goto LAB_012e4cbc;
code_r0x012e4e88:
  if (*piVar10 != 0) goto LAB_012e4e94;
  goto LAB_012e4e7c;
}

