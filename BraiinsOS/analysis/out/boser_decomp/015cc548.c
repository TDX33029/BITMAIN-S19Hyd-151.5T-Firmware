// FUN_015cc548 @ 015cc548 size=320 calls_out=3 calls_in=5
// strings: 

void FUN_015cc548(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 unaff_r4;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 unaff_lr;
  
  uVar4 = *(uint *)(param_1 + 0x22c);
  if (uVar4 != 0) {
    puVar7 = *(undefined4 **)(param_1 + 0x228);
    uVar3 = 0;
    puVar1 = puVar7;
    do {
      puVar5 = puVar1 + 1;
      iVar2 = FUN_015e785c(param_2,*puVar1);
      uVar6 = uVar3 + 1;
      if (iVar2 == 0) {
        FUN_015aa3e4(puVar7 + uVar3);
        param_3 = extraout_r2_00;
        param_4 = extraout_r3_00;
        if (uVar6 < uVar4) {
          uVar6 = uVar3 + 1;
          do {
            iVar2 = FUN_015e785c(param_2,*puVar5);
            if (iVar2 == 0) {
              FUN_015aa3e4(puVar5);
              param_3 = extraout_r2_02;
              param_4 = extraout_r3_02;
            }
            else {
              puVar7[uVar3] = *puVar5;
              uVar3 = uVar3 + 1;
              param_3 = extraout_r2_01;
              param_4 = extraout_r3_01;
            }
            uVar6 = uVar6 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar6 < uVar4);
        }
        *(uint *)(param_1 + 0x22c) = uVar3;
        break;
      }
      uVar3 = uVar6;
      puVar1 = puVar5;
      param_3 = extraout_r2;
      param_4 = extraout_r3;
    } while (uVar4 != uVar6);
  }
  uVar4 = 4;
  if ((int)*param_2 < 0) {
    uVar4 = *param_2 ^ 0x80000000;
  }
  switch(uVar4) {
  case 0:
    FUN_0134bd64(param_2[1],param_2[2],param_3,param_4,unaff_r4,unaff_lr);
    uVar4 = param_2[4];
    uVar3 = param_2[5];
    break;
  case 1:
    if (param_2[1] < 2) {
      return;
    }
    uVar4 = param_2[2];
    uVar3 = param_2[3];
    break;
  case 2:
  case 3:
    return;
  case 4:
    FUN_0134bd64(*param_2,param_2[1],param_3,param_4,unaff_r4,unaff_lr);
    FUN_0134bd64(param_2[3],param_2[4]);
    FUN_0134bd64(param_2[6],param_2[7]);
    return;
  default:
    uVar4 = param_2[1];
    uVar3 = param_2[2];
  }
  FUN_0134bd64(uVar4,uVar3);
  return;
}

