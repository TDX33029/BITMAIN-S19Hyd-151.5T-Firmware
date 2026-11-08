// FUN_0141e854 @ 0141e854 size=128 calls_out=1 calls_in=2
// strings: 

void FUN_0141e854(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = param_2[2];
  if (*param_2 == 1) {
    uVar5 = param_2[1];
    if (*(uint *)(iVar3 + 0x28) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar5,*(uint *)(iVar3 + 0x28),&DAT_01cf4590);
    }
    iVar1 = *(int *)(iVar3 + 0x24);
    param_1[4] = iVar3;
    param_1[5] = uVar5;
    piVar2 = (int *)(iVar1 + uVar5 * 0x30);
    iVar4 = *piVar2;
    *param_1 = 0;
    iVar1 = piVar2[2];
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = 2 - iVar4;
    }
    param_1[2] = iVar3;
    iVar3 = 0xc;
  }
  else {
    iVar1 = 2;
    param_1[4] = iVar3;
    param_1[5] = 0xffffffff;
    iVar3 = 8;
    *param_1 = 2;
  }
  *(int *)((int)param_1 + iVar3) = iVar1;
  return;
}

