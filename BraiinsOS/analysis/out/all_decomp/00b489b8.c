// FUN_00b489b8 @ 00b489b8 size=364 calls_out=7 calls_in=1
// strings: 

void FUN_00b489b8(uint *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    param_2[1] = *param_2 + 0x14;
    param_2[2] = -1;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187af80);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187af80);
  }
  iVar3 = FUN_00c816ec(param_2 + 1,param_3);
  if (iVar3 == 0) {
    *param_1 = 0x80000000;
    *(undefined1 *)(param_2 + 3) = 3;
    return;
  }
  iVar4 = param_2[1];
  if (iVar4 != 0) {
    FUN_00c8204c(iVar4,param_2[2],1);
  }
  uVar10 = *(uint *)(iVar3 + 0x28);
  uVar5 = 0;
  bVar13 = 0x3ffffffe < uVar10;
  bVar12 = uVar10 == 0x3fffffff;
  uVar7 = uVar10 * 4;
  if (uVar10 < 0x40000000) {
    bVar13 = 0x7ffffffb < uVar7;
    bVar12 = uVar7 == 0x7ffffffc;
  }
  if (bVar13 && !bVar12) {
LAB_00b48a44:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,uVar7);
  }
  iVar4 = *(int *)(iVar3 + 0x24);
  uVar11 = 0;
  if (uVar7 == 0) {
    uVar6 = 4;
    uVar2 = 0;
  }
  else {
    uVar6 = thunk_FUN_016d4a50(uVar7);
    uVar2 = uVar10;
    if (uVar6 == 0) {
      uVar5 = 4;
      goto LAB_00b48a44;
    }
  }
  if (uVar10 != 0) {
    uVar7 = 0;
    do {
      piVar8 = *(int **)(iVar4 + uVar7 * 0x60 + 0x50);
      do {
        iVar9 = *piVar8;
        bVar12 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar12);
      *piVar8 = iVar9 + 1;
      if (iVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xb48a48);
        (*pcVar1)();
      }
      *(int **)(uVar6 + uVar7 * 4) = piVar8;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar10);
    uVar11 = uVar10;
  }
  FUN_00c822ec(iVar3);
  *param_1 = uVar2;
  param_1[1] = uVar6;
  param_1[2] = uVar11;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}

