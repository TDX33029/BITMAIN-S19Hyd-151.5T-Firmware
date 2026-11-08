// FUN_00f86bdc @ 00f86bdc size=424 calls_out=1 calls_in=1
// strings: 

void FUN_00f86bdc(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  
  if ((char)param_2[0x12] == '\0') {
    do {
      (**(code **)(param_2[0x11] + 0xc))(&local_98,param_2[0x10],param_3);
      uVar4 = local_8c;
      uVar3 = local_90;
      uVar2 = local_94;
      uVar1 = local_98;
      if (local_98 == 6 && local_94 == 0) {
        uVar5 = 2;
        goto LAB_00f86bfc;
      }
      if ((local_98 & 7) == 4) {
        param_1[1] = 0;
        param_1[2] = local_90;
        *param_1 = 1;
        param_1[3] = local_8c;
        return;
      }
      if (local_98 == 5) {
        *(undefined1 *)(param_2 + 0x12) = 1;
        break;
      }
      if ((local_98 == 3 && local_94 == 0) || (local_98 == 4 && local_94 == 0)) {
        *param_1 = 1;
        param_1[1] = local_90;
        param_1[2] = local_8c;
        param_1[3] = local_88;
        param_1[4] = uStack_84;
        return;
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      if (*param_2 == 4 && param_2[1] == 0) {
        param_2[3] = local_8c;
        *param_2 = local_98;
        param_2[1] = local_94;
        param_2[2] = local_90;
        param_2[4] = local_88;
        param_2[5] = uStack_84;
        param_2[6] = uStack_80;
        param_2[7] = uStack_7c;
        param_2[8] = uStack_78;
        param_2[9] = uStack_74;
        param_2[10] = local_70;
        param_2[0xb] = uStack_6c;
        param_2[0xc] = uStack_68;
        param_2[0xd] = uStack_64;
        param_2[0xe] = uStack_60;
        param_2[0xf] = uStack_5c;
        break;
      }
      FUN_01760ec4(param_2);
      *param_2 = uVar1;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      param_2[4] = local_88;
      param_2[5] = uStack_84;
      param_2[6] = uStack_80;
      param_2[7] = uStack_7c;
      param_2[8] = uStack_78;
      param_2[9] = uStack_74;
      param_2[10] = local_70;
      param_2[0xb] = uStack_6c;
      param_2[0xc] = uStack_68;
      param_2[0xd] = uStack_64;
      param_2[0xe] = uStack_60;
      param_2[0xf] = uStack_5c;
    } while ((char)param_2[0x12] == '\0');
  }
  uVar5 = 0;
LAB_00f86bfc:
  *param_1 = uVar5;
  return;
}

