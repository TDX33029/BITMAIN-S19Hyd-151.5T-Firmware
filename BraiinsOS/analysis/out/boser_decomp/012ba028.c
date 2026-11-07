// FUN_012ba028 @ 012ba028 size=72 calls_out=2 calls_in=2
// strings: 

void FUN_012ba028(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 == *param_1) {
    FUN_012ba088(param_1);
  }
  FUN_01bed4e2(iVar1 * 0x134 + param_1[1],param_2,0x134);
  param_1[2] = iVar1 + 1;
  return;
}

