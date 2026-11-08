// FUN_019af7b8 @ 019af7b8 size=776 calls_out=3 calls_in=16
// strings: 

uint FUN_019af7b8(int *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  byte local_5c;
  byte local_5b;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  byte local_40;
  byte local_3f;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  
  cVar1 = (char)param_1[2];
  bVar15 = cVar1 == '\x06';
  if (bVar15) {
    cVar1 = (char)param_2[2];
  }
  bVar16 = bVar15 && cVar1 == '\x06';
  if (bVar15 && cVar1 == '\x06') {
    bVar16 = (char)param_1[7] == (char)param_2[7];
  }
  if (bVar16) {
    iVar9 = *param_1;
    uVar13 = param_1[1];
    iVar10 = *param_2;
    uVar14 = param_2[1];
    uVar11 = uVar13;
    if (uVar14 < uVar13) {
      uVar11 = uVar14;
    }
    if (uVar11 != 0) {
      uVar12 = 0;
      do {
        if (*(char *)(iVar9 + uVar12) != *(char *)(iVar10 + uVar12)) {
          if (uVar13 < uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar12,uVar13,&DAT_01d27bec);
          }
          uVar11 = uVar12;
          goto LAB_019afa34;
        }
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
    }
    if (uVar13 == uVar14) {
      return 0;
    }
LAB_019afa34:
    do {
      uVar12 = uVar11;
      if (uVar12 == 0) goto LAB_019af7e4;
      uVar11 = uVar12 - 1;
    } while (*(char *)(iVar9 + -1 + uVar12) != '/');
    if (uVar13 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar12,uVar13,uVar13,&DAT_01d27bdc);
    }
    *(undefined1 *)(param_1 + 7) = 2;
    *param_1 = iVar9 + uVar12;
    param_1[1] = uVar13 - uVar12;
    if (uVar14 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar12,uVar14,uVar14,&DAT_01d27bcc);
    }
    *(undefined1 *)(param_2 + 7) = 2;
    *param_2 = iVar10 + uVar12;
    param_2[1] = uVar14 - uVar12;
  }
LAB_019af7e4:
  local_a0 = *param_1;
  iStack_9c = param_1[1];
  iStack_98 = param_1[2];
  iStack_94 = param_1[3];
  local_90 = param_1[4];
  iStack_8c = param_1[5];
  iStack_88 = param_1[6];
  iStack_84 = param_1[7];
  local_80 = *param_2;
  iStack_7c = param_2[1];
  iStack_78 = param_2[2];
  iStack_74 = param_2[3];
  local_70 = param_2[4];
  iStack_6c = param_2[5];
  iStack_68 = param_2[6];
  iStack_64 = param_2[7];
LAB_019af81c:
  do {
    FUN_0199f1dc(&local_5c,&local_a0);
    uVar14 = local_4c;
    uVar5 = local_50;
    uVar11 = local_54;
    uVar4 = local_58;
    bVar3 = local_5b;
    bVar2 = local_5c;
    uVar13 = (uint)local_5c;
    if (uVar13 == 10) {
      FUN_0199f1dc(&local_40,&local_80);
      if (local_40 == 10) {
        return 0;
      }
      return 0xffffffff;
    }
    FUN_0199f1dc(&local_40,&local_80);
    uVar7 = local_30;
    uVar6 = local_34;
    uVar12 = local_38;
    uVar8 = (uint)local_40;
    if (uVar8 == 10) {
      return 1;
    }
    iVar10 = uVar13 - 5;
    if (uVar13 < 5 || iVar10 == 0) {
      iVar10 = 0;
    }
    iVar9 = uVar8 - 5;
    if (uVar8 < 6) {
      iVar9 = 0;
    }
    if (iVar10 == iVar9) {
      if (iVar10 == 4) {
switchD_019af8dc_caseD_0:
        uVar14 = local_38;
        if (uVar11 < local_38) {
          uVar14 = uVar11;
        }
        iVar10 = FUN_01bed842(uVar4,local_3c,uVar14);
        if (iVar10 == 0) {
          iVar10 = uVar11 - uVar12;
        }
LAB_019af914:
        uVar11 = 0;
        uVar13 = (uint)(iVar10 < 0);
        if (0 < iVar10) {
          uVar11 = 1;
        }
      }
      else {
        if ((iVar10 != 0) || (5 < uVar8)) goto LAB_019af81c;
        if (uVar13 != uVar8) {
          uVar11 = (uint)(uVar8 < uVar13) - (uint)(uVar13 < uVar8);
          goto LAB_019af814;
        }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar2) {
        default:
          goto switchD_019af8dc_caseD_0;
        case 1:
        case 4:
          uVar13 = local_38;
          if (uVar11 < local_38) {
            uVar13 = uVar11;
          }
          iVar10 = FUN_01bed842(uVar4,local_3c,uVar13);
          if (iVar10 == 0) {
            iVar10 = uVar11 - uVar12;
          }
          uVar13 = (uint)(iVar10 < 0);
          uVar11 = (uint)(0 < iVar10);
          if (iVar10 == 0) {
            uVar11 = uVar7;
            if (uVar14 < uVar7) {
              uVar11 = uVar14;
            }
            iVar10 = FUN_01bed842(uVar5,uVar6,uVar11);
            if (iVar10 == 0) {
              iVar10 = uVar14 - uVar7;
            }
            goto LAB_019af914;
          }
          break;
        case 2:
        case 5:
          uVar13 = (uint)(bVar3 < local_3f);
          uVar11 = (uint)(bVar3 >= local_3f && bVar3 != local_3f);
        }
      }
      uVar11 = uVar11 - uVar13;
    }
    else {
      uVar11 = (uint)(iVar9 < iVar10) - (uint)(iVar10 < iVar9);
    }
LAB_019af814:
    if ((uVar11 & 0xfd) != 0) {
      return uVar11;
    }
  } while( true );
}

