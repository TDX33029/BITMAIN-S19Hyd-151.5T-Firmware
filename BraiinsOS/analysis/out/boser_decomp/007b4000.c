// FUN_007b4000 @ 007b4000 size=248 calls_out=1 calls_in=0
// strings: 

void FUN_007b4000(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_28;
  undefined4 **local_24;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d4b860 != 0) {
    local_24 = &local_28;
    local_28 = &DAT_01d4b860;
    FUN_019a768c(&DAT_01d4b860,1,&local_24,&DAT_01c0a20c,&DAT_01d293e0);
  }
  uVar4 = DAT_01d4b86c;
  uVar3 = DAT_01d4b868;
  DataMemoryBarrier(0xb);
  if (DAT_01d4b850 != 0) {
    local_24 = &local_28;
    local_28 = &DAT_01d4b850;
    FUN_019a768c(&DAT_01d4b850,1,&local_24,&DAT_01c0a1f8,&DAT_01d293e0);
  }
  uVar2 = DAT_01d4b85c;
  uVar1 = DAT_01d4b858;
  param_1[9] = 1;
  param_1[8] = &DAT_01c09e48;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = &DAT_01c09e50;
  param_1[5] = 0xe;
  param_1[6] = 4;
  param_1[7] = 0;
  return;
}

