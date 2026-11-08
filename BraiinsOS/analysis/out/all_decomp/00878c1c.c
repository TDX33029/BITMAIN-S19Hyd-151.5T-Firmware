// FUN_00878c1c @ 00878c1c size=772 calls_out=14 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x00878d98) */
/* WARNING: Removing unreachable block (ram,0x00878e58) */
/* WARNING: Removing unreachable block (ram,0x00878e64) */

longlong FUN_00878c1c(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined1 *unaff_r10;
  uint uVar7;
  bool bVar8;
  ulonglong uVar9;
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [80];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x2b)) {
  case 0:
    piVar3 = (int *)param_1[0x2a];
    *param_1 = piVar3;
    *(undefined1 *)(param_1 + 2) = 0;
LAB_00878c90:
    iVar4 = *piVar3;
    *(undefined1 *)(param_1 + 0x11) = 0;
    param_1[3] = iVar4 + 8;
switchD_00878c74_caseD_3:
    iVar4 = FUN_007d67b8(param_1 + 3,param_2);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 2) = 3;
      goto LAB_00878e10;
    }
    param_1[1] = iVar4;
    if (*(char *)(param_1 + 0x11) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x10);
      bVar8 = cVar1 == '\x03';
      if (bVar8) {
        cVar1 = *(char *)(param_1 + 7);
      }
      if (bVar8 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 8);
        if (param_1[9] != 0) {
          (**(code **)(param_1[9] + 0xc))(param_1[10]);
        }
      }
    }
    iVar4 = param_1[1] + 0x14;
    param_1[4] = iVar4;
    *(undefined1 *)(param_1 + 5) = 0;
LAB_00878cfc:
    param_1[0xf] = iVar4;
    *(undefined2 *)(param_1 + 0x10) = 0x100;
switchD_00878db0_caseD_3:
    puVar5 = param_1 + 6;
    uVar9 = FUN_0087882c(puVar5,param_2);
    uVar7 = (uint)(uVar9 >> 0x20);
    if ((uVar9 & 1) == 0) {
      FUN_0087875c(puVar5);
      if (uVar7 == 0) {
        FUN_01656eb8(auStack_70,&DAT_01861a80,3,0,0,&DAT_01861a80);
        unaff_r10 = auStack_c0;
        FUN_016dd1aa(unaff_r10,auStack_70,0x50);
        FUN_016dd1aa(puVar5,unaff_r10,0x50);
        goto switchD_00878db0_caseD_4;
      }
      goto LAB_00878e34;
    }
    uVar2 = 3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018618a0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018618a0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 2)) {
    case 0:
      piVar3 = (int *)*param_1;
      goto LAB_00878c90;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01861bec);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01861bec);
    case 3:
      goto switchD_00878c74_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 5)) {
    case 0:
      iVar4 = param_1[4];
      goto LAB_00878cfc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01861a70);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01861a70);
    case 3:
      goto switchD_00878db0_caseD_3;
    }
switchD_00878db0_caseD_4:
    iVar4 = FUN_01657fc4(param_1 + 6,*param_2);
    if (iVar4 == 0) {
      FUN_00a07b4c(param_1 + 6);
      uVar7 = 0;
LAB_00878e34:
      *(undefined1 *)(param_1 + 5) = 1;
      pcVar6 = (char *)param_1[1];
      if (*pcVar6 == '\0') {
        bVar8 = (bool)hasExclusiveAccess(pcVar6);
        if (bVar8) {
          *pcVar6 = '\x01';
          DataMemoryBarrier(0xb);
          goto LAB_00878e9c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      FUN_01280da8(pcVar6);
LAB_00878e9c:
      FUN_0128236c(pcVar6);
      FUN_0163af68(pcVar6,1,pcVar6);
      *(undefined1 *)(param_1 + 2) = 1;
      FUN_00879060(param_1);
      *(undefined1 *)(param_1 + 0x2b) = 1;
      return (ulonglong)uVar7 << 0x20;
    }
    uVar2 = 4;
  }
  *(undefined1 *)(param_1 + 5) = uVar2;
  *(undefined1 *)(param_1 + 2) = 4;
LAB_00878e10:
  *(undefined1 *)(param_1 + 0x2b) = 3;
  return CONCAT44(unaff_r10,1);
}

