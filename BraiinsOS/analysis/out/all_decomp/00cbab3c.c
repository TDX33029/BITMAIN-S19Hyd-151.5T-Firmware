// FUN_00cbab3c @ 00cbab3c size=548 calls_out=7 calls_in=1
// strings: all branches are disabled and there is no else branch

void FUN_00cbab3c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined1 auStack_c8 [80];
  undefined1 auStack_78 [84];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x25)) {
  case 0:
    uVar7 = 0;
    puVar4 = (undefined4 *)param_2[0x23];
    uVar11 = 2;
    *(undefined1 *)(param_2 + 0x21) = 0;
    uVar10 = 0;
    *param_2 = 2;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[0x24] = param_2[0x22];
    param_2[0x20] = puVar4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875c48);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875c48);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x21)) {
    case 0:
      uVar11 = *param_2;
      uVar10 = param_2[1];
      uVar7 = param_2[2];
      puVar4 = (undefined4 *)param_2[0x20];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875f48);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875f48);
    case 3:
      puVar12 = (undefined1 *)param_2[0x1e];
      puVar4 = (undefined4 *)param_2[0x1f];
      goto LAB_00cbaca0;
    }
  }
  param_2[4] = uVar11;
  param_2[5] = uVar10;
  param_2[6] = uVar7;
  puVar12 = (undefined1 *)((int)param_2 + 0x85);
  *puVar12 = 0;
  piVar9 = (int *)*puVar4;
  do {
    iVar5 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xcbad84);
    (*pcVar1)();
  }
  piVar6 = piVar9 + 0xd;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar5 + 1;
  DataMemoryBarrier(0xb);
  FUN_01656eb8(auStack_c8,&DAT_01875f38,param_2[4],param_2[5],param_2[6],&DAT_01875f38);
  FUN_016dd1aa(auStack_78,auStack_c8,0x50);
  puVar4 = param_2 + 8;
  *puVar4 = piVar9;
  param_2[9] = iVar5;
  FUN_016dd1aa(param_2 + 10,auStack_78,0x50);
  param_2[0x1e] = puVar12;
  param_2[0x1f] = puVar4;
LAB_00cbaca0:
  cVar3 = FUN_00d40058(puVar12,puVar4,param_3);
  if (cVar3 == '\x03') {
    uVar7 = 8;
    uVar8 = 3;
  }
  else {
    FUN_00b9e31c(param_2 + 8);
    if (cVar3 == '\0') {
      *(undefined1 *)(param_2 + 0x21) = 1;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(*(int *)(*(int *)(param_2[0x24] + 0x3c8) + 0x14) + 8) = 0;
      *(undefined1 *)(param_2 + 0x25) = 1;
      *param_1 = 4;
      return;
    }
    uVar7 = 7;
    uVar8 = 1;
    if (cVar3 != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_01875f58);
    }
  }
  *(undefined1 *)(param_2 + 0x21) = uVar8;
  *(undefined1 *)(param_2 + 0x25) = uVar8;
  *param_1 = uVar7;
  return;
}

