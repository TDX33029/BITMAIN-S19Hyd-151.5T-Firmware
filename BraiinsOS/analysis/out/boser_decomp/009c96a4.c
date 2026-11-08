// FUN_009c96a4 @ 009c96a4 size=120 calls_out=3 calls_in=1
// strings: 

void FUN_009c96a4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[4];
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(param_1[3] - iVar2);
  }
  iVar2 = param_1[1];
  iVar4 = param_1[2];
  for (iVar1 = 0; iVar4 != iVar1; iVar1 = iVar1 + 1) {
    puVar3 = (undefined4 *)(iVar2 + iVar1 * 0x10);
    FUN_019bb7e0(*puVar3,puVar3[1]);
  }
  FUN_0132b958(*param_1,iVar2,4,0x10);
  return;
}

