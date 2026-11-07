// FUN_019d8434 @ 019d8434 size=52 calls_out=0 calls_in=7
// strings: 

void FUN_019d8434(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 4);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    piVar1 = puVar3 + -1;
    uVar2 = *puVar3;
    puVar3 = puVar3 + 2;
    (**(code **)(*piVar1 + 0xc))(uVar2);
  }
  return;
}

