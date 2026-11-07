// FUN_01b7ccd0 @ 01b7ccd0 size=112 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b7ccd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)(param_1 + ((*(int *)(param_1 + 100) - 1U & 7) + 0xd) * 8);
  uVar2 = FUN_01b7c894(*puVar1,puVar1[1],param_3,param_4);
  return uVar2;
}

