// FUN_01861264 @ 01861264 size=376 calls_out=6 calls_in=2
// strings: 

void FUN_01861264(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined2 local_38;
  ushort local_36;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar1 = *(ushort *)(param_2 + 0x44);
  puVar2 = (undefined4 *)FUN_01420304(*(undefined4 *)(param_2 + 0x40));
  if (puVar2 == (undefined4 *)0x0) {
    local_88 = 0;
  }
  else {
    (**(code **)*puVar2)(&local_88,puVar2 + 3,puVar2[1],puVar2[2]);
  }
  if (uVar1 - 400 < 200) {
    piVar3 = *(int **)(param_2 + 0x50);
    local_48 = *piVar3;
    iStack_44 = piVar3[1];
    iStack_40 = piVar3[2];
    iStack_3c = piVar3[3];
    iVar5 = piVar3[4];
    iVar4 = piVar3[5];
    local_78 = piVar3[6];
    iStack_74 = piVar3[7];
    iStack_70 = piVar3[8];
    iStack_6c = piVar3[9];
    iStack_68 = piVar3[10];
    iStack_64 = piVar3[0xb];
    local_60 = piVar3[0xc];
    iStack_5c = piVar3[0xd];
    iStack_58 = piVar3[0xe];
    iStack_54 = piVar3[0xf];
    iStack_50 = piVar3[0x10];
    iStack_4c = piVar3[0x11];
    local_34 = local_88;
    uStack_30 = local_84;
    uStack_2c = local_80;
    uStack_28 = uStack_7c;
    local_38 = 3;
    local_36 = uVar1;
    piVar3 = (int *)FUN_0183b5ec(&local_38,0);
    if (*piVar3 != 2) {
      FUN_019bb7e0(piVar3[4],piVar3[5]);
    }
    *piVar3 = local_48;
    piVar3[1] = iStack_44;
    piVar3[2] = iStack_40;
    piVar3[3] = iStack_3c;
    piVar3[4] = iVar5;
    piVar3[5] = iVar4;
    piVar3[6] = local_78;
    piVar3[7] = iStack_74;
    piVar3[8] = iStack_70;
    piVar3[9] = iStack_6c;
    piVar3[10] = iStack_68;
    piVar3[0xb] = iStack_64;
    piVar3[0xc] = local_60;
    piVar3[0xd] = iStack_5c;
    piVar3[0xe] = iStack_58;
    piVar3[0xf] = iStack_54;
    piVar3[0x10] = iStack_50;
    piVar3[0x11] = iStack_4c;
    param_1[1] = 0;
    param_1[2] = piVar3;
    *param_1 = 3;
    FUN_0173ca60(param_2);
    thunk_FUN_01be4678(*(int *)(param_2 + 0x50));
  }
  else {
    FUN_01bed4e2(param_1,param_2,0x58);
    if (local_88 != 0) {
      (**(code **)(local_88 + 0x10))(&uStack_7c,local_84,local_80);
    }
  }
  return;
}

