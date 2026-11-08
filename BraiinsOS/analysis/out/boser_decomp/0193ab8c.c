// FUN_0193ab8c @ 0193ab8c size=648 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_0193ab8c(undefined4 *param_1,undefined2 *param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint unaff_r6;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  bool bVar18;
  byte local_29;
  ushort local_28;
  ushort local_26;
  
  if (param_3 == 0) {
    uVar7 = 0;
    uVar15 = 0;
  }
  else {
    pbVar10 = (byte *)*param_1;
    iVar12 = param_1[1];
    puVar8 = param_2;
    uVar15 = 0;
    do {
      uVar14 = uVar15 + 1;
      if (uVar15 < param_3 - 1) {
        if (uVar15 == 0) {
LAB_0193abfc:
          FUN_0193a9c4(&local_29,param_1);
          if ((local_29 & 1) != 0) {
            if (param_3 <= uVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar15,param_3,&DAT_01d25b68);
            }
            param_2[uVar15] = local_28 << 8 | local_28 >> 8;
            if (param_3 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar14,param_3,&DAT_01d25b78);
            }
            uVar15 = uVar15 + 2;
            uVar7 = 1;
            param_2[uVar14] = local_26 << 8 | local_26 >> 8;
            goto LAB_0193ade8;
          }
        }
        else if (iVar12 != 0) {
          bVar1 = *pbVar10;
          *param_1 = pbVar10 + 1;
          param_1[1] = iVar12 + -1;
          if (bVar1 == 0x3a) goto LAB_0193abfc;
        }
        *param_1 = pbVar10;
        param_1[1] = iVar12;
      }
      iVar16 = iVar12;
      pbVar17 = pbVar10;
      if (uVar15 == 0) {
LAB_0193ac48:
        unaff_r6 = 0;
        pbVar4 = pbVar17;
        iVar6 = iVar16;
        uVar9 = 0;
        pbVar11 = pbVar10;
LAB_0193ac68:
        bVar18 = false;
        if (iVar6 == 0) {
LAB_0193aca4:
          *param_1 = pbVar4;
          param_1[1] = iVar6;
          pbVar2 = pbVar4;
          iVar3 = iVar6;
        }
        else {
          uVar13 = (uint)*pbVar4;
          pbVar11 = (byte *)(uVar13 - 0x30);
          if (0x39 < uVar13) {
            pbVar11 = (byte *)((uVar13 - 0x41 & 0xffffffdf) + 10);
          }
          *param_1 = pbVar4 + 1;
          param_1[1] = iVar6 + -1;
          bVar18 = pbVar11 < &DAT_00000010;
          pbVar2 = pbVar4 + 1;
          iVar3 = iVar6 + -1;
          if (!bVar18) goto LAB_0193aca4;
        }
        iVar6 = iVar3;
        pbVar4 = pbVar2;
        if (bVar18) {
          if ((unaff_r6 & 0xffff) >> 0xc != 0) goto LAB_0193ad14;
          bVar18 = (uint)pbVar11 >> 0x10 != 0;
          if (!bVar18) {
            unaff_r6 = (unaff_r6 & 0xfff) * 0x10 + ((uint)pbVar11 & 0xffff);
          }
          if ((bVar18 || unaff_r6 >> 0x10 != 0) || (bVar18 = 3 < uVar9, uVar9 = uVar9 + 1, bVar18))
          goto LAB_0193ad14;
          goto LAB_0193ac68;
        }
        if (uVar9 != 0) {
          bVar18 = true;
          goto LAB_0193ad20;
        }
LAB_0193ad14:
        bVar18 = false;
        *param_1 = pbVar17;
        param_1[1] = iVar16;
        iVar6 = iVar16;
        pbVar4 = pbVar17;
LAB_0193ad20:
        if (!bVar18) goto LAB_0193ad50;
      }
      else {
        bVar18 = false;
        if ((iVar12 != 0) && (pbVar17 = pbVar10 + 1, *pbVar10 == 0x3a)) {
          iVar16 = iVar12 + -1;
          goto LAB_0193ac48;
        }
LAB_0193ad50:
        *param_1 = pbVar10;
        param_1[1] = iVar12;
        iVar6 = iVar12;
        pbVar4 = pbVar10;
      }
      pbVar10 = pbVar4;
      iVar12 = iVar6;
      if (!bVar18) {
        uVar7 = 0;
        goto LAB_0193ade8;
      }
      puVar5 = puVar8 + 1;
      *puVar8 = (short)unaff_r6;
      puVar8 = puVar5;
      uVar15 = uVar14;
    } while (puVar5 != param_2 + param_3);
    uVar7 = 0;
    uVar15 = param_3;
  }
LAB_0193ade8:
  return CONCAT44(uVar7,uVar15);
}

