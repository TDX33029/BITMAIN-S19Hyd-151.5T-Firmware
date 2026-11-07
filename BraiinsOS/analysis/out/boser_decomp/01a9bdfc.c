// FUN_01a9bdfc @ 01a9bdfc size=756 calls_out=6 calls_in=1
// strings: 

void FUN_01a9bdfc(undefined4 *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  undefined1 auStack_f0 [96];
  undefined1 auStack_90 [108];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x114)) {
  case 0:
    *(undefined1 *)(param_2 + 0x115) = 1;
    piVar9 = *(int **)(param_2 + 0x110);
    FUN_01bed4e2(param_2 + 0x68,param_2,0x68);
    *(undefined1 *)(param_2 + 0x10c) = 0;
    *(int **)(param_2 + 0xd0) = piVar9;
LAB_01a9be90:
    *(undefined1 *)(param_2 + 0xe8) = 0;
    uVar10 = 1;
    *(int **)(param_2 + 0xd4) = piVar9;
    *(int **)(param_2 + 0xd8) = piVar9;
    *(undefined4 *)(param_2 + 0xdc) = 1;
LAB_01a9beac:
    *(int **)(param_2 + 0xe0) = piVar9;
    *(uint *)(param_2 + 0xe4) = uVar10;
LAB_01a9beb0:
    iVar4 = *piVar9;
    if (uVar10 <= *(uint *)(iVar4 + 0x94)) {
      *(undefined1 *)(param_2 + 0x108) = 0;
      *(undefined4 *)(param_2 + 0xf8) = 0;
      *(undefined4 *)(param_2 + 0xfc) = 0;
      *(uint *)(param_2 + 0x100) = uVar10;
      *(uint *)(param_2 + 0x104) = uVar10;
      *(int *)(param_2 + 0xec) = iVar4 + 0x80;
      *(undefined4 *)(param_2 + 0xf0) = 0;
      goto switchD_01a9bfac_caseD_4;
    }
    *(undefined1 *)(param_2 + 0xe8) = 1;
LAB_01a9bf4c:
    *(undefined1 *)(param_2 + 0x115) = 0;
    *(undefined1 *)(param_2 + 0x10c) = 1;
    uVar7 = *(undefined4 *)(param_2 + 0x68);
    uVar8 = *(undefined4 *)(param_2 + 0x6c);
    FUN_01bed4e2(auStack_f0,param_2 + 0x70,0x60);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d2e0bc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2e0bc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x10c)) {
    case 0:
      piVar9 = *(int **)(param_2 + 0xd0);
      goto LAB_01a9be90;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2e0cc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2e0cc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xe8)) {
    case 0:
      piVar9 = *(int **)(param_2 + 0xd8);
      uVar10 = *(uint *)(param_2 + 0xdc);
      goto LAB_01a9beac;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2e0ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2e0ac);
    case 3:
      piVar9 = *(int **)(param_2 + 0xe0);
      uVar10 = *(uint *)(param_2 + 0xe4);
      goto LAB_01a9beb0;
    }
switchD_01a9bfac_caseD_4:
    bVar2 = FUN_019f9bc4(param_2 + 0xec,param_3);
    if (bVar2 == 2) {
      uVar3 = 3;
      *(undefined1 *)(param_2 + 0xe8) = 4;
      *(undefined1 *)(param_2 + 0x10c) = 3;
      *param_1 = 5;
      param_1[1] = 0;
      goto LAB_01a9bf90;
    }
    FUN_0193c3cc(param_2 + 0xec);
    *(undefined1 *)(param_2 + 0xe8) = 1;
    if ((bVar2 & 1) != 0) goto LAB_01a9bf4c;
    *(undefined1 *)(param_2 + 0x10c) = 1;
    *(undefined1 *)(param_2 + 0x115) = 0;
    piVar9 = *(int **)(param_2 + 0xd4);
    FUN_01bed4e2(auStack_90,param_2 + 0x68,0x68);
    iVar4 = *piVar9;
    puVar6 = (uint *)(iVar4 + 0x24);
    do {
      uVar10 = *puVar6;
      bVar1 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar1);
    *puVar6 = uVar10 + 1;
    DataMemoryBarrier(0xb);
    iVar5 = FUN_01a9e70c(iVar4 + 0x20,uVar10);
    FUN_01bed4e2((short)(uVar10 & 0xf) * 0x68 + iVar5,auStack_90,0x68);
    puVar6 = (uint *)(iVar5 + 0x688);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar1);
    *puVar6 = *puVar6 | 1 << (uVar10 & 0xf);
    puVar6 = (uint *)(iVar4 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      uVar10 = *puVar6;
      bVar1 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar1);
    *puVar6 = uVar10 | 2;
    uVar8 = 0;
    uVar7 = 4;
    DataMemoryBarrier(0xb);
    if (uVar10 == 0) {
      iVar5 = *(int *)(iVar4 + 0x40);
      *(undefined4 *)(iVar4 + 0x40) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = 0;
      uVar8 = 0;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar4 + 0x44));
      }
    }
  }
  *(undefined1 *)(param_2 + 0x115) = 0;
  *param_1 = uVar7;
  param_1[1] = uVar8;
  FUN_01bed4e2(param_1 + 2,auStack_f0,0x60);
  uVar3 = 1;
LAB_01a9bf90:
  *(undefined1 *)(param_2 + 0x114) = uVar3;
  return;
}

