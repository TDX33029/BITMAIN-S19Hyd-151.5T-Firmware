// FUN_00a4d968 @ 00a4d968 size=88 calls_out=1 calls_in=0
// strings: 

void FUN_00a4d968(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0xc;
  if (param_3 != 0) {
    iVar2 = 0x24;
  }
  param_2 = param_2 + iVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  if (param_4 != 0) {
    uVar1 = 1;
  }
  pcVar3 = "0";
  if (param_4 == 0) {
    pcVar3 = *(char **)(param_2 + 0x10);
  }
  FUN_019a63c0(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),pcVar3,uVar1);
  return;
}

