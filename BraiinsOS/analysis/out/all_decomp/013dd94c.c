// FUN_013dd94c @ 013dd94c size=656 calls_out=6 calls_in=1
// strings: 

void FUN_013dd94c(uint *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_25;
  
  iVar9 = *param_2;
  if (*(char *)(iVar9 + 0x65) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_003ced64,0x25,&DAT_01894b68);
  }
  uVar1 = FUN_013d2518(param_2);
  if ((uVar1 < 0x30) || (uVar1 = FUN_013d2518(param_2), 0x37 < uVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_003ced89,0x3a,&DAT_01894b78);
  }
  uVar12 = *(uint *)(iVar9 + 0x54);
  uVar1 = *(uint *)(iVar9 + 0x50);
  uVar11 = *(uint *)(iVar9 + 0x58);
  do {
    iVar2 = FUN_013d2d20(param_2);
    if (((iVar2 == 0) || (uVar3 = FUN_013d2518(param_2), uVar3 < 0x30)) ||
       (uVar3 = FUN_013d2518(param_2), 0x37 < uVar3)) {
      uVar3 = *(uint *)(iVar9 + 0x50);
      break;
    }
    uVar3 = *(uint *)(iVar9 + 0x50);
  } while (uVar3 - uVar1 < 3);
  iVar2 = param_2[1];
  uVar8 = param_2[2];
  if (uVar3 < uVar1) goto LAB_013dda44;
  uVar4 = *(uint *)(iVar9 + 0x54);
  uVar5 = *(uint *)(iVar9 + 0x58);
  if (uVar1 != 0) {
    if (uVar1 < uVar8) {
      if (*(char *)(iVar2 + uVar1) < -0x40) goto LAB_013dda44;
    }
    else if (uVar1 != uVar8) goto LAB_013dda44;
  }
  if (uVar3 != 0) {
    if (uVar3 < uVar8) {
      if (*(char *)(iVar2 + uVar3) < -0x40) {
LAB_013dda44:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar2,uVar8,uVar1,uVar3,&DAT_01894b88);
      }
    }
    else if (uVar3 != uVar8) goto LAB_013dda44;
  }
  uVar8 = uVar3 - uVar1;
  pbVar6 = (byte *)(iVar2 + uVar1);
  if (uVar8 == 1) {
    bVar7 = *pbVar6;
    local_25 = 1;
    if ((bVar7 == 0x2b) || (bVar7 == 0x2d)) goto LAB_013ddb58;
  }
  else {
    if (uVar8 == 0) {
      local_25 = 0;
      goto LAB_013ddb58;
    }
    bVar7 = *pbVar6;
  }
  if (bVar7 == 0x2b) {
    pbVar6 = pbVar6 + 1;
    uVar8 = uVar8 - 1;
  }
  uVar13 = 0;
  if (uVar8 < 9) {
    if (uVar8 == 0) goto LAB_013ddb24;
    do {
      if (7 < *pbVar6 - 0x30) goto LAB_013ddbcc;
      uVar13 = *pbVar6 - 0x30 | uVar13 << 3;
      pbVar6 = pbVar6 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  else {
    do {
      if (0x1fffffff < uVar13) {
        local_25 = 1;
        if ((*pbVar6 & 0xf8) == 0x30) {
          local_25 = 2;
        }
        goto LAB_013ddb58;
      }
      uVar10 = *pbVar6 - 0x30;
      if (7 < uVar10) goto LAB_013ddbcc;
      uVar13 = uVar10 | uVar13 << 3;
      pbVar6 = pbVar6 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if ((uVar13 ^ 0xd800) - 0x110000 < 0xffef0800) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_003cedd5,0x14,&DAT_01894ba8);
  }
LAB_013ddb24:
  *param_1 = uVar13;
  param_1[4] = uVar3;
  *(undefined1 *)(param_1 + 7) = 3;
  param_1[1] = uVar1;
  param_1[2] = uVar12;
  param_1[3] = uVar11;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  return;
LAB_013ddbcc:
  local_25 = 1;
LAB_013ddb58:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_003cedc3,0x12,&local_25,&DAT_01894f78,&DAT_01894b98);
}

