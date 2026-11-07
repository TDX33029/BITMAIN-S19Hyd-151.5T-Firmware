// FUN_0076e274 @ 0076e274 size=188 calls_out=4 calls_in=1
// strings: 

void FUN_0076e274(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  FUN_01007358(&local_78,param_2,9);
  FUN_0100837c(&local_40,9);
  iVar1 = thunk_FUN_016d4a50(0x8000);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x8000);
  }
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  param_1[0x13] = local_78;
  param_1[0x14] = uStack_74;
  param_1[0x15] = uStack_70;
  param_1[6] = local_40;
  param_1[7] = uStack_3c;
  param_1[8] = uStack_38;
  param_1[9] = uStack_34;
  param_1[10] = local_30;
  param_1[0xb] = uStack_2c;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar4;
  param_1[0x11] = 0;
  param_1[0x10] = iVar1;
  param_1[0xf] = 0x8000;
  param_1[0x12] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

