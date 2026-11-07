// FUN_00d900d8 @ 00d900d8 size=28 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_00d900d8(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 10)) {
  case 0:
    iVar7 = 3;
    *(undefined1 *)((int)param_1 + 0x12) = 4;
    *(undefined2 *)(param_1 + 4) = 0x300;
    iVar6 = 0;
    param_1[1] = *param_1;
    param_1[2] = 0;
    param_1[3] = 3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&UNK_0187b2fc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&UNK_0187b2fc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x1e)) {
    case 0:
      uVar2 = *(undefined1 *)((int)param_1 + 0x1d);
      piVar5 = (int *)param_1[6];
      goto code_r0x00d901d4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b28c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b28c);
    case 3:
      goto code_r0x00d901e8;
    case 4:
      goto code_r0x00d90240;
    }
  }
  while (iVar7 != iVar6) {
    uVar2 = *(undefined1 *)((int)param_1 + iVar6 + 0x10);
    *(undefined1 *)((int)param_1 + 0x1e) = 0;
    param_1[2] = iVar6 + 1;
    piVar5 = (int *)param_1[1];
    *(undefined1 *)((int)param_1 + 0x1d) = uVar2;
    param_1[6] = piVar5;
code_r0x00d901d4:
    *(undefined1 *)(param_1 + 7) = uVar2;
    param_1[8] = *piVar5 + 8;
    param_1[9] = 0xffffffff;
code_r0x00d901e8:
    iVar6 = FUN_00e442f8(param_1 + 8,param_2);
    if (iVar6 == 0) {
      uVar2 = 3;
LAB_00d902e4:
      *(undefined1 *)((int)param_1 + 0x1e) = uVar2;
      *(undefined1 *)(param_1 + 10) = 3;
      return 2;
    }
    param_1[5] = iVar6;
    iVar7 = param_1[8];
    if (iVar7 != 0) {
      FUN_00e44660(iVar7,param_1[9],1);
      iVar6 = param_1[5];
    }
    if (*(int *)(iVar6 + 0x38) == 0) {
      FUN_00e44900();
      *(undefined1 *)((int)param_1 + 0x1e) = 1;
      iVar6 = param_1[2];
      iVar7 = param_1[3];
    }
    else {
      param_1[8] = *(int *)(*(int *)(iVar6 + 0x38) + 0x14) + 8;
      param_1[9] = 0xffffffff;
code_r0x00d90240:
      iVar6 = FUN_00e442f8(param_1 + 8,param_2);
      if (iVar6 == 0) {
        uVar2 = 4;
        goto LAB_00d902e4;
      }
      iVar7 = param_1[8];
      if (iVar7 != 0) {
        FUN_00e44660(iVar7,param_1[9],1);
      }
      uVar3 = (uint)*(byte *)(param_1 + 7);
      if (*(uint *)(iVar6 + 0x28) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar3,*(uint *)(iVar6 + 0x28),&DAT_0187e4f0);
      }
      cVar1 = *(char *)(*(int *)(iVar6 + 0x24) + uVar3);
      FUN_00e44900(iVar6);
      FUN_00e44900(param_1[5]);
      uVar4 = 1;
      *(undefined1 *)((int)param_1 + 0x1e) = 1;
      if (cVar1 != '\0') goto LAB_00d902cc;
      iVar6 = param_1[2];
      iVar7 = param_1[3];
    }
  }
  uVar4 = 0;
LAB_00d902cc:
  *(undefined1 *)(param_1 + 10) = 1;
  return uVar4;
}

