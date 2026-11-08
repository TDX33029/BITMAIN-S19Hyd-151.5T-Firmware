// FUN_00bd4ca4 @ 00bd4ca4 size=672 calls_out=10 calls_in=2
// strings: hashchain not running

/* WARNING: Removing unreachable block (ram,0x00bd4ec0) */
/* WARNING: Removing unreachable block (ram,0x00bd4ecc) */
/* WARNING: Removing unreachable block (ram,0x00bd4edc) */

longlong FUN_00bd4ca4(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_r6;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x56)) {
  case 0:
    uVar7 = param_1[0x53];
    piVar4 = (int *)(*(int *)(param_1[0x52] + 0x3bc) + -4);
    iVar6 = *(int *)(param_1[0x52] + 0x3c0) << 2;
    do {
      if (iVar6 == 0) {
        *param_1 = 6;
        param_1[1] = param_1[0x54];
        uVar5 = FUN_00c78ae8();
        goto LAB_00bd4f1c;
      }
      piVar4 = piVar4 + 1;
      piVar8 = (int *)*piVar4;
      iVar6 = iVar6 + -4;
    } while (piVar8[0xe3] != param_1[0x54]);
    do {
      iVar6 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar6 + 1;
    if (iVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xbd4f68);
      (*pcVar1)();
    }
    iVar9 = *piVar4;
    iVar6 = iVar9 + 0x10;
    param_1[0x55] = iVar9;
    *param_1 = 7;
    param_1[1] = iVar9;
    param_1[9] = uVar7;
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[8] = iVar6;
LAB_00bd4d80:
    param_1[0xd] = iVar6 + 900;
    param_1[0xe] = 0xffffffff;
    param_1[10] = uVar7;
switchD_00bd4d64_caseD_3:
    iVar6 = FUN_00c8101c(param_1 + 0xd);
    if (iVar6 == 0) {
      uVar3 = 3;
      goto LAB_00bd4e40;
    }
    param_1[0xb] = iVar6;
    if (param_1[0xd] != 0) {
      FUN_00c8204c(param_1[0xd],param_1[0xe],1);
      iVar6 = param_1[0xb];
    }
    iVar6 = *(int *)(iVar6 + 0x20);
    if (iVar6 == 0) {
      uVar5 = FUN_00c70f88("hashchain not running",0x15);
      FUN_00c822ec(param_1[0xb]);
      goto LAB_00bd4e9c;
    }
    *(undefined2 *)(param_1 + 0x1e) = 0x100;
    param_1[0x1b] = iVar6 + 8;
    param_1[0x1c] = param_1[10];
    unaff_r6 = param_2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01871570);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01871570);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xc)) {
    case 0:
      iVar6 = param_1[8];
      uVar7 = param_1[9];
      goto LAB_00bd4d80;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018717a0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018717a0);
    case 3:
      goto switchD_00bd4d64_caseD_3;
    }
  }
  uVar10 = FUN_00bd5060(param_1 + 0xe,param_2);
  uVar5 = (uint)(uVar10 >> 0x20);
  if ((uVar10 & 1) == 0) {
    FUN_00b9f9bc(param_1 + 0xe);
    FUN_00c822ec(param_1[0xb]);
LAB_00bd4e9c:
    *(undefined1 *)(param_1 + 0xc) = 1;
    piVar4 = (int *)param_1[0x55];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f31e8(param_1[0x55]);
    }
LAB_00bd4f1c:
    *(undefined1 *)(param_1 + 0x56) = 1;
    return (ulonglong)uVar5 << 0x20;
  }
  uVar3 = 4;
  param_2 = unaff_r6;
LAB_00bd4e40:
  *(undefined1 *)(param_1 + 0xc) = uVar3;
  *(undefined1 *)(param_1 + 0x56) = 3;
  return CONCAT44(param_2,1);
}

