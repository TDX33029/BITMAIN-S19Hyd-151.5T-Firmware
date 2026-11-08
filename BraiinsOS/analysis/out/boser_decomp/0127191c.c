// FUN_0127191c @ 0127191c size=196 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_0127191c(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  if (param_3 < 0) {
LAB_01271934:
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
    if (iVar1 == 0) goto LAB_01271934;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  iVar4 = param_1[2];
  if (iVar4 == *param_1) {
    FUN_01969b6c(param_1);
  }
  param_1[2] = iVar4 + 1;
  puVar2 = (undefined1 *)(param_1[1] + iVar4 * 0x18);
  *puVar2 = 3;
  *(int *)(puVar2 + 4) = iVar5;
  *(int *)(puVar2 + 8) = iVar1;
  *(int *)(puVar2 + 0xc) = param_3;
  return 0;
}

