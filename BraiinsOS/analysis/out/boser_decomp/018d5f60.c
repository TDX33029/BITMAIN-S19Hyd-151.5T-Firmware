// FUN_018d5f60 @ 018d5f60 size=520 calls_out=4 calls_in=1
// strings: 

void FUN_018d5f60(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5,int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int local_188 [17];
  undefined1 auStack_144 [48];
  int local_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int local_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int *local_5c;
  undefined1 auStack_58 [52];
  
  FUN_01bed93e(auStack_144,0,0x30);
  FUN_01bed4e2((uint)local_188 | 4,param_6,0x40);
  local_188[0] = param_7;
  iVar5 = *param_5;
  if (iVar5 == 0) {
    FUN_01bed4e2(&local_d0,param_6,0x20);
    FUN_01bed4e2(&iStack_b0,param_6 + 0x20,0x20);
    uVar7 = 0xd;
    puVar6 = &DAT_00521097;
  }
  else {
    uVar7 = 0x16;
    local_d0 = param_5[1];
    iStack_cc = param_5[2];
    iStack_c8 = param_5[3];
    iStack_c4 = param_5[4];
    iStack_c0 = param_5[5];
    puVar6 = &DAT_005210a4;
    local_bc = param_5[6];
    iStack_b8 = param_5[7];
    iStack_b4 = param_5[8];
    iStack_b0 = param_5[9];
    iStack_ac = param_5[10];
    local_a8 = param_5[0xb];
    iStack_a4 = param_5[0xc];
    iStack_a0 = param_5[0xd];
    iStack_9c = param_5[0xe];
    iStack_98 = param_5[0xf];
    iStack_94 = param_5[0x10];
  }
  local_110 = local_d0;
  iStack_10c = iStack_cc;
  iStack_108 = iStack_c8;
  iStack_104 = iStack_c4;
  iStack_100 = iStack_c0;
  local_fc = local_bc;
  iStack_f8 = iStack_b8;
  iStack_f4 = iStack_b4;
  iStack_f0 = iStack_b0;
  iStack_ec = iStack_ac;
  local_e8 = local_a8;
  iStack_e4 = iStack_a4;
  iStack_e0 = iStack_a0;
  iStack_dc = iStack_9c;
  iStack_d8 = iStack_98;
  iStack_d4 = iStack_94;
  local_90 = param_2[1];
  iStack_8c = param_2[2];
  iStack_88 = param_2[3];
  iStack_84 = param_2[4];
  local_80 = param_2[5];
  iStack_7c = param_2[6];
  iStack_78 = param_2[7];
  iStack_74 = param_2[8];
  iStack_70 = param_2[9];
  local_6c = param_2[10];
  iStack_68 = param_2[0xb];
  iStack_64 = param_2[0xc];
  iStack_60 = param_2[0xd];
  piVar4 = (int *)param_2[0xe];
  iVar2 = *piVar4;
  if (*(char *)(**(int **)(*param_2 + 4) + 0x14) == *(char *)(iVar2 + 0x14)) {
    local_114 = iVar5;
    local_5c = piVar4;
    FUN_01bed93e(auStack_58,0,0x30);
    uVar3 = *(uint *)(iVar2 + 0x10);
    if (0x30 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar3,0x30,&DAT_01d255f8);
    }
    iVar2 = (*(code *)piVar4[1])(auStack_58,uVar3,&local_90,param_3,param_4);
    if (iVar2 == 0) {
      if (iVar5 == 0) {
        uVar1 = 0x40;
      }
      else {
        uVar1 = *(uint *)(iVar5 + 0x48);
        if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar1,0x40,&DAT_01d2571c);
        }
      }
      FUN_018e1d14(auStack_144,0x30,*(undefined4 *)(param_7 + 0xc),auStack_58,uVar3,puVar6,uVar7,
                   &local_110,uVar1);
      FUN_01bed4e2(param_1,local_188,0x74);
      return;
    }
  }
  *(undefined2 *)(param_1 + 1) = 0x1808;
  *param_1 = 0;
  return;
}

