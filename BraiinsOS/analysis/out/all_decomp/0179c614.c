// FUN_0179c614 @ 0179c614 size=2040 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

char * FUN_0179c614(char *param_1,int *param_2,int *param_3,int *param_4,undefined2 *param_5,
                   char *param_6,undefined1 *param_7,char *param_8,int param_9,int param_10)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  uint unaff_r9;
  int iVar18;
  char *pcVar19;
  int iVar20;
  undefined4 uVar21;
  bool bVar22;
  bool bVar23;
  char local_50 [4];
  int local_4c;
  char local_48;
  char *local_44;
  int local_40;
  undefined4 local_3c;
  char *local_38;
  int local_34;
  int iStack_30;
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  local_38 = (char *)*param_3;
  local_34 = param_3[1];
  iStack_30 = param_3[2];
  pcVar2 = local_38;
  if (param_10 != 0) {
    iVar16 = *param_2;
    if (param_2[9] == 1) {
      unaff_r9 = param_2[10];
    }
    uVar14 = param_2[1] - iVar16 >> 3;
    if (param_2[9] != 1) {
      unaff_r9 = uVar14;
    }
    if (param_2[1] != iVar16) {
      uVar3 = 0;
      iVar1 = iVar16;
      do {
        pcVar2 = *(char **)(iVar16 + uVar3 * 8);
        pcVar13 = pcVar2 + -1;
        if (uVar3 == unaff_r9 || *(short *)(iVar1 + 4) != 0) {
          if (pcVar13 < (char *)0x3) {
            iVar6 = param_4[(int)pcVar13];
            if (param_3[(int)pcVar13] == iVar6) {
              if (pcVar13 == (char *)0x0) goto LAB_0179ca7c;
              iVar5 = 0;
              pcVar10 = pcVar13;
LAB_0179ca20:
              iVar4 = param_3[(int)pcVar10];
              iVar6 = *param_3;
              if (pcVar10 != (char *)0x1) goto LAB_0179cb84;
              iVar7 = param_3[2];
              goto LAB_0179ca34;
            }
            *(uint *)(iVar16 + uVar3 * 8) = iVar6 + 3U;
            iVar5 = 0;
            if (iVar6 + 3U < 4) {
              iVar5 = 0;
              pcVar10 = (char *)(iVar6 + 2);
              iVar4 = 0;
              if ((char *)(iVar6 + 2) == (char *)0x0) goto LAB_0179ca48;
              goto LAB_0179ca20;
            }
LAB_0179cb3c:
            param_3[2] = param_3[1];
            iVar4 = *param_3;
            *param_3 = iVar6;
            param_3[1] = iVar4;
joined_r0x0179ca40:
            iVar4 = iVar5;
            if ((char *)0x3 < pcVar2) goto LAB_0179cb24;
            goto LAB_0179ca48;
          }
          if ((char *)0x3 < pcVar2) goto LAB_0179cb10;
          iVar4 = param_3[1];
          param_3[1] = *param_3;
          *param_3 = param_3[-1];
          pcVar13 = (char *)0xffffffff;
          param_3[2] = iVar4;
LAB_0179ca50:
          pcVar2 = (char *)*param_4;
          if (pcVar13 == (char *)0x3) {
            pcVar10 = pcVar2 + -1;
LAB_0179ca70:
            iVar4 = param_4[1];
          }
          else {
            pcVar10 = (char *)param_4[(int)pcVar13];
            if (pcVar13 != (char *)0x1) goto LAB_0179ca70;
            iVar4 = param_4[2];
          }
          param_4[1] = (int)pcVar2;
          param_4[2] = iVar4;
          *param_4 = (int)pcVar10;
        }
        else if (pcVar13 < (char *)0x3) {
          iVar5 = param_10;
          iVar4 = param_10;
          if (pcVar2 != (char *)0x3) {
            iVar6 = param_4[(int)pcVar2];
            if (param_3[(int)pcVar2] != iVar6) goto LAB_0179cabc;
            pcVar10 = pcVar2;
LAB_0179cb70:
            if (pcVar10 != (char *)0x3) goto LAB_0179ca20;
            iVar6 = *param_3;
            iVar4 = iVar6 + -1;
LAB_0179cb84:
            iVar7 = param_3[1];
LAB_0179ca34:
            param_3[2] = iVar7;
            *param_3 = iVar4;
            param_3[1] = iVar6;
            goto joined_r0x0179ca40;
          }
          iVar6 = *param_3;
          if (iVar6 == *param_4) {
            pcVar2 = (char *)param_3[1];
            param_3[2] = (int)pcVar2;
            param_3[1] = iVar6;
            *param_3 = iVar6 + -1;
          }
          else {
            iVar6 = *param_4 + -1;
LAB_0179cabc:
            pcVar10 = (char *)(iVar6 + 3);
            *(char **)(iVar16 + uVar3 * 8) = pcVar10;
            if ((char *)0x3 < pcVar10) goto LAB_0179cb3c;
            if (pcVar10 != (char *)0x0) goto LAB_0179cb70;
          }
LAB_0179ca48:
          pcVar13 = pcVar13 + iVar4;
          if (pcVar13 != (char *)0x0) goto LAB_0179ca50;
        }
        else if ((char *)0x3 < pcVar2) {
LAB_0179cb10:
          param_3[2] = param_3[1];
          iVar4 = *param_3;
          *param_3 = (int)(pcVar2 + -3);
          param_3[1] = iVar4;
LAB_0179cb24:
          pcVar2 = pcVar2 + -3;
          param_4[2] = param_4[1];
          iVar4 = *param_4;
          *param_4 = (int)pcVar2;
          param_4[1] = iVar4;
        }
LAB_0179ca7c:
        uVar3 = uVar3 + 1;
        iVar1 = iVar1 + 8;
      } while (uVar3 < uVar14);
    }
  }
  if (param_6 < (char *)0x3) {
LAB_0179c878:
    pcVar10 = (char *)0xffffffba;
  }
  else {
    iVar11 = *param_2;
    iVar20 = *(int *)(param_1 + 0x864);
    iVar1 = *(int *)(param_1 + 0x948);
    uVar14 = param_2[1] - iVar11;
    iVar18 = *(int *)(param_1 + 0x860);
    iVar17 = *(int *)(param_1 + 0xd8);
    uVar21 = *(undefined4 *)(param_1 + 8);
    iVar4 = param_2[6];
    iVar5 = param_2[4];
    iVar6 = param_2[5];
    iVar9 = param_2[2];
    iVar12 = param_2[3] - iVar9;
    pcVar13 = param_6 + -3;
    iVar7 = iVar1 + 0xd4;
    iVar16 = (int)uVar14 >> 3;
    if (iVar16 == 0) {
      bVar22 = true;
      iVar8 = *(int *)(param_1 + 0xfc);
      if (iVar8 != 1) goto LAB_0179c70c;
LAB_0179c720:
      bVar23 = false;
    }
    else {
      uVar3 = FUN_018462e8(iVar12);
      bVar22 = 0x13 < uVar3;
      iVar8 = *(int *)(param_1 + 0xfc);
      if (iVar8 == 1) goto LAB_0179c720;
LAB_0179c70c:
      if (iVar8 == 2) {
        bVar23 = true;
      }
      else {
        if (iVar17 != 1) goto LAB_0179c720;
        bVar23 = *(int *)(param_1 + 0xd4) != 0;
      }
    }
    pcVar2 = (char *)FUN_017a27d4((int)param_5 + 3,pcVar13,iVar9,iVar12,iVar7,0x2204,iVar18,iVar20,
                                  iVar17,bVar23,bVar22,uVar21);
    pcVar10 = pcVar2;
    if ((char *)0xffffff88 < pcVar2) goto LAB_0179c8f4;
    if ((int)pcVar13 - (int)pcVar2 < 4) {
      if (pcVar13 < param_8) goto LAB_0179c878;
LAB_0179c904:
      if (*(int *)(param_1 + 0x2ec) == 0) {
        iVar16 = *(int *)(param_1 + 0x2dc);
LAB_0179cb8c:
        pcVar10 = (char *)0x0;
LAB_0179cb90:
        pcVar2 = (char *)FUN_017988f4(param_7,param_8);
        if (pcVar2 == (char *)0x0) {
          if (iVar16 == 0) {
            if (pcVar10 == (char *)0x0) goto LAB_0179c924;
LAB_0179cbbc:
            if (pcVar10 != (char *)0x1) goto LAB_0179cbc4;
            goto LAB_0179cd98;
          }
        }
        else if (iVar16 == 0) {
LAB_0179cd98:
          if (param_6 == (char *)0x3) goto LAB_0179c878;
          *(undefined1 *)((int)param_5 + 3) = *param_7;
          iVar16 = param_9 + 2 + (int)param_8 * 8;
          *param_5 = (short)iVar16;
          *(char *)(param_5 + 1) = (char)((uint)iVar16 >> 0x10);
          *param_3 = (int)local_38;
          param_3[1] = local_34;
          param_3[2] = iStack_30;
          pcVar10 = (char *)0x4;
          pcVar2 = local_38;
          goto LAB_0179c974;
        }
LAB_0179c834:
        pcVar2 = (char *)FUN_01798d68(param_1 + 0x2dc,param_2,&local_38);
        if (pcVar2 < (char *)0xffffff89) {
          pcVar10 = (char *)0x0;
          uVar21 = *(undefined4 *)(param_1 + 0x860);
          *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_1 + 0x864);
          *(undefined4 *)(param_1 + 0x864) = uVar21;
          pcVar2 = param_1;
          goto LAB_0179c87c;
        }
        goto LAB_0179c878;
      }
      iVar16 = *(int *)(param_1 + 0x2dc);
joined_r0x0179c920:
      if (iVar16 != 0) goto LAB_0179c834;
LAB_0179c924:
      pcVar10 = param_8 + 3;
      if (param_6 < pcVar10) goto LAB_0179c878;
      param_9 = param_9 + (int)param_8 * 8;
      *param_5 = (short)param_9;
      *(char *)(param_5 + 1) = (char)((uint)param_9 >> 0x10);
      pcVar2 = (char *)FUN_016dd1aa((int)param_5 + 3,param_7);
      if ((char *)0xffffff88 < pcVar10) goto LAB_0179c87c;
      *param_3 = (int)local_38;
      param_3[1] = local_34;
      param_3[2] = iStack_30;
      pcVar2 = local_38;
    }
    else {
      iVar9 = iVar20 + 0x408;
      pcVar10 = (char *)((int)param_5 + (int)(pcVar2 + 3));
      if (0x3f8 < uVar14) {
        if (uVar14 < 0x3f7f9) {
          pcVar15 = pcVar10 + 2;
          pcVar10[1] = (char)iVar16;
          *pcVar10 = (char)((uint)iVar16 >> 8) + -0x80;
        }
        else {
          pcVar15 = pcVar10 + 3;
          *pcVar10 = -1;
          *(short *)(pcVar10 + 1) = (short)iVar16 + -0x7f00;
        }
LAB_0179cc24:
        pcVar2 = (char *)FUN_0179c17c(local_50,param_2,iVar16,iVar18 + 0x408,iVar9,pcVar15 + 1,
                                      (char *)((int)param_5 + (int)param_6),iVar17,iVar1,iVar7,
                                      0x2204);
        pcVar10 = local_44;
        if (local_44 < (char *)0xffffff89) {
          pcVar19 = pcVar15 + 1 + (int)local_44;
          *pcVar15 = (char)(local_4c << 4) + local_50[0] * '@' + local_48 * '\x04';
          pcVar2 = (char *)FUN_017a32bc(pcVar19,((int)param_5 + (int)param_6) - (int)pcVar19,
                                        iVar20 + 0x70c,iVar6,iVar9,iVar4,iVar20 + 0xcb8,iVar5,iVar11
                                        ,iVar16,local_3c,uVar21);
          pcVar10 = pcVar2;
          if (pcVar2 < (char *)0xffffff89) {
            if ((local_40 != 0) && (pcVar2 + local_40 < (char *)0x4)) goto LAB_0179c904;
            pcVar10 = pcVar19 + ((int)pcVar2 - ((int)param_5 + 3));
            goto LAB_0179c7c8;
          }
        }
LAB_0179c8f4:
        bVar22 = pcVar13 == param_8;
        if (param_8 <= pcVar13) {
          bVar22 = pcVar10 == (char *)0xffffffba;
        }
        if (!bVar22) goto LAB_0179c87c;
        goto LAB_0179c904;
      }
      pcVar15 = pcVar10 + 1;
      *(char *)((int)param_5 + (int)(pcVar2 + 3)) = (char)iVar16;
      if (iVar16 != 0) goto LAB_0179cc24;
      pcVar2 = (char *)FUN_016dd1aa(iVar9,iVar18 + 0x408,0xde0);
      pcVar10 = pcVar15 + -((int)param_5 + 3);
LAB_0179c7c8:
      if (pcVar10 == (char *)0x0) goto LAB_0179c904;
      bVar22 = pcVar13 == param_8;
      if (param_8 <= pcVar13) {
        bVar22 = pcVar10 == (char *)0xffffffba;
      }
      if (bVar22) goto LAB_0179c904;
      if ((char *)0xffffff88 < pcVar10) goto LAB_0179c87c;
      uVar14 = *(uint *)(param_1 + 0xd8);
      iVar16 = *(int *)(param_1 + 0x2dc);
      if (uVar14 < 7) {
        uVar14 = 7;
      }
      if (param_8 + (-2 - ((uint)param_8 >> (uVar14 - 1 & 0xff))) <= pcVar10) {
        pcVar2 = param_1;
        if (*(int *)(param_1 + 0x2ec) != 0) goto joined_r0x0179c920;
        goto LAB_0179cb8c;
      }
      if (*(int *)(param_1 + 0x2ec) != 0) {
        pcVar2 = param_1;
        if (iVar16 != 0) goto LAB_0179c834;
        goto LAB_0179cbbc;
      }
      if (pcVar10 < (char *)0x19) goto LAB_0179cb90;
      if (iVar16 != 0) goto LAB_0179c834;
LAB_0179cbc4:
      iVar16 = param_9 + 4 + (int)pcVar10 * 8;
      pcVar10 = pcVar10 + 3;
      uVar21 = *(undefined4 *)(param_1 + 0x860);
      pcVar2 = *(char **)(param_1 + 0x864);
      *(char **)(param_1 + 0x860) = pcVar2;
      *(undefined4 *)(param_1 + 0x864) = uVar21;
      *param_5 = (short)iVar16;
      *(char *)(param_5 + 1) = (char)((uint)iVar16 >> 0x10);
    }
LAB_0179c974:
    if (*(int *)(*(int *)(param_1 + 0x860) + 0x11dc) == 2) {
      *(undefined4 *)(*(int *)(param_1 + 0x860) + 0x11dc) = 1;
    }
  }
LAB_0179c87c:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar2,local_2c ^ DAT_018ddaf8,0);
  }
  return pcVar10;
}

