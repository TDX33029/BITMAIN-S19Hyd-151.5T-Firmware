// FUN_0137a900 @ 0137a900 size=128 calls_out=3 calls_in=2
// strings: 

void FUN_0137a900(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_18 [8];
  
  iVar3 = *(byte *)(param_1 + 599) + 1;
  uVar2 = iVar3 + (param_3 & 0x7ffffff);
  if (*(uint *)(param_2 + 0x7c) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,*(uint *)(param_2 + 0x7c),&DAT_01893af0);
  }
  uVar2 = *(uint *)(*(int *)(param_2 + 0x78) + uVar2 * 4);
  piVar4 = (int *)auStack_18;
  if (uVar2 < 0x80000000) {
    param_1 = 0;
    piVar4 = (int *)(auStack_18 + 8);
  }
  if ((int)uVar2 < 0) {
    uVar1 = FUN_0138d580(iVar3);
    *piVar4 = param_1;
    piVar4[1] = param_2;
    FUN_01390198(piVar4,param_3,uVar1);
    return;
  }
  return;
}

