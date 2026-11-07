// FUN_01453208 @ 01453208 size=40 calls_out=1 calls_in=1
// strings: 

void FUN_01453208(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  param_2 = param_2 + 1;
  puVar3 = (undefined4 *)(param_1 + 4);
  while (param_2 = param_2 + -1, param_2 != 0) {
    puVar1 = puVar3 + -1;
    uVar2 = *puVar3;
    puVar3 = puVar3 + 6;
    FUN_0145325c(*puVar1,uVar2);
  }
  return;
}

