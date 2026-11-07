// FUN_01286c88 @ 01286c88 size=116 calls_out=2 calls_in=1
// strings: 

void FUN_01286c88(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_2 + 8);
  if (param_3 < uVar2) {
    piVar1 = (int *)(*(int *)(param_2 + 4) + param_3 * 0xc);
    iVar3 = *piVar1;
    iVar4 = piVar1[1];
    iVar5 = piVar1[2];
    FUN_016dd52c(piVar1,piVar1 + 3,(uVar2 + ~param_3) * 0xc);
    uVar2 = uVar2 - 1;
    *(uint *)(param_2 + 8) = uVar2;
    if (iVar3 != 0) {
      *param_1 = iVar3;
      param_1[1] = iVar4;
      param_1[2] = iVar5;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00602938(param_3,uVar2,param_4);
}

