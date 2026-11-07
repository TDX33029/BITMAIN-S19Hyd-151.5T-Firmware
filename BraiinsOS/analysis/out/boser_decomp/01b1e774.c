// FUN_01b1e774 @ 01b1e774 size=392 calls_out=0 calls_in=1
// strings: 

ulonglong FUN_01b1e774(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = param_2 & 0x11111111;
  uVar6 = param_2 & 0x44444444;
  uVar5 = param_1 & 0x44444444;
  uVar1 = param_1 & 0x11111111;
  uVar4 = param_1 & 0x22222222;
  uVar3 = param_2 & 0x88888888;
  param_2 = param_2 & 0x22222222;
  param_1 = param_1 & 0x88888888;
  return ((ulonglong)uVar6 * (ulonglong)uVar1 ^ (ulonglong)param_2 * (ulonglong)uVar4 ^
          (ulonglong)uVar5 * (ulonglong)uVar2 ^ (ulonglong)param_1 * (ulonglong)uVar3) &
         0x4444444444444444 |
         ((ulonglong)param_2 * (ulonglong)uVar1 ^ (ulonglong)uVar4 * (ulonglong)uVar2 ^
          (ulonglong)uVar5 * (ulonglong)uVar3 ^ (ulonglong)param_1 * (ulonglong)uVar6) &
         0x2222222222222222 |
         ((ulonglong)uVar3 * (ulonglong)uVar4 ^ (ulonglong)uVar2 * (ulonglong)uVar1 ^
          (ulonglong)uVar6 * (ulonglong)uVar5 ^ (ulonglong)param_2 * (ulonglong)param_1) &
         0x1111111111111111 |
         ((ulonglong)uVar6 * (ulonglong)uVar4 ^ (ulonglong)uVar3 * (ulonglong)uVar1 ^
          (ulonglong)param_2 * (ulonglong)uVar5 ^ (ulonglong)param_1 * (ulonglong)uVar2) &
         0x8888888888888888;
}

