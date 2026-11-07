// FUN_013c7f34 @ 013c7f34 size=420 calls_out=8 calls_in=3
// strings: 

undefined4 FUN_013c7f34(short *param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  uint *local_60;
  code *local_5c;
  undefined *puStack_58;
  code *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint local_1c;
  
  psVar6 = param_1 + 0x12;
  if (*psVar6 == 1) {
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  else {
    uVar2 = (uint)(ushort)param_1[0x13];
  }
  if (*param_1 == 1) {
    uVar4 = *(uint *)(param_1 + 6);
  }
  else {
    uVar4 = (uint)(ushort)param_1[1];
  }
  uVar2 = param_3 + uVar2 + uVar4 + 2;
  if (0xff < uVar2) {
    local_60 = (uint *)CONCAT22(local_60._2_2_,8);
    local_5c = (code *)uVar2;
    uVar3 = FUN_013e649c(&local_60);
    return uVar3;
  }
  FUN_013d9264(param_1,param_3);
  if (*param_1 == 1) {
    FUN_01ac6cbc(param_1 + 2,param_2,param_3);
    if (*param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 6);
      goto LAB_013c800c;
    }
  }
  else if (param_3 != 0) {
    uVar2 = param_3 + (uint)(ushort)param_1[1];
    local_1c = uVar2;
    if (0x20 < uVar2) {
      local_60 = &local_1c;
      local_54 = FUN_012fd02c;
      local_5c = FUN_012fd02c;
      puStack_58 = &DAT_0056cd00;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0057320c,&local_60,&DAT_01cf1f8c);
    }
    FUN_01bed4e2((int)param_1 + (ushort)param_1[1] + 4,param_2,param_3);
    param_1[1] = (short)uVar2;
  }
  uVar2 = (uint)(ushort)param_1[1];
LAB_013c800c:
  if (*psVar6 == 1) {
    iVar5 = *(int *)(param_1 + 0x18);
    if (iVar5 == *(int *)(param_1 + 0x14)) {
      FUN_006666a0();
    }
    *(char *)(*(int *)(param_1 + 0x16) + iVar5) = (char)uVar2;
    *(int *)(param_1 + 0x18) = iVar5 + 1;
  }
  else {
    uVar1 = param_1[0x13];
    if (uVar1 < 0x18) {
      param_1[0x13] = uVar1 + 1;
      *(char *)((int)param_1 + uVar1 + 0x28) = (char)uVar2;
    }
    else {
      FUN_013d9140(&local_60,param_1 + 0x13,uVar2);
      if (*psVar6 != 0) {
        FUN_019bb7e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x16));
      }
      *(uint **)psVar6 = local_60;
      *(code **)(param_1 + 0x14) = local_5c;
      *(undefined **)(param_1 + 0x16) = puStack_58;
      *(code **)(param_1 + 0x18) = local_54;
      *(undefined4 *)(param_1 + 0x1a) = uStack_50;
      *(undefined4 *)(param_1 + 0x1c) = uStack_4c;
      *(undefined4 *)(param_1 + 0x1e) = uStack_48;
    }
  }
  return 0;
}

