// FUN_00dd4d10 @ 00dd4d10 size=136 calls_out=3 calls_in=2
// strings: 

void FUN_00dd4d10(int *param_1)

{
  int iVar1;
  
  if (*param_1 == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  if (param_1[6] != -0x80000000) {
    FUN_019bb7e0(param_1[6],param_1[7]);
  }
  if (param_1[9] != -0x80000000) {
    FUN_019bb7e0(param_1[9],param_1[10]);
  }
  if (param_1[0xc] != -0x80000000) {
    FUN_019bb7e0(param_1[0xc],param_1[0xd]);
  }
  iVar1 = param_1[4];
  FUN_00db2bf0(iVar1,param_1[5]);
  FUN_0132b958(param_1[3],iVar1,4,0xc);
  return;
}

