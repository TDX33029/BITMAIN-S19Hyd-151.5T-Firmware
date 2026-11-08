// FUN_01222e2c @ 01222e2c size=96 calls_out=2 calls_in=8
// strings: 

void FUN_01222e2c(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_1c;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 0xc);
  FUN_01264ff4(param_2);
  if (iVar2 == iVar1) {
    *param_1 = 2;
  }
  else {
    local_1c = *(int *)(param_2 + 0x10);
    FUN_0123c028(param_1,local_1c + ((uint)(iVar2 - iVar1) >> 4),&local_1c,&DAT_01cfa01c);
  }
  return;
}

