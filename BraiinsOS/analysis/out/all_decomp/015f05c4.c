// FUN_015f05c4 @ 015f05c4 size=352 calls_out=5 calls_in=5
// strings: 

void FUN_015f05c4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_e0 [8];
  undefined4 local_d8;
  int local_d4;
  uint local_cc;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [52];
  undefined4 local_24;
  
  FUN_016dd606(auStack_e0,0,0x80);
  iVar1 = FUN_016da330(3,param_2,auStack_e0,param_3);
  if (iVar1 != -1) {
    if (local_d4 == 0) {
      iVar1 = 4;
      local_cc = 0;
    }
    else {
      switch(local_d8) {
      case 1:
        local_cc = (local_cc & 0xff) << 8;
        break;
      case 2:
        break;
      case 3:
        local_cc = local_cc | 0x80;
        break;
      case 4:
      case 5:
        local_cc = (local_cc & 0xff) << 8 | 0x7f;
        break;
      case 6:
        local_cc = 0xffff;
        break;
      default:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00410614,0xab,&DAT_018aae60);
      }
      param_1[1] = 1;
      iVar1 = 8;
    }
    *(uint *)((int)param_1 + iVar1) = local_cc;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)FUN_016d2bc8();
  iVar1 = *piVar2;
  if (iVar1 == 10) {
    FUN_016dd606(auStack_58,0,0x38);
    local_60 = 8;
    local_5c = 0;
    iVar1 = FUN_016d6590(param_2,0xc040ff0b,&local_60);
    if (iVar1 != -1) {
      param_1[1] = 1;
      param_1[2] = local_24;
      *param_1 = 0;
      return;
    }
    iVar1 = 10;
  }
  param_1[1] = 0;
  param_1[2] = iVar1;
  *param_1 = 1;
  return;
}

