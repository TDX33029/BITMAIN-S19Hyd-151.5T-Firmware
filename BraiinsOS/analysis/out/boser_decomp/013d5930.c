// FUN_013d5930 @ 013d5930 size=56 calls_out=1 calls_in=1
// strings: 

void FUN_013d5930(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  iVar1 = param_1[3];
  *param_1 = 4;
  param_1[1] = 4;
  param_1[2] = 0;
  param_1[3] = 4;
  FUN_013d5994(iVar2,((uint)(iVar1 - iVar2) >> 2) * -0x49249249);
  return;
}

