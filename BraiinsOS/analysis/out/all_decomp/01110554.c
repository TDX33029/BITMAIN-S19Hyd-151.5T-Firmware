// FUN_01110554 @ 01110554 size=144 calls_out=1 calls_in=1
// strings: 

void FUN_01110554(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  DataMemoryBarrier(0xb);
  if (DAT_018dd942 != '\x02') {
    FUN_01110ec4();
  }
  param_1[8] = param_2[7];
  uVar2 = *param_2;
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar7 = param_2[4];
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  uVar4 = param_2[1];
  uVar5 = param_2[3];
  uVar1 = param_2[6];
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  param_1[0x84] = &DAT_018aa88c;
  *param_1 = 1;
  param_1[3] = uVar3;
  param_1[4] = uVar5;
  param_1[5] = uVar7;
  param_1[6] = uVar6;
  param_1[7] = uVar1;
  return;
}

