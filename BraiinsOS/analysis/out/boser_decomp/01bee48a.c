// FUN_01bee48a @ 01bee48a size=26 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01bee48a(int *param_1,int *param_2,int *param_3)

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

