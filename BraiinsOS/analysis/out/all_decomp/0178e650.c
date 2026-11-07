// FUN_0178e650 @ 0178e650 size=112 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_0178e650(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)(param_1 + ((*(int *)(param_1 + 100) - 1U & 7) + 0xd) * 8);
  uVar2 = FUN_0178e214(*puVar1,puVar1[1],param_3,param_4);
  return uVar2;
}

