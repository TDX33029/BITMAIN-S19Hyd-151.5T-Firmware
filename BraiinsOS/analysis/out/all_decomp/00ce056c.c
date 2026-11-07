// FUN_00ce056c @ 00ce056c size=216 calls_out=2 calls_in=1
// strings: 

void FUN_00ce056c(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  bool bVar11;
  
  iVar7 = param_3 * 0x18;
  if (0x5555555 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar7);
  }
  if (iVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = param_3;
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(iVar7);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(8,iVar7);
  }
  if (param_3 != 0) {
    uVar8 = param_3;
    puVar9 = puVar1;
    do {
      bVar11 = iVar7 == 0;
      if (!bVar11) {
        uVar2 = *param_2;
        uVar3 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        uVar6 = param_2[4];
        uVar10 = param_2[5];
        iVar7 = iVar7 + -0x18;
        param_2 = param_2 + 6;
        *puVar9 = uVar2;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        puVar9[4] = uVar6;
        puVar9[5] = uVar10;
        uVar8 = uVar8 - 1;
        bVar11 = uVar8 == 0;
        puVar9 = puVar9 + 6;
      }
    } while (!bVar11);
  }
  *param_1 = param_3;
  param_1[1] = (uint)puVar1;
  param_1[2] = param_3;
  return;
}

