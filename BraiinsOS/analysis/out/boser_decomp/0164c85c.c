// FUN_0164c85c @ 0164c85c size=840 calls_out=11 calls_in=2
// strings: 

void FUN_0164c85c(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  int extraout_r2;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 uVar12;
  int local_90;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  DataMemoryBarrier(0xb);
  if (0xf < *param_1) {
    uVar11 = ((uint)param_1 | 1) * -0x61c88647;
    uVar12 = thunk_FUN_01bee35a(0x9e3779b9,*param_1,0x184);
    piVar2 = (int *)((int)uVar12 + extraout_r2);
    uVar9 = 0;
    uVar4 = (uint)((ulonglong)uVar12 >> 0x20);
    do {
      if (uVar9 < 10) {
        if (uVar9 < 3) {
          iVar3 = 2 << (uVar9 & 0xff);
          do {
            iVar3 = iVar3 + -1;
            HintYield();
          } while (iVar3 != 0);
        }
        else {
          FUN_01bea67c();
        }
        uVar9 = uVar9 + 1;
LAB_0164cb00:
        uVar8 = *param_1;
        DataMemoryBarrier(0xb);
      }
      else {
        if ((uVar4 & 2) != 0) {
LAB_0164c940:
          local_90 = 0;
          piVar6 = piVar2;
          if ((char)piVar2[0xd] != '\x01') {
            piVar6 = (int *)FUN_01652ae4(piVar2);
            if ((piVar6 == (int *)0x0) && (piVar6 = &local_8c, local_90 == 0)) {
              FUN_01651608(&local_58);
              FUN_0164cc04(&local_90);
              local_90 = 1;
              local_8c = local_58;
              uStack_88 = uStack_54;
              uStack_84 = uStack_50;
              uStack_80 = uStack_4c;
              local_7c = local_48;
              uStack_78 = uStack_44;
              uStack_74 = uStack_40;
              uStack_70 = uStack_3c;
              local_6c = local_38;
              uStack_68 = uStack_34;
              uStack_64 = uStack_30;
              uStack_60 = uStack_2c;
              uStack_5c = uStack_28;
            }
          }
LAB_0164c954:
          DataMemoryBarrier(0xb);
          piVar5 = DAT_01d519e4;
          if (DAT_01d519e4 == (int *)0x0) {
            piVar5 = (int *)FUN_016518b8();
          }
          uVar4 = uVar11 >> (-piVar5[2] & 0x1fU);
          if ((uint)piVar5[1] <= uVar11 >> (-piVar5[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar4,piVar5[1],&DAT_01d068e8);
          }
          iVar3 = *piVar5 + uVar4 * 0x40;
          puVar10 = (uint *)(iVar3 + 0x18);
          if (*puVar10 == 0) {
            bVar1 = (bool)hasExclusiveAccess(puVar10);
            if (!bVar1) goto LAB_0164c9f0;
            *puVar10 = 1;
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_0164c9f0:
            FUN_01652ed8(puVar10);
          }
          if (DAT_01d519e4 != piVar5) {
            DataMemoryBarrier(0xb);
            do {
              uVar4 = *puVar10;
              bVar1 = (bool)hasExclusiveAccess(puVar10);
            } while (!bVar1);
            *puVar10 = uVar4 - 1;
            if ((3 < uVar4) && ((uVar4 & 2) == 0)) {
              FUN_01652d70(puVar10);
            }
            goto LAB_0164c954;
          }
          if ((*param_1 < 0x10) || ((*param_1 & 2) == 0)) {
            DataMemoryBarrier(0xb);
            do {
              uVar4 = *puVar10;
              bVar1 = (bool)hasExclusiveAccess(puVar10);
            } while (!bVar1);
            *puVar10 = uVar4 - 1;
            if ((3 < uVar4) && ((uVar4 & 2) == 0)) {
              FUN_01652d70(puVar10);
            }
          }
          else {
            piVar6[2] = 0;
            *(undefined1 *)(piVar6 + 0xc) = 0;
            piVar6[1] = (uint)param_1 | 1;
            piVar6[4] = 8;
            *piVar6 = 1;
            if (*(int *)(iVar3 + 0x1c) == 0) {
              *(int **)(iVar3 + 0x1c) = piVar6;
            }
            else {
              *(int **)(*(int *)(iVar3 + 0x20) + 8) = piVar6;
            }
            *(int **)(iVar3 + 0x20) = piVar6;
            DataMemoryBarrier(0xb);
            do {
              uVar4 = *puVar10;
              bVar1 = (bool)hasExclusiveAccess(puVar10);
            } while (!bVar1);
            *puVar10 = uVar4 - 1;
            if ((3 < uVar4) && ((uVar4 & 2) == 0)) {
              FUN_01652d70(puVar10);
            }
            iVar3 = *piVar6;
            DataMemoryBarrier(0xb);
            while (iVar3 != 0) {
              FUN_01be6c3c(0xf0,piVar6,0x80,1,0);
              iVar3 = *piVar6;
              DataMemoryBarrier(0xb);
            }
            FUN_01650ba0(piVar6);
          }
          FUN_0164cc04(&local_90);
          goto LAB_0164cb00;
        }
        uVar8 = *param_1;
        if (uVar8 == uVar4) {
          bVar7 = hasExclusiveAccess(param_1);
          if ((bool)bVar7) {
            *param_1 = uVar4 | 2;
          }
        }
        else {
          bVar7 = 0;
          ClearExclusiveLocal();
        }
        DataMemoryBarrier(0xb);
        if ((bool)(bVar7 & 1)) goto LAB_0164c940;
      }
      uVar4 = uVar8;
    } while (0xf < uVar8);
  }
  return;
}

