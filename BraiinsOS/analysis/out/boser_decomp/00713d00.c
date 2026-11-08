// FUN_00713d00 @ 00713d00 size=1052 calls_out=3 calls_in=3
// strings: 

void FUN_00713d00(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
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
  
  uVar15 = *(uint *)(param_1 + 0x34);
  if (param_2 < uVar15) {
    iVar6 = *(int *)(param_1 + 0x24);
    uVar1 = *(uint *)(param_1 + 0x28);
    iVar12 = *(int *)(param_1 + 0x30);
    iVar2 = iVar12 + uVar15 * 0x24;
    local_88 = &DAT_01d2f4fc;
    uVar14 = param_2;
    do {
      iVar2 = iVar2 + -0x24;
      piVar13 = (int *)(iVar12 + uVar14 * 0x24);
      uVar5 = piVar13[3];
      uVar3 = piVar13[1];
      if (*piVar13 == 1) {
        if (piVar13[2] != 0) {
          uVar11 = 1;
          if (uVar15 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar3,uVar15,&DAT_01d2f4cc);
          }
          iVar7 = iVar12 + uVar3 * 0x24;
          *(undefined4 *)(iVar7 + 8) = 1;
          *(uint *)(iVar7 + 0xc) = uVar5;
          if (uVar15 <= uVar5) {
            puVar4 = &DAT_01d2f4dc;
            goto LAB_007140f0;
          }
          goto LAB_00713df8;
        }
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar5,uVar1,&DAT_01d2f49c);
        }
        piVar9 = (int *)(iVar6 + uVar5 * 0x34);
        if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2f4ac);
        }
        piVar9[2] = uVar3;
        if (uVar15 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,uVar15,&DAT_01d2f4bc);
        }
        iVar7 = iVar12 + uVar3 * 0x24;
        *(undefined4 *)(iVar7 + 8) = 0;
        *(uint *)(iVar7 + 0xc) = uVar5;
      }
      else if (piVar13[2] == 0) {
        if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,uVar1,&DAT_01d2f45c);
        }
        *(undefined4 *)(iVar6 + uVar3 * 0x34) = 0;
      }
      else {
        if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,uVar1,&DAT_01d2f46c);
        }
        piVar9 = (int *)(iVar6 + uVar3 * 0x34);
        if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2f47c);
        }
        piVar9[1] = uVar5;
        if (uVar15 <= uVar5) {
          puVar4 = &DAT_01d2f48c;
LAB_007140f0:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar5,uVar15,puVar4);
        }
        uVar11 = 0;
LAB_00713df8:
        puVar8 = (undefined4 *)(iVar12 + uVar5 * 0x24);
        *puVar8 = uVar11;
        puVar8[1] = uVar3;
      }
      local_48 = *piVar13;
      local_44 = piVar13[1];
      local_40 = piVar13[2];
      local_3c = piVar13[3];
      local_38 = piVar13[4];
      iStack_34 = piVar13[5];
      iStack_30 = piVar13[6];
      iStack_2c = piVar13[7];
      iStack_28 = piVar13[8];
      FUN_01bed864(piVar13,iVar2,0x24);
      uVar15 = uVar15 - 1;
      *(uint *)(param_1 + 0x34) = uVar15;
      if ((local_48 != 0) && (uVar15 == local_44)) {
        local_48 = 1;
        local_44 = uVar14;
      }
      if ((local_40 != 0) && (uVar15 == local_3c)) {
        local_40 = 1;
        local_3c = uVar14;
      }
      param_2 = local_3c;
      if (uVar15 == uVar14) goto LAB_00713fa0;
      if (uVar15 <= uVar14) {
        local_88 = &DAT_01d2f4ec;
LAB_0071410c:
        uVar3 = uVar14;
        uVar1 = uVar15;
LAB_00714110:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar3,uVar1,local_88);
      }
      uVar5 = piVar13[3];
      uVar3 = piVar13[1];
      iVar7 = piVar13[2];
      if (*piVar13 == 1) {
        if (uVar15 <= uVar3) {
          local_88 = &DAT_01d2f51c;
          uVar14 = uVar3;
          goto LAB_0071410c;
        }
        iVar10 = iVar12 + uVar3 * 0x24;
        *(undefined4 *)(iVar10 + 8) = 1;
        *(uint *)(iVar10 + 0xc) = uVar14;
      }
      else {
        if (uVar1 <= uVar3) goto LAB_00714110;
        piVar13 = (int *)(iVar6 + uVar3 * 0x34);
        if (*piVar13 == 0) {
          puVar4 = &DAT_01d2f50c;
          goto LAB_00714048;
        }
        piVar13[1] = uVar14;
      }
      if (iVar7 == 0) {
        if (uVar1 <= uVar5) {
          local_88 = &DAT_01d2f52c;
          uVar14 = uVar5;
          uVar15 = uVar1;
          goto LAB_0071410c;
        }
        piVar13 = (int *)(iVar6 + uVar5 * 0x34);
        if (*piVar13 != 1) {
          puVar4 = &DAT_01d2f53c;
LAB_00714048:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(puVar4);
        }
        piVar13[2] = uVar14;
      }
      else {
        if (uVar15 <= uVar5) {
          local_88 = &DAT_01d2f54c;
          uVar14 = uVar5;
          goto LAB_0071410c;
        }
        puVar8 = (undefined4 *)(iVar12 + uVar5 * 0x24);
        *puVar8 = 1;
        puVar8[1] = uVar14;
      }
LAB_00713fa0:
      iStack_54 = iStack_2c;
      iStack_50 = iStack_28;
      if ((local_40 & 1) == 0) {
        (**(code **)(local_38 + 0x10))(&iStack_54,iStack_34,iStack_30);
        return;
      }
      (**(code **)(local_38 + 0x10))(&iStack_54,iStack_34,iStack_30);
      uVar14 = param_2;
    } while (param_2 < uVar15);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(param_2,uVar15,&DAT_01d2f44c);
}

