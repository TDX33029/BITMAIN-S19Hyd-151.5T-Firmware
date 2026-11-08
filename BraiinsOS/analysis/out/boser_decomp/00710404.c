// FUN_00710404 @ 00710404 size=780 calls_out=5 calls_in=2
// strings: applicationapplication/x-ms-application | jsonm! | jsonm!

undefined4 FUN_00710404(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  bool bVar13;
  uint local_80 [4];
  undefined4 uStack_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint uStack_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  local_50 = 0;
  local_4c = 0x1d;
  local_48 = 0;
  uStack_44 = 0;
  iVar3 = FUN_0160ab20();
  if (iVar3 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar3 + 8) == iVar4) {
        FUN_015fd1c8(&local_50,*(int *)(iVar3 + 4),*(int *)(iVar3 + 8));
        if (local_50 == 2) {
          return 0;
        }
        puVar12 = &uStack_60;
        local_80[0] = local_50;
        local_80[1] = local_4c;
        local_80[2] = local_48;
        local_80[3] = uStack_44;
        uStack_70 = uStack_40;
        local_6c = local_3c;
        local_68 = uStack_38;
        local_64 = uStack_34;
        uStack_60 = uStack_30;
        local_5c = uStack_2c;
        local_58 = uStack_28;
        iVar3 = 0x20;
        bVar13 = (uStack_38 & 1) == 0;
        if (bVar13) {
          puVar6 = &local_64;
        }
        else {
          iVar3 = 0x24;
          puVar6 = puVar12;
        }
        uVar10 = *(uint *)((int)local_80 + iVar3);
        if (!bVar13) {
          puVar12 = &local_5c;
        }
        uVar9 = *puVar6;
        if (uStack_28 != 0) {
          puVar5 = &DAT_01c1b088;
          if (uStack_28 < uVar10) {
            if (*(char *)(uVar9 + uStack_28) < -0x40) goto LAB_00710500;
          }
          else if (uStack_28 != uVar10) {
LAB_00710500:
            uVar7 = 0;
            uVar8 = uStack_28;
            goto LAB_007105e4;
          }
        }
        local_48 = CONCAT31(local_48._1_3_,1);
        local_4c = uStack_28;
        local_50 = uVar9;
        iVar3 = FUN_015fd0b8(&local_50,"applicationapplication/x-ms-application",0xb);
        uVar2 = local_80[1];
        uVar1 = local_80[0];
        uVar11 = 0;
        if (iVar3 == 0) goto LAB_00710700;
        uVar8 = local_80[1];
        if ((local_80[0] & 1) == 0) {
          uVar7 = 1;
          if ((int)local_80[2] < 0) {
            uVar7 = local_80[2] ^ 0x80000000;
          }
          puVar6 = local_80 + 3;
          if (uVar7 != 0) {
            uVar8 = uVar10;
            if (uVar7 != 1) goto LAB_00710580;
            puVar6 = &local_6c;
          }
          uVar8 = *puVar6;
        }
LAB_00710580:
        uVar7 = uStack_28 + 1;
        puVar5 = &DAT_01c1b098;
        if (uVar8 < uVar7) goto LAB_007105e4;
        if (uVar7 != 0) {
          if (uVar7 < uVar10) {
            if (*(char *)(uVar9 + uVar7) < -0x40) goto LAB_007105e4;
          }
          else if (uVar7 != uVar10) goto LAB_007105e4;
        }
        if (uVar8 != 0) {
          if (uVar8 < uVar10) {
            if (*(char *)(uVar9 + uVar8) < -0x40) goto LAB_007105e4;
          }
          else if (uVar8 != uVar10) goto LAB_007105e4;
        }
        local_4c = uVar8 - uVar7;
        local_50 = uVar9 + uVar7;
        uVar11 = 1;
        local_48 = CONCAT31(local_48._1_3_,1);
        iVar3 = FUN_015fd0b8(&local_50,"jsonm!",4);
        if (iVar3 == 0) {
          uVar8 = 1;
          if ((int)local_80[2] < 0) {
            uVar8 = local_80[2] ^ 0x80000000;
          }
          puVar6 = local_80 + 3;
          if ((uVar8 != 0) && (puVar6 = &local_6c, uVar8 != 1)) {
            puVar6 = puVar12;
          }
          uVar11 = 0;
          if ((uVar1 & 1) == 0) goto LAB_00710700;
          uVar8 = *puVar6;
          puVar5 = &DAT_01c07364;
          uVar7 = uVar2 + 1;
          if (uVar8 < uVar7) goto LAB_007105e4;
          if (uVar7 != 0) {
            if (uVar7 < uVar10) {
              if (*(char *)(uVar9 + uVar7) < -0x40) goto LAB_007105e4;
            }
            else if (uVar7 != uVar10) goto LAB_007105e4;
          }
          if (uVar8 != 0) {
            if (uVar8 < uVar10) {
              if (*(char *)(uVar9 + uVar8) < -0x40) goto LAB_007105e4;
            }
            else if (uVar8 != uVar10) {
LAB_007105e4:
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(uVar9,uVar10,uVar7,uVar8,puVar5);
            }
          }
          local_48 = CONCAT31(local_48._1_3_,1);
          local_4c = uVar8 - uVar7;
          local_50 = uVar9 + uVar7;
          uVar11 = FUN_015fd0b8(&local_50,"jsonm!",4);
        }
LAB_00710700:
        FUN_017cc7b0(local_80);
        return uVar11;
      }
      uVar10 = (uint)*(byte *)(*(int *)(iVar3 + 4) + iVar4);
      iVar4 = iVar4 + 1;
    } while ((uVar10 == 9) || (uVar10 - 0x20 < 0x5f));
  }
  return 0;
}

