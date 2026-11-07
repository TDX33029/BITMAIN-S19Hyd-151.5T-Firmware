// FUN_00ce0c0c @ 00ce0c0c size=224 calls_out=2 calls_in=6
// strings: 

void FUN_00ce0c0c(uint *param_1,undefined4 *param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  bool bVar9;
  
  uVar6 = param_3 * 4;
  bVar9 = 0x3ffffffe < param_3;
  bVar8 = param_3 == 0x3fffffff;
  if (param_3 < 0x40000000) {
    bVar9 = 0x7ffffffb < uVar6;
    bVar8 = uVar6 == 0x7ffffffc;
  }
  if (bVar9 && !bVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (uVar6 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = param_3;
    return;
  }
  uVar2 = thunk_FUN_016d4a50(uVar6);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar6);
  }
  if (param_3 != 0) {
    puVar7 = param_2 + param_3;
    iVar3 = 0;
    uVar6 = param_3;
    do {
      if (param_2 == puVar7) break;
      piVar4 = (int *)*param_2;
      uVar6 = uVar6 - 1;
      do {
        iVar5 = *piVar4;
        bVar8 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar8);
      *piVar4 = iVar5 + 1;
      if (iVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xce0cd8);
        (*pcVar1)();
      }
      *(int **)(uVar2 + iVar3 * 4) = piVar4;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
    } while (uVar6 != 0);
  }
  *param_1 = param_3;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  return;
}

