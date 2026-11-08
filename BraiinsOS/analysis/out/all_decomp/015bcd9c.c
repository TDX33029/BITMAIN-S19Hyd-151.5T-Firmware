// FUN_015bcd9c @ 015bcd9c size=192 calls_out=2 calls_in=0
// strings: 

void FUN_015bcd9c(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uStack_11;
  
  DataMemoryBarrier(0xb);
  if (DAT_018dd942 != '\x02') {
    FUN_01110ec4();
  }
  if (param_3 != 0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_11,&DAT_018aa6c8);
  }
  uVar3 = param_2[7];
  param_1[0x84] = &DAT_018aa88c;
  uVar1 = *param_2;
  uVar7 = param_2[4];
  uVar6 = param_2[5];
  param_1[8] = uVar3;
  uVar2 = param_2[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar3 = param_2[6];
  *param_1 = 1;
  param_1[1] = uVar1;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar2;
  param_1[5] = uVar7;
  param_1[6] = uVar6;
  param_1[7] = uVar3;
  return;
}

