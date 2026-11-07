// FUN_01bc8c38 @ 01bc8c38 size=76 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01bc8c38(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)(param_1 + -4);
  puVar1 = (undefined4 *)(param_2 + -4);
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    uVar3 = *puVar1;
    if ((param_3 & 1) == 0) {
      uVar3 = *puVar2;
    }
    *puVar2 = uVar3;
  } while (puVar2 != (undefined4 *)(param_1 + 0x24));
  return 0;
}

