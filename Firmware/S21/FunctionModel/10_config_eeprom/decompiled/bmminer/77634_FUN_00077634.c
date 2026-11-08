// FUN_00077634 @ 00077634  size=1836  callers=1
// program: bmminer


undefined4 FUN_00077634(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint in_fpscr;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar5;
  char local_898 [2048];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 *local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  ushort local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  uint uStack_34;
  byte local_2b;
  short local_2a;
  short local_28;
  char local_25;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  local_25 = FUN_000774e0(DAT_009451f8 & 0xffff);
  if (local_25 == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_0006f8d0();
    if (iVar2 == 0) {
      iVar2 = FUN_000769a0(local_25,&local_74,0x20);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
    else {
      iVar2 = FUN_00076c94(local_25,&local_74,0x20);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
    DAT_0094536c = local_74;
    DAT_00945370 = uStack_70;
    DAT_00945374 = local_6c;
    DAT_00945378 = local_68;
    DAT_0094537c = local_64;
    DAT_00945380 = uStack_60;
    DAT_00945384 = uStack_5c;
    DAT_00945388 = local_58;
    builtin_strncpy(local_898,"power calibration data:",0x18);
    FUN_0004948c(0,local_898,0);
    local_14 = 0;
    while( true ) {
      if (0x1f < local_14) break;
      snprintf(local_898,0x800,"%2X %2X %2X %2X  ",(uint)*(byte *)((int)&local_74 + local_14),
               (uint)*(byte *)((int)&local_74 + local_14 + 1),
               (uint)*(byte *)((int)&local_74 + local_14 + 2),
               (uint)*(byte *)((int)&local_74 + local_14 + 3));
      FUN_0004948c(0,local_898,0);
      local_14 = local_14 + 4;
    }
    local_28 = CONCAT11(local_58._2_1_,local_58._3_1_);
    local_2a = FUN_0006ed8c(&local_74,0x1e);
    if (local_28 == local_2a) {
      local_2b = (byte)local_74;
      if (((byte)local_74 & 0xfe) == 2) {
        local_2b = 2;
      }
      memcpy(&local_80,&local_74,8);
      local_84 = local_6c;
      local_80 = FUN_0006ed48((undefined4)local_80,local_80._4_4_);
      local_84 = FUN_0006ed20(local_84);
      uStack_34 = local_80._4_4_ & 0x1ffffff;
      local_38 = (undefined4)local_80;
      local_98 = 0;
      local_94 = 0;
      local_90 = 0;
      local_8c = 0;
      local_88 = (uint)local_88._2_2_ << 0x10;
      local_3c = local_84;
      FUN_0007734c(&local_98,0xc,(undefined4)local_80,uStack_34,0x24);
      FUN_0007734c((int)&local_90 + 3,7,local_3c,0,0x24);
      DAT_00945208 = local_98;
      DAT_0094520c = local_94;
      DAT_00945210 = local_90;
      DAT_00945214 = local_8c;
      DAT_00945218 = (undefined2)local_88;
      local_3e = CONCAT11((undefined1)local_58,local_58._1_1_);
      local_44 = local_3e / 0x174;
      uVar4 = local_3e / 0x1f;
      local_48 = ((local_3e - uVar4 >> 1) + uVar4 >> 4 & 0xffff) % 0xc + 1;
      uVar4 = (uint)local_3e;
      local_4c = (uVar4 + ((uVar4 - uVar4 / 0x1f >> 1) + uVar4 / 0x1f >> 4) * -0x1f & 0xffff) + 1;
      DAT_00945360 = local_44 * 10000 + local_48 * 100 + local_4c;
      local_50 = (int)&local_68 + 2;
      for (local_18 = 0; (local_18 < 0xe && (*(char *)(local_50 + local_18) != -0x80));
          local_18 = local_18 + 1) {
      }
      local_54 = &DAT_00945208;
      DAT_0094521c = local_18 + 1;
      local_1c = (int)CONCAT11((undefined1)local_68,local_68._1_1_);
      iVar2 = FUN_0006f8d0(uVar4 * 0x8421085);
      if (iVar2 == 0) {
        cVar1 = FUN_0006ee54(local_54 + 6,local_54[5]);
        if (cVar1 != '\x01') {
          return 0xffffffff;
        }
        uVar3 = FUN_00076390(*(undefined1 *)(local_54 + 6));
        dVar5 = (double)VectorSignedToFloat(local_1c,(byte)(in_fpscr >> 0x16) & 3);
        *(double *)(local_54 + 0x2e) = (double)CONCAT44(extraout_s1,uVar3) + dVar5 / 1000.0;
        for (local_24 = 0; local_24 < local_18; local_24 = local_24 + 1) {
          local_1c = local_1c + *(char *)(local_50 + local_24);
          uVar3 = FUN_00076390(*(undefined1 *)((int)local_54 + local_24 + 0x19));
          dVar5 = (double)VectorSignedToFloat(local_1c,(byte)(in_fpscr >> 0x16) & 3);
          *(double *)(local_54 + (local_24 + 0x18) * 2) =
               (double)CONCAT44(extraout_s1_00,uVar3) + dVar5 / 1000.0;
        }
      }
      else {
        cVar1 = FUN_0006ef28(local_54 + 6,local_54[5]);
        if (cVar1 != '\x01') {
          return 0xffffffff;
        }
        dVar5 = (double)VectorSignedToFloat(local_1c,(byte)(in_fpscr >> 0x16) & 3);
        *(double *)(local_54 + 0x2e) = *(double *)(local_54 + 6) + dVar5 / 1000.0;
        for (local_20 = 0; local_20 < local_18; local_20 = local_20 + 1) {
          local_1c = local_1c + *(char *)(local_50 + local_20);
          dVar5 = (double)VectorSignedToFloat(local_1c,(byte)(in_fpscr >> 0x16) & 3);
          *(double *)(local_54 + (local_20 + 0x18) * 2) =
               *(double *)(local_54 + (local_20 + 4) * 2) + dVar5 / 1000.0;
        }
      }
      uVar3 = 0;
    }
    else {
      builtin_strncpy(local_898,"calibration data crc err",0x19);
      FUN_0004948c(0,local_898,0);
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

