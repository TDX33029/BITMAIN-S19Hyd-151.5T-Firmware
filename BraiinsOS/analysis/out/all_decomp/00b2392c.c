// FUN_00b2392c @ 00b2392c size=384 calls_out=3 calls_in=3
// strings: 

void FUN_00b2392c(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar3 = *(uint *)(param_2 + 0xd4);
  bVar6 = 0x3ffffffe < uVar3;
  bVar5 = uVar3 == 0x3fffffff;
  uVar1 = uVar3 * 4;
  if (uVar3 < 0x40000000) {
    bVar6 = 0x7ffffffb < uVar1;
    bVar5 = uVar1 == 0x7ffffffc;
  }
  if (bVar6 && !bVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  uVar4 = *(undefined4 *)(param_2 + 0xd0);
  if (uVar1 == 0) {
    iVar2 = 4;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(uVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
  }
  FUN_016dd1aa(iVar2,uVar4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00b23aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00b23aac + *(int *)(&LAB_00b23aac + *(int *)(param_2 + 0x60) * 4)))();
  return;
}

