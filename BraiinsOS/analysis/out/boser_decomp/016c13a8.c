// FUN_016c13a8 @ 016c13a8 size=224 calls_out=2 calls_in=1
// strings: 

void FUN_016c13a8(uint *param_1,undefined4 *param_2,uint param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  
  uVar6 = param_3 * 0x10;
  bVar12 = 0xffffffe < param_3;
  bVar11 = param_3 == 0xfffffff;
  uVar8 = 0;
  if (param_3 < 0x10000000) {
    bVar12 = 0x7ffffffb < uVar6;
    bVar11 = uVar6 == 0x7ffffffc;
  }
  if (bVar12 && !bVar11) {
LAB_016c13c4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar8,uVar6);
  }
  if (uVar6 == 0) {
    puVar3 = (undefined4 *)&SUB_00000004;
    uVar5 = 0;
  }
  else {
    uVar8 = 4;
    puVar3 = (undefined4 *)FUN_01298504(uVar6,4);
    uVar5 = param_3;
    if (puVar3 == (undefined4 *)0x0) goto LAB_016c13c4;
  }
  puVar4 = puVar3;
  if (param_3 < 2) {
    uVar6 = 1;
    if (param_3 == 0) {
      uVar6 = 0;
      goto LAB_016c1468;
    }
  }
  else {
    uVar8 = *param_2;
    iVar9 = param_3 - 1;
    uVar7 = param_2[2];
    uVar1 = *(ushort *)(param_2 + 1);
    uVar2 = *(undefined2 *)(param_2 + 3);
    do {
      *(undefined2 *)(puVar4 + 3) = uVar2;
      iVar9 = iVar9 + -1;
      *puVar4 = uVar8;
      puVar4[1] = (uint)uVar1;
      puVar4[2] = uVar7;
      puVar4 = puVar4 + 4;
    } while (iVar9 != 0);
    uVar6 = param_3;
  }
  uVar8 = param_2[1];
  uVar7 = param_2[2];
  uVar10 = param_2[3];
  *puVar4 = *param_2;
  puVar4[1] = uVar8;
  puVar4[2] = uVar7;
  puVar4[3] = uVar10;
LAB_016c1468:
  *param_1 = uVar5;
  param_1[1] = (uint)puVar3;
  param_1[2] = uVar6;
  return;
}

