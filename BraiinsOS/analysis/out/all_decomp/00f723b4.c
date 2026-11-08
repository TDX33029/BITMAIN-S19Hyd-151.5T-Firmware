// FUN_00f723b4 @ 00f723b4 size=284 calls_out=2 calls_in=4
// strings: 

void FUN_00f723b4(uint *param_1,undefined4 *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  
  iVar4 = param_3 * 0x18;
  if (0x5555555 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (iVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = param_3;
    return;
  }
  uVar3 = thunk_FUN_016d4a50(iVar4);
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar4);
  }
  if (param_3 != 0) {
    puVar14 = param_2 + param_3 * 6;
    iVar4 = 0;
    uVar10 = param_3;
    do {
      if (param_2 == puVar14) break;
      piVar6 = (int *)*param_2;
      uVar10 = uVar10 - 1;
      do {
        iVar7 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar7 + 1;
      if (iVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xf724bc);
        (*pcVar1)();
      }
      uVar12 = param_2[1];
      uVar13 = param_2[2];
      uVar9 = param_2[3];
      uVar11 = param_2[4];
      puVar8 = (undefined4 *)(uVar3 + iVar4 * 0x18);
      *puVar8 = piVar6;
      uVar5 = param_2[5];
      param_2 = param_2 + 6;
      puVar8[1] = uVar12;
      puVar8[2] = uVar13;
      puVar8[3] = uVar9;
      puVar8[4] = uVar11;
      puVar8[5] = uVar5;
      iVar4 = iVar4 + 1;
    } while (uVar10 != 0);
  }
  *param_1 = param_3;
  param_1[1] = uVar3;
  param_1[2] = param_3;
  return;
}

