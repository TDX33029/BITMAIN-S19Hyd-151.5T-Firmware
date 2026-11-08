// FUN_0065ec80 @ 0065ec80 size=196 calls_out=2 calls_in=2
// strings: 

void FUN_0065ec80(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  
  uVar6 = param_2 * 4;
  bVar9 = 0x3ffffffe < param_2;
  bVar8 = param_2 == 0x3fffffff;
  uVar7 = 0;
  if (param_2 < 0x40000000) {
    bVar9 = 0x7ffffffb < uVar6;
    bVar8 = uVar6 == 0x7ffffffc;
  }
  if (bVar9 && !bVar8) {
LAB_0065ec9c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar7,uVar6);
  }
  if (uVar6 == 0) {
    puVar1 = (undefined4 *)&SUB_00000004;
    uVar4 = 0;
  }
  else {
    uVar7 = 4;
    puVar1 = (undefined4 *)FUN_01298504(uVar6,4);
    uVar4 = param_2;
    if (puVar1 == (undefined4 *)0x0) goto LAB_0065ec9c;
  }
  if (param_2 < 2) {
    uVar6 = 1;
    puVar3 = puVar1;
    if (param_2 == 0) {
      uVar6 = 0;
      goto LAB_0065ed24;
    }
  }
  else {
    iVar5 = param_2 - 1;
    puVar2 = puVar1;
    do {
      puVar3 = puVar2 + 1;
      *puVar2 = 0;
      iVar5 = iVar5 + -1;
      puVar2 = puVar3;
    } while (iVar5 != 0);
    uVar6 = param_2;
  }
  *puVar3 = 0;
LAB_0065ed24:
  *param_1 = uVar4;
  param_1[1] = (uint)puVar1;
  param_1[2] = uVar6;
  return;
}

