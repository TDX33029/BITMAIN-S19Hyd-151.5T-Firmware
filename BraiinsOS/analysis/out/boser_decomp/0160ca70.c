// FUN_0160ca70 @ 0160ca70 size=276 calls_out=2 calls_in=1
// strings: 

void FUN_0160ca70(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_50 = 0;
  local_4c = 0x1d;
  uStack_48 = 0;
  uStack_44 = 0;
  iVar1 = FUN_0160ab20(param_3);
  iVar9 = 2;
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar1 + 8) == iVar2) {
        FUN_015fd1c8(&local_50,*(int *)(iVar1 + 4),*(int *)(iVar1 + 8));
        iVar9 = 2;
        if (local_50 != 2) {
          local_78 = local_4c;
          uStack_74 = uStack_48;
          uStack_70 = uStack_44;
          uStack_6c = uStack_40;
          uStack_68 = uStack_3c;
          local_64 = local_38;
          uStack_60 = uStack_34;
          uStack_5c = uStack_30;
          uStack_58 = uStack_2c;
          uStack_54 = uStack_28;
          iVar9 = local_50;
        }
        break;
      }
      uVar6 = (uint)*(byte *)(*(int *)(iVar1 + 4) + iVar2);
      iVar2 = iVar2 + 1;
    } while ((uVar6 == 9) || (uVar6 - 0x20 < 0x5f));
  }
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar7 = param_3[4];
  *param_1 = *param_3;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar7;
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  uVar5 = param_3[8];
  uVar7 = param_3[9];
  param_1[5] = param_3[5];
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  param_1[9] = uVar7;
  uVar3 = param_3[0xb];
  uVar4 = param_3[0xc];
  uVar5 = param_3[0xd];
  uVar7 = param_3[0xe];
  uVar8 = param_3[0xf];
  param_1[10] = param_3[10];
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar7;
  param_1[0xf] = uVar8;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  uVar7 = param_5[4];
  uVar8 = param_5[5];
  param_1[0x10] = *param_5;
  param_1[0x11] = uVar3;
  param_1[0x12] = uVar4;
  param_1[0x13] = uVar5;
  param_1[0x14] = uVar7;
  param_1[0x15] = uVar8;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x21] = param_2;
  param_1[0x16] = iVar9;
  param_1[0x17] = local_78;
  param_1[0x18] = uStack_74;
  param_1[0x19] = uStack_70;
  param_1[0x1a] = uStack_6c;
  param_1[0x1b] = uStack_68;
  param_1[0x1c] = local_64;
  param_1[0x1d] = uStack_60;
  param_1[0x1e] = uStack_5c;
  param_1[0x1f] = uStack_58;
  param_1[0x20] = uStack_54;
  param_1[0x22] = param_4;
  return;
}

