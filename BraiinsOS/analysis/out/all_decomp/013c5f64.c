// FUN_013c5f64 @ 013c5f64 size=796 calls_out=2 calls_in=2
// strings: 

void FUN_013c5f64(int param_1,undefined1 param_2,byte *param_3,int param_4)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x130);
  uVar3 = (uint)*(byte *)(param_1 + 0x158);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case 1:
    if ((uVar4 & 0x3ffc0) == 0) {
      return;
    }
LAB_013c6118:
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0,0,&DAT_018942b8);
    }
    *param_3 = *param_3 | 4;
    return;
  case 2:
    if ((uVar4 & 3) != 0) {
      if (param_4 == 0) goto LAB_013c6254;
      if (param_4 - 1U < 4) goto LAB_013c626c;
      uVar1 = *(undefined4 *)(param_3 + 1);
      param_3[1] = (byte)uVar1 | 1;
      param_3[4] = (byte)((uint)uVar1 >> 0x18);
      param_3[3] = (byte)((uint)uVar1 >> 0x10);
      param_3[2] = (byte)((uint)uVar1 >> 8);
    }
    if ((uVar4 & 0x3c) != 0) {
      if (param_4 == 0) goto LAB_013c6254;
      if (param_4 - 1U < 4) goto LAB_013c626c;
      uVar1 = *(undefined4 *)(param_3 + 1);
      bVar2 = (byte)uVar1 | 0x14;
LAB_013c61ec:
      param_3[1] = bVar2;
      param_3[4] = (byte)((uint)uVar1 >> 0x18);
      param_3[3] = (byte)((uint)uVar1 >> 0x10);
      param_3[2] = (byte)((uint)uVar1 >> 8);
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0x15c) == '\0') {
      if ((uVar4 & 0x3c) != 0) {
        if (param_4 == 0) goto LAB_013c6254;
        bVar2 = 0x10;
        goto LAB_013c6158;
      }
    }
    else {
      if ((uVar4 & 0x30) != 0) {
        if (param_4 == 0) {
LAB_013c6284:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(0,0,&DAT_018942c8);
        }
        *param_3 = *param_3 | 8;
      }
      if ((uVar4 & 0x3c) != 0) {
        if (param_4 == 0) goto LAB_013c6254;
        bVar2 = 4;
LAB_013c6158:
        if (param_4 - 1U < 4) goto LAB_013c626c;
        uVar1 = *(undefined4 *)(param_3 + 1);
        param_3[1] = bVar2 | (byte)uVar1;
        param_3[4] = (byte)((uint)uVar1 >> 0x18);
        param_3[3] = (byte)((uint)uVar1 >> 0x10);
        param_3[2] = (byte)((uint)uVar1 >> 8);
      }
    }
    if ((uVar4 & 0x1c) == 0) {
      if (uVar3 == 10) {
LAB_013c61c8:
        if ((uVar4 & 0x20) != 0) goto LAB_013c61d0;
      }
    }
    else if (uVar3 == 10) {
LAB_013c61d0:
      if (param_4 == 0) goto LAB_013c6254;
      if (param_4 - 1U < 4) goto LAB_013c626c;
      uVar1 = *(undefined4 *)(param_3 + 1);
      bVar2 = (byte)uVar1 | 4;
      goto LAB_013c61ec;
    }
    break;
  case 4:
    if ((uVar4 & 0x30) != 0) {
      if (*(char *)(param_1 + 0x15c) == '\0') {
        if (param_4 == 0) goto LAB_013c6284;
        *param_3 = *param_3 | 8;
      }
      else {
        if (param_4 == 0) goto LAB_013c6254;
        if (param_4 - 1U < 4) goto LAB_013c626c;
        uVar1 = *(undefined4 *)(param_3 + 1);
        param_3[1] = (byte)uVar1 | 0x10;
        param_3[4] = (byte)((uint)uVar1 >> 0x18);
        param_3[3] = (byte)((uint)uVar1 >> 0x10);
        param_3[2] = (byte)((uint)uVar1 >> 8);
      }
    }
    if ((uVar4 & 0x1c) == 0) {
      if (uVar3 == 0xd) goto LAB_013c61c8;
    }
    else if (uVar3 == 0xd) goto LAB_013c61d0;
    break;
  case 5:
    if ((uVar4 & 0x3c) != 0) {
      if (param_4 == 0) goto LAB_013c6254;
      if (param_4 - 1U < 4) goto LAB_013c626c;
      uVar1 = *(undefined4 *)(param_3 + 1);
      param_3[1] = (byte)uVar1 | 4;
      param_3[4] = (byte)((uint)uVar1 >> 0x18);
      param_3[3] = (byte)((uint)uVar1 >> 0x10);
      param_3[2] = (byte)((uint)uVar1 >> 8);
    }
    if ((uVar4 & 0x3ffc0) == 0) {
      return;
    }
    if (""[uVar3] != '\0') goto LAB_013c6118;
    goto LAB_013c6218;
  }
  if ((uVar4 & 0x3ffc0) == 0) {
    return;
  }
LAB_013c6218:
  if (param_4 != 0) {
    if (3 < param_4 - 1U) {
      uVar3 = *(uint *)(param_3 + 1);
      param_3[1] = (byte)uVar3;
      param_3[4] = (byte)(uVar3 >> 0x18);
      param_3[3] = (byte)((uVar3 | 0x14000) >> 0x10);
      param_3[2] = (byte)((uVar3 | 0x14000) >> 8);
      return;
    }
LAB_013c626c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,4,param_4 + -1,&DAT_018943d8);
  }
LAB_013c6254:
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(1,0,0,&DAT_01894378);
}

