// FUN_00b7c25c @ 00b7c25c size=244 calls_out=7 calls_in=2
// strings: 

void FUN_00b7c25c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined *puVar5;
  int local_188;
  int local_184;
  uint local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x14)) {
  case 0:
    local_188 = *(int *)(param_2 + 4);
    local_184 = *(int *)(param_2 + 8);
    local_180 = local_180 & 0xffffff00;
    iVar4 = thunk_FUN_01be5118(0x160);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x160);
    }
    FUN_01bed4e2(iVar4,&local_188,0x160);
    puVar5 = &DAT_01c23100;
    *(int *)(param_2 + 0xc) = iVar4;
    *(undefined **)(param_2 + 0x10) = &DAT_01c23100;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c136c0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c136c0);
  case 3:
    iVar4 = *(int *)(param_2 + 0xc);
    puVar5 = *(undefined **)(param_2 + 0x10);
  }
  (**(code **)(puVar5 + 0xc))(&local_188,iVar4,param_3);
  uVar2 = local_180;
  iVar1 = local_184;
  iVar4 = local_188;
  if (local_188 == -0x7fffffe9) {
    *param_1 = -0x7fffffe9;
    uVar3 = 3;
  }
  else {
    FUN_01139b38(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
    *param_1 = iVar4;
    param_1[1] = iVar1;
    param_1[2] = uVar2;
    param_1[3] = iStack_17c;
    param_1[4] = iStack_178;
    param_1[5] = iStack_174;
    uVar3 = 1;
  }
  *(undefined1 *)(param_2 + 0x14) = uVar3;
  return;
}

