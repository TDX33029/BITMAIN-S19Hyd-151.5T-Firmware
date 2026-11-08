// FUN_008755bc @ 008755bc size=704 calls_out=9 calls_in=0
// strings: 

longlong FUN_008755bc(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_r5;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_r11;
  uint local_30 [3];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x4d)) {
  case 0:
    iVar3 = 1;
    iVar7 = param_1[0x10];
    iVar6 = param_1[0x11];
    iVar5 = param_1[0x12];
    *(undefined1 *)(param_1 + 0x13) = 1;
    piVar1 = (int *)thunk_FUN_016d4a50(8);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *piVar1 = iVar7;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    iVar7 = 1;
    piVar1[1] = iVar6;
    *param_1 = 1;
    param_1[1] = (int)piVar1;
    param_1[2] = 1;
    param_1[3] = iVar5;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861b30);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861b30);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xf]) {
    case '\0':
      piVar1 = (int *)param_1[1];
      iVar3 = param_1[2];
      iVar5 = param_1[3];
      iVar7 = *param_1;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01861a60);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01861a60);
    case '\x03':
      goto switchD_00875648_caseD_3;
    }
  }
  param_1[4] = iVar5;
  param_1[5] = (int)piVar1;
  param_1[6] = (int)piVar1;
  param_1[7] = iVar7;
  param_1[8] = (int)(piVar1 + iVar3 * 2);
  if (piVar1 != piVar1 + iVar3 * 2) {
    do {
      iVar7 = piVar1[1];
      iVar3 = *piVar1;
      unaff_r5 = param_1[4];
      param_1[6] = (int)(piVar1 + 2);
      uVar2 = 0;
      param_1[9] = iVar3;
      param_1[10] = iVar7;
      if (iVar7 < 0) {
LAB_00875768:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar2,unaff_r11);
      }
      unaff_r11 = 1;
      iVar5 = 0;
      if (iVar7 != 0) {
        unaff_r11 = thunk_FUN_016d4a50(iVar7);
        if (unaff_r11 == 0) {
          uVar2 = 1;
          unaff_r11 = iVar7;
          goto LAB_00875768;
        }
        iVar5 = iVar7;
      }
      FUN_016dd1aa(unaff_r11,iVar3,iVar7);
      param_1[0xb] = iVar5;
      param_1[0xc] = unaff_r11;
      param_1[0xd] = iVar7;
      param_1[0xe] = unaff_r5;
switchD_00875648_caseD_3:
      FUN_008743a0(local_30,param_1 + 0xb,param_2);
      uVar4 = local_30[0];
      if ((char)local_30[0] == '\x06') {
        *(undefined1 *)(param_1 + 0xf) = 3;
        *(undefined1 *)((int)param_1 + 0x4d) = 3;
        return CONCAT44(unaff_r5,1);
      }
      if ((param_1[0xb] & 0x7fffffffU) != 0) {
        thunk_FUN_016d3fb4(param_1[0xc]);
      }
      if ((uVar4 & 0xff) != 5) {
        uVar4 = FUN_0080ad90(local_30);
        if (param_1[7] == 0) goto LAB_0087569c;
        goto LAB_00875694;
      }
      piVar1 = (int *)param_1[6];
    } while (piVar1 != (int *)param_1[8]);
  }
  uVar4 = 0;
  param_1[9] = 0;
  if (param_1[7] != 0) {
LAB_00875694:
    thunk_FUN_016d3fb4(param_1[5]);
  }
LAB_0087569c:
  *(undefined1 *)(param_1 + 0xf) = 1;
  if ((char)param_1[0xf] == '\x03') {
    if ((param_1[0xb] & 0x7fffffffU) != 0) {
      thunk_FUN_016d3fb4(param_1[0xc]);
    }
    iVar3 = param_1[7];
    iVar7 = 0x14;
  }
  else {
    if ((char)param_1[0xf] != '\0') goto LAB_008758bc;
    iVar3 = *param_1;
    iVar7 = 4;
  }
  if (iVar3 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)((int)param_1 + iVar7));
  }
LAB_008758bc:
  *(undefined2 *)(param_1 + 0x13) = 0x100;
  return (ulonglong)uVar4 << 0x20;
}

