// FUN_0142f9bc @ 0142f9bc size=128 calls_out=1 calls_in=5
// strings: 

void FUN_0142f9bc(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((param_3 & 1) == 0) {
    iVar1 = 2;
    iVar4 = 8;
    param_1[4] = param_2;
    param_1[5] = 0xffffffff;
    *param_1 = 2;
  }
  else {
    if (*(uint *)(param_2 + 0x28) <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(param_4,*(uint *)(param_2 + 0x28),&DAT_01cf52b8);
    }
    iVar1 = *(int *)(param_2 + 0x24);
    param_1[4] = param_2;
    param_1[5] = param_4;
    piVar2 = (int *)(iVar1 + param_4 * 0x34);
    iVar3 = *piVar2;
    *param_1 = 0;
    iVar1 = piVar2[2];
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = 2 - iVar3;
    }
    param_1[2] = iVar4;
    iVar4 = 0xc;
  }
  *(int *)((int)param_1 + iVar4) = iVar1;
  return;
}

