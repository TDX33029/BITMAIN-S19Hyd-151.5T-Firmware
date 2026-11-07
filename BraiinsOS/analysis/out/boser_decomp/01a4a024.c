// FUN_01a4a024 @ 01a4a024 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_01a4a024(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_01962be4(*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 8),param_2,param_3);
  if (iVar1 == 0) {
    FUN_01a60910(param_1,param_4);
    return;
  }
  *param_1 = 0x80000000;
  return;
}

