// FUN_01285fbc @ 01285fbc size=76 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_01285fbc(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((uint)-param_4 < (uint)(param_3 < 0x80000000)) &&
     ((*(int *)(param_1 + 0x18) != 1 || (uVar1 = 1, *(uint *)(param_1 + 0x1c) == param_3)))) {
    uVar1 = 8;
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(uint *)(param_1 + 0x1c) = param_3;
  }
  return uVar1;
}

