// FUN_00b541cc @ 00b541cc size=80 calls_out=3 calls_in=0
// strings: 

void FUN_00b541cc(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1[1];
  iVar2 = param_1[2] + 1;
  puVar1 = puVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_019bb7e0(*puVar1,puVar1[1]);
    FUN_00b563b4(puVar1 + 4);
    puVar1 = puVar1 + 0x30;
  }
  FUN_0132b958(*param_1,puVar3,8,0xc0);
  return;
}

