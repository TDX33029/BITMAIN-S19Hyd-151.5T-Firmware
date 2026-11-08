// FUN_009a0dec @ 009a0dec size=224 calls_out=2 calls_in=2
// strings: 

void FUN_009a0dec(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  
  iVar6 = param_3 * 0x30;
  if (0x2aaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar6);
  }
  if (iVar6 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = param_3;
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(iVar6);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar6);
  }
  if (param_3 != 0) {
    puVar7 = puVar1;
    uVar9 = param_3;
    do {
      bVar10 = iVar6 == 0;
      if (!bVar10) {
        uVar2 = param_2[1];
        uVar3 = param_2[2];
        uVar4 = param_2[3];
        uVar5 = param_2[4];
        uVar8 = param_2[5];
        iVar6 = iVar6 + -0x30;
        *puVar7 = *param_2;
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        puVar7[4] = uVar5;
        puVar7[5] = uVar8;
        uVar2 = param_2[7];
        uVar3 = param_2[8];
        uVar4 = param_2[9];
        uVar5 = param_2[10];
        uVar8 = param_2[0xb];
        puVar7[6] = param_2[6];
        puVar7[7] = uVar2;
        puVar7[8] = uVar3;
        puVar7[9] = uVar4;
        puVar7[10] = uVar5;
        puVar7[0xb] = uVar8;
        uVar9 = uVar9 - 1;
        bVar10 = uVar9 == 0;
        param_2 = param_2 + 0xc;
        puVar7 = puVar7 + 0xc;
      }
    } while (!bVar10);
  }
  *param_1 = param_3;
  param_1[1] = (uint)puVar1;
  param_1[2] = param_3;
  return;
}

