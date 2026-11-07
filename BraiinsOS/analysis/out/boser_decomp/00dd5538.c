// FUN_00dd5538 @ 00dd5538 size=116 calls_out=3 calls_in=1
// strings: 

void FUN_00dd5538(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_019bb7e0(*param_1,param_1[1]);
  FUN_019bb7e0(param_1[3],param_1[4]);
  FUN_014a632c(param_1 + 6);
  iVar3 = param_1[10];
  iVar4 = param_1[0xb];
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    puVar1 = (undefined4 *)(iVar3 + iVar2 * 0x10);
    FUN_019bb7e0(*puVar1,puVar1[1]);
  }
  FUN_0132b958(param_1[9],iVar3,4,0x10);
  return;
}

