// FUN_01894f54 @ 01894f54 size=120 calls_out=1 calls_in=1
// strings: 

void FUN_01894f54(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_01894fcc(param_3,param_5);
  uVar2 = FUN_01894fcc(param_4,param_6);
  uVar3 = FUN_01894fcc(param_4 ^ param_3,param_6 ^ param_5);
  uVar3 = uVar2 ^ uVar1 ^ uVar3;
  *param_1 = (int)uVar1;
  param_1[1] = (uint)uVar3 ^ (uint)(uVar1 >> 0x20);
  param_1[2] = (uint)(uVar3 >> 0x20) ^ (uint)uVar2;
  param_1[3] = (int)(uVar2 >> 0x20);
  return;
}

