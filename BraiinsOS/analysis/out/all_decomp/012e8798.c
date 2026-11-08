// FUN_012e8798 @ 012e8798 size=24 calls_out=0 calls_in=0
// strings: 

void FUN_012e8798(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *param_1 = 8;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}

