// FUN_016a896c @ 016a896c size=1056 calls_out=8 calls_in=1
// strings: 

void FUN_016a896c(int *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (param_4 != 0) {
    iVar2 = param_3 + param_4 * 0xc;
    iVar3 = param_2 + 0x1a4;
    iVar9 = 0;
    do {
      uVar11 = *(uint *)(param_3 + 8);
      pbVar14 = *(byte **)(param_3 + 4);
      if (0x7ffffffe < uVar11) {
        *param_1 = 2;
        param_1[1] = iVar9;
        param_1[2] = uVar11;
        return;
      }
      local_44 = *(int *)(param_2 + 0x1dc);
      uVar10 = *(uint *)(param_2 + 0x2ec);
      if (uVar11 < *(uint *)(param_2 + 0x2ec)) {
        uVar10 = uVar11;
      }
      uVar7 = *(uint *)(param_2 + 0x2f0);
      if (*(uint *)(param_2 + 0x2f0) < uVar11) {
        uVar7 = uVar11;
      }
      *(uint *)(param_2 + 0x2ec) = uVar10;
      *(uint *)(param_2 + 0x2f0) = uVar7;
      local_48 = iVar9;
      if (iVar9 != local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_01304210(0,&local_48,&local_44,&DAT_004ce56d,0x5f,&DAT_01d0829c);
      }
      if (iVar9 == *(int *)(param_2 + 0x1d4)) {
        FUN_01a54b48((int *)(param_2 + 0x1d4));
      }
      iVar4 = *(int *)(param_2 + 0x1a0);
      *(int *)(param_2 + 0x1dc) = iVar9 + 1;
      *(uint *)(*(int *)(param_2 + 0x1d8) + iVar9 * 4) = uVar11;
      if (*(char *)(iVar4 + 5) != '\0') {
        FUN_00655dd0(param_2 + 0x20,pbVar14,uVar11);
      }
      uVar10 = *(uint *)(param_2 + 0x2fc);
      if (uVar11 != 0) {
        bVar12 = false;
        iVar4 = 0;
        uVar7 = uVar10;
        pbVar8 = pbVar14;
        do {
          pbVar15 = pbVar8 + 1;
          uVar13 = (uint)*pbVar8;
          bVar1 = !bVar12;
          bVar12 = true;
          if (bVar1) {
            if (*(uint *)(param_2 + 0x1ac) <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar7,*(uint *)(param_2 + 0x1ac),&DAT_01d082ac);
            }
            bVar12 = false;
            if (*(int *)(*(int *)(param_2 + 0x1a8) + uVar7 * 0x14 + 8) != 0) {
              bVar12 = true;
            }
          }
          if ((bVar12) && (*(char *)(*(int *)(param_2 + 0x1a0) + 4) == '\x01')) goto LAB_016a8ca8;
          FUN_0065fbd8(param_2,uVar13,uVar13);
          if (*(char *)(*(int *)(param_2 + 0x1a0) + 6) != '\0') {
            if ((uVar13 - 0x41 & 0xff) < 0x1a) {
              uVar10 = uVar13 | 0x20;
            }
            else {
              uVar10 = uVar13;
              if ((uVar13 - 0x61 & 0xff) < 0x1a) {
                uVar10 = uVar13 & 0x5f;
              }
            }
            FUN_0065fbd8(param_2,uVar10,uVar10);
          }
          if (*(uint *)(param_2 + 0x1ac) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar7,*(uint *)(param_2 + 0x1ac),&DAT_01d08f78);
          }
          puVar5 = (uint *)(*(int *)(param_2 + 0x1a8) + uVar7 * 0x14);
          if (puVar5[1] == 0) {
            do {
              uVar10 = *puVar5;
              if (uVar10 == 0) goto LAB_016a8bb4;
              if (*(uint *)(param_2 + 0x1b8) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar10,*(uint *)(param_2 + 0x1b8),&DAT_01d08f58);
              }
              pbVar8 = (byte *)(*(int *)(param_2 + 0x1b4) + uVar10 * 9);
              puVar5 = (uint *)(pbVar8 + 5);
            } while (*pbVar8 < uVar13);
            if (uVar13 == *pbVar8) {
              puVar5 = (uint *)(pbVar8 + 1);
              goto LAB_016a8b64;
            }
LAB_016a8bb4:
            FUN_00653614(&local_40,iVar3,iVar4);
            uVar10 = local_3c;
            if (local_40 != 3) {
              param_1[2] = local_38;
              param_1[3] = iStack_34;
              param_1[4] = iStack_30;
              param_1[5] = iStack_2c;
              *param_1 = local_40;
              param_1[1] = local_3c;
              return;
            }
            FUN_00653718(&local_40,iVar3,uVar7,uVar13,local_3c);
            if (local_40 != 3) goto LAB_016a8cdc;
            if (*(char *)(*(int *)(param_2 + 0x1a0) + 6) == '\x01') {
              if ((uVar13 - 0x41 & 0xff) < 0x1a) {
                uVar13 = uVar13 | 0x20;
              }
              else if ((uVar13 - 0x61 & 0xff) < 0x1a) {
                uVar13 = uVar13 & 0x5f;
              }
              FUN_00653718(&local_40,iVar3,uVar7,uVar13,uVar10);
              if (local_40 != 3) goto LAB_016a8cdc;
            }
          }
          else {
            uVar10 = puVar5[1] + (uint)*(byte *)(param_2 + 0x1ec + uVar13);
            if (*(uint *)(param_2 + 0x1c4) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar10,*(uint *)(param_2 + 0x1c4),&DAT_01d08f88);
            }
            puVar5 = (uint *)(*(int *)(param_2 + 0x1c0) + uVar10 * 4);
LAB_016a8b64:
            uVar10 = *puVar5;
            if (uVar10 == 1) goto LAB_016a8bb4;
          }
          iVar4 = iVar4 + 1;
          uVar7 = uVar10;
          pbVar8 = pbVar15;
        } while (pbVar15 != pbVar14 + uVar11);
      }
      FUN_006539b4(&local_40,iVar3,uVar10,iVar9);
      if (local_40 != 3) {
LAB_016a8cdc:
        piVar6 = (int *)((uint)&local_40 | 4);
        iVar9 = piVar6[1];
        iVar2 = piVar6[2];
        iVar3 = piVar6[3];
        iVar4 = piVar6[4];
        param_1[1] = *piVar6;
        param_1[2] = iVar9;
        param_1[3] = iVar2;
        param_1[4] = iVar3;
        param_1[5] = iVar4;
        *param_1 = local_40;
        return;
      }
LAB_016a8ca8:
      param_3 = param_3 + 0xc;
      iVar9 = iVar9 + 1;
    } while (param_3 != iVar2);
  }
  *param_1 = 3;
  return;
}

