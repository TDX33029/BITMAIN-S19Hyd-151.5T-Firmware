// FUN_00febdf4 @ 00febdf4 size=524 calls_out=4 calls_in=1
// strings: 

void FUN_00febdf4(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int extraout_r1;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar5 = *(uint *)(param_2 + 0xc);
  bVar7 = 0x3ffffffe < uVar5;
  bVar6 = uVar5 == 0x3fffffff;
  uVar1 = uVar5 * 4;
  if (uVar5 < 0x40000000) {
    bVar7 = 0x7ffffffb < uVar1;
    bVar6 = uVar1 == 0x7ffffffc;
  }
  if (bVar7 && !bVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    puVar2 = (undefined4 *)&DAT_00000004;
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(uVar1);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
  }
  if (uVar5 < 2) {
    if (uVar5 == 0) goto LAB_00febeac;
  }
  else {
    iVar4 = uVar5 - 1;
    puVar3 = puVar2;
    do {
      puVar2 = puVar3 + 1;
      *puVar3 = 0xffffffff;
      iVar4 = iVar4 + -1;
      puVar3 = puVar2;
    } while (iVar4 != 0);
  }
  *puVar2 = 0xffffffff;
LAB_00febeac:
  thunk_FUN_016de0ee(4,param_2);
  if (*(int *)(extraout_r1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_01881b38);
  }
  iVar4 = 0x16;
  if (1 < **(uint **)(extraout_r1 + 4)) {
    iVar4 = **(uint **)(extraout_r1 + 4) - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00febff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00febffc + *(int *)(&DAT_00febffc + iVar4 * 4)))();
  return;
}

