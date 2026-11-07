// FUN_01b0d75c @ 01b0d75c size=108 calls_out=2 calls_in=3
// strings: 

undefined8
FUN_01b0d75c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined4 *)(param_1 + -4);
  uVar5 = FUN_01b0c688(param_3);
  puVar4 = param_4 + (int)((ulonglong)uVar5 >> 0x20);
  puVar2 = (undefined4 *)(param_5 + -4);
  for (; param_4 != puVar4; param_4 = param_4 + 1) {
    puVar2 = puVar2 + 1;
    uVar1 = FUN_01b0c6a4((int)uVar5,*param_4,*puVar2,0);
    puVar3 = puVar3 + 1;
    *puVar3 = uVar1;
  }
  return 0;
}

