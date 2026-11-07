// FUN_01852698 @ 01852698 size=72 calls_out=2 calls_in=3
// strings: 

void FUN_01852698(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 == 4 && iVar2 == 0) {
    FUN_0142e6dc();
    FUN_0178e884(param_1[0x12]);
    FUN_009d5b68(param_1 + 0x14);
    return;
  }
  FUN_01a69838(param_1[0x26]);
  if (iVar1 == 3 && iVar2 == 0) {
    return;
  }
  FUN_01852704(param_1);
  return;
}

