// FUN_00b15990 @ 00b15990 size=128 calls_out=2 calls_in=1
// strings: 

void FUN_00b15990(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = *param_1 == 0 && param_1[1] == 0;
  if (*param_1 != 0 || param_1[1] != 0) {
    param_3 = param_1[2];
    param_4 = param_1[3];
    bVar3 = param_4 == param_3;
  }
  if (!bVar3) {
    iVar2 = (param_4 - param_3) + 1;
    piVar1 = param_1 + param_3 * 0x74 + 4;
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      FUN_00abca24(piVar1);
      piVar1 = piVar1 + 0x74;
    }
  }
  if (1 < param_1[0x78] - 9U) {
    FUN_00b158e8();
  }
  if (param_1[0xec] - 9U < 2) {
    return;
  }
  FUN_00b158e8(param_1 + 0xec);
  return;
}

