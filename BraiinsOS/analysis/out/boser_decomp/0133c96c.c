// FUN_0133c96c @ 0133c96c size=220 calls_out=4 calls_in=2
// strings: push_literal called on non-literal

void FUN_0133c96c(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = *(uint **)(param_1 + 0xc);
  uVar2 = 9;
  if ((int)*puVar1 < 0) {
    uVar2 = *puVar1 ^ 0x80000000;
  }
  if (uVar2 == 3) {
    iVar4 = param_2[2];
    uVar2 = puVar1[2];
    uVar5 = puVar1[3];
    if ((uint)(*param_2 - iVar4) < uVar5) {
      FUN_006520b4(param_2,iVar4,uVar5,1,1);
      iVar4 = param_2[2];
    }
    FUN_01bed4e2(param_2[1] + iVar4,uVar2,uVar5);
    param_2[2] = iVar4 + uVar5;
  }
  else {
    if (uVar2 != 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74("push_literal called on non-literal",0x22,&DAT_01ce67bc);
    }
    if (*(int *)(param_1 + 8) != 0) {
      iVar3 = *(int *)(param_1 + 4);
      iVar4 = *(int *)(param_1 + 8) * 0x24;
      do {
        FUN_0133c96c(iVar3,param_2);
        iVar3 = iVar3 + 0x24;
        iVar4 = iVar4 + -0x24;
      } while (iVar4 != 0);
    }
  }
  return;
}

