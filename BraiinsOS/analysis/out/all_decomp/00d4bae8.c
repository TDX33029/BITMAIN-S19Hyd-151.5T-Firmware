// FUN_00d4bae8 @ 00d4bae8 size=720 calls_out=3 calls_in=0
// strings: 

void FUN_00d4bae8(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 *local_6c [3];
  undefined4 ***local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined *local_30;
  undefined4 *local_28;
  undefined4 **local_24;
  
  DataMemoryBarrier(0xb);
  if (DAT_018d78c0 != 0) {
    local_60 = (undefined4 ***)local_6c;
    local_6c[0] = (undefined4 *)&DAT_018d7878;
    FUN_015eedc4(&DAT_018d78c0,1,&local_60,&DAT_018780a8,&DAT_018ac9b8);
  }
  local_cc = 0x41d0642a;
  local_c4 = 0xc1caf89a;
  local_7c = 0x3dcccccd;
  local_90 = &LAB_00989680;
  local_d0 = 0xc0000000;
  local_c8 = 0x20000000;
  local_a8 = 0;
  local_a4 = 0;
  local_98 = 0;
  local_94 = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_80 = &DAT_018d7878;
  local_c0 = 3;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0x4062c000;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_77 = 0;
  local_88 = 0x4014000000000000;
  DataMemoryBarrier(0xb);
  if (DAT_018d7870 != 0) {
    local_60 = (undefined4 ***)local_6c;
    local_6c[0] = (undefined4 *)&DAT_018d7718;
    FUN_015eedc4(&DAT_018d7870,1,&local_60,&DAT_018780e4,&DAT_018ac9b8);
  }
  DataMemoryBarrier(0xb);
  if (DAT_018dad70 != 0) {
    local_60 = (undefined4 ***)local_6c;
    local_6c[0] = &DAT_018dad70;
    FUN_015eedc4(&DAT_018dad70,1,&local_60,&DAT_018780d0,&DAT_018ac9b8);
  }
  FUN_00ccdbf4(local_6c,DAT_018dad78,DAT_018dad7c);
  DataMemoryBarrier(0xb);
  if (DAT_018d7870 != 0) {
    local_60 = &local_24;
    local_24 = (undefined4 **)&DAT_018d7718;
    FUN_015eedc4(&DAT_018d7870,1,&local_60,&DAT_018780e4,&DAT_018ac9b8);
  }
  local_5c = 0x3f8d109d;
  local_60 = (undefined4 ***)0x3d8759da;
  local_38 = 0x422c0000;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_30 = &DAT_018d7750;
  DataMemoryBarrier(0xb);
  if (DAT_018d9144 != 0) {
    local_24 = &local_28;
    local_28 = &DAT_018d9144;
    FUN_015eedc4(&DAT_018d9144,1,&local_24,&DAT_0187806c,&DAT_018ac9b8);
  }
  do {
    iVar3 = *DAT_018d9148;
    bVar2 = (bool)hasExclusiveAccess(DAT_018d9148);
  } while (!bVar2);
  *DAT_018d9148 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xd4bdb4);
    (*pcVar1)();
  }
  FUN_00d4b134(param_1,&DAT_018d7718,&local_d8,local_6c,&local_60,DAT_018d9148,&DAT_01877f08);
  return;
}

