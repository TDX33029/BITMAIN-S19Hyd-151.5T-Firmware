// FUN_0087882c @ 0087882c size=748 calls_out=10 calls_in=1
// strings: 

longlong FUN_0087882c(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint unaff_r6;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  int local_40;
  int iStack_3c;
  int iStack_38;
  uint local_34;
  int local_30;
  undefined4 *local_2c;
  uint *local_28;
  undefined1 *local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[10]) {
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861ae0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861ae0);
  case '\x03':
    goto switchD_00878848_caseD_3;
  case '\x04':
    goto switchD_00878848_caseD_4;
  }
  local_34 = (uint)*(byte *)((int)param_1 + 0x29);
  param_1[2] = param_1[9];
  local_30 = param_1[9] + 0x5c;
  local_28 = &local_34;
  local_24 = &LAB_00fac484;
  local_2c = &DAT_006043a8;
  FUN_00600d2c(&local_40,&DAT_0057aaf2,&local_30);
  param_1[3] = local_40;
  param_1[4] = iStack_3c;
  param_1[5] = iStack_38;
  uVar4 = 0;
  uVar5 = *(uint *)(param_1[2] + 0x94);
  bVar9 = 0x3ffffffe < uVar5;
  bVar8 = uVar5 == 0x3fffffff;
  unaff_r6 = uVar5 * 4;
  if (uVar5 < 0x40000000) {
    bVar9 = 0x7ffffffb < unaff_r6;
    bVar8 = unaff_r6 == 0x7ffffffc;
  }
  if (!(!bVar9 || bVar8)) {
LAB_008788d4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar4,unaff_r6);
  }
  uVar6 = *(undefined4 *)(param_1[2] + 0x90);
  if (unaff_r6 == 0) {
    iVar2 = 4;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(unaff_r6);
    uVar4 = uVar5;
    if (iVar2 == 0) {
      uVar4 = 4;
      goto LAB_008788d4;
    }
  }
  param_1[6] = uVar4;
  param_1[7] = iVar2;
  FUN_016dd1aa(iVar2,uVar6,unaff_r6);
  iVar2 = param_1[7];
  param_1[8] = uVar5;
  iVar3 = iVar2 + uVar5 * 4;
  *param_1 = iVar2;
  param_1[1] = iVar3;
  do {
    if (iVar2 == iVar3) {
      if (param_1[6] != 0) {
        thunk_FUN_016d3fb4(param_1[7]);
      }
      uVar4 = 0;
      if (param_1[3] != 0) {
LAB_00878af4:
        thunk_FUN_016d3fb4(param_1[4]);
      }
LAB_00878afc:
      *(undefined1 *)(param_1 + 10) = 1;
      return (ulonglong)uVar4 << 0x20;
    }
    param_1[1] = iVar3 + -4;
    iVar2 = *(int *)(iVar3 + -4);
    *(undefined1 *)(param_1 + 0x23) = 0;
    param_1[0xb] = param_1[2];
    param_1[0xc] = iVar2;
switchD_00878848_caseD_3:
    uVar10 = FUN_00876384(param_1 + 0xb,param_2);
    uVar4 = (uint)(uVar10 >> 0x20);
    if ((uVar10 & 1) != 0) {
      uVar1 = 3;
LAB_00878b48:
      *(undefined1 *)(param_1 + 10) = uVar1;
      return CONCAT44(unaff_r6,1);
    }
    if ((char)param_1[0x23] == '\x03') {
      if ((char)param_1[0x22] == '\x03') {
        FUN_00875460(param_1 + 0x11);
        *(undefined1 *)((int)param_1 + 0x89) = 0;
      }
      else if (((char)param_1[0x22] == '\0') && (param_1[0xd] != 0)) {
        thunk_FUN_016d3fb4(param_1[0xe]);
      }
    }
    if (uVar4 != 0) {
LAB_00878ad4:
      if (param_1[6] != 0) {
        thunk_FUN_016d3fb4(param_1[7]);
      }
      if (param_1[3] != 0) goto LAB_00878af4;
      goto LAB_00878afc;
    }
    iVar3 = param_1[5];
    unaff_r6 = 1;
    iVar2 = param_1[2];
    iVar7 = param_1[4];
    if ((iVar3 != 0) && (unaff_r6 = thunk_FUN_016d4a50(iVar3), unaff_r6 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar3);
    }
    FUN_016dd1aa(unaff_r6,iVar7,iVar3);
    param_1[0xb] = iVar3;
    *(undefined1 *)(param_1 + 0x20) = 0;
    param_1[0xc] = unaff_r6;
    param_1[0xd] = iVar3;
    param_1[0xe] = iVar2;
switchD_00878848_caseD_4:
    uVar10 = FUN_008765cc(param_1 + 0xb,param_2);
    uVar4 = (uint)(uVar10 >> 0x20);
    if ((uVar10 & 1) != 0) {
      uVar1 = 4;
      goto LAB_00878b48;
    }
    if ((char)param_1[0x20] == '\x03') {
      FUN_00875460(param_1 + 0xf);
      *(undefined1 *)((int)param_1 + 0x81) = 0;
    }
    else if (((char)param_1[0x20] == '\0') && (param_1[0xb] != 0)) {
      thunk_FUN_016d3fb4(param_1[0xc]);
    }
    if (uVar4 != 0) goto LAB_00878ad4;
    iVar2 = *param_1;
    iVar3 = param_1[1];
    unaff_r6 = 0;
  } while( true );
}

