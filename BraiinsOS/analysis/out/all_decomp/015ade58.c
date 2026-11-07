// FUN_015ade58 @ 015ade58 size=1040 calls_out=1 calls_in=4
// strings: 

void FUN_015ade58(undefined4 *param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int unaff_r9;
  uint uVar15;
  uint uVar16;
  uint in_r12;
  int iVar17;
  int local_2c;
  
  iVar8 = *param_2;
  *param_2 = 0;
  if (iVar8 != 0) {
    param_1[2] = param_2[1];
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 7;
    return;
  }
  iVar8 = param_2[4];
  uVar12 = param_2[2];
  param_2[2] = 0;
  if ((uVar12 & 1) == 0) {
    pcVar2 = (char *)param_2[5];
    if (pcVar2 == (char *)param_2[6]) goto LAB_015adf90;
    iVar8 = param_2[7];
    param_2[5] = (int)(pcVar2 + 1);
    param_2[7] = iVar8 + 1;
    cVar1 = *pcVar2;
    if (cVar1 != '[') goto LAB_015adebc;
LAB_015adf30:
    pcVar9 = (char *)param_2[5];
    pcVar11 = (char *)param_2[6];
    pcVar2 = (char *)0x0;
    param_2[2] = 0;
    if (pcVar9 == pcVar11) {
LAB_015ae140:
      param_2[3] = (int)pcVar2;
      param_2[2] = 1;
      param_2[4] = (int)pcVar11;
      *(char *)(param_2 + 10) = (char)param_2[10] + '\x01';
      if (param_2[9] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(1,0,0,&DAT_018aa21c);
      }
      param_2[8] = param_2[8] + 1;
      param_2[9] = param_2[9] + -1;
    }
    else {
      pcVar11 = (char *)param_2[7];
      cVar1 = *pcVar9;
      param_2[5] = (int)(pcVar9 + 1);
      param_2[7] = (int)(pcVar11 + 1);
      if (cVar1 != '[') {
        pcVar2 = pcVar9;
        goto LAB_015ae140;
      }
      uVar12 = param_2[9];
      *param_2 = 1;
      param_2[1] = (int)pcVar11;
      if (uVar12 < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(2,uVar12,uVar12,&DAT_018aa20c);
      }
      param_2[8] = param_2[8] + 2;
      param_2[9] = uVar12 - 2;
    }
    param_2 = (int *)0x0;
    iVar10 = iVar8;
  }
  else {
    if ((char *)param_2[3] == (char *)0x0) {
LAB_015adf90:
      *param_1 = 8;
      return;
    }
    cVar1 = *(char *)param_2[3];
    if (cVar1 == '[') goto LAB_015adf30;
LAB_015adebc:
    if (cVar1 != ']') {
      if ((char)param_2[10] != '\0') {
        iVar6 = param_2[5];
        uVar3 = (uint)(byte)(cVar1 - 9);
        uVar16 = param_2[7];
        uVar4 = (uint)(uVar3 < 0x18) & 0x80001bU >> uVar3;
        uVar12 = (uint)(0x17 < uVar3);
        iVar10 = iVar6;
        uVar5 = uVar16;
        local_2c = iVar8;
        for (iVar13 = 0; iVar14 = iVar6 + iVar13, iVar14 != param_2[6]; iVar13 = iVar13 + 1) {
          uVar12 = uVar16 + iVar13;
          uVar15 = (uint)*(byte *)(iVar6 + iVar13);
          param_2[5] = (int)((byte *)(iVar6 + iVar13) + 1);
          param_2[7] = uVar12 + 1;
          if (uVar15 - 0x5b < 3) {
LAB_015ae184:
            iVar14 = iVar10;
            uVar12 = uVar5;
            goto LAB_015ae194;
          }
          uVar15 = uVar15 - 9;
          if ((uVar15 < 0x18) && ((1 << (uVar15 & 0xff) & 0x80001bU) != 0)) {
            if (uVar4 == 0) goto LAB_015ae194;
          }
          else if (uVar4 != 0) goto LAB_015ae184;
          local_2c = uVar16 + iVar13;
          iVar10 = iVar10 + 1;
          uVar5 = uVar5 + 1;
        }
        iVar14 = 0;
LAB_015ae194:
        in_r12 = iVar13 + 1;
        uVar5 = param_2[9];
        param_2[2] = 1;
        param_2[3] = iVar14;
        param_2[4] = uVar12;
        if (uVar5 < in_r12) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,in_r12,uVar5,&DAT_018aa24c);
        }
        iVar10 = param_2[8];
        uVar7 = 2;
        param_2[8] = iVar10 + in_r12;
        param_2[9] = uVar5 - in_r12;
        param_2 = (int *)((uint)(0x17 < uVar3) | 0x7fffe4U >> uVar3 & 1);
        unaff_r9 = local_2c;
        goto LAB_015ae1d4;
      }
LAB_015ae0a0:
      iVar13 = 0;
      iVar17 = param_2[7];
      iVar10 = 0;
      iVar14 = param_2[5];
      iVar6 = iVar14;
      unaff_r9 = iVar8;
      while (iVar6 != param_2[6]) {
        iVar10 = iVar17 + iVar13;
        cVar1 = *(char *)(iVar14 + iVar13);
        param_2[7] = iVar10 + 1;
        param_2[5] = (int)((char *)(iVar14 + iVar13) + 1);
        if (cVar1 == '[') goto LAB_015ae108;
        unaff_r9 = iVar17 + iVar13;
        iVar13 = iVar13 + 1;
        iVar6 = iVar14 + iVar13;
      }
      iVar6 = 0;
LAB_015ae108:
      in_r12 = iVar13 + 1;
      uVar12 = param_2[9];
      param_2[2] = 1;
      param_2[3] = iVar6;
      param_2[4] = iVar10;
      if (uVar12 < in_r12) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,in_r12,uVar12,&DAT_018aa23c);
      }
      iVar10 = param_2[8];
      uVar7 = 0;
      param_2[8] = iVar10 + in_r12;
      param_2[9] = uVar12 - in_r12;
      goto LAB_015ae1d4;
    }
    if ((char)param_2[10] == '\0') goto LAB_015ae0a0;
    *(char *)(param_2 + 10) = (char)param_2[10] + -1;
    if (param_2[9] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(1,0,0,&DAT_018aa22c);
    }
    param_2[8] = param_2[8] + 1;
    param_2[9] = param_2[9] + -1;
    param_2 = (int *)&DAT_00000001;
    iVar10 = iVar8;
  }
  uVar7 = 1;
  iVar8 = iVar10;
LAB_015ae1d4:
  *(char *)((int)param_1 + 5) = (char)param_2;
  param_1[2] = iVar10;
  param_1[3] = in_r12;
  param_1[4] = iVar8;
  param_1[5] = unaff_r9;
  *(undefined1 *)(param_1 + 1) = uVar7;
  *param_1 = 7;
  return;
}

