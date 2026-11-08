// FUN_00db216c @ 00db216c size=92 calls_out=2 calls_in=1
// strings: 

void FUN_00db216c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 4) * 0x11aff11b + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_00db220c(iVar1);
    iVar1 = iVar1 + 0x1130;
  }
  FUN_01af7af8(param_1[2],*param_1,4,0x1130);
  return;
}

