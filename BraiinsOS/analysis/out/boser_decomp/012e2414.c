// FUN_012e2414 @ 012e2414 size=744 calls_out=8 calls_in=2
// strings: 

void FUN_012e2414(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int extraout_r3;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  int *local_40;
  undefined1 local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  
  DataMemoryBarrier(0xb);
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_01656cb0(&local_38,param_1);
    piVar2 = local_34;
    if (local_38 == (int *)&DAT_00000001) {
      local_3c = local_30._0_1_;
      local_40 = local_34;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01ce3778,&DAT_01d06968);
    }
    uVar9 = (uint)local_30 & 0xff;
    DataMemoryBarrier(0xb);
    if (*(char *)(param_1 + 0x20) == '\0') {
      if (local_34[4] != 0) {
        uVar10 = thunk_FUN_01bee35a();
        iVar8 = 0;
        piVar4 = (int *)local_34[3];
        do {
          piVar5 = piVar4 + 3;
          iVar7 = *piVar4;
          if (*(int *)(iVar7 + 0x14) != (int)uVar10 + extraout_r3) {
            piVar6 = (int *)(iVar7 + 0xc);
            if (*piVar6 == 0) {
              DataMemoryBarrier(0xb);
LAB_012e24b8:
              bVar1 = (bool)hasExclusiveAccess(piVar6);
              if (!bVar1) goto code_r0x012e24c4;
              *piVar6 = piVar4[1];
              DataMemoryBarrier(0xb);
              if (piVar4[2] != 0) {
                DataMemoryBarrier(0xb);
                *(int *)(iVar7 + 0x10) = piVar4[2];
              }
              DataMemoryBarrier(0xb);
              piVar4 = (int *)(*(int *)(iVar7 + 8) + 0x18);
              do {
                iVar7 = *piVar4;
                bVar1 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar1);
              *piVar4 = 1;
              if (iVar7 == -1) {
                FUN_01be6c3c(0xf0,piVar4,0x81,1);
              }
              FUN_012e8fb8(&local_38,local_34 + 2,iVar8,&DAT_01d06a78);
              if (local_38 != (int *)0x0) {
                DataMemoryBarrier(0xb);
                do {
                  iVar8 = *local_38;
                  bVar1 = (bool)hasExclusiveAccess(local_38);
                } while (!bVar1);
                *local_38 = iVar8 + -1;
                if (iVar8 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_019db128(local_38);
                }
              }
              break;
            }
LAB_012e24d0:
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
          }
          iVar8 = iVar8 + 1;
          piVar4 = piVar5;
        } while (piVar5 != (int *)local_34[3] + (int)((ulonglong)uVar10 >> 0x20) * 3);
      }
      local_38 = (int *)local_34[6];
      local_2c = local_34[7];
      local_34[7] = 0;
      local_28 = 0;
      local_30 = local_34 + 5;
      local_34 = local_38 + local_2c * 3;
      if (local_2c != 0) {
        do {
          piVar6 = (int *)*local_38;
          piVar4 = local_38 + 1;
          local_38 = local_38 + 3;
          piVar5 = piVar6 + 3;
          if (*piVar5 == 0) {
            DataMemoryBarrier(0xb);
LAB_012e25e8:
            bVar1 = (bool)hasExclusiveAccess(piVar5);
            if (!bVar1) goto code_r0x012e25f4;
            *piVar5 = *piVar4;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar4 = (int *)(piVar6[2] + 0x18);
            do {
              iVar8 = *piVar4;
              bVar1 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar1);
            *piVar4 = 1;
            if (iVar8 == -1) {
              FUN_01be6c3c(0xf0,piVar4,0x81,1);
            }
            goto LAB_012e2608;
          }
LAB_012e2600:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_012e2608:
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar6;
            bVar1 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar1);
          *piVar6 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_019db128(piVar6);
          }
        } while (local_38 != local_34);
      }
      FUN_01656d48(&local_38);
      uVar3 = 0;
      if (piVar2[4] == 0) {
        uVar3 = piVar2[7];
      }
      DataMemoryBarrier(0xb);
      if (piVar2[4] == 0) {
        uVar3 = (uint)(uVar3 == 0);
      }
      *(char *)(param_1 + 0x20) = (char)uVar3;
      DataMemoryBarrier(0xb);
    }
    FUN_00a97e8c(piVar2,uVar9);
  }
  return;
code_r0x012e24c4:
  if (*piVar6 != 0) goto LAB_012e24d0;
  goto LAB_012e24b8;
code_r0x012e25f4:
  if (*piVar5 != 0) goto LAB_012e2600;
  goto LAB_012e25e8;
}

