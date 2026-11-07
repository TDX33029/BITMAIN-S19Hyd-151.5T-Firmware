// FUN_0131d1c8 @ 0131d1c8 size=936 calls_out=4 calls_in=1
// strings: explicit panic

uint FUN_0131d1c8(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (0x7fffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_004317ec,0x29,&DAT_01ce4ec0);
  }
  if (param_2 < 0x202) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0x201,param_2,&DAT_01ce4f00);
  }
  switch(*(byte *)(param_1 + 0x201) & 7) {
  case 1:
    if (param_2 < 0x204) {
      return param_3 << 3;
    }
    uVar1 = (uint)*(byte *)(param_1 + 0x202);
    if (uVar1 != 0) {
      iVar3 = FUN_01bf1250(uVar1 + param_3 * 8 + -1,uVar1);
      return iVar3 * (param_2 - 0x203) + param_3 * 8;
    }
    break;
  case 2:
    if (param_2 < 0x204) {
      return param_3 << 2;
    }
    uVar1 = (uint)*(byte *)(param_1 + 0x202);
    if (uVar1 != 0) {
      iVar3 = FUN_01bf1250(uVar1 + param_3 * 4 + -1,uVar1);
      return iVar3 * (param_2 - 0x203) + param_3 * 4;
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0x200) < '\0') {
      if (param_2 < 0x204) {
        uVar1 = param_3 << 3 | 2;
        uVar2 = 0x55555556;
LAB_0131d3f0:
        return (uint)((ulonglong)uVar2 * (ulonglong)uVar1 >> 0x20);
      }
      uVar1 = (uint)*(byte *)(param_1 + 0x202);
      if (uVar1 != 0) {
        uVar2 = param_3 << 3 | 2;
        uVar4 = 0x55555556;
LAB_0131d518:
        iVar5 = (int)((ulonglong)uVar4 * (ulonglong)uVar2 >> 0x20);
        iVar3 = FUN_01bf1250(iVar5 + uVar1 + -1,uVar1);
        return iVar3 * (param_2 - 0x203) + iVar5;
      }
      break;
    }
    if (param_2 < 0x204) {
      return ((uint)((ulonglong)(param_3 + 2) * 0xaaaaaaab >> 0x20) & 0x3ffffffe) << 2;
    }
    uVar1 = (uint)*(byte *)(param_1 + 0x202);
    if (uVar1 == 0) break;
    uVar2 = ((uint)((ulonglong)(param_3 + 2) * 0xaaaaaaab >> 0x20) & 0x3ffffffe) << 2;
    goto LAB_0131d480;
  case 4:
    if (param_2 < 0x204) {
      return param_3 << 1;
    }
    uVar1 = (uint)*(byte *)(param_1 + 0x202);
    if (uVar1 != 0) {
      iVar3 = FUN_01bf1250(uVar1 + param_3 * 2 + -1,uVar1);
      return iVar3 * (param_2 - 0x203) + param_3 * 2;
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x200) < '\0') {
      if (param_2 < 0x204) {
        return (uint)((ulonglong)(param_3 << 3 | 4) * 0x66666667 >> 0x21);
      }
      uVar1 = (uint)*(byte *)(param_1 + 0x202);
      if (uVar1 != 0) {
        uVar2 = (uint)((ulonglong)(param_3 << 3 | 4) * 0x66666667 >> 0x20);
        iVar3 = FUN_01bf1250(uVar1 + (uVar2 >> 1) + -1,uVar1);
        return iVar3 * (param_2 - 0x203) + (uVar2 >> 1);
      }
      break;
    }
    if (param_2 < 0x204) {
      iVar3 = (int)((ulonglong)(param_3 + 4) * 0xcccccccd >> 0x20);
      uVar1 = 0xfffffff9;
LAB_0131d300:
      return uVar1 & iVar3 << 1;
    }
    uVar1 = (uint)*(byte *)(param_1 + 0x202);
    if (uVar1 == 0) break;
    iVar3 = (int)((ulonglong)(param_3 + 4) * 0xcccccccd >> 0x20);
    uVar2 = 0xfffffff9;
    goto LAB_0131d47c;
  case 6:
    if (*(char *)(param_1 + 0x200) < '\0') {
      if (param_2 < 0x204) {
        uVar1 = param_3 << 3 | 4;
        uVar2 = 0x2aaaaaab;
        goto LAB_0131d3f0;
      }
      uVar1 = (uint)*(byte *)(param_1 + 0x202);
      if (uVar1 != 0) {
        uVar2 = param_3 << 3 | 4;
        uVar4 = 0x2aaaaaab;
        goto LAB_0131d518;
      }
      break;
    }
    if (param_2 < 0x204) {
      iVar3 = (int)((ulonglong)(param_3 + 2) * 0xaaaaaaab >> 0x20);
      uVar1 = 0xfffffffd;
      goto LAB_0131d300;
    }
    uVar1 = (uint)*(byte *)(param_1 + 0x202);
    if (uVar1 == 0) break;
    iVar3 = (int)((ulonglong)(param_3 + 2) * 0xaaaaaaab >> 0x20);
    uVar2 = 0xfffffffd;
LAB_0131d47c:
    uVar2 = uVar2 & iVar3 << 1;
LAB_0131d480:
    iVar3 = FUN_01bf1250(uVar2 + uVar1 + -1,uVar1);
    return iVar3 * (param_2 - 0x203) + uVar2;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("explicit panic",0xe,&DAT_01ce4ed0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012ffdf4(&DAT_01ce4f10);
}

