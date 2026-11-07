// FUN_006b29e0 @ 006b29e0 size=332 calls_out=1 calls_in=1
// strings: 

void FUN_006b29e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x26e);
  uVar2 = param_2 + 1;
  iVar3 = param_1 + 0x210;
  puVar1 = (undefined4 *)(iVar3 + param_2 * 8);
  if (uVar4 < uVar2) {
    *puVar1 = param_3;
    puVar1[1] = param_4;
    local_58 = *param_5;
    uStack_54 = param_5[1];
    uStack_50 = param_5[2];
    uStack_4c = param_5[3];
    uStack_48 = param_5[4];
    uStack_44 = param_5[5];
    local_40 = param_5[6];
    uStack_3c = param_5[7];
    uStack_38 = param_5[8];
    uStack_34 = param_5[9];
    uStack_30 = param_5[10];
    uStack_2c = param_5[0xb];
  }
  else {
    FUN_01bed864(iVar3 + uVar2 * 8,puVar1,(uVar4 - param_2) * 8);
    *(undefined4 *)(iVar3 + param_2 * 8) = param_3;
    puVar1[1] = param_4;
    local_58 = *param_5;
    uStack_54 = param_5[1];
    uStack_50 = param_5[2];
    uStack_4c = param_5[3];
    uStack_48 = param_5[4];
    uStack_44 = param_5[5];
    local_40 = param_5[6];
    uStack_3c = param_5[7];
    uStack_38 = param_5[8];
    uStack_34 = param_5[9];
    uStack_30 = param_5[10];
    uStack_2c = param_5[0xb];
    FUN_01bed864(param_1 + uVar2 * 0x30,param_1 + param_2 * 0x30,(uVar4 - param_2) * 0x30);
  }
  puVar1 = (undefined4 *)(param_1 + param_2 * 0x30);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1[4] = uStack_48;
  puVar1[5] = uStack_44;
  puVar1[6] = local_40;
  puVar1[7] = uStack_3c;
  puVar1[8] = uStack_38;
  puVar1[9] = uStack_34;
  puVar1[10] = uStack_30;
  puVar1[0xb] = uStack_2c;
  iVar3 = param_1 + 0x270;
  if (param_2 + 2U < uVar4 + 2) {
    FUN_01bed864(iVar3 + (param_2 + 2U) * 4,iVar3 + uVar2 * 4,(uVar4 - param_2) * 4);
  }
  *(undefined4 *)(iVar3 + uVar2 * 4) = param_6;
  *(ushort *)(param_1 + 0x26e) = (ushort)(uVar4 + 1);
  if (uVar2 < uVar4 + 2) {
    do {
      iVar3 = param_2 * 4;
      param_2 = param_2 + 1;
      iVar3 = *(int *)(param_1 + iVar3 + 0x274);
      *(short *)(iVar3 + 0x26c) = (short)param_2;
      *(int *)(iVar3 + 0x268) = param_1;
    } while (uVar4 + 1 != param_2);
  }
  return;
}

