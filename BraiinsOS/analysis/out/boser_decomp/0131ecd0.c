// FUN_0131ecd0 @ 0131ecd0 size=396 calls_out=1 calls_in=1
// strings: explicit panic

void FUN_0131ecd0(uint *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (0x1fffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_004317c5,0x27,&DAT_01ce4e80);
  }
  uVar2 = param_3;
  switch(*(byte *)(param_2 + 0x201) & 7) {
  case 1:
    uVar2 = param_3 & 0x1ffffff8;
    uVar3 = param_3 >> 3;
    break;
  case 2:
    if (*(char *)(param_2 + 0x200) < '\0') {
      uVar2 = param_3 & 0x1ffffffc;
      uVar3 = param_3 >> 2;
    }
    else {
      uVar3 = param_3 >> 2;
      uVar2 = param_3 & 0x1ffffffc;
    }
    break;
  case 3:
    if (*(char *)(param_2 + 0x200) < '\0') {
      uVar3 = param_3 * 3 >> 3;
      uVar2 = param_3 - ((uint)((short)((ushort)(param_3 * 3) & 7) * 0x56) >> 8);
      break;
    }
    uVar3 = param_3 >> 3;
    uVar2 = param_3 & 0x1ffffff8;
    goto LAB_0131edb8;
  case 4:
    if (*(char *)(param_2 + 0x200) < '\0') {
      uVar2 = param_3 & 0x1ffffffe;
      uVar3 = param_3 >> 1;
    }
    else {
      uVar3 = param_3 >> 1;
      uVar2 = param_3 & 0x1ffffffe;
    }
    break;
  case 5:
    if (*(char *)(param_2 + 0x200) < '\0') {
      if (4 < (param_3 * 5 & 7)) {
        uVar2 = param_3 - 1;
      }
      uVar3 = param_3 * 5 >> 3;
    }
    else {
      uVar2 = param_3 & 0x1ffffff8;
      uVar3 = (param_3 >> 3) * 5;
    }
    break;
  case 6:
    if (*(char *)(param_2 + 0x200) < '\0') {
      uVar3 = param_3 * 6 >> 3;
      if ((~(param_3 * 6) & 6) == 0) {
        uVar2 = param_3 - 1;
      }
      break;
    }
    uVar3 = param_3 >> 2;
    uVar2 = param_3 & 0x1ffffffc;
LAB_0131edb8:
    uVar3 = uVar3 * 3;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("explicit panic",0xe,&DAT_01ce4e90);
  }
  if (param_3 != uVar2) {
    uVar3 = uVar2;
  }
  uVar1 = 0;
  if (param_3 == uVar2) {
    uVar1 = 4;
  }
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

