// FUN_0163af68 @ 0163af68 size=896 calls_out=7 calls_in=88
// strings: 

void FUN_0163af68(char *param_1,uint param_2,char *param_3)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  uint *puVar13;
  byte bVar14;
  uint local_13c;
  int local_138 [65];
  uint *local_34;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  
  local_138[0x40] = 0;
  local_13c = param_2;
  if (param_2 == 0) {
    FUN_01282570(param_3);
    if (*param_3 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(param_3);
        if (bVar2) {
          *param_3 = '\0';
          goto LAB_0163b22c;
        }
      } while (*param_3 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(param_3);
  }
  else {
    puVar13 = (uint *)(param_1 + 0x10);
    bVar14 = 0;
    do {
      if (param_3 == (char *)0x0) {
        if (*param_1 == '\0') {
          bVar2 = (bool)hasExclusiveAccess(param_1);
          if (!bVar2) goto LAB_0163afe4;
          *param_1 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_0163afe4:
          FUN_01280da8(param_1);
        }
        FUN_0128236c(param_1);
        param_3 = param_1;
        if ((uint)local_138[0x40] < 0x20) goto LAB_0163b034;
LAB_0163b008:
        bVar12 = local_13c == 0 & bVar14;
        if ((local_13c != 0) && (!(bool)(bVar14 ^ 1))) goto LAB_0163b138;
      }
      else {
LAB_0163b034:
        iVar10 = *(int *)(param_3 + 8);
        if (iVar10 != 0) {
          puVar7 = (uint *)(iVar10 + 0x10);
          DataMemoryBarrier(0xb);
          uVar11 = *(uint *)(iVar10 + 0x10);
          do {
            uVar3 = *puVar7;
            uVar8 = uVar11;
            if (local_13c < uVar11) {
              uVar8 = local_13c;
            }
            if (uVar3 == uVar11) {
              DataMemoryBarrier(0xb);
              do {
                bVar2 = (bool)hasExclusiveAccess(puVar7);
                if (bVar2) {
                  *puVar7 = uVar11 - uVar8;
                  DataMemoryBarrier(0xb);
                  uVar8 = local_13c - uVar8;
                  bVar2 = local_13c < uVar11;
                  local_13c = uVar8;
                  if (bVar2) goto LAB_0163b008;
                  piVar4 = *(int **)(param_3 + 8);
                  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa444(&DAT_018ac68c);
                  }
                  iVar10 = piVar4[2];
                  *(int *)(param_3 + 8) = iVar10;
                  if (iVar10 == 0) {
                    param_3[4] = '\0';
                    param_3[5] = '\0';
                    param_3[6] = '\0';
                    param_3[7] = '\0';
                  }
                  else {
                    *(undefined4 *)(iVar10 + 0xc) = 0;
                  }
                  iVar10 = *piVar4;
                  iVar5 = piVar4[1];
                  piVar4[2] = 0;
                  piVar4[3] = 0;
                  *piVar4 = 0;
                  if (iVar10 != 0) {
                    if (0x1f < (uint)local_138[0x40]) {
                    /* WARNING: Subroutine does not return */
                      FUN_00faa4a4(local_138[0x40],0x20,&DAT_018ad394);
                    }
                    local_138[local_138[0x40] * 2] = iVar10;
                    local_138[local_138[0x40] * 2 + 1] = iVar5;
                    local_138[0x40] = local_138[0x40] + 1;
                  }
                  if ((uint)local_138[0x40] < 0x20) goto LAB_0163b034;
                  goto LAB_0163b008;
                }
                uVar3 = *puVar7;
              } while (uVar3 == uVar11);
            }
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            uVar11 = uVar3;
          } while( true );
        }
        if (local_13c != 0) {
LAB_0163b138:
          if (0x1fffffff < local_13c) {
            puVar9 = &DAT_018ac66c;
            puVar6 = &DAT_0056afa0;
            local_34 = (uint *)&DAT_00568964;
LAB_0163b2c4:
            local_30 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(puVar6,&local_34,puVar9);
          }
          DataMemoryBarrier(0xb);
          do {
            uVar11 = *puVar13;
            bVar2 = (bool)hasExclusiveAccess(puVar13);
          } while (!bVar2);
          *puVar13 = uVar11 + local_13c * 2;
          if (0x1fffffff < local_13c + (uVar11 >> 1)) {
            local_34 = &local_13c;
            puVar9 = &DAT_018ac67c;
            puVar6 = &DAT_0057c598;
            local_28 = &LAB_00fac484;
            local_2c = &DAT_00568964;
            goto LAB_0163b2c4;
          }
          local_13c = 0;
        }
        bVar12 = 1;
      }
      bVar14 = bVar12;
      FUN_01282570(param_3);
      if (*param_3 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(param_3);
          if (bVar2) {
            *param_3 = '\0';
            goto LAB_0163b1ac;
          }
        } while (*param_3 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(param_3);
LAB_0163b1ac:
      iVar10 = local_138[0x40];
      piVar4 = local_138;
      local_138[0x40] = 0;
      for (iVar10 = iVar10 << 3; iVar10 != 0; iVar10 = iVar10 + -8) {
        iVar5 = *piVar4;
        piVar1 = piVar4 + 1;
        piVar4 = piVar4 + 2;
        (**(code **)(iVar5 + 4))(*piVar1);
      }
      param_3 = (char *)0x0;
    } while (local_13c != 0);
  }
LAB_0163b22c:
  piVar4 = local_138 + 1;
  for (uVar11 = local_138[0x40]; uVar11 != 0; uVar11 = uVar11 - 1) {
    piVar1 = piVar4 + -1;
    iVar10 = *piVar4;
    piVar4 = piVar4 + 2;
    (**(code **)(*piVar1 + 0xc))(iVar10);
  }
  return;
}

