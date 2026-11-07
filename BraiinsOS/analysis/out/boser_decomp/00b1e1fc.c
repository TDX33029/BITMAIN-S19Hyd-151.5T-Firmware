// FUN_00b1e1fc @ 00b1e1fc size=196 calls_out=2 calls_in=6
// strings: 

void FUN_00b1e1fc(uint *param_1,undefined4 *param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  
  uVar4 = param_3 * 4;
  bVar10 = 0x3ffffffe < param_3;
  bVar9 = param_3 == 0x3fffffff;
  uVar5 = 0;
  if (param_3 < 0x40000000) {
    bVar10 = 0x7ffffffb < uVar4;
    bVar9 = uVar4 == 0x7ffffffc;
  }
  if (!bVar10 || bVar9) {
    if (uVar4 == 0) {
      uVar2 = 4;
      uVar4 = 0;
    }
    else {
      uVar5 = 4;
      uVar2 = FUN_01298504(uVar4,4);
      if (uVar2 == 0) goto LAB_00b1e214;
      if (param_3 != 0) {
        puVar8 = param_2 + param_3;
        iVar3 = 0;
        uVar4 = param_3;
        do {
          if (param_2 == puVar8) break;
          piVar7 = (int *)*param_2;
          uVar4 = uVar4 - 1;
          do {
            iVar6 = *piVar7;
            bVar9 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar9);
          *piVar7 = iVar6 + 1;
          if (iVar6 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0xb1e2bc);
            (*pcVar1)();
          }
          *(int **)(uVar2 + iVar3 * 4) = piVar7;
          param_2 = param_2 + 1;
          iVar3 = iVar3 + 1;
        } while (uVar4 != 0);
      }
      uVar4 = param_3;
    }
    *param_1 = uVar4;
    param_1[1] = uVar2;
    param_1[2] = param_3;
    return;
  }
LAB_00b1e214:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar5,uVar4);
}

