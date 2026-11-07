// FUN_015e8c30 @ 015e8c30 size=44 calls_out=1 calls_in=1
// strings: 

void FUN_015e8c30(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 4);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = puVar3 + -1;
    uVar2 = *puVar3;
    puVar3 = puVar3 + 4;
    FUN_00f80320(*puVar1,uVar2);
  }
  return;
}

