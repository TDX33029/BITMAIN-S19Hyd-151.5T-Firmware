// FUN_016dcc30 @ 016dcc30 size=656 calls_out=6 calls_in=1
// strings: 

void FUN_016dcc30(uint *param_1,int *param_2)

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
    FUN_012fb0ec(&DAT_004cfc90,0x25,&DAT_01d09d68);
  }
  uVar1 = FUN_016d4a28(param_2);
  if ((uVar1 < 0x30) || (uVar1 = FUN_016d4a28(param_2), 0x37 < uVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_004cfcb5,0x3a,&DAT_01d09d78);
  }
  uVar12 = *(uint *)(iVar9 + 0x54);
  uVar1 = *(uint *)(iVar9 + 0x50);
  uVar11 = *(uint *)(iVar9 + 0x58);
  do {
    iVar2 = FUN_016d4fe8(param_2);
    if (((iVar2 == 0) || (uVar3 = FUN_016d4a28(param_2), uVar3 < 0x30)) ||
       (uVar3 = FUN_016d4a28(param_2), 0x37 < uVar3)) {
      uVar3 = *(uint *)(iVar9 + 0x50);
      break;
    }
    uVar3 = *(uint *)(iVar9 + 0x50);
  } while (uVar3 - uVar1 < 3);
  iVar2 = param_2[1];
  uVar8 = param_2[2];
  if (uVar3 < uVar1) goto LAB_016dcd28;
  uVar4 = *(uint *)(iVar9 + 0x54);
  uVar5 = *(uint *)(iVar9 + 0x58);
  if (uVar1 != 0) {
    if (uVar1 < uVar8) {
      if (*(char *)(iVar2 + uVar1) < -0x40) goto LAB_016dcd28;
    }
    else if (uVar1 != uVar8) goto LAB_016dcd28;
  }
  if (uVar3 != 0) {
    if (uVar3 < uVar8) {
      if (*(char *)(iVar2 + uVar3) < -0x40) {
LAB_016dcd28:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar2,uVar8,uVar1,uVar3,&DAT_01d09d88);
      }
    }
    else if (uVar3 != uVar8) goto LAB_016dcd28;
  }
  uVar8 = uVar3 - uVar1;
  pbVar6 = (byte *)(iVar2 + uVar1);
  if (uVar8 == 1) {
    bVar7 = *pbVar6;
    local_25 = 1;
    if ((bVar7 == 0x2b) || (bVar7 == 0x2d)) goto LAB_016dce3c;
  }
  else {
    if (uVar8 == 0) {
      local_25 = 0;
      goto LAB_016dce3c;
    }
    bVar7 = *pbVar6;
  }
  if (bVar7 == 0x2b) {
    pbVar6 = pbVar6 + 1;
    uVar8 = uVar8 - 1;
  }
  uVar13 = 0;
  if (uVar8 < 9) {
    if (uVar8 == 0) goto LAB_016dce08;
    do {
      if (7 < *pbVar6 - 0x30) goto LAB_016dceb0;
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
        goto LAB_016dce3c;
      }
      uVar10 = *pbVar6 - 0x30;
      if (7 < uVar10) goto LAB_016dceb0;
      uVar13 = uVar10 | uVar13 << 3;
      pbVar6 = pbVar6 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if ((uVar13 ^ 0xd800) - 0x110000 < 0xffef0800) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_004cfd01,0x14,&DAT_01d09da8);
  }
LAB_016dce08:
  *param_1 = uVar13;
  param_1[4] = uVar3;
  *(undefined1 *)(param_1 + 7) = 3;
  param_1[1] = uVar1;
  param_1[2] = uVar12;
  param_1[3] = uVar11;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  return;
LAB_016dceb0:
  local_25 = 1;
LAB_016dce3c:
                    /* WARNING: Subroutine does not return */
  FUN_013073dc(&DAT_004cfcef,0x12,&local_25,&DAT_01d0a1a8,&DAT_01d09d98);
}

