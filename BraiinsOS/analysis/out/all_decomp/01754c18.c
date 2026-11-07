// FUN_01754c18 @ 01754c18 size=108 calls_out=2 calls_in=0
// strings: 

bool FUN_01754c18(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = FUN_01741580(iVar2);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_01754984(iVar2 + 0x5c,param_2,param_3);
  return iVar1 != 0;
}

