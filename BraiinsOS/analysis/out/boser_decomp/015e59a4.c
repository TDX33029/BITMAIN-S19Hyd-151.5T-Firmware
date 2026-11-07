// FUN_015e59a4 @ 015e59a4 size=184 calls_out=4 calls_in=4
// strings: 

void FUN_015e59a4(int param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  if (param_3 < 0) {
LAB_015e59b8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,param_3);
  }
  if (param_3 == 0) {
    iVar1 = 1;
    iVar5 = 0;
  }
  else {
    uVar3 = 1;
    iVar1 = FUN_01298504(param_3,1);
    iVar5 = param_3;
    if (iVar1 == 0) goto LAB_015e59b8;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 == *(int *)(param_1 + 8)) {
    FUN_0161d664();
  }
  *(int *)(param_1 + 0x10) = iVar4 + 1;
  piVar2 = (int *)(*(int *)(param_1 + 0xc) + iVar4 * 0x14);
  *piVar2 = iVar5;
  *(undefined1 *)(piVar2 + 4) = 0;
  piVar2[1] = iVar1;
  *(undefined2 *)((int)piVar2 + 0xe) = 1;
  *(undefined2 *)(piVar2 + 3) = param_4;
  piVar2[2] = param_3;
  return;
}

