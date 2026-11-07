// FUN_016de21e @ 016de21e size=26 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_016de21e(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    return 0x16;
  }
  iVar2 = *param_1;
  *param_3 = iVar2;
  *param_2 = iVar1 - iVar2;
  return 0;
}

