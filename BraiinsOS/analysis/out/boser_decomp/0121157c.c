// FUN_0121157c @ 0121157c size=212 calls_out=2 calls_in=0
// strings: 

void FUN_0121157c(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar2;
  undefined4 extraout_r3_01;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = *param_2;
  uVar4 = param_2[1];
  uVar3 = *param_3;
  uVar6 = param_3[1];
  uVar1 = FUN_012672ac(0,0,param_1 + 0x900,param_4,uVar5,uVar4,*(undefined4 *)(param_1 + 0x8f8),
                       *(undefined4 *)(param_1 + 0x8fc));
  uVar2 = extraout_r3;
  if ((uVar1 & 0xfd) == 1) {
    FUN_012672ac(0,0,param_1 + 0x900,extraout_r3,uVar3,uVar6,*(undefined4 *)(param_1 + 0x8f8),
                 *(undefined4 *)(param_1 + 0x8fc));
    uVar2 = extraout_r3_00;
  }
  uVar1 = FUN_0120be0c(0,0,param_1 + 0x480,uVar2,uVar5,uVar4,*(undefined4 *)(param_1 + 0x478),
                       *(undefined4 *)(param_1 + 0x47c));
  if ((uVar1 & 0xfd) == 1) {
    FUN_0120be0c(0,0,param_1 + 0x480,extraout_r3_01,uVar3,uVar6,*(undefined4 *)(param_1 + 0x478),
                 *(undefined4 *)(param_1 + 0x47c));
  }
  return;
}

