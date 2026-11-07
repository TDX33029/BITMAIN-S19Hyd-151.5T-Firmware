// FUN_0115ff08 @ 0115ff08 size=144 calls_out=5 calls_in=1
// strings: 

void FUN_0115ff08(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == 0x110009) {
    FUN_0115efbc(param_1 + 1);
    return;
  }
  iVar3 = param_1[0x1e];
  iVar2 = param_1[0x1f] + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_0115edb8(iVar1);
    iVar1 = iVar1 + 0x58;
  }
  if (param_1[0x1d] != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  FUN_013f5720(param_1);
  if (*param_1 == 0x110008) {
    FUN_0115ef54(param_1 + 1);
    return;
  }
  FUN_0115edb8(param_1);
  return;
}

