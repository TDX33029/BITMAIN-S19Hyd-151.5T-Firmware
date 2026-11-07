// FUN_01a54efc @ 01a54efc size=80 calls_out=1 calls_in=1
// strings: 

void FUN_01a54efc(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    puVar1 = (undefined4 *)(iVar3 + iVar2 * 0x10);
    FUN_0134aee0(*puVar1,puVar1[1],4,4);
  }
  FUN_0134aee0(*param_1,iVar3,4,0x10);
  return;
}

