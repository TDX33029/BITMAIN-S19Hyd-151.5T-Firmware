// FUN_0070dce8 @ 0070dce8 size=568 calls_out=2 calls_in=1
// strings: 

void FUN_0070dce8(undefined4 *param_1,int param_2)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined *unaff_r7;
  int unaff_r8;
  int unaff_r9;
  char *pcVar12;
  undefined *unaff_r11;
  int iVar13;
  char local_2c [4];
  char local_28 [4];
  
  uVar9 = 1;
  pcVar12 = (char *)(param_2 + 0x18);
  puVar11 = *(uint **)(param_2 + 0xc);
  if ((int)*(uint *)(param_2 + 8) < 0) {
    uVar9 = *(uint *)(param_2 + 8) ^ 0x80000000;
  }
  puVar2 = puVar11 + *(int *)(param_2 + 0x10) * 4;
  do {
    while (uVar9 == 0) {
      unaff_r8 = 5;
      unaff_r11 = &DAT_0050c563;
      unaff_r9 = 7;
      unaff_r7 = &DAT_0050c55c;
      uVar9 = 2;
    }
    if (uVar9 != 1) goto LAB_0070dee4;
    if (puVar2 == puVar11) {
      cVar1 = '\x02';
      pcVar6 = local_28;
    }
    else {
      uVar9 = *puVar11;
      uVar7 = puVar11[1];
      iVar3 = 4;
      if (*pcVar12 != '\0') {
        iVar3 = 8;
      }
      iVar13 = *(int *)(pcVar12 + iVar3);
      iVar3 = 8;
      if (*pcVar12 != '\0') {
        iVar3 = 0xc;
      }
      uVar5 = *(uint *)(pcVar12 + iVar3);
      if (uVar7 < uVar9) goto LAB_0070def8;
      uVar8 = puVar11[2];
      uVar10 = puVar11[3];
      if (uVar9 != 0) {
        if (uVar9 < uVar5) {
          if (-0x41 < *(char *)(iVar13 + uVar9)) goto LAB_0070ddb8;
        }
        else if (uVar9 == uVar5) goto LAB_0070ddb8;
        goto LAB_0070def8;
      }
LAB_0070ddb8:
      if (uVar7 != 0) {
        if (uVar7 < uVar5) {
          if (*(char *)(iVar13 + uVar7) < -0x40) {
LAB_0070def8:
            puVar4 = &DAT_01d1d898;
            uVar8 = uVar9;
            uVar10 = uVar7;
            goto LAB_0070df14;
          }
        }
        else if (uVar7 != uVar5) goto LAB_0070def8;
      }
      if (uVar10 < uVar8) goto LAB_0070df04;
      if (uVar8 != 0) {
        if (uVar8 < uVar5) {
          if (-0x41 < *(char *)(iVar13 + uVar8)) goto LAB_0070de10;
        }
        else if (uVar8 == uVar5) goto LAB_0070de10;
        goto LAB_0070df04;
      }
LAB_0070de10:
      if (uVar10 != 0) {
        if (uVar10 < uVar5) {
          if (*(char *)(iVar13 + uVar10) < -0x40) {
LAB_0070df04:
            puVar4 = &DAT_01d1d8a8;
LAB_0070df14:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(iVar13,uVar5,uVar8,uVar10,puVar4);
          }
        }
        else if (uVar10 != uVar5) goto LAB_0070df04;
      }
      unaff_r9 = uVar7 - uVar9;
      unaff_r7 = (undefined *)(iVar13 + uVar9);
      cVar1 = false;
      if (unaff_r9 == 7) {
        iVar3 = thunk_FUN_01bed842(unaff_r7,&DAT_0050c55c,7);
        cVar1 = iVar3 == 0;
      }
      puVar11 = puVar11 + 4;
      local_28[0] = '\x01';
      unaff_r8 = uVar10 - uVar8;
      unaff_r11 = (undefined *)(iVar13 + uVar8);
      pcVar6 = local_2c;
    }
    *pcVar6 = cVar1;
    cVar1 = local_2c[0];
    if (local_28[0] == '\x02') {
LAB_0070dee4:
      *(undefined1 *)(param_1 + 2) = 2;
      return;
    }
    uVar9 = 1;
    if (local_28[0] == '\x01' && unaff_r9 == 8) {
      unaff_r9 = 8;
      iVar3 = thunk_FUN_01bed842(&DAT_00570200,unaff_r7,8);
      if (iVar3 == 0) {
        *param_1 = unaff_r11;
        *(undefined2 *)((int)param_1 + 9) = 0;
        *(char *)(param_1 + 2) = cVar1;
        param_1[1] = unaff_r8;
        *(undefined1 *)((int)param_1 + 0xb) = 0;
        return;
      }
    }
  } while( true );
}

