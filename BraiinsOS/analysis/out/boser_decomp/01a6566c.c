// FUN_01a6566c @ 01a6566c size=176 calls_out=2 calls_in=0
// strings: 

void FUN_01a6566c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (**(code **)(param_2[1] + 0xc))(&local_58,*param_2);
  if ((local_58 & 7) == 4) {
    uVar1 = FUN_00715ebc(local_50,local_4c);
    FUN_01a7467c(param_1,uVar1,&DAT_01c07620);
  }
  else {
    if (local_58 == 5) {
      uVar1 = 4;
    }
    else if (local_58 == 6) {
      uVar1 = 5;
    }
    else {
      param_1[2] = local_58;
      param_1[3] = uStack_54;
      param_1[4] = local_50;
      param_1[5] = local_4c;
      param_1[6] = uStack_48;
      param_1[7] = local_44;
      param_1[8] = uStack_40;
      param_1[9] = uStack_3c;
      param_1[10] = uStack_38;
      param_1[0xb] = uStack_34;
      param_1[0xc] = local_30;
      param_1[0xd] = uStack_2c;
      param_1[0xe] = uStack_28;
      param_1[0xf] = uStack_24;
      param_1[0x10] = uStack_20;
      param_1[0x11] = uStack_1c;
      uVar1 = 3;
    }
    *param_1 = uVar1;
    param_1[1] = 0;
  }
  return;
}

