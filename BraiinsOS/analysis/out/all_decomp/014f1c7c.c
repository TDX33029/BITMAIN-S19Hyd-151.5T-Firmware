// FUN_014f1c7c @ 014f1c7c size=1392 calls_out=0 calls_in=2
// strings: 

void FUN_014f1c7c(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar14 = param_3 & 0x22222222;
  uVar9 = param_5 & 0x11111111;
  uVar7 = param_3 & 0x11111111;
  uVar11 = param_5 & 0x22222222;
  uVar5 = param_3 & 0x44444444;
  uVar6 = param_5 & 0x88888888;
  uVar8 = param_3 & 0x88888888;
  uVar4 = param_5 & 0x44444444;
  param_3 = param_4 ^ param_3;
  uVar12 = param_3 & 0x22222222;
  uVar2 = ((ulonglong)uVar8 * (ulonglong)uVar9 ^
          (ulonglong)uVar5 * (ulonglong)uVar11 ^
          (ulonglong)uVar14 * (ulonglong)uVar4 ^ (ulonglong)uVar7 * (ulonglong)uVar6) &
          0x888888888888888 |
          ((ulonglong)uVar8 * (ulonglong)uVar6 ^
          (ulonglong)uVar5 * (ulonglong)uVar9 ^
          (ulonglong)uVar14 * (ulonglong)uVar11 ^ (ulonglong)uVar7 * (ulonglong)uVar4) &
          0x4444444444444444 |
          ((ulonglong)uVar8 * (ulonglong)uVar11 ^
          (ulonglong)uVar5 * (ulonglong)uVar4 ^
          (ulonglong)uVar14 * (ulonglong)uVar6 ^ (ulonglong)uVar7 * (ulonglong)uVar9) &
          0x1111111111111111 |
          ((ulonglong)uVar8 * (ulonglong)uVar4 ^
          (ulonglong)uVar5 * (ulonglong)uVar6 ^
          (ulonglong)uVar14 * (ulonglong)uVar9 ^ (ulonglong)uVar7 * (ulonglong)uVar11) &
          0x2222222222222222;
  param_5 = param_6 ^ param_5;
  uVar10 = param_5 & 0x11111111;
  uVar11 = param_3 & 0x11111111;
  uVar4 = param_5 & 0x22222222;
  uVar7 = param_3 & 0x44444444;
  uVar9 = param_5 & 0x88888888;
  param_3 = param_3 & 0x88888888;
  param_5 = param_5 & 0x44444444;
  uVar15 = param_6 & 0x11111111;
  uVar13 = param_4 & 0x22222222;
  uVar8 = param_6 & 0x22222222;
  uVar6 = param_4 & 0x11111111;
  uVar5 = param_4 & 0x44444444;
  uVar14 = param_6 & 0x88888888;
  param_4 = param_4 & 0x88888888;
  param_6 = param_6 & 0x44444444;
  uVar1 = ((ulonglong)param_4 * (ulonglong)uVar14 ^
          (ulonglong)uVar5 * (ulonglong)uVar15 ^
          (ulonglong)uVar13 * (ulonglong)uVar8 ^ (ulonglong)uVar6 * (ulonglong)param_6) &
          0x4444444444444444 |
          ((ulonglong)param_4 * (ulonglong)param_6 ^
          (ulonglong)uVar5 * (ulonglong)uVar14 ^
          (ulonglong)uVar13 * (ulonglong)uVar15 ^ (ulonglong)uVar6 * (ulonglong)uVar8) &
          0x2222222222222222 |
          ((ulonglong)param_4 * (ulonglong)uVar8 ^
          (ulonglong)uVar5 * (ulonglong)param_6 ^
          (ulonglong)uVar13 * (ulonglong)uVar14 ^ (ulonglong)uVar6 * (ulonglong)uVar15) &
          0x1111111111111111 |
          ((ulonglong)param_4 * (ulonglong)uVar15 ^
          (ulonglong)uVar5 * (ulonglong)uVar8 ^
          (ulonglong)uVar13 * (ulonglong)param_6 ^ (ulonglong)uVar6 * (ulonglong)uVar14) &
          0x888888888888888;
  uVar3 = (((ulonglong)uVar12 * (ulonglong)param_5 ^ (ulonglong)uVar11 * (ulonglong)uVar9 ^
            (ulonglong)uVar7 * (ulonglong)uVar4 ^ (ulonglong)param_3 * (ulonglong)uVar10) &
           0x888888888888888 |
          ((ulonglong)param_3 * (ulonglong)uVar9 ^
          (ulonglong)uVar7 * (ulonglong)uVar10 ^
          (ulonglong)uVar12 * (ulonglong)uVar4 ^ (ulonglong)uVar11 * (ulonglong)param_5) &
          0x4444444444444444 |
          ((ulonglong)param_3 * (ulonglong)uVar4 ^
          (ulonglong)uVar7 * (ulonglong)param_5 ^
          (ulonglong)uVar12 * (ulonglong)uVar9 ^ (ulonglong)uVar11 * (ulonglong)uVar10) &
          0x1111111111111111 |
          ((ulonglong)param_3 * (ulonglong)param_5 ^
          (ulonglong)uVar7 * (ulonglong)uVar9 ^
          (ulonglong)uVar12 * (ulonglong)uVar10 ^ (ulonglong)uVar11 * (ulonglong)uVar4) &
          0x2222222222222222) ^ uVar2 ^ uVar1;
  param_1[3] = (int)(uVar1 >> 0x20);
  param_1[2] = (uint)(uVar3 >> 0x20) ^ (uint)uVar1;
  *param_1 = (int)uVar2;
  param_1[1] = (uint)uVar3 ^ (uint)(uVar2 >> 0x20);
  return;
}

