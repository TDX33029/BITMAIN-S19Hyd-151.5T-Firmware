// FUN_00709c30 @ 00709c30 size=536 calls_out=5 calls_in=2
// strings: Sending pong/closeevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adb

void FUN_00709c30(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined *puStack_98;
  undefined4 uStack_94;
  undefined *puStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined *local_78;
  int local_74;
  undefined *local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if (*param_4 != '\x02') {
    local_f8 = *(undefined4 *)param_4;
    uStack_f4 = *(undefined4 *)(param_4 + 4);
    uStack_f0 = *(undefined4 *)(param_4 + 8);
    local_ec = *(undefined4 *)(param_4 + 0xc);
    uStack_e8 = *(undefined4 *)(param_4 + 0x10);
    uStack_e4 = *(undefined4 *)(param_4 + 0x14);
    uStack_e0 = *(undefined4 *)(param_4 + 0x18);
    FUN_007093bc(&local_78,param_2,param_3,&local_f8);
    if (local_78 != (undefined *)0xf || local_74 != 0) goto LAB_00709e2c;
  }
  cVar1 = *(char *)(param_2 + 0x74);
  *(undefined1 *)(param_2 + 0x74) = 2;
  if (cVar1 == '\x02') {
    bVar4 = *(byte *)(param_2 + 0x91);
  }
  else {
    local_d8 = CONCAT31(local_d8._1_3_,cVar1);
    FUN_01bed4e2((uint)&local_d8 | 1,param_2 + 0x75,0x1b);
    if (4 < DAT_01d51b00) {
      local_6c = 0x15;
      local_74 = 0x15;
      local_68 = &DAT_01c06d14;
      local_70 = &DAT_00532556;
      local_78 = &DAT_00532556;
      FUN_01ac6264("Sending pong/closeevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adb"
                   ,0x25,5,&local_78);
    }
    local_b8 = local_d8;
    uStack_b4 = uStack_d4;
    uStack_b0 = uStack_d0;
    local_ac = local_cc;
    uStack_a8 = uStack_c8;
    uStack_a4 = uStack_c4;
    uStack_a0 = uStack_c0;
    FUN_007093bc(&local_78,param_2,param_3);
    iVar3 = local_74;
    uVar5 = (uint)local_78 ^ 0xf;
    if (uVar5 != 0 || local_74 != 0) {
      if ((local_78 != (undefined *)0x9 || local_74 != 0) || (1 < (byte)local_70)) {
        FUN_01bed4e2(param_1,&local_78,0x58);
        return;
      }
      puStack_98 = local_70;
      uStack_94 = local_6c;
      puStack_90 = local_68;
      local_8c = local_64;
      uStack_88 = uStack_60;
      uStack_84 = uStack_5c;
      uStack_80 = uStack_58;
      FUN_01ac6694(param_2);
    }
    bVar4 = uVar5 == 0 && iVar3 == 0;
  }
  if ((*(char *)(param_2 + 0x90) != '\0') || (*(byte *)(param_2 + 0x92) < 2)) {
    *param_1 = 0xf;
    param_1[1] = 0;
    *(byte *)(param_1 + 2) = bVar4 & 1;
    return;
  }
  FUN_0071201c(&local_78,param_2 + 0x20,param_3);
  if (local_78 == (undefined *)0xf && local_74 == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    *(undefined1 *)(param_2 + 0x92) = 4;
    return;
  }
LAB_00709e2c:
  iVar3 = local_74;
  puVar2 = local_78;
  FUN_01bed4e2(param_1 + 2,&local_70,0x50);
  *param_1 = puVar2;
  param_1[1] = iVar3;
  return;
}

