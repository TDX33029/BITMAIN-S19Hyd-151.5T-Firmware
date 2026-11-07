// FUN_01bbf428 @ 01bbf428 size=100 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_01bbf428(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xd0) == 1) {
    uVar1 = FUN_01b95384(param_1,param_2,0);
    return uVar1;
  }
  if (*(int *)(param_1 + 0xd0) == 2) {
    uVar1 = FUN_01b8f014(param_1,param_2,0);
    return uVar1;
  }
  return 0;
}

