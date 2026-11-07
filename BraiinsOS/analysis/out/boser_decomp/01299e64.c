// FUN_01299e64 @ 01299e64 size=172 calls_out=2 calls_in=6
// strings: 

void FUN_01299e64(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  
  uVar5 = 0;
  iVar6 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
LAB_01299e88:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar6);
  }
  if (iVar6 == 0) {
    uVar2 = 4;
    uVar4 = 0;
  }
  else {
    uVar5 = 4;
    uVar2 = FUN_01298504(iVar6,4);
    if (uVar2 == 0) goto LAB_01299e88;
    if (param_3 != 0) {
      puVar3 = (undefined4 *)(uVar2 + 4);
      uVar4 = param_3;
      do {
        bVar8 = iVar6 == 0;
        if (!bVar8) {
          uVar5 = *param_2;
          uVar7 = param_2[1];
          iVar6 = iVar6 + -0xc;
          puVar1 = param_2 + 2;
          param_2 = param_2 + 3;
          *(undefined1 *)(puVar3 + 1) = *(undefined1 *)puVar1;
          puVar3[-1] = uVar5;
          *puVar3 = uVar7;
          puVar3 = puVar3 + 3;
          uVar4 = uVar4 - 1;
          bVar8 = uVar4 == 0;
        }
      } while (!bVar8);
    }
    uVar4 = param_3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  return;
}

