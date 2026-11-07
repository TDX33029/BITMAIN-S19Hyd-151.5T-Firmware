// FUN_01b8662c @ 01b8662c size=96 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01b8662c(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (1 < param_4 - 1U) {
    uVar1 = FUN_01bed4e2(param_1,param_2,param_3 << 2);
    return uVar1;
  }
  for (iVar2 = 0; iVar2 != param_3; iVar2 = iVar2 + 1) {
    *(uint *)(param_1 + iVar2 * 4) = *(uint *)(param_2 + iVar2 * 4) >> 8;
  }
  return 0;
}

