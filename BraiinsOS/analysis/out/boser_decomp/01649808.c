// FUN_01649808 @ 01649808 size=180 calls_out=3 calls_in=1
// strings: 

void FUN_01649808(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char acStack_28 [16];
  
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 != 0) {
    param_4 = *(int *)(param_3 + 8);
  }
  if (iVar2 != 0 && param_4 != 0) {
    puVar5 = *(undefined4 **)(param_3 + 4);
    if (param_4 == 1) {
      uVar3 = *puVar5;
      FUN_0164a9cc(acStack_28);
      FUN_01646e78(acStack_28,uVar3);
    }
    else {
      if (iVar2 != 1) {
        FUN_01646fc8(param_1,*(undefined4 **)(param_2 + 4),iVar2,puVar5,param_4);
        return;
      }
      uVar3 = **(undefined4 **)(param_2 + 4);
      FUN_0164a9cc(acStack_28,puVar5,param_4);
      FUN_01646e78(acStack_28,uVar3);
    }
    pcVar1 = acStack_28;
  }
  else {
    pcVar1 = "";
  }
  uVar3 = *(undefined4 *)(pcVar1 + 4);
  uVar4 = *(undefined4 *)(pcVar1 + 8);
  *param_1 = *(undefined4 *)pcVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  return;
}

