// FUN_0080d040 @ 0080d040 size=528 calls_out=4 calls_in=8
// strings: 

/* WARNING: Removing unreachable block (ram,0x0080d0ac) */

longlong FUN_0080d040(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  undefined4 uVar7;
  char *unaff_r9;
  char *pcVar8;
  undefined4 *puVar9;
  int local_2c;
  char *local_28;
  int local_24;
  
  pcVar8 = unaff_r9;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x52)) {
  case 0:
    param_1[1] = *param_1;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[4] = 0x40;
    param_1[3] = 1;
    param_1[2] = 1;
    *(undefined1 *)(param_1 + 0x14) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861cb4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861cb4);
  case 3:
    goto switchD_0080d05c_caseD_3;
  }
  do {
    while( true ) {
      uVar3 = param_1[3];
      if ((uint)param_1[4] < uVar3) goto LAB_0080d220;
      if (uVar3 < (uint)param_1[4]) {
        param_1[3] = uVar3 + 1;
      }
      else {
        *(undefined1 *)(param_1 + 5) = 1;
      }
      *(undefined1 *)(param_1 + 0x13) = 0;
      param_1[6] = uVar3;
      param_1[7] = param_1[1];
      param_1[8] = 1;
      pcVar8 = unaff_r9;
switchD_0080d05c_caseD_3:
      FUN_0080d3e4(&local_2c,param_1 + 7,param_2);
      iVar2 = local_24;
      unaff_r9 = local_28;
      iVar4 = local_2c;
      if (local_2c == -0x7fffffff) {
        *(undefined1 *)((int)param_1 + 0x52) = 3;
        return CONCAT44(pcVar8,1);
      }
      if (*(char *)(param_1 + 0x13) == '\x03') {
        puVar9 = (undefined4 *)param_1[0x12];
        uVar7 = param_1[0x11];
        pcVar5 = (code *)*puVar9;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar7);
        }
        if (puVar9[1] != 0) {
          thunk_FUN_016d3fb4(uVar7);
        }
        if (param_1[0xb] != 0) {
          thunk_FUN_016d3fb4(param_1[0xc]);
        }
      }
      if (iVar4 == -0x80000000) goto LAB_0080d230;
      cVar6 = '\0';
      bVar1 = iVar2 != 0 && unaff_r9 != (char *)0x0;
      if (bVar1) {
        cVar6 = *unaff_r9;
      }
      if (iVar4 != 0) {
        thunk_FUN_016d3fb4(unaff_r9);
      }
      if (iVar2 == 0 || unaff_r9 == (char *)0x0) break;
      if (((*(byte *)(param_1 + 0x14) & 1) == 0) || (cVar6 != *(char *)((int)param_1 + 0x51)))
      goto LAB_0080d204;
LAB_0080d1d8:
      iVar4 = param_1[2];
      param_1[2] = iVar4 + 1U;
      if ((7 < iVar4 + 1U) || ((*(byte *)(param_1 + 5) & 1) != 0)) goto LAB_0080d220;
    }
    if ((*(byte *)(param_1 + 0x14) & 1) == 0) goto LAB_0080d1d8;
LAB_0080d204:
    *(char *)((int)param_1 + 0x51) = cVar6;
    *(bool *)(param_1 + 0x14) = bVar1;
    param_1[2] = 1;
  } while ((*(byte *)(param_1 + 5) & 1) == 0);
LAB_0080d220:
  unaff_r9 = (char *)0x0;
LAB_0080d230:
  *(undefined1 *)((int)param_1 + 0x52) = 1;
  return ZEXT48(unaff_r9) << 0x20;
}

