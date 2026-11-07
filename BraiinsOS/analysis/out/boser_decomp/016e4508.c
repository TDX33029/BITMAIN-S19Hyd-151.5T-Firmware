// FUN_016e4508 @ 016e4508 size=552 calls_out=5 calls_in=1
// strings: 

undefined8 FUN_016e4508(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    uVar7 = FUN_016e4748(param_1);
  }
  uVar4 = *(uint *)(param_1 + 0x14);
  if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar7,uVar4,&DAT_01d0a250);
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + uVar7 * 4);
  uVar3 = 1;
  if (iVar5 == 0) {
    if (param_3 != 0) {
      uVar13 = *(uint *)(param_1 + 8);
      uVar4 = uVar7;
      pbVar12 = param_2;
      do {
        if (uVar13 <= uVar4) {
LAB_016e46e0:
          puVar6 = &DAT_01d0a270;
LAB_016e46f4:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar4,uVar13,puVar6);
        }
        pbVar11 = pbVar12 + 1;
        bVar1 = *pbVar12;
        iVar5 = *(int *)(param_1 + 4) + uVar4 * 0xc;
        uVar7 = *(uint *)(iVar5 + 8);
        if (uVar7 == 0) {
          uVar8 = 0;
LAB_016e4608:
          uVar7 = FUN_016e4748(param_1);
          uVar13 = *(uint *)(param_1 + 8);
          if (uVar13 <= uVar4) {
            puVar6 = &DAT_01d0a290;
            goto LAB_016e46f4;
          }
          puVar10 = (uint *)(*(int *)(param_1 + 4) + uVar4 * 0xc);
          uVar4 = puVar10[2];
          if (uVar4 < uVar8) {
            FUN_00666488(uVar8,uVar4,&DAT_01d0a2a0);
            goto LAB_016e46e0;
          }
          if (uVar4 == *puVar10) {
            FUN_015f5ab8(puVar10);
          }
          pbVar12 = (byte *)(puVar10[1] + uVar8 * 8);
          if (uVar8 < uVar4) {
            FUN_01bed864(pbVar12 + 8,pbVar12,(uVar4 - uVar8) * 8);
          }
          *(uint *)(pbVar12 + 4) = uVar7;
          *pbVar12 = bVar1;
          puVar10[2] = uVar4 + 1;
        }
        else {
          iVar5 = *(int *)(iVar5 + 4);
          uVar8 = 0;
          if (uVar7 != 1) {
            uVar8 = 0;
            do {
              uVar9 = uVar8 + (uVar7 >> 1);
              uVar7 = uVar7 - (uVar7 >> 1);
              if (bVar1 < *(byte *)(iVar5 + uVar9 * 8)) {
                uVar9 = uVar8;
              }
              uVar8 = uVar9;
            } while (1 < uVar7);
          }
          bVar2 = *(byte *)(iVar5 + uVar8 * 8);
          if (bVar2 != bVar1) {
            if (bVar2 < bVar1) {
              uVar8 = uVar8 + 1;
            }
            goto LAB_016e4608;
          }
          uVar7 = *(uint *)(iVar5 + uVar8 * 8 + 4);
          if (*(uint *)(param_1 + 0x14) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar7,*(uint *)(param_1 + 0x14),&DAT_01d0a280);
          }
          iVar5 = *(int *)(*(int *)(param_1 + 0x10) + uVar7 * 4);
          if (iVar5 != 0) {
            uVar3 = 1;
            goto LAB_016e46b8;
          }
        }
        uVar4 = uVar7;
        pbVar12 = pbVar11;
      } while (pbVar11 != param_2 + param_3);
      uVar4 = *(uint *)(param_1 + 0x14);
    }
    iVar5 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar5 + 1;
    if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,uVar4,&DAT_01d0a260);
    }
    *(int *)(*(int *)(param_1 + 0x10) + uVar7 * 4) = iVar5;
    uVar3 = 0;
  }
LAB_016e46b8:
  return CONCAT44(iVar5,uVar3);
}

