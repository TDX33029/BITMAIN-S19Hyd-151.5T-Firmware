// FUN_009a18b0 @ 009a18b0 size=248 calls_out=2 calls_in=2
// strings: 

void FUN_009a18b0(uint *param_1,int *param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  bool bVar12;
  
  uVar3 = param_3 * 8;
  bVar12 = 0x1ffffffe < param_3;
  bVar11 = param_3 == 0x1fffffff;
  if (param_3 < 0x20000000) {
    bVar12 = 0x7ffffffb < uVar3;
    bVar11 = uVar3 == 0x7ffffffc;
  }
  if (bVar12 && !bVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (uVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = param_3;
    return;
  }
  uVar2 = thunk_FUN_016d4a50(uVar3);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar3);
  }
  if (param_3 != 0) {
    piVar10 = param_2 + param_3 * 2;
    uVar3 = param_3;
    iVar9 = 0;
    do {
      if (param_2 == piVar10) break;
      iVar7 = *param_2;
      iVar8 = param_2[1];
      if (iVar7 != -1) {
        puVar6 = (uint *)(iVar7 + 4);
        do {
          uVar5 = *puVar6;
          bVar11 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar11);
        *puVar6 = uVar5 + 1;
        if (0x7fffffff < uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x9a1970);
          (*pcVar1)();
        }
      }
      piVar4 = (int *)(uVar2 + iVar9 * 8);
      *piVar4 = iVar7;
      uVar3 = uVar3 - 1;
      param_2 = param_2 + 2;
      piVar4[1] = iVar8;
      iVar9 = iVar9 + 1;
    } while (uVar3 != 0);
  }
  *param_1 = param_3;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  return;
}

