// FUN_0179ce18 @ 0179ce18 size=1304 calls_out=9 calls_in=2
// strings: 

char * FUN_0179ce18(int param_1,undefined1 *param_2,uint param_3,undefined1 *param_4,uint param_5,
                   int param_6)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  bool bVar19;
  char *local_5c;
  char local_44 [4];
  int local_40;
  char local_3c;
  char *local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  pcVar2 = (char *)FUN_0179962c(param_1,param_4,param_5,0);
  if ((char *)0xffffff88 < pcVar2) goto LAB_0179ceb8;
  if (pcVar2 == (char *)0x1) {
    pcVar2 = (char *)0x0;
    if (*(int *)(param_1 + 0x2dc) != 0) {
      pcVar2 = (char *)0xffffff96;
      goto LAB_0179ceb8;
    }
    goto LAB_0179cf08;
  }
  iVar12 = *(int *)(param_1 + 0x860);
  if (*(int *)(param_1 + 0x2dc) != 0) {
    uVar3 = FUN_01798d68(param_1 + 0x2dc,param_1 + 0x2f4,iVar12 + 0x11e8);
    if (uVar3 < 0xffffff89) {
      pcVar2 = (char *)0x0;
      *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_1 + 0x864);
      *(int *)(param_1 + 0x864) = iVar12;
    }
    else {
      pcVar2 = (char *)0xffffffba;
    }
    goto LAB_0179ceb8;
  }
  iVar8 = *(int *)(param_1 + 0x2f4);
  iVar4 = *(int *)(param_1 + 0x948);
  uVar6 = *(int *)(param_1 + 0x2f8) - iVar8;
  iVar9 = *(int *)(param_1 + 0x2fc);
  iVar1 = (int)uVar6 >> 3;
  iVar10 = *(int *)(param_1 + 0x300) - iVar9;
  iVar13 = *(int *)(param_1 + 0x864);
  uVar5 = iVar4 + 0xd4;
  uVar14 = *(undefined4 *)(param_1 + 8);
  iVar15 = *(int *)(param_1 + 0xd8);
  uVar3 = uVar5;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  uVar16 = *(undefined4 *)(param_1 + 0x30c);
  uVar17 = *(undefined4 *)(param_1 + 0x304);
  uVar18 = *(undefined4 *)(param_1 + 0x308);
  bVar19 = false;
  if (iVar1 != 0) {
    uVar3 = FUN_018462e8(iVar10);
    iVar7 = *(int *)(param_1 + 0xfc);
    uVar3 = (uint)(0x13 < uVar3);
  }
  else {
    iVar7 = *(int *)(param_1 + 0xfc);
  }
  if (iVar7 != 1) {
    if (iVar7 == 2) {
      bVar19 = true;
    }
    else if (iVar15 == 1) {
      bVar19 = *(int *)(param_1 + 0xd4) != 0;
    }
  }
  pcVar2 = (char *)FUN_017a27d4(param_2,param_3,iVar9,iVar10,uVar5,0x2204,iVar12,iVar13,iVar15,
                                bVar19,uVar3,uVar14);
  if ((char *)0xffffff88 < pcVar2) goto LAB_0179d1a0;
  if ((int)(param_3 - (int)pcVar2) < 4) {
    if (param_5 <= param_3) goto LAB_0179d1b4;
    iVar12 = *(int *)(param_1 + 0x860);
    pcVar2 = (char *)0xffffffba;
  }
  else {
    iVar9 = iVar13 + 0x408;
    pcVar11 = param_2 + (int)pcVar2;
    if (uVar6 < 0x3f9) {
      local_5c = pcVar11 + 1;
      param_2[(int)pcVar2] = (char)iVar1;
      if (iVar1 != 0) goto LAB_0179d140;
      FUN_016dd1aa(iVar9,iVar12 + 0x408,0xde0);
      pcVar2 = local_5c + -(int)param_2;
LAB_0179d064:
      if (pcVar2 == (char *)0x0) {
LAB_0179d1b4:
        if (((param_6 == 0) || (*(int *)(param_1 + 0x2ec) != 0)) ||
           (iVar12 = FUN_017988f4(param_4,param_5), iVar12 == 0)) {
          iVar12 = *(int *)(param_1 + 0x860);
          pcVar2 = (char *)0x0;
          goto LAB_0179cf0c;
        }
      }
      else {
        bVar19 = param_5 == param_3;
        if (param_5 <= param_3) {
          bVar19 = pcVar2 == (char *)0xffffffba;
        }
        if (bVar19) goto LAB_0179d1b4;
        if ((char *)0xffffff88 < pcVar2) goto LAB_0179cf08;
        uVar3 = *(uint *)(param_1 + 0xd8);
        if (uVar3 < 7) {
          uVar3 = 7;
        }
        if ((char *)((param_5 - 2) - (param_5 >> (uVar3 - 1 & 0xff))) <= pcVar2) goto LAB_0179d1b4;
        if ((param_6 == 0) || (*(int *)(param_1 + 0x2ec) != 0)) {
LAB_0179d320:
          if (pcVar2 == (char *)0x1) goto LAB_0179cf08;
LAB_0179d0c8:
          uVar14 = *(undefined4 *)(param_1 + 0x860);
          iVar12 = *(int *)(param_1 + 0x864);
          *(int *)(param_1 + 0x860) = iVar12;
          *(undefined4 *)(param_1 + 0x864) = uVar14;
          goto LAB_0179cf0c;
        }
        if ((char *)0x18 < pcVar2) goto LAB_0179d0c8;
        iVar12 = FUN_017988f4(param_4,param_5);
        if (iVar12 == 0) goto LAB_0179d320;
      }
      pcVar2 = (char *)0x1;
      *param_2 = *param_4;
      iVar12 = *(int *)(param_1 + 0x860);
    }
    else {
      if (uVar6 < 0x3f7f9) {
        local_5c = pcVar11 + 2;
        pcVar11[1] = (char)iVar1;
        *pcVar11 = (char)((uint)iVar1 >> 8) + -0x80;
      }
      else {
        local_5c = pcVar11 + 3;
        *pcVar11 = -1;
        *(short *)(pcVar11 + 1) = (short)iVar1 + -0x7f00;
      }
LAB_0179d140:
      FUN_0179c17c(local_44,param_1 + 0x2f4,iVar1,iVar12 + 0x408,iVar9,local_5c + 1,
                   param_2 + param_3,iVar15,iVar4,uVar5,0x2204);
      pcVar2 = local_38;
      if (local_38 < (char *)0xffffff89) {
        pcVar11 = local_5c + 1 + (int)local_38;
        *local_5c = (char)(local_40 << 4) + local_44[0] * '@' + local_3c * '\x04';
        pcVar2 = (char *)FUN_017a32bc(pcVar11,(int)(param_2 + param_3) - (int)pcVar11,iVar13 + 0x70c
                                      ,uVar18,iVar9,uVar16,iVar13 + 0xcb8,uVar17,iVar8,iVar1,
                                      local_30,uVar14);
        if (pcVar2 < (char *)0xffffff89) {
          if ((local_34 != 0) && (pcVar2 + local_34 < (char *)0x4)) goto LAB_0179d1b4;
          pcVar2 = pcVar11 + ((int)pcVar2 - (int)param_2);
          goto LAB_0179d064;
        }
      }
LAB_0179d1a0:
      bVar19 = param_5 == param_3;
      if (param_5 <= param_3) {
        bVar19 = pcVar2 == (char *)0xffffffba;
      }
      if (bVar19) goto LAB_0179d1b4;
LAB_0179cf08:
      iVar12 = *(int *)(param_1 + 0x860);
    }
  }
LAB_0179cf0c:
  if (*(int *)(iVar12 + 0x11dc) == 2) {
    *(undefined4 *)(iVar12 + 0x11dc) = 1;
  }
LAB_0179ceb8:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return pcVar2;
}

