// FUN_01bda540 @ 01bda540 size=100 calls_out=2 calls_in=1
// strings: 

void FUN_01bda540(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint *extraout_r1;
  int extraout_r3;
  uint extraout_s0;
  uint extraout_s1;
  uint extraout_s2;
  uint extraout_s3;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_3 != 0) {
    uVar7 = *param_5;
    uVar8 = FUN_01bda040(param_1,param_2,param_4,param_3);
    do {
      puVar5 = (uint *)uVar8;
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      uVar6 = FUN_01bda060((int)uVar7,puVar5 + 4,(int)((ulonglong)uVar8 >> 0x20));
      *extraout_r1 = extraout_s0 ^ uVar1;
      extraout_r1[1] = extraout_s1 ^ uVar2;
      extraout_r1[2] = extraout_s2 ^ uVar3;
      extraout_r1[3] = extraout_s3 ^ uVar4;
      uVar8 = CONCAT44(extraout_r1 + 4,uVar6);
    } while (extraout_r3 != 1);
  }
  return;
}

