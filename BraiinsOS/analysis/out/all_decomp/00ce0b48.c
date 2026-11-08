// FUN_00ce0b48 @ 00ce0b48 size=196 calls_out=2 calls_in=1
// strings: 

void FUN_00ce0b48(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  
  iVar4 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar4);
  }
  if (iVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = param_3;
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(iVar4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar4);
  }
  if (param_3 != 0) {
    uVar2 = param_3;
    puVar3 = puVar1;
    do {
      bVar8 = iVar4 == 0;
      if (!bVar8) {
        uVar5 = param_2[1];
        uVar7 = param_2[2];
        iVar4 = iVar4 + -0xc;
        uVar6 = *param_2;
        param_2 = param_2 + 3;
        *puVar3 = uVar6;
        puVar3[1] = uVar5;
        puVar3[2] = uVar7;
        puVar3 = puVar3 + 3;
        uVar2 = uVar2 - 1;
        bVar8 = uVar2 == 0;
      }
    } while (!bVar8);
  }
  *param_1 = param_3;
  param_1[1] = (uint)puVar1;
  param_1[2] = param_3;
  return;
}

