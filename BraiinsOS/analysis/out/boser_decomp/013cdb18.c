// FUN_013cdb18 @ 013cdb18 size=196 calls_out=4 calls_in=1
// strings: 

void FUN_013cdb18(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_118;
  int local_114;
  undefined1 auStack_108 [232];
  
  if (param_3 == 0) {
    local_114 = 4;
    local_118 = 0;
  }
  else {
    local_114 = FUN_01298504(param_3 * 0xe8,4);
    if (local_114 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,param_3 * 0xe8);
    }
    iVar1 = param_3 * 0xe8;
    iVar2 = local_114;
    do {
      local_118 = param_3;
      if (iVar1 == 0) break;
      FUN_013cc2b4(auStack_108,param_2);
      FUN_01bed4e2(iVar2,auStack_108,0xe8);
      iVar2 = iVar2 + 0xe8;
      param_2 = param_2 + 0xe8;
      iVar1 = iVar1 + -0xe8;
    } while (iVar1 != 0);
  }
  *param_1 = local_118;
  param_1[1] = local_114;
  param_1[2] = param_3;
  return;
}

