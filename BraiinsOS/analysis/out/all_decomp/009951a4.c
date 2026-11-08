// FUN_009951a4 @ 009951a4 size=232 calls_out=2 calls_in=4
// strings: 

void FUN_009951a4(uint *param_1,undefined4 *param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  
  uVar7 = param_3 * 8;
  bVar11 = 0x1ffffffe < param_3;
  bVar10 = param_3 == 0x1fffffff;
  if (param_3 < 0x20000000) {
    bVar11 = 0x7ffffffb < uVar7;
    bVar10 = uVar7 == 0x7ffffffc;
  }
  if (bVar11 && !bVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (uVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = param_3;
    return;
  }
  uVar2 = thunk_FUN_016d4a50(uVar7);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar7);
  }
  if (param_3 != 0) {
    puVar9 = param_2 + param_3 * 2;
    iVar3 = 0;
    uVar7 = param_3;
    do {
      if (param_2 == puVar9) break;
      uVar7 = uVar7 - 1;
      piVar5 = (int *)*param_2;
      uVar8 = param_2[1];
      do {
        iVar6 = *piVar5;
        bVar10 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar10);
      *piVar5 = iVar6 + 1;
      if (iVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x995278);
        (*pcVar1)();
      }
      param_2 = param_2 + 2;
      puVar4 = (undefined4 *)(uVar2 + iVar3 * 8);
      *puVar4 = piVar5;
      iVar3 = iVar3 + 1;
      puVar4[1] = uVar8;
    } while (uVar7 != 0);
  }
  *param_1 = param_3;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  return;
}

