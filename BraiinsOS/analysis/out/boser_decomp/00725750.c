// FUN_00725750 @ 00725750 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_00725750(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar2 = param_1[2] + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_007248ec(iVar1);
    iVar1 = iVar1 + 0x158;
  }
  FUN_0134c054(*param_1,iVar3,8,0x158);
  return;
}

