// FUN_016a996c @ 016a996c size=236 calls_out=4 calls_in=1
// strings: 

void FUN_016a996c(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  bool bVar7;
  
  if (0x7ffffffe < *(uint *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d0830c);
  }
  uVar4 = *(uint *)(param_1 + 0x14);
  uVar3 = 0;
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  bVar7 = 0x3ffffffe < uVar4;
  bVar6 = uVar4 == 0x3fffffff;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) + 1;
  uVar1 = uVar4 * 4;
  if (uVar4 < 0x40000000) {
    bVar7 = 0x7ffffffb < uVar1;
    bVar6 = uVar1 == 0x7ffffffc;
  }
  if (!bVar7 || bVar6) {
    if (uVar1 == 0) {
      puVar2 = (undefined4 *)&SUB_00000004;
    }
    else {
      uVar3 = 4;
      puVar2 = (undefined4 *)FUN_01298504(uVar1,4);
      if (puVar2 == (undefined4 *)0x0) goto LAB_016a99a8;
    }
    if (uVar4 != 0) {
      do {
        uVar4 = uVar4 - 1;
        *puVar2 = *puVar5;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    FUN_016cc42c();
    return;
  }
LAB_016a99a8:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar3,uVar1);
}

