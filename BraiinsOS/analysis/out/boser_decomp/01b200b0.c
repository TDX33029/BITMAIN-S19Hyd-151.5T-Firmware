// FUN_01b200b0 @ 01b200b0 size=104 calls_out=2 calls_in=0
// strings: 

int FUN_01b200b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    return param_1;
  }
  FUN_01b6b1c4(*(undefined4 *)(iVar1 + 8),param_2,param_3,0);
  FUN_01b6b1c4(*(undefined4 *)(iVar1 + 0x10));
  FUN_01afca0c(iVar1 + 0x18);
  FUN_01b6b1c4(iVar1);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}

