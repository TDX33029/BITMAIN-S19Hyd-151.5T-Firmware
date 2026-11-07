// FUN_00aa83bc @ 00aa83bc size=260 calls_out=4 calls_in=1
// strings: 

ulonglong FUN_00aa83bc(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_r6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0xd2)) {
  case 0:
    *(undefined2 *)(param_1 + 0x34) = 1;
    uVar3 = param_1[0x2f];
    uVar8 = param_1[0x30];
    piVar4 = *(int **)param_1[0x2e];
    uVar5 = param_1[0x31];
    unaff_r6 = param_1[0x33];
    uVar7 = param_1[0x32];
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + 1;
    if (iVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xaa84cc);
      (*pcVar1)();
    }
    *param_1 = uVar3;
    param_1[1] = uVar8;
    param_1[3] = uVar7;
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[2] = uVar5;
    param_1[4] = unaff_r6;
    param_1[5] = piVar4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186df94);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186df94);
  }
  uVar9 = FUN_00aa6484(param_1);
  if ((uVar9 & 1) == 0) {
    FUN_00aa62f8(param_1);
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(undefined1 *)((int)param_1 + 0xd2) = 1;
    return uVar9 & 0xffffffff00000000;
  }
  *(undefined1 *)((int)param_1 + 0xd2) = 3;
  return CONCAT44(unaff_r6,1);
}

