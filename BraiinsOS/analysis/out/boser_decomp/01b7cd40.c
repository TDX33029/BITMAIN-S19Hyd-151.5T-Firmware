// FUN_01b7cd40 @ 01b7cd40 size=152 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b7cd40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)(param_1 + ((*(int *)(param_1 + 100) - 2U & 7) + 0xd) * 8);
  puVar2 = (undefined4 *)(param_1 + ((*(int *)(param_1 + 100) - 1U & 7) + 0xd) * 8);
  uVar3 = FUN_01b7c894(*puVar1,puVar1[1],*puVar2,puVar2[1]);
  uVar3 = FUN_01b7c894((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4);
  return uVar3;
}

