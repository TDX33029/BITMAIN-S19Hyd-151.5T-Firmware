// FUN_01499330 @ 01499330 size=68 calls_out=2 calls_in=10
// strings: 

void FUN_01499330(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_3 != param_2) {
    iVar2 = (param_3 - param_2) + 1;
    puVar1 = (undefined4 *)(param_2 * 0x188 + param_1);
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      FUN_019bb7e0(*puVar1,puVar1[1]);
      FUN_01498c80(puVar1 + 4);
      puVar1 = puVar1 + 0x62;
    }
  }
  return;
}

