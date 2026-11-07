// FUN_0129a030 @ 0129a030 size=236 calls_out=2 calls_in=7
// strings: 

void FUN_0129a030(uint *param_1,undefined4 *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  
  uVar7 = 0;
  iVar4 = param_3 * 0x18;
  if (0x5555555 < param_3) {
LAB_0129a054:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar7,iVar4);
  }
  if (iVar4 == 0) {
    uVar3 = 4;
    uVar12 = 0;
  }
  else {
    uVar7 = 4;
    uVar3 = FUN_01298504(iVar4,4);
    if (uVar3 == 0) goto LAB_0129a054;
    if (param_3 != 0) {
      iVar4 = 0;
      puVar10 = param_2;
      uVar12 = param_3;
      do {
        if (puVar10 == param_2 + param_3 * 6) break;
        piVar11 = (int *)*puVar10;
        uVar12 = uVar12 - 1;
        do {
          iVar8 = *piVar11;
          bVar2 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar2);
        *piVar11 = iVar8 + 1;
        if (iVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x129a118);
          (*pcVar1)();
        }
        uVar7 = puVar10[1];
        puVar5 = (undefined4 *)(uVar3 + iVar4 * 0x18);
        *puVar5 = piVar11;
        puVar5[1] = uVar7;
        uVar7 = puVar10[3];
        uVar6 = puVar10[4];
        uVar9 = puVar10[5];
        puVar5[2] = puVar10[2];
        puVar5[3] = uVar7;
        puVar5[4] = uVar6;
        puVar5[5] = uVar9;
        iVar4 = iVar4 + 1;
        puVar10 = puVar10 + 6;
      } while (uVar12 != 0);
    }
    uVar12 = param_3;
  }
  *param_1 = uVar12;
  param_1[1] = uVar3;
  param_1[2] = param_3;
  return;
}

