// FUN_00dee570 @ 00dee570 size=208 calls_out=2 calls_in=0
// strings: 

void FUN_00dee570(uint *param_1,undefined4 *param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  
  uVar4 = param_3 * 8;
  bVar11 = 0x1ffffffe < param_3;
  bVar10 = param_3 == 0x1fffffff;
  uVar5 = 0;
  if (param_3 < 0x20000000) {
    bVar11 = 0x7ffffffb < uVar4;
    bVar10 = uVar4 == 0x7ffffffc;
  }
  if (!bVar11 || bVar10) {
    if (uVar4 == 0) {
      uVar2 = 4;
      uVar4 = 0;
    }
    else {
      uVar5 = 4;
      uVar2 = FUN_01298504(uVar4,4);
      if (uVar2 == 0) goto LAB_00dee588;
      if (param_3 != 0) {
        puVar9 = param_2 + param_3 * 2;
        iVar3 = 0;
        uVar4 = param_3;
        do {
          if (param_2 == puVar9) break;
          piVar8 = (int *)*param_2;
          uVar4 = uVar4 - 1;
          do {
            iVar6 = *piVar8;
            bVar10 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar10);
          *piVar8 = iVar6 + 1;
          if (iVar6 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0xdee63c);
            (*pcVar1)();
          }
          uVar5 = param_2[1];
          puVar7 = (undefined4 *)(uVar2 + iVar3 * 8);
          *puVar7 = piVar8;
          param_2 = param_2 + 2;
          iVar3 = iVar3 + 1;
          puVar7[1] = uVar5;
        } while (uVar4 != 0);
      }
      uVar4 = param_3;
    }
    *param_1 = uVar4;
    param_1[1] = uVar2;
    param_1[2] = param_3;
    return;
  }
LAB_00dee588:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar5,uVar4);
}

