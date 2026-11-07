// FUN_01894fcc @ 01894fcc size=424 calls_out=0 calls_in=1
// strings: 

ulonglong FUN_01894fcc(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = param_1 & 0x22222222;
  uVar5 = param_2 & 0x11111111;
  uVar6 = param_1 & 0x11111111;
  uVar4 = param_2 & 0x22222222;
  uVar2 = param_1 & 0x44444444;
  uVar1 = param_2 & 0x88888888;
  param_1 = param_1 & 0x88888888;
  param_2 = param_2 & 0x44444444;
  return ((ulonglong)uVar2 * (ulonglong)uVar5 ^
          (ulonglong)uVar3 * (ulonglong)uVar4 ^ (ulonglong)uVar6 * (ulonglong)param_2 ^
         (ulonglong)param_1 * (ulonglong)uVar1) & 0x4444444444444444 |
         ((ulonglong)param_1 * (ulonglong)uVar4 ^
         (ulonglong)uVar2 * (ulonglong)param_2 ^
         (ulonglong)uVar3 * (ulonglong)uVar1 ^ (ulonglong)uVar6 * (ulonglong)uVar5) &
         0x1111111111111111 |
         ((ulonglong)uVar3 * (ulonglong)uVar5 ^ (ulonglong)uVar6 * (ulonglong)uVar4 ^
          (ulonglong)uVar2 * (ulonglong)uVar1 ^ (ulonglong)param_1 * (ulonglong)param_2) &
         0x2222222222222222 |
         ((ulonglong)uVar3 * (ulonglong)param_2 ^ (ulonglong)uVar6 * (ulonglong)uVar1 ^
          (ulonglong)uVar2 * (ulonglong)uVar4 ^ (ulonglong)param_1 * (ulonglong)uVar5) &
         0x888888888888888;
}

