// FUN_007343c4 @ 007343c4 size=140 calls_out=3 calls_in=1
// strings: 

void FUN_007343c4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_5c [12];
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_2[1] == 2) {
    puStack_34 = &LAB_00fac484;
    uStack_38 = param_3;
    FUN_00600d2c(auStack_5c,&DAT_00577571,&uStack_38);
    FUN_01602d08(&uStack_38);
    uStack_50 = uStack_38;
    puStack_4c = puStack_34;
    uStack_48 = uStack_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    uStack_3c = uStack_24;
    uVar1 = FUN_00734478(auStack_5c);
    *param_1 = uVar1;
    param_1[1] = 2;
    return;
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  uVar3 = param_2[0xc];
  uVar4 = param_2[0xd];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar4;
  return;
}

