// FUN_00fd4a84 @ 00fd4a84 size=992 calls_out=4 calls_in=2
// strings: explicit panic

uint FUN_00fd4a84(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (0x7fffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00377857,0x29,&DAT_0188161c);
  }
  if (param_2 < 0x202) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0x201,param_2,&DAT_018815dc);
  }
  switch(*(byte *)(param_1 + 0x201) & 7) {
  case 1:
    if (param_2 < 0x204) {
      return param_3 << 3;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x202);
    if (uVar4 != 0) {
      iVar2 = FUN_018462e8(uVar4 + param_3 * 8 + -1,uVar4);
      return iVar2 * (param_2 - 0x203) + param_3 * 8;
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x200) < '\0') {
      if (param_2 < 0x204) {
        return param_3 << 2;
      }
    }
    else if (param_2 < 0x204) {
      return param_3 << 2;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x202);
    if (uVar4 != 0) {
      iVar2 = FUN_018462e8(uVar4 + param_3 * 4 + -1,uVar4);
      return iVar2 * (param_2 - 0x203) + param_3 * 4;
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0x200) < '\0') {
      if (param_2 < 0x204) {
        return (uint)((ulonglong)(param_3 << 3 | 2) * 0x55555556 >> 0x20);
      }
      uVar4 = (uint)*(byte *)(param_1 + 0x202);
      if (uVar4 != 0) {
        uVar1 = param_3 << 3 | 2;
        uVar3 = 0x55555556;
LAB_00fd4e0c:
        iVar5 = (int)((ulonglong)uVar3 * (ulonglong)uVar1 >> 0x20);
        iVar2 = FUN_018462e8(iVar5 + uVar4 + -1,uVar4);
        return iVar2 * (param_2 - 0x203) + iVar5;
      }
      break;
    }
    if (param_2 < 0x204) {
      return ((uint)((ulonglong)(param_3 + 2) * 0xaaaaaaab >> 0x20) & 0x3ffffffe) << 2;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x202);
    if (uVar4 == 0) break;
    uVar1 = ((uint)((ulonglong)(param_3 + 2) * 0xaaaaaaab >> 0x20) & 0x3ffffffe) << 2;
    goto LAB_00fd4d74;
  case 4:
    if (*(char *)(param_1 + 0x200) < '\0') {
      if (param_2 < 0x204) {
        return param_3 << 1;
      }
    }
    else if (param_2 < 0x204) {
      return param_3 << 1;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x202);
    if (uVar4 != 0) {
      iVar2 = FUN_018462e8(uVar4 + param_3 * 2 + -1,uVar4);
      return iVar2 * (param_2 - 0x203) + param_3 * 2;
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x200) < '\0') {
      if (param_2 < 0x204) {
        return (uint)((ulonglong)(param_3 << 3 | 4) * 0x66666667 >> 0x21);
      }
      uVar4 = (uint)*(byte *)(param_1 + 0x202);
      if (uVar4 != 0) {
        uVar1 = (uint)((ulonglong)(param_3 << 3 | 4) * 0x66666667 >> 0x20);
        iVar2 = FUN_018462e8(uVar4 + (uVar1 >> 1) + -1,uVar4);
        return iVar2 * (param_2 - 0x203) + (uVar1 >> 1);
      }
      break;
    }
    if (param_2 < 0x204) {
      return ((uint)((ulonglong)(param_3 + 4) * 0xcccccccd >> 0x20) & 0x7ffffffc) << 1;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x202);
    if (uVar4 == 0) break;
    iVar2 = (int)((ulonglong)(param_3 + 4) * 0xcccccccd >> 0x20);
    uVar1 = 0xfffffff9;
    goto LAB_00fd4d70;
  case 6:
    if (*(char *)(param_1 + 0x200) < '\0') {
      if (param_2 < 0x204) {
        return (uint)((ulonglong)(param_3 << 3 | 4) * 0x2aaaaaab >> 0x20);
      }
      uVar4 = (uint)*(byte *)(param_1 + 0x202);
      if (uVar4 != 0) {
        uVar1 = param_3 << 3 | 4;
        uVar3 = 0x2aaaaaab;
        goto LAB_00fd4e0c;
      }
      break;
    }
    if (param_2 < 0x204) {
      return ((uint)((ulonglong)(param_3 + 2) * 0xaaaaaaab >> 0x20) & 0x7ffffffe) << 1;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x202);
    if (uVar4 == 0) break;
    iVar2 = (int)((ulonglong)(param_3 + 2) * 0xaaaaaaab >> 0x20);
    uVar1 = 0xfffffffd;
LAB_00fd4d70:
    uVar1 = uVar1 & iVar2 << 1;
LAB_00fd4d74:
    iVar2 = FUN_018462e8(uVar1 + uVar4 + -1,uVar4);
    return iVar2 * (param_2 - 0x203) + uVar1;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("explicit panic",0xe,&DAT_0188162c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faf2a4(&DAT_018814fc);
}

