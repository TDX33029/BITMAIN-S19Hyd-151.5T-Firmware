// FUN_00039f38 @ 00039f38  size=1448  callers=1
// program: bmminer


int * FUN_00039f38(int *param_1,uint *param_2,int param_3,uint param_4,char param_5,char param_6)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  int iVar9;
  int unaff_r6;
  int unaff_r7;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar9 = (int)param_5;
  iVar12 = (int)param_6;
  if (iVar9 != 0xe) {
    piVar3 = param_1;
    if (iVar9 != iVar12) {
      iVar6 = *(int *)(&DAT_0009f20c + iVar12 * 4);
      if (iVar6 != 0) {
        piVar3 = *(int **)(param_3 + 0x18);
        goto LAB_00039f90;
      }
LAB_00039f98:
      if (iVar9 == 0x10) {
        piVar3 = (int *)0x1;
        *(char *)((int)param_2 + 0x15) =
             (char)*(undefined4 *)
                    (&DAT_0009f074 + ((short)*(char *)((int)param_2 + 0x15) * 6 + 1) * 4);
      }
      if (iVar12 != 8) goto LAB_00039fc4;
LAB_0003a110:
      sVar8 = *(short *)((int)param_2 + 0x12) + 1;
      *(short *)((int)param_2 + 0x12) = sVar8;
      if (sVar8 < 0x80) goto LAB_00039fcc;
      unaff_r7 = 0;
      iVar9 = 0xb;
      unaff_r6 = 0;
      goto LAB_00039fd8;
    }
    iVar9 = 0;
    unaff_r6 = iVar9;
    unaff_r7 = iVar9;
LAB_00039fe0:
    switch(iVar12) {
    case 2:
    case 4:
      unaff_r6 = *(int *)(param_3 + 0x20);
      unaff_r7 = *(int *)(param_3 + 0x24);
      iVar9 = *(int *)(param_3 + 0x28);
      *(undefined4 *)(param_3 + 0x20) = 0;
      *(undefined4 *)(param_3 + 0x24) = 0;
      *(undefined4 *)(param_3 + 0x28) = 0;
      break;
    case 6:
    case 0xb:
      *(char *)((int)param_2 + 0x15) =
           (char)*(undefined4 *)
                  (&DAT_0009f074 + ((short)*(char *)((int)param_2 + 0x15) * 6 + 3) * 4);
      unaff_r6 = *(int *)(param_3 + 0x20);
      unaff_r7 = *(int *)(param_3 + 0x24);
      iVar9 = *(int *)(param_3 + 0x28);
      *(undefined4 *)(param_3 + 0x20) = 0;
      *(undefined4 *)(param_3 + 0x24) = 0;
      *(undefined4 *)(param_3 + 0x28) = 0;
      break;
    case 8:
      iVar12 = (int)(short)param_2[4];
      if (iVar12 < 0x11) {
        uVar4 = (uint)(byte)"transfer-encoding"[iVar12];
      }
      else {
        uVar4 = 0;
      }
      if (param_4 - 0x41 < 0x1a) {
        param_4 = param_4 + 0x20 & 0xff;
      }
      if (uVar4 == param_4) {
        if (iVar12 < 0xe) goto LAB_0003a3e4;
      }
      else {
        cVar1 = (&DAT_0009f074)[((short)*(char *)((int)param_2 + 0x15) * 6 + 1) * 4];
        *(char *)((int)param_2 + 0x15) = cVar1;
        if (iVar12 < 0xe) {
LAB_0003a3e4:
          if ((byte)"content-length"[iVar12] == param_4) goto LAB_0003a0b8;
          cVar1 = *(char *)((int)param_2 + 0x15);
        }
        *(char *)((int)param_2 + 0x15) = (char)*(undefined4 *)(&DAT_0009f074 + cVar1 * 0x18);
      }
LAB_0003a0b8:
      *(short *)(param_2 + 4) = (short)param_2[4] + 1;
      break;
    case 10:
      if (*(char *)((int)param_2 + 0x15) == '\x05') {
        sVar8 = (short)param_2[4];
        if (sVar8 < 7) {
          uVar4 = (uint)(byte)"chunked"[sVar8];
        }
        else {
          uVar4 = 0;
        }
        if (param_4 - 0x41 < 0x1a) {
          param_4 = param_4 + 0x20 & 0xff;
        }
        *(short *)(param_2 + 4) = sVar8 + 1;
        if (uVar4 != param_4) {
          *(undefined1 *)((int)param_2 + 0x15) = 0;
        }
      }
      else if (*(char *)((int)param_2 + 0x15) == '\x04') {
        param_4 = param_4 - 0x30;
        uVar4 = *param_2;
        *param_2 = uVar4 * 10 + param_4;
        param_2[1] = ((param_2[1] << 2 | uVar4 >> 0x1e) + param_2[1] + (uint)CARRY4(uVar4 * 4,uVar4)
                     ) * 2 + (uint)CARRY4(uVar4 * 5,uVar4 * 5) + ((int)param_4 >> 0x1f) +
                     (uint)CARRY4(uVar4 * 10,param_4);
      }
      break;
    case 0xe:
      goto switchD_00039fe8_caseD_e;
    case 0xf:
    case 0x11:
      iVar6 = *(int *)(param_3 + 0x18);
      iVar10 = *(int *)(param_3 + 0x14);
      bVar13 = *(char *)((int)param_2 + 0x15) == '\r';
      if (bVar13) {
        piVar3 = (int *)0x6;
        *(int *)(param_3 + 0x20) = iVar6;
        *(undefined4 *)(param_3 + 0x28) = 6;
      }
      uVar5 = *param_2;
      uVar4 = param_2[2];
      if (!bVar13) {
        piVar3 = *(int **)(param_3 + 0x28);
      }
      *(byte *)(param_3 + 0x2c) = *(byte *)(param_3 + 0x2c) | 1;
      iVar11 = (uVar5 - uVar4) + iVar6;
      if (iVar10 < iVar11) {
        uVar4 = iVar10 - iVar6;
        iVar12 = 0;
        if (piVar3 != (int *)0x0) {
          iVar12 = uVar4 + *(int *)(param_3 + 0x24);
        }
        *(int *)(param_3 + 0x18) = iVar10;
        *(int *)(param_3 + 0x24) = iVar12;
        uVar5 = param_2[2];
        param_2[2] = uVar5 + uVar4;
        param_2[3] = param_2[3] + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar5,uVar4);
        if (*(char *)((int)param_2 + 0x15) == '\r') {
          unaff_r6 = *(int *)(param_3 + 0x20);
          unaff_r7 = *(int *)(param_3 + 0x24);
          iVar9 = *(int *)(param_3 + 0x28);
          *(undefined4 *)(param_3 + 0x20) = 0;
          *(undefined4 *)(param_3 + 0x24) = 0;
          *(undefined4 *)(param_3 + 0x28) = 0;
          FUN_00039eb8(param_3);
        }
      }
      else {
        iVar9 = 0;
        if (piVar3 != (int *)0x0) {
          iVar9 = (uVar5 - uVar4) + *(int *)(param_3 + 0x24);
        }
        *(int *)(param_3 + 0x24) = iVar9;
        *(int *)(param_3 + 0x18) = iVar11;
        unaff_r6 = *(int *)(param_3 + 0x20);
        unaff_r7 = *(int *)(param_3 + 0x24);
        iVar9 = *(int *)(param_3 + 0x28);
        *(undefined4 *)(param_3 + 0x20) = 0;
        *(undefined4 *)(param_3 + 0x24) = 0;
        *(undefined4 *)(param_3 + 0x28) = 0;
        *(char *)((int)param_2 + 0x15) =
             (char)*(undefined4 *)(&DAT_0009f074 + *(char *)((int)param_2 + 0x15) * 0x18);
        if (iVar12 == 0x11) {
          *(undefined1 *)(param_2 + 5) = 0x15;
        }
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
      }
      break;
    case 0x10:
      if (param_4 == 0x30) {
LAB_0003a504:
        param_4 = param_4 - 0x30;
        if (9 < (param_4 & 0xff)) break;
        uVar4 = *param_2;
        uVar5 = param_2[1];
      }
      else {
        *(char *)((int)param_2 + 0x15) =
             (char)*(undefined4 *)(&DAT_0009f074 + *(char *)((int)param_2 + 0x15) * 0x18);
        if (param_4 - 0x41 < 6) {
          uVar4 = *param_2;
          uVar5 = param_2[1];
          param_4 = param_4 - 0x37;
        }
        else {
          if (5 < param_4 - 0x61) goto LAB_0003a504;
          uVar4 = *param_2;
          uVar5 = param_2[1];
          param_4 = param_4 - 0x57;
        }
      }
      *param_2 = uVar4 * 0x10 + param_4;
      param_2[1] = (uVar5 << 4 | uVar4 >> 0x1c) + ((int)param_4 >> 0x1f) +
                   (uint)CARRY4(uVar4 * 0x10,param_4);
      break;
    case 0x17:
      *(char *)((int)param_2 + 0x15) =
           (char)*(undefined4 *)
                  (&DAT_0009f074 + ((short)*(char *)((int)param_2 + 0x15) * 6 + 2) * 4);
      break;
    case 0x18:
      iVar9 = 0xb;
    }
    goto switchD_00039fe8_caseD_3;
  }
  piVar3 = *(int **)(param_3 + 0x18);
  if (iVar12 == 0xe) {
    unaff_r7 = 0;
    iVar9 = unaff_r7;
    unaff_r6 = unaff_r7;
  }
  *(int **)(param_3 + 0x1c) = piVar3;
  if (iVar12 != 0xe) {
    iVar6 = *(int *)(&DAT_0009f20c + iVar12 * 4);
    if (iVar6 != 0) {
LAB_00039f90:
      *(int **)(param_3 + 0x20) = piVar3;
      *(int *)(param_3 + 0x28) = iVar6;
      goto LAB_00039f98;
    }
    if (iVar12 == 8) goto LAB_0003a110;
LAB_00039fc4:
    if (iVar12 == 9) {
      piVar3 = (int *)0x0;
      *(char *)((int)param_2 + 0x15) =
           (char)*(undefined4 *)
                  (&DAT_0009f074 + ((short)*(char *)((int)param_2 + 0x15) * 6 + 2) * 4);
      unaff_r6 = *(int *)(param_3 + 0x20);
      unaff_r7 = *(int *)(param_3 + 0x24);
      iVar9 = *(int *)(param_3 + 0x28);
      *(undefined4 *)(param_3 + 0x20) = 0;
      *(undefined4 *)(param_3 + 0x24) = 0;
      *(undefined4 *)(param_3 + 0x28) = 0;
    }
    else {
LAB_00039fcc:
      iVar9 = 0;
      unaff_r7 = 0;
      unaff_r6 = 0;
    }
LAB_00039fd8:
    *(undefined2 *)(param_2 + 4) = 0;
    goto LAB_00039fe0;
  }
switchD_00039fe8_caseD_e:
  uVar4 = *param_2;
  uVar5 = param_2[1];
  cVar1 = *(char *)((int)param_2 + 0x15);
  if (cVar1 == 6) {
    uVar7 = 0x800001 - *(int *)(param_3 + 0x18);
    iVar12 = (int)uVar7 >> 0x1f;
    if ((int)(iVar12 - (uVar5 + (uVar7 < uVar4))) < 0 !=
        (SBORROW4(iVar12,uVar5) != SBORROW4(iVar12 - uVar5,(uint)(uVar7 < uVar4)))) {
      iVar9 = 8;
      *(undefined1 *)((int)param_2 + 0x15) = 0xd;
      goto switchD_00039fe8_caseD_3;
    }
    *(undefined1 *)((int)param_2 + 0x15) = 0xf;
    if (uVar4 != 0 || uVar5 != 0) goto switchD_00039fe8_caseD_3;
  }
  else {
    cVar2 = (&DAT_0009f074)[((short)cVar1 * 6 + 4) * 4];
    if (((int)cVar1 - 7U & 0xff) < 2) {
      iVar9 = 8;
    }
    *(char *)((int)param_2 + 0x15) = cVar2;
    if (cVar2 != '\x0f' || (uVar4 != 0 || uVar5 != 0)) {
      if (cVar2 == '\x10') {
        iVar9 = 7;
      }
      goto switchD_00039fe8_caseD_3;
    }
  }
  iVar9 = 7;
  *(undefined1 *)((int)param_2 + 0x15) = 0x10;
switchD_00039fe8_caseD_3:
  *param_1 = unaff_r6;
  param_1[1] = unaff_r7;
  param_1[2] = iVar9;
  return param_1;
}

