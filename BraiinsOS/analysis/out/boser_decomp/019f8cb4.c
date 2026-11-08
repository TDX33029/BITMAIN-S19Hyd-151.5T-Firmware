// FUN_019f8cb4 @ 019f8cb4 size=800 calls_out=9 calls_in=3
// strings: 

void FUN_019f8cb4(char *param_1,uint param_2,char *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  undefined *puVar10;
  byte bVar11;
  uint *puVar12;
  byte bVar13;
  uint local_13c;
  int aiStack_138 [65];
  uint *local_34;
  code *local_30;
  undefined *local_2c;
  code *local_28;
  
  aiStack_138[0x40] = 0;
  local_13c = param_2;
  if (param_2 == 0) {
    FUN_01650a90(param_3);
    if (*param_3 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_3);
        if (bVar1) {
          *param_3 = '\0';
          goto LAB_019f8f3c;
        }
      } while (*param_3 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(param_3);
  }
  else {
    puVar12 = (uint *)(param_1 + 0x10);
    bVar11 = 0;
    do {
      uVar7 = local_13c;
      if (param_3 == (char *)0x0) {
        if (*param_1 == '\0') {
          bVar1 = (bool)hasExclusiveAccess(param_1);
          if (!bVar1) goto LAB_019f8d10;
          *param_1 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_019f8d10:
          FUN_0164fba8();
        }
        FUN_0165098c(param_1);
        uVar7 = local_13c;
        param_3 = param_1;
      }
      while (local_13c = uVar7, (uint)aiStack_138[0x40] < 0x20) {
        iVar6 = *(int *)(param_3 + 8);
        if (iVar6 == 0) {
          if (uVar7 != 0) goto LAB_019f8e54;
          uVar7 = 0;
          bVar13 = 1;
          goto LAB_019f8e90;
        }
        puVar8 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0xb);
        uVar3 = *(uint *)(iVar6 + 0x10);
        do {
          uVar2 = uVar3;
          uVar3 = *puVar8;
          local_13c = uVar2;
          if (uVar7 < uVar2) {
            local_13c = uVar7;
          }
          if (uVar3 == uVar2) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar8);
              if (bVar1) {
                *puVar8 = uVar2 - local_13c;
                bVar1 = true;
                goto LAB_019f8d94;
              }
              uVar3 = *puVar8;
            } while (uVar3 == uVar2);
          }
          bVar1 = false;
          ClearExclusiveLocal();
LAB_019f8d94:
          DataMemoryBarrier(0xb);
        } while (!bVar1);
        local_13c = uVar7 - local_13c;
        if (uVar7 < uVar2) break;
        piVar4 = *(int **)(param_3 + 8);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d29a78);
        }
        iVar6 = piVar4[2];
        *(int *)(param_3 + 8) = iVar6;
        if (iVar6 == 0) {
          param_3[4] = '\0';
          param_3[5] = '\0';
          param_3[6] = '\0';
          param_3[7] = '\0';
        }
        else {
          *(undefined4 *)(iVar6 + 0xc) = 0;
        }
        iVar9 = *piVar4;
        iVar6 = piVar4[1];
        piVar4[2] = 0;
        piVar4[3] = 0;
        *piVar4 = 0;
        uVar7 = local_13c;
        if (iVar9 != 0) {
          if (0x1f < (uint)aiStack_138[0x40]) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(aiStack_138[0x40],0x20,&DAT_01d28cc4);
          }
          aiStack_138[aiStack_138[0x40] * 2] = iVar9;
          aiStack_138[aiStack_138[0x40] * 2 + 1] = iVar6;
          aiStack_138[0x40] = aiStack_138[0x40] + 1;
        }
      }
      bVar13 = local_13c == 0 & bVar11;
      uVar7 = local_13c;
      if ((local_13c != 0) && (!(bool)(bVar11 ^ 1))) {
LAB_019f8e54:
        if (0x1fffffff < local_13c) {
          puVar10 = &DAT_01d29a58;
          puVar5 = &DAT_00571657;
          local_34 = (uint *)&DAT_0056e978;
LAB_019f8fd4:
          local_30 = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar5,&local_34,puVar10);
        }
        DataMemoryBarrier(0xb);
        do {
          uVar7 = *puVar12;
          bVar1 = (bool)hasExclusiveAccess(puVar12);
        } while (!bVar1);
        *puVar12 = uVar7 + local_13c * 2;
        if (0x1fffffff < local_13c + (uVar7 >> 1)) {
          local_34 = &local_13c;
          puVar10 = &DAT_01d29a68;
          puVar5 = &DAT_0057ed9a;
          local_28 = FUN_012fd02c;
          local_2c = &DAT_0056e978;
          goto LAB_019f8fd4;
        }
        local_13c = 0;
        uVar7 = 0;
        bVar13 = 1;
      }
LAB_019f8e90:
      bVar11 = bVar13;
      FUN_01650a90(param_3);
      if (*param_3 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(param_3);
          if (bVar1) {
            *param_3 = '\0';
            goto LAB_019f8ecc;
          }
        } while (*param_3 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(param_3);
LAB_019f8ecc:
      FUN_019d83c4(aiStack_138);
      param_3 = (char *)0x0;
    } while (uVar7 != 0);
  }
LAB_019f8f3c:
  FUN_019d8434(aiStack_138,aiStack_138[0x40]);
  return;
}

