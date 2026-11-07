// FUN_01b1e90c @ 01b1e90c size=172 calls_out=1 calls_in=1
// strings: 

undefined8
FUN_01b1e90c(undefined4 *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_01b1e774(param_3,param_5);
  uVar2 = FUN_01b1e774(param_4,param_6);
  uVar3 = FUN_01b1e774(param_4 ^ param_3,param_5 ^ param_6);
  uVar3 = uVar3 ^ uVar1 ^ uVar2;
  *param_1 = (int)uVar1;
  param_1[1] = (uint)uVar3 ^ (uint)(uVar1 >> 0x20);
  *param_2 = (uint)(uVar3 >> 0x20) ^ (uint)uVar2;
  param_2[1] = (uint)(uVar2 >> 0x20);
  return 0;
}

