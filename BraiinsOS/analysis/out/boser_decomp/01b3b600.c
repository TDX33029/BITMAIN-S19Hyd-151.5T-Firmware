// FUN_01b3b600 @ 01b3b600 size=164 calls_out=1 calls_in=1
// strings: 

bool FUN_01b3b600(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == -1 || *param_1 != 0x390) {
    return true;
  }
  if (param_3 == 0 || param_4 == 0) {
    return false;
  }
  iVar1 = FUN_01b3b4c8(param_3,0);
  iVar2 = FUN_01b3b4c8(param_4);
  return iVar1 == iVar2;
}

