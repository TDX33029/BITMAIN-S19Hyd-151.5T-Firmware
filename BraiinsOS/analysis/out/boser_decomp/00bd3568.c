// FUN_00bd3568 @ 00bd3568 size=220 calls_out=7 calls_in=2
// strings: 

void FUN_00bd3568(int *param_1)

{
  switch((char)param_1[0xf]) {
  case '\0':
    if (*param_1 == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  default:
    goto switchD_00bd3584_caseD_1;
  case '\x03':
    if (*(char *)((int)param_1 + 0x95) == '\x03') {
      FUN_00740564(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x25) = 0;
    }
    break;
  case '\x04':
    FUN_005f201c(param_1 + 0x10);
    break;
  case '\x05':
    if ((char)param_1[0x19] == '\x03') {
      FUN_00b71be0(param_1 + 0x14);
    }
    goto LAB_00bd3648;
  case '\x06':
    if (*(char *)((int)param_1 + 0x91) == '\x03') {
      FUN_00bd36d4(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x24) = 0;
    }
    goto LAB_00bd3640;
  case '\a':
    if ((char)param_1[0x1c] == '\x03') {
      FUN_00b6bb40(param_1 + 0x14);
    }
LAB_00bd3640:
    FUN_019bb7e0(param_1[0xc],param_1[0xd]);
    goto LAB_00bd3648;
  }
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
LAB_00bd3648:
  FUN_019bb7e0(param_1[9],param_1[10]);
  FUN_005f9d30(param_1 + 6);
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
switchD_00bd3584_caseD_1:
  return;
}

