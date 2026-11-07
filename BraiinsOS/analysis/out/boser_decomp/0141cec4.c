// FUN_0141cec4 @ 0141cec4 size=880 calls_out=3 calls_in=2
// strings: 

void FUN_0141cec4(int *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  
  uVar2 = *(uint *)(param_4 + 8);
  if (uVar2 <= param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_5,uVar2,&DAT_01d2f44c);
  }
  iVar15 = *(int *)(param_4 + 4);
  piVar14 = (int *)(iVar15 + param_5 * 0x24);
  uVar1 = piVar14[1];
  uVar7 = piVar14[3];
  if (*piVar14 == 1) {
    if (piVar14[2] == 0) {
      if (param_3 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar7,param_3,&DAT_01d2f49c);
      }
      piVar4 = (int *)(param_2 + uVar7 * 0x34);
      if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2f4ac);
      }
      piVar4[2] = uVar1;
      if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar1,uVar2,&DAT_01d2f4bc);
      }
      iVar10 = iVar15 + uVar1 * 0x24;
      *(undefined4 *)(iVar10 + 8) = 0;
      *(uint *)(iVar10 + 0xc) = uVar7;
    }
    else {
      if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar1,uVar2,&DAT_01d2f4cc);
      }
      iVar10 = iVar15 + uVar1 * 0x24;
      *(undefined4 *)(iVar10 + 8) = 1;
      *(uint *)(iVar10 + 0xc) = uVar7;
      if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar7,uVar2,&DAT_01d2f4dc);
      }
      puVar11 = (undefined4 *)(iVar15 + uVar7 * 0x24);
      *puVar11 = 1;
      puVar11[1] = uVar1;
    }
  }
  else if (piVar14[2] == 0) {
    if (param_3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar1,param_3,&DAT_01d2f45c);
    }
    *(undefined4 *)(param_2 + uVar1 * 0x34) = 0;
  }
  else {
    if (param_3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar1,param_3,&DAT_01d2f46c);
    }
    piVar4 = (int *)(param_2 + uVar1 * 0x34);
    if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2f47c);
    }
    piVar4[1] = uVar7;
    if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,uVar2,&DAT_01d2f48c);
    }
    puVar11 = (undefined4 *)(iVar15 + uVar7 * 0x24);
    *puVar11 = 0;
    puVar11[1] = uVar1;
  }
  local_48 = *piVar14;
  local_44 = piVar14[1];
  local_40 = piVar14[2];
  local_3c = piVar14[3];
  iVar10 = piVar14[4];
  iVar8 = piVar14[5];
  iVar9 = piVar14[6];
  iVar12 = piVar14[7];
  iVar13 = piVar14[8];
  uVar2 = uVar2 - 1;
  FUN_01bed864(piVar14,iVar15 + uVar2 * 0x24,0x24);
  *(uint *)(param_4 + 8) = uVar2;
  if ((local_48 != 0) && (local_44 == uVar2)) {
    local_44 = param_5;
    local_48 = 1;
  }
  if ((local_40 != 0) && (local_3c == uVar2)) {
    local_3c = param_5;
    local_40 = 1;
  }
  if (param_5 == uVar2) goto LAB_0141d120;
  if (param_5 < uVar2) {
    iVar3 = piVar14[2];
    uVar1 = piVar14[3];
    uVar7 = piVar14[1];
    if (*piVar14 == 1) {
      if (uVar2 <= uVar7) {
        puVar6 = &DAT_01d2f51c;
        param_5 = uVar7;
        goto LAB_0141d230;
      }
      iVar5 = iVar15 + uVar7 * 0x24;
      *(undefined4 *)(iVar5 + 8) = 1;
      *(uint *)(iVar5 + 0xc) = param_5;
    }
    else {
      if (param_3 <= uVar7) {
        puVar6 = &DAT_01d2f4fc;
        param_5 = uVar7;
        uVar2 = param_3;
        goto LAB_0141d230;
      }
      piVar14 = (int *)(param_2 + uVar7 * 0x34);
      if (*piVar14 == 0) {
        puVar6 = &DAT_01d2f50c;
        goto LAB_0141d168;
      }
      piVar14[1] = param_5;
    }
    if (iVar3 == 0) {
      if (uVar1 < param_3) {
        piVar14 = (int *)(param_2 + uVar1 * 0x34);
        if (*piVar14 != 1) {
          puVar6 = &DAT_01d2f53c;
LAB_0141d168:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(puVar6);
        }
        piVar14[2] = param_5;
        goto LAB_0141d120;
      }
      puVar6 = &DAT_01d2f52c;
      param_5 = uVar1;
      uVar2 = param_3;
    }
    else {
      if (uVar1 < uVar2) {
        puVar11 = (undefined4 *)(iVar15 + uVar1 * 0x24);
        *puVar11 = 1;
        puVar11[1] = param_5;
LAB_0141d120:
        *param_1 = local_48;
        param_1[1] = local_44;
        param_1[2] = local_40;
        param_1[3] = local_3c;
        param_1[4] = iVar10;
        param_1[5] = iVar8;
        param_1[6] = iVar9;
        param_1[7] = iVar12;
        param_1[8] = iVar13;
        return;
      }
      puVar6 = &DAT_01d2f54c;
      param_5 = uVar1;
    }
  }
  else {
    puVar6 = &DAT_01d2f4ec;
  }
LAB_0141d230:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(param_5,uVar2,puVar6);
}

