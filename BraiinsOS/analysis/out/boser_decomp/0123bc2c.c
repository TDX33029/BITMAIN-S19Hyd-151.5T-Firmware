// FUN_0123bc2c @ 0123bc2c size=104 calls_out=2 calls_in=2
// strings: 

void FUN_0123bc2c(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_28 [4];
  
  local_28[0] = *param_2;
  *param_2 = -0x7fffffeb;
  if (local_28[0] == -0x7fffffeb) {
    FUN_01a429c4(param_1,&DAT_0056ad38,0x10);
    return;
  }
  piVar1 = (int *)((uint)local_28 | 4);
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  *piVar1 = param_2[1];
  piVar1[1] = iVar2;
  piVar1[2] = iVar3;
  FUN_012222e0();
  *param_1 = 2;
  return;
}

