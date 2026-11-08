// FUN_01b2b82c @ 01b2b82c size=96 calls_out=1 calls_in=13
// strings: 

undefined8 FUN_01b2b82c(int param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)(param_4 + -4);
  puVar3 = (undefined4 *)(param_1 + -4);
  puVar4 = param_3 + param_5;
  for (; param_3 != puVar4; param_3 = param_3 + 1) {
    puVar2 = puVar2 + 1;
    uVar1 = FUN_01b0c6a4(param_2,*param_3,*puVar2,0);
    puVar3 = puVar3 + 1;
    *puVar3 = uVar1;
  }
  return 0;
}

