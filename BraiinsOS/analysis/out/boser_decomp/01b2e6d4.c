// FUN_01b2e6d4 @ 01b2e6d4 size=180 calls_out=0 calls_in=2
// strings: 

bool FUN_01b2e6d4(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar1 = param_2[1];
  iVar3 = param_1[1];
  for (iVar4 = iVar3; iVar4 < iVar1; iVar4 = iVar4 + 1) {
    uVar2 = uVar2 | *(uint *)(*param_2 + iVar4 * 4);
  }
  for (iVar4 = iVar1; iVar4 < iVar3; iVar4 = iVar4 + 1) {
    uVar2 = uVar2 | *(uint *)(*param_1 + iVar4 * 4);
  }
  if (iVar3 <= iVar1) {
    iVar1 = iVar3;
  }
  for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
    uVar2 = uVar2 | *(uint *)(*param_1 + iVar4 * 4) ^ *(uint *)(*param_2 + iVar4 * 4);
  }
  return param_1[3] == param_2[3] && uVar2 == 0;
}

