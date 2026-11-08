// FUN_012abbf0 @ 012abbf0 size=136 calls_out=3 calls_in=1
// strings: 

void FUN_012abbf0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [12];
  
  iVar1 = *(int *)(param_2 + 300);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_2 + 0x130);
    if (param_3 != 0) {
      FUN_012b2fd4(param_1,"\n",1);
    }
    FUN_012bbd90(auStack_24,iVar1,uVar2);
    FUN_012b24c8(param_1,auStack_24);
    if (param_4 != 0) {
      FUN_012b2fd4(param_1,"\n",1);
      return;
    }
  }
  return;
}

