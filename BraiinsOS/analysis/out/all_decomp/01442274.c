// FUN_01442274 @ 01442274 size=1044 calls_out=3 calls_in=15
// strings: 

void FUN_01442274(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  undefined *local_88;
  int iStack_54;
  int iStack_50;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  uVar14 = *(uint *)(param_1 + 0x34);
  if (param_2 < uVar14) {
    iVar7 = *(int *)(param_1 + 0x24);
    uVar1 = *(uint *)(param_1 + 0x28);
    iVar13 = *(int *)(param_1 + 0x30);
    iVar2 = iVar13 + uVar14 * 0x24;
    local_88 = &DAT_018a6484;
    uVar5 = param_2;
    do {
      iVar2 = iVar2 + -0x24;
      piVar12 = (int *)(iVar13 + uVar5 * 0x24);
      uVar6 = piVar12[3];
      uVar3 = piVar12[1];
      if (*piVar12 == 0) {
        if (piVar12[2] != 0) {
          if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar3,uVar1,&DAT_018a6404);
          }
          piVar10 = (int *)(iVar7 + uVar3 * 0x34);
          if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018a6414);
          }
          piVar10[1] = uVar6;
          if (uVar14 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar6,uVar14,&DAT_018a6424);
          }
          uVar11 = 0;
          goto LAB_0144236c;
        }
        if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar3,uVar1,&DAT_018a63f4);
        }
        *(undefined4 *)(iVar7 + uVar3 * 0x34) = 0;
      }
      else if (piVar12[2] == 0) {
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar6,uVar1,&DAT_018a6434);
        }
        piVar10 = (int *)(iVar7 + uVar6 * 0x34);
        if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a6444);
        }
        piVar10[2] = uVar3;
        if (uVar14 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar3,uVar14,&DAT_018a6454);
        }
        iVar8 = iVar13 + uVar3 * 0x24;
        *(undefined4 *)(iVar8 + 8) = 0;
        *(uint *)(iVar8 + 0xc) = uVar6;
      }
      else {
        uVar11 = 1;
        if (uVar14 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar3,uVar14,&DAT_018a6464);
        }
        iVar8 = iVar13 + uVar3 * 0x24;
        *(undefined4 *)(iVar8 + 8) = 1;
        *(uint *)(iVar8 + 0xc) = uVar6;
        if (uVar14 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar6,uVar14,&DAT_018a6474);
        }
LAB_0144236c:
        puVar9 = (undefined4 *)(iVar13 + uVar6 * 0x24);
        *puVar9 = uVar11;
        puVar9[1] = uVar3;
      }
      local_48 = *piVar12;
      local_44 = piVar12[1];
      local_40 = piVar12[2];
      local_3c = piVar12[3];
      local_38 = piVar12[4];
      iStack_34 = piVar12[5];
      iStack_30 = piVar12[6];
      iStack_2c = piVar12[7];
      iStack_28 = piVar12[8];
      FUN_016dd52c(piVar12,iVar2,0x24);
      uVar14 = uVar14 - 1;
      *(uint *)(param_1 + 0x34) = uVar14;
      if ((local_48 != 0) && (uVar14 == local_44)) {
        local_48 = 1;
        local_44 = uVar5;
      }
      if ((local_40 != 0) && (uVar14 == local_3c)) {
        local_40 = 1;
        local_3c = uVar5;
      }
      param_2 = local_3c;
      if (uVar14 == uVar5) goto LAB_0144250c;
      if (uVar14 <= uVar5) goto LAB_01442680;
      uVar3 = piVar12[1];
      iVar8 = piVar12[2];
      uVar6 = piVar12[3];
      if (*piVar12 == 0) {
        if (uVar3 < uVar1) {
          piVar12 = (int *)(iVar7 + uVar3 * 0x34);
          if (*piVar12 != 1) {
            puVar4 = &DAT_018a64a4;
            goto LAB_014425b4;
          }
          goto LAB_014424c0;
        }
        local_88 = &DAT_018a6494;
LAB_0144267c:
        uVar5 = uVar3;
        uVar14 = uVar1;
LAB_01442680:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar5,uVar14,local_88);
      }
      if (uVar14 <= uVar3) {
        local_88 = &DAT_018a64b4;
        uVar1 = uVar14;
        goto LAB_0144267c;
      }
      piVar12 = (int *)(iVar13 + uVar3 * 0x24 + 8);
      *piVar12 = 1;
LAB_014424c0:
      piVar12[1] = uVar5;
      uVar3 = uVar6;
      if (iVar8 == 0) {
        if (uVar1 <= uVar6) {
          local_88 = &DAT_018a64c4;
          goto LAB_0144267c;
        }
        piVar12 = (int *)(iVar7 + uVar6 * 0x34);
        if (*piVar12 != 1) {
          puVar4 = &DAT_018a64d4;
LAB_014425b4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(puVar4);
        }
        piVar12[2] = uVar5;
      }
      else {
        if (uVar14 <= uVar6) {
          local_88 = &DAT_018a64e4;
          uVar1 = uVar14;
          goto LAB_0144267c;
        }
        puVar9 = (undefined4 *)(iVar13 + uVar6 * 0x24);
        *puVar9 = 1;
        puVar9[1] = uVar5;
      }
LAB_0144250c:
      iStack_54 = iStack_2c;
      iStack_50 = iStack_28;
      if ((local_40 & 1) == 0) {
        (**(code **)(local_38 + 0x10))(&iStack_54,iStack_34,iStack_30);
        return;
      }
      (**(code **)(local_38 + 0x10))(&iStack_54,iStack_34,iStack_30);
      uVar5 = param_2;
    } while (param_2 < uVar14);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(param_2,uVar14,&DAT_018a63e4);
}

