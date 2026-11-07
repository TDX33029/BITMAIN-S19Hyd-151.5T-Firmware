// FUN_00f72ee8 @ 00f72ee8 size=204 calls_out=2 calls_in=4
// strings: 

void FUN_00f72ee8(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  
  iVar5 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar5);
  }
  if (iVar5 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = param_3;
    return;
  }
  uVar2 = thunk_FUN_016d4a50(iVar5);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar5);
  }
  if (param_3 != 0) {
    puVar4 = (undefined4 *)(uVar2 + 4);
    uVar3 = param_3;
    do {
      bVar8 = iVar5 == 0;
      if (!bVar8) {
        uVar7 = *param_2;
        iVar5 = iVar5 + -0xc;
        uVar1 = *(undefined1 *)(param_2 + 2);
        uVar6 = param_2[1];
        param_2 = param_2 + 3;
        puVar4[-1] = uVar7;
        *(undefined1 *)(puVar4 + 1) = uVar1;
        *puVar4 = uVar6;
        puVar4 = puVar4 + 3;
        uVar3 = uVar3 - 1;
        bVar8 = uVar3 == 0;
      }
    } while (!bVar8);
  }
  *param_1 = param_3;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  return;
}

