// FUN_00f7ba04 @ 00f7ba04 size=92 calls_out=4 calls_in=3
// strings: 

void FUN_00f7ba04(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_019bb7e0(param_1[0x56],param_1[0x57]);
  FUN_00a9586c(param_1);
  FUN_00b9a82c(param_1 + 0x14);
  if (param_1[0x59] != -0x80000000) {
    FUN_0132b958(param_1[0x59],param_1[0x5a],8,0x18);
  }
  iVar1 = param_1[0x5c];
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar2 = param_1[0x5d];
  FUN_00b170d8(iVar2,param_1[0x5e]);
  FUN_0132b958(iVar1,iVar2,8,0x180);
  return;
}

