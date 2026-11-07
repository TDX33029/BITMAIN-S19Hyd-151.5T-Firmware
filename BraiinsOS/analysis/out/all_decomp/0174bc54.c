// FUN_0174bc54 @ 0174bc54 size=120 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_0174bc54(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0174baf0();
  if ((iVar1 == 0) || (iVar1 = FUN_01737690(param_1), iVar1 == 0)) {
    FUN_0172c788(*(undefined4 *)(param_1 + 4));
    FUN_0177aafc(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    return 0;
  }
  return 1;
}

