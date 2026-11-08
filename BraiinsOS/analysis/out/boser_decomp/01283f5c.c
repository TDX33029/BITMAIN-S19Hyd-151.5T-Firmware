// FUN_01283f5c @ 01283f5c size=96 calls_out=2 calls_in=3
// strings: 

void FUN_01283f5c(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *param_1;
  uVar5 = param_1[3];
  iVar3 = param_1[2];
  iVar4 = param_1[1];
  piVar2 = (int *)thunk_FUN_01be5118(0x14);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  piVar2[4] = param_2;
  piVar2[3] = (uVar5 & 0x1f) >> 2;
  piVar2[2] = iVar4 + (uVar5 >> 5);
  *piVar2 = iVar3 + (uVar5 >> 5);
  piVar2[1] = iVar1 - (uVar5 >> 5);
  param_1[3] = (int)piVar2;
  return;
}

