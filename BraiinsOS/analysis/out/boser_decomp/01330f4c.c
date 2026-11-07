// FUN_01330f4c @ 01330f4c size=484 calls_out=5 calls_in=1
// strings: 

void FUN_01330f4c(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  uint local_118;
  int local_114;
  undefined4 local_110;
  
  uVar3 = *(uint *)(param_2 + 0xc);
  uVar4 = 0;
  bVar6 = 0x3ffffffe < uVar3;
  bVar5 = uVar3 == 0x3fffffff;
  uVar1 = uVar3 * 4;
  if (uVar3 < 0x40000000) {
    bVar6 = 0x7ffffffb < uVar1;
    bVar5 = uVar1 == 0x7ffffffc;
  }
  if (!bVar6 || bVar5) {
    if (uVar1 == 0) {
      local_114 = 4;
      local_118 = 0;
    }
    else {
      uVar4 = 4;
      local_114 = FUN_01298504(uVar1,4);
      local_118 = uVar3;
      if (local_114 == 0) goto LAB_01330f74;
    }
    local_110 = 0;
    FUN_016c0f54(&local_118,uVar3,0xffffffff);
    thunk_FUN_01bee35a(4,0x1cc);
    if (*(int *)(param_2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(0,0,&DAT_01ce64ec);
    }
    iVar2 = 0x16;
    if (1 < **(uint **)(param_2 + 4)) {
      iVar2 = **(uint **)(param_2 + 4) - 2;
    }
                    /* WARNING: Could not recover jumptable at 0x01331104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01331108 + *(int *)(&DAT_01331108 + iVar2 * 4)))();
    return;
  }
LAB_01330f74:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar4,uVar1);
}

