// FUN_007b32d4 @ 007b32d4 size=776 calls_out=11 calls_in=0
// strings: enough space for encrypting is allocated127.0.0.1google.comfeeds.braiins-os.comstratum.braiins.comeu.stratum.braiins.comus-east.stratum.braiins.comca.stratum.braiins.comru-west.stratum.braiins.comcn.stratum.braiins.comv2.stratum.braiins.comv2.eu.stratum.braiins.comv2.us-east.stratum.braiins.comv2.ru-west.stratum.braiins.comfw_printenvenv-arouteauxdfls-lkillalldnsmasqmtdinfo/etc/factory_cfg.config/etc/board.json/etc/bos_major/etc/bos_mode/etc/bos_platform/etc/dnsmasq.conf/etc/config/etc/miner_hwid/etc/bosminer.toml.orig/etc/bosminer-profile-grid.json/tmp/mnt/boot/uEnv.txt/tmp/bos_factory.json/etc/bosminer.toml.backups/tmp/mnt/antminer_rootfs/config/tmp/mnt/antminer_configs/etc/crontabs

void FUN_007b32d4(uint *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_1390;
  int local_138c;
  undefined1 auStack_1388 [368];
  undefined1 auStack_1218 [4096];
  uint uStack_218;
  undefined4 local_214;
  int local_210;
  uint uStack_20c;
  uint local_208;
  uint local_204;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  int local_84;
  uint local_80;
  int local_7c;
  undefined4 local_78 [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [9];
  
  FUN_01bed4e2(&local_1390,param_2,0x117c);
  if (0x1000 < uStack_218) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uStack_218,0x1000,&DAT_01c09dc8);
  }
  uVar5 = uStack_218 & 0x1ff0;
  FUN_018a7af8(&local_214,uVar5 + 0x10);
  if (uStack_218 <= uStack_20c) {
    FUN_01bed4e2(&local_208,auStack_1388,0x170);
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    if (uVar5 + 0x10 <= uStack_20c) {
      uVar4 = uStack_218 & 0xf;
      FUN_01bed4e2(local_48,auStack_1218 + uVar5,uVar4);
      FUN_01bed93e((int)local_48 + uVar4,0x10 - uVar4,0x10 - uVar4);
      local_98 = local_48[0];
      uStack_94 = local_48[1];
      uStack_90 = local_48[2];
      uStack_8c = local_48[3];
      uVar4 = uStack_218 >> 4;
      iVar3 = local_210 + uVar5;
      local_84 = local_210;
      local_88 = auStack_1218;
      local_80 = uVar4;
      local_7c = iVar3;
      if (uVar4 != 0) {
        uVar5 = 0;
        do {
          FUN_007b4e6c(local_78,auStack_1218 + uVar5 * 0x10);
          iVar1 = uVar5 * 0x10;
          uVar5 = uVar5 + 1;
          iVar2 = 0;
          do {
            *(byte *)((int)local_78 + iVar2) =
                 *(byte *)((int)local_78 + iVar2) ^ *(byte *)((int)local_78 + iVar2 + -0x30);
            iVar2 = iVar2 + 1;
          } while (iVar2 != 0x10);
          local_58 = 0;
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          FUN_007b4e6c(local_48,local_78);
          local_68 = local_48[0];
          uStack_64 = local_48[1];
          uStack_60 = local_48[2];
          uStack_5c = local_48[3];
          FUN_00652498(local_48,&local_208);
          local_78[0] = local_48[0];
          local_78[1] = local_48[1];
          local_78[2] = local_48[2];
          local_78[3] = local_48[3];
          FUN_007b4e6c(local_48,local_78);
          local_a8 = local_48[0];
          uStack_a4 = local_48[1];
          uStack_a0 = local_48[2];
          uStack_9c = local_48[3];
          FUN_01bed4e2(local_210 + iVar1,local_78,0x10);
        } while (uVar4 != uVar5);
      }
      FUN_007b4458(&local_208,&local_98,iVar3);
      uVar5 = (uStack_218 & 0x1ff0) + 0x10;
      if (uVar5 < uStack_20c) {
        uStack_20c = uVar5;
      }
      (**(code **)(local_138c + 0x1c))(&local_208,local_1390,local_210,uStack_20c);
      if (((char)local_208 == '\x04') || ((local_208 & 0xff) == 4)) {
        (**(code **)(local_138c + 0x18))(param_1,local_1390);
      }
      else {
        *param_1 = local_208;
        param_1[1] = local_204;
      }
      FUN_019bb7e0(local_214,local_210);
      FUN_01443048(local_1390,local_138c);
      thunk_FUN_01be4678(param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_013073dc("enough space for encrypting is allocated127.0.0.1google.comfeeds.braiins-os.comstratum.braiins.comeu.stratum.braiins.comus-east.stratum.braiins.comca.stratum.braiins.comru-west.stratum.braiins.comcn.stratum.braiins.comv2.stratum.braiins.comv2.eu.stratum.braiins.comv2.us-east.stratum.braiins.comv2.ru-west.stratum.braiins.comfw_printenvenv-arouteauxdfls-lkillalldnsmasqmtdinfo/etc/factory_cfg.config/etc/board.json/etc/bos_major/etc/bos_mode/etc/bos_platform/etc/dnsmasq.conf/etc/config/etc/miner_hwid/etc/bosminer.toml.orig/etc/bosminer-profile-grid.json/tmp/mnt/boot/uEnv.txt/tmp/bos_factory.json/etc/bosminer.toml.backups/tmp/mnt/antminer_rootfs/config/tmp/mnt/antminer_configs/etc/crontabs"
               ,0x28,&local_208,&DAT_01c09dd8,&DAT_01c09de8);
}

