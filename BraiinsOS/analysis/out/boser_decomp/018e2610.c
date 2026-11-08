// FUN_018e2610 @ 018e2610 size=72 calls_out=2 calls_in=3
// strings: 

void FUN_018e2610(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    puVar1 = (undefined4 *)(iVar3 + iVar2 * 0x10);
    FUN_0134bd64(*puVar1,puVar1[1]);
  }
  FUN_0134aee0(*param_1,iVar3,4,0x10);
  return;
}

