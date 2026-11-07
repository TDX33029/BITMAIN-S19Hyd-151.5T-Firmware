// FUN_01b8e030 @ 01b8e030 size=1024 calls_out=6 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_01b8e030(int param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                   uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                   int param_10,undefined2 *param_11,int param_12,int param_13,uint param_14,
                   int param_15,undefined4 *param_16,undefined4 *param_17,int param_18)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  
  iVar12 = (int)param_11 + 3;
  if (param_14 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 200;
  }
  if (iVar6 == 0) {
    uVar10 = 0x400;
  }
  else {
    uVar10 = 0x338;
  }
  if (param_6 < uVar10) {
    uVar10 = 3;
  }
  else {
    uVar10 = 4;
  }
  if (param_14 == 0) {
    iVar4 = 3;
  }
  else {
    iVar4 = *param_2;
  }
  *param_16 = 0;
  if ((param_6 == 0) || (iVar5 = *param_2, iVar5 == 0)) {
LAB_01b8e0d4:
    pcVar1 = (char *)FUN_01b8ce8c(iVar12,param_12 + -3,param_5);
  }
  else if (iVar5 == 1) {
    pcVar1 = (char *)FUN_01b8cf18(iVar12,param_12 + -3,param_5);
  }
  else {
    if (0x4000U - iVar6 <= param_6) {
      uVar10 = uVar10 + 1;
    }
    if (iVar5 == 2) {
      uVar9 = param_14 & 1;
    }
    else {
      uVar9 = 0;
    }
    iVar5 = iVar12 + uVar10;
    iVar6 = 0;
    if (uVar9 != 0) {
      FUN_01bed4e2(iVar5,param_2 + 1,param_2[0x21]);
      iVar6 = param_2[0x21];
      iVar5 = iVar5 + iVar6;
    }
    if (uVar10 == 3) {
      iVar2 = FUN_01b84780();
    }
    else {
      iVar2 = FUN_01b84794(iVar5,(int)param_11 + (param_12 - iVar5),param_5,param_6,param_1,
                           param_13 != 0);
    }
    if (0xffffff86 < iVar2 - 1U && iVar2 != -0x78) {
      return (char *)0x0;
    }
    uVar9 = iVar2 + iVar6;
    if (uVar9 < param_6) {
      uVar7 = 0;
    }
    else {
      uVar7 = (param_14 ^ 1) & 1;
    }
    if ((uVar7 != 0) || ((0x3ff < uVar9 && (uVar10 < (0x3fff < uVar9) + 4)))) goto LAB_01b8e0d4;
    iVar6 = param_6 * 0x10;
    if (uVar10 == 4) {
      *(uint *)((int)param_11 + 3) = iVar6 + 8 + iVar4 + uVar9 * 0x40000;
    }
    else if (uVar10 == 5) {
      *(uint *)((int)param_11 + 3) = iVar6 + 0xc + iVar4 + uVar9 * 0x400000;
      *(char *)((int)param_11 + 7) = (char)(uVar9 >> 10);
    }
    else {
      iVar6 = iVar4 + iVar6 + uVar9 * 0x4000;
      *(short *)((int)param_11 + 3) = (short)iVar6;
      *(char *)((int)param_11 + 5) = (char)((uint)iVar6 >> 0x10);
    }
    pcVar1 = (char *)((iVar5 + iVar2) - iVar12);
    *param_16 = 1;
  }
  if ((char *)0xffffff88 < pcVar1) {
    return pcVar1;
  }
  if (pcVar1 != (char *)0x0) {
    pcVar8 = pcVar1 + iVar12;
    uVar10 = *(uint *)(param_10 + 4);
    *param_17 = 0;
    if ((int)param_11 + (param_12 - (int)pcVar8) < 4) {
      return (char *)0xffffffba;
    }
    if (param_4 < 0x80) {
      pcVar1[iVar12] = (char)param_4;
      if (param_4 == 0) {
        pcVar1 = (char *)0x1;
        goto LAB_01b8e3f4;
      }
      pcVar11 = pcVar8 + 1;
    }
    else if (param_4 < 0x7f00) {
      pcVar11 = pcVar8 + 2;
      pcVar8[1] = (char)param_4;
      *pcVar8 = (char)(param_4 >> 8) + -0x80;
    }
    else {
      pcVar11 = pcVar8 + 3;
      *pcVar8 = -1;
      *(short *)(pcVar8 + 1) = (short)param_4 + -0x7f00;
    }
    pcVar1 = pcVar11 + 1;
    if (param_15 == 0) {
      *pcVar11 = -4;
    }
    else {
      *pcVar11 = (char)param_2[0x23] * '\x10' + (char)param_2[0x22] * '@' +
                 (char)param_2[0x24] * '\x04';
      FUN_01bed4e2(pcVar1,param_2 + 0x25,param_2[0x47]);
      pcVar1 = pcVar1 + param_2[0x47];
    }
    pcVar3 = (char *)FUN_01b8da30(pcVar1,(int)param_11 + (param_12 - (int)pcVar1),param_1 + 0x70c,
                                  param_8,param_1 + 0x408,param_9,param_1 + 0xcb8,param_7,param_3,
                                  param_4,0x19 < uVar10,param_13);
    if ((char *)0xffffff88 < pcVar3) {
      return pcVar3;
    }
    if ((((param_15 == 0) || (param_2[0x48] == 0)) || ((char *)0x3 < pcVar3 + param_2[0x48])) &&
       (3 < (int)(pcVar1 + ((int)pcVar3 - (int)pcVar11)))) {
      pcVar1 = pcVar1 + ((int)pcVar3 - (int)pcVar8);
      *param_17 = 1;
      if ((char *)0xffffff88 < pcVar1) {
        return pcVar1;
      }
      if (pcVar1 != (char *)0x0) {
LAB_01b8e3f4:
        iVar12 = param_18 + (int)(pcVar8 + ((int)pcVar1 - (int)param_11)) * 8 + -0x14;
        *param_11 = (short)iVar12;
        *(char *)(param_11 + 1) = (char)((uint)iVar12 >> 0x10);
        return pcVar8 + ((int)pcVar1 - (int)param_11);
      }
    }
  }
  return (char *)0x0;
}

