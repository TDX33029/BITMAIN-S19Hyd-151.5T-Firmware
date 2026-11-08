// FUN_012e1310 @ 012e1310 size=276 calls_out=6 calls_in=4
// strings: 

void FUN_012e1310(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[3];
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = param_1[4]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_019bb7e0(*puVar1,puVar1[1]);
    puVar1 = puVar1 + 5;
  }
  FUN_0134c054(param_1[2],iVar2,4,0x14);
  FUN_012ea64c(*param_1,param_1[1]);
  return;
}

