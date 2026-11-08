// FUN_010a1a50 @ 010a1a50 size=60 calls_out=1 calls_in=1
// strings: 

void FUN_010a1a50(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < 0x20) {
    param_1[3] = iVar1;
    FUN_0132b898(param_1,iVar1,0x20,1,1);
    return;
  }
  return;
}

