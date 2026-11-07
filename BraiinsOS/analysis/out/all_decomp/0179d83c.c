// FUN_0179d83c @ 0179d83c size=1056 calls_out=7 calls_in=1
// strings: 

void FUN_0179d83c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint extraout_r1;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  uint local_38;
  undefined4 local_30;
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  uVar15 = FUN_0179d3f0(param_1,*(undefined4 *)(param_2 + 0x860),*(undefined4 *)(param_2 + 0x864),
                        param_2 + 0xbc,param_2 + 0xda0,*(undefined4 *)(param_2 + 0x948),0x22d8);
  if (0xffffff88 < (uint)uVar15) goto LAB_0179d8a8;
  iVar3 = *(int *)(param_2 + 0xda0);
  uVar4 = param_1[3] - param_1[2];
  pbVar11 = (byte *)param_1[6];
  pbVar9 = (byte *)param_1[4];
  uVar13 = param_1[1] - *param_1;
  local_30 = 0xff;
  if (uVar4 < 0x400) {
    iVar5 = 3;
  }
  else {
    iVar5 = 4;
  }
  iVar6 = *(int *)(param_2 + 0x864);
  iVar1 = (int)uVar13 >> 3;
  pbVar8 = (byte *)param_1[5];
  uVar14 = *(undefined4 *)(param_2 + 0x948);
  local_38 = uVar4;
  if ((iVar3 != 0) && (local_38 = 1, iVar3 != 1)) {
    if (iVar3 - 2U < 2) {
      uVar7 = FUN_01794f44(uVar14,&local_30,param_1[2],uVar4,uVar14,0x22d8);
      local_38 = uVar4;
      if (uVar7 < 0xffffff89) {
        if (0x3fff < uVar4) {
          iVar5 = iVar5 + 1;
        }
        iVar2 = FUN_01796e04(iVar6,uVar14,local_30);
        if (iVar3 == 2) {
          iVar2 = iVar2 + *(int *)(param_2 + 0xe24);
        }
        if (0xff < uVar4) {
          iVar2 = iVar2 + 6;
        }
        local_38 = iVar5 + iVar2;
      }
    }
    else {
      local_38 = 0;
    }
  }
  if (uVar13 < 0x3f9) {
    iVar3 = 2;
  }
  else {
    iVar3 = 3;
  }
  if (0x3f7f8 < uVar13) {
    iVar3 = iVar3 + 1;
  }
  iVar5 = *(int *)(param_2 + 0xe2c);
  local_30 = 0x1f;
  FUN_01794dfc(uVar14,&local_30,pbVar11,iVar1,uVar14,0x22d8);
  if (iVar5 == 0) {
    uVar4 = FUN_017a2e48(&DAT_00450ffc,5,uVar14,local_30);
LAB_0179d9e0:
    if (uVar4 < 0xffffff89) goto LAB_0179d9fc;
    uVar4 = iVar1 * 10;
  }
  else {
    if (iVar5 - 2U < 2) {
      uVar4 = FUN_017a2d7c(iVar6 + 0x408,uVar14,local_30);
      goto LAB_0179d9e0;
    }
    uVar4 = 0;
LAB_0179d9fc:
    pbVar10 = pbVar11;
    if (pbVar11 < pbVar11 + iVar1) {
      do {
        pbVar12 = pbVar10 + 1;
        uVar4 = uVar4 + *pbVar10;
        pbVar10 = pbVar12;
      } while (pbVar11 + iVar1 != pbVar12);
    }
    uVar4 = uVar4 >> 3;
  }
  iVar5 = *(int *)(param_2 + 0xe28);
  local_30 = 0x23;
  FUN_01794dfc(uVar14,&local_30,pbVar9,iVar1,uVar14,0x22d8);
  if (iVar5 == 0) {
    uVar13 = FUN_017a2e48(&DAT_004510dc,6,uVar14,local_30);
LAB_0179da78:
    if (uVar13 < 0xffffff89) goto LAB_0179da94;
    uVar13 = iVar1 * 10;
  }
  else {
    if (iVar5 - 2U < 2) {
      uVar13 = FUN_017a2d7c(iVar6 + 0xcb8,uVar14,local_30);
      goto LAB_0179da78;
    }
    uVar13 = 0;
LAB_0179da94:
    pbVar11 = pbVar9 + iVar1;
    if (pbVar9 < pbVar11) {
      do {
        pbVar10 = pbVar9 + 1;
        uVar13 = uVar13 + (byte)(&DAT_00451124)[*pbVar9];
        pbVar9 = pbVar10;
      } while (pbVar11 != pbVar10);
    }
    uVar13 = uVar13 >> 3;
  }
  iVar5 = *(int *)(param_2 + 0xe30);
  local_30 = 0x34;
  FUN_01794dfc(uVar14,&local_30,pbVar8,iVar1,uVar14,0x22d8);
  if (iVar5 == 0) {
    lVar16 = FUN_017a2e48(&DAT_00451038,6,uVar14,local_30);
LAB_0179db1c:
    uVar14 = (undefined4)((ulonglong)lVar16 >> 0x20);
    if ((uint)lVar16 < 0xffffff89) goto LAB_0179db38;
    uVar7 = iVar1 * 10;
  }
  else {
    if (iVar5 - 2U < 2) {
      lVar16 = FUN_017a2d7c(iVar6 + 0x70c,uVar14,local_30);
      goto LAB_0179db1c;
    }
    lVar16 = (ulonglong)extraout_r1 << 0x20;
LAB_0179db38:
    iVar5 = (int)lVar16;
    pbVar9 = pbVar8 + iVar1;
    if (pbVar8 < pbVar9) {
      do {
        pbVar11 = pbVar8 + 1;
        iVar5 = iVar5 + (uint)(byte)(&DAT_004510a4)[*pbVar8];
        lVar16 = CONCAT44(&DAT_004510a4,iVar5);
        pbVar8 = pbVar11;
      } while (pbVar9 != pbVar11);
    }
    uVar14 = (undefined4)((ulonglong)lVar16 >> 0x20);
    uVar7 = (uint)lVar16 >> 3;
  }
  uVar15 = CONCAT44(uVar14,*(int *)(param_2 + 0xebc) + 3 + local_38 + iVar3 + uVar4 + uVar13 + uVar7
                   );
LAB_0179d8a8:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

