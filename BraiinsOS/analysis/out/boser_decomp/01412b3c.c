// FUN_01412b3c @ 01412b3c size=212 calls_out=2 calls_in=14
// strings: 

void FUN_01412b3c(uint *param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  
  uVar5 = param_2 * 4;
  bVar8 = 0x3ffffffe < param_2;
  bVar7 = param_2 == 0x3fffffff;
  uVar6 = 0;
  if (param_2 < 0x40000000) {
    bVar8 = 0x7ffffffd < uVar5;
    bVar7 = uVar5 == 0x7ffffffe;
  }
  if (bVar8 && !bVar7) {
LAB_01412b58:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar6,uVar5);
  }
  if (uVar5 == 0) {
    puVar1 = (undefined2 *)0x2;
    uVar3 = 0;
  }
  else {
    uVar6 = 2;
    puVar1 = (undefined2 *)FUN_01298504(uVar5,2);
    uVar3 = param_2;
    if (puVar1 == (undefined2 *)0x0) goto LAB_01412b58;
  }
  puVar2 = puVar1;
  if (param_2 < 2) {
    uVar5 = 1;
    if (param_2 == 0) {
      uVar5 = 0;
      goto LAB_01412bf0;
    }
  }
  else {
    iVar4 = param_2 - 1;
    do {
      puVar2[1] = 0;
      iVar4 = iVar4 + -1;
      *puVar2 = 0xffff;
      puVar2 = puVar2 + 2;
    } while (iVar4 != 0);
    uVar5 = param_2;
  }
  *puVar2 = 0xffff;
  puVar2[1] = 0;
LAB_01412bf0:
  *param_1 = uVar3;
  param_1[1] = (uint)puVar1;
  param_1[2] = uVar5;
  return;
}

