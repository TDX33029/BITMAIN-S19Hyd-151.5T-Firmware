// FUN_010b1bc4 @ 010b1bc4 size=876 calls_out=3 calls_in=8
// strings: 

void FUN_010b1bc4(int *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  
  uVar2 = *(uint *)(param_4 + 8);
  if (uVar2 <= param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_5,uVar2,&DAT_018a63e4);
  }
  iVar14 = *(int *)(param_4 + 4);
  piVar13 = (int *)(iVar14 + param_5 * 0x24);
  uVar1 = piVar13[1];
  uVar6 = piVar13[3];
  if (*piVar13 == 0) {
    if (piVar13[2] == 0) {
      if (param_3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar1,param_3,&DAT_018a63f4);
      }
      *(undefined4 *)(param_2 + uVar1 * 0x34) = 0;
    }
    else {
      if (param_3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar1,param_3,&DAT_018a6404);
      }
      piVar4 = (int *)(param_2 + uVar1 * 0x34);
      if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018a6414);
      }
      piVar4[1] = uVar6;
      if (uVar2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar6,uVar2,&DAT_018a6424);
      }
      puVar11 = (undefined4 *)(iVar14 + uVar6 * 0x24);
      *puVar11 = 0;
      puVar11[1] = uVar1;
    }
  }
  else if (piVar13[2] == 0) {
    if (param_3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar6,param_3,&DAT_018a6434);
    }
    piVar4 = (int *)(param_2 + uVar6 * 0x34);
    if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a6444);
    }
    piVar4[2] = uVar1;
    if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar1,uVar2,&DAT_018a6454);
    }
    iVar10 = iVar14 + uVar1 * 0x24;
    *(undefined4 *)(iVar10 + 8) = 0;
    *(uint *)(iVar10 + 0xc) = uVar6;
  }
  else {
    if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar1,uVar2,&DAT_018a6464);
    }
    iVar10 = iVar14 + uVar1 * 0x24;
    *(undefined4 *)(iVar10 + 8) = 1;
    *(uint *)(iVar10 + 0xc) = uVar6;
    if (uVar2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar6,uVar2,&DAT_018a6474);
    }
    puVar11 = (undefined4 *)(iVar14 + uVar6 * 0x24);
    *puVar11 = 1;
    puVar11[1] = uVar1;
  }
  local_48 = *piVar13;
  local_44 = piVar13[1];
  local_40 = piVar13[2];
  local_3c = piVar13[3];
  iVar10 = piVar13[4];
  iVar7 = piVar13[5];
  iVar8 = piVar13[6];
  iVar9 = piVar13[7];
  iVar12 = piVar13[8];
  uVar2 = uVar2 - 1;
  FUN_016dd52c(piVar13,iVar14 + uVar2 * 0x24,0x24);
  *(uint *)(param_4 + 8) = uVar2;
  if ((local_48 != 0) && (local_44 == uVar2)) {
    local_44 = param_5;
    local_48 = 1;
  }
  if ((local_40 != 0) && (local_3c == uVar2)) {
    local_3c = param_5;
    local_40 = 1;
  }
  if (param_5 == uVar2) goto LAB_010b1e1c;
  if (param_5 < uVar2) {
    iVar3 = piVar13[2];
    uVar1 = piVar13[3];
    uVar6 = piVar13[1];
    if (*piVar13 == 0) {
      if (param_3 <= uVar6) {
        puVar5 = &DAT_018a6494;
        param_5 = uVar6;
        uVar2 = param_3;
        goto LAB_010b1f2c;
      }
      piVar13 = (int *)(param_2 + uVar6 * 0x34);
      if (*piVar13 != 1) {
        puVar5 = &DAT_018a64a4;
        goto LAB_010b1e64;
      }
    }
    else {
      if (uVar2 <= uVar6) {
        puVar5 = &DAT_018a64b4;
        param_5 = uVar6;
        goto LAB_010b1f2c;
      }
      piVar13 = (int *)(iVar14 + uVar6 * 0x24 + 8);
      *piVar13 = 1;
    }
    piVar13[1] = param_5;
    if (iVar3 == 0) {
      if (uVar1 < param_3) {
        piVar13 = (int *)(param_2 + uVar1 * 0x34);
        if (*piVar13 != 1) {
          puVar5 = &DAT_018a64d4;
LAB_010b1e64:
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(puVar5);
        }
        piVar13[2] = param_5;
        goto LAB_010b1e1c;
      }
      puVar5 = &DAT_018a64c4;
      param_5 = uVar1;
      uVar2 = param_3;
    }
    else {
      if (uVar1 < uVar2) {
        puVar11 = (undefined4 *)(iVar14 + uVar1 * 0x24);
        *puVar11 = 1;
        puVar11[1] = param_5;
LAB_010b1e1c:
        *param_1 = local_48;
        param_1[1] = local_44;
        param_1[2] = local_40;
        param_1[3] = local_3c;
        param_1[4] = iVar10;
        param_1[5] = iVar7;
        param_1[6] = iVar8;
        param_1[7] = iVar9;
        param_1[8] = iVar12;
        return;
      }
      puVar5 = &DAT_018a64e4;
      param_5 = uVar1;
    }
  }
  else {
    puVar5 = &DAT_018a6484;
  }
LAB_010b1f2c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(param_5,uVar2,puVar5);
}

