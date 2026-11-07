// FUN_00a364f0 @ 00a364f0 size=948 calls_out=10 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | Sending dummy telemetry dataevent bosminer-plus/bosminer-plus/src/bos_mgmt.rs:660frame_hdrevent bosminer-plus/bosminer-plus/src/bos_mgmt.rs:575 | lDefaultError | SetGloba

void FUN_00a364f0(undefined4 param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 *local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined2 local_160;
  undefined2 local_15c;
  undefined2 local_158;
  undefined2 local_154;
  undefined2 local_150;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined2 local_b0;
  undefined2 local_ac;
  undefined2 local_a8;
  undefined2 local_a4;
  undefined2 local_a0;
  undefined2 local_9c;
  undefined2 local_98;
  undefined2 local_94;
  undefined2 local_90;
  undefined4 local_88;
  undefined4 *local_84;
  undefined4 local_80;
  undefined4 **local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  char **local_68;
  undefined *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  char *local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 ***local_30;
  int local_2c;
  
  FUN_015f3b0c(&local_148,1);
  local_16c = 0x80000000;
  local_198 = local_148;
  uStack_194 = local_144;
  uStack_190 = uStack_140;
  local_1ec = 0;
  local_1f0 = 0;
  local_180 = &DAT_3b9aca00;
  local_160 = 0;
  local_1e0 = 0;
  local_15c = 0;
  local_1d8 = 0;
  local_14c = 2;
  local_1d0 = 0;
  local_154 = 0;
  local_158 = 0;
  local_150 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_170 = 0;
  local_174 = 2;
  local_178 = 0;
  local_1b8 = 0;
  local_14b = 2;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_84 = (undefined4 *)thunk_FUN_016d4a50(0x50);
  if (local_84 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x50);
  }
  *(undefined2 *)(local_84 + 0x12) = 0;
  *(undefined2 *)(local_84 + 0x11) = 0;
  *(undefined2 *)(local_84 + 0x10) = 0;
  *(undefined2 *)(local_84 + 0xf) = 0;
  local_84[0xe] = 0xffff0001;
  *(undefined2 *)(local_84 + 0xd) = 0;
  *(undefined2 *)(local_84 + 0xc) = 0;
  local_84[10] = &DAT_3b9aca00;
  local_84[6] = 0;
  local_84[4] = 0;
  local_84[2] = 0;
  *local_84 = 0;
  local_144 = 0;
  local_148 = 0;
  local_80 = 1;
  local_88 = 1;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_a4 = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_b8 = 0;
  local_bc = 4;
  local_c0 = 0;
  local_c8 = &DAT_3b9aca00;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  if ((2 < DAT_018d9130) || (DAT_018d992c == '\0')) goto LAB_00a3682c;
  if (DAT_018d992c == '\x01') {
LAB_00a366c8:
    DataMemoryBarrier(0xb);
    pcVar4 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar1 + 0x14))(pcVar4,DAT_018d9924);
    if (iVar3 == 0) goto LAB_00a3682c;
  }
  else if (DAT_018d992c != '\x02') {
    cVar2 = FUN_0169ac90(&DAT_018d9924);
    if (cVar2 == '\0') goto LAB_00a3682c;
    if (cVar2 != '\x02') goto LAB_00a366c8;
  }
  local_2c = DAT_018d9924;
  if (*(int *)(DAT_018d9924 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186c620);
  }
  local_68 = &local_48;
  local_5c = *(undefined4 *)(DAT_018d9924 + 0x20);
  local_58 = *(undefined4 *)(DAT_018d9924 + 0x24);
  local_54 = *(undefined4 *)(DAT_018d9924 + 0x28);
  local_70 = (undefined4 *)(DAT_018d9924 + 0x1c);
  local_60 = *local_70;
  local_6c = &local_60;
  local_78 = &local_6c;
  local_30 = &local_78;
  local_50 = 0;
  local_74 = 1;
  local_64 = &DAT_018abb78;
  local_44 = 0x39;
  local_48 = 
  "Sending dummy telemetry dataevent bosminer-plus/bosminer-plus/src/bos_mgmt.rs:660frame_hdrevent bosminer-plus/bosminer-plus/src/bos_mgmt.rs:575"
  ;
  local_3c = 0;
  local_40 = 1;
  DataMemoryBarrier(0xb);
  pcVar4 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  iVar3 = (**(code **)(puVar1 + 0x28))(pcVar4,&local_40);
  if (iVar3 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar4,&local_40);
  }
LAB_00a3682c:
  iVar3 = thunk_FUN_016d4a50(0xd0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xd0);
  }
  FUN_016dd1aa(iVar3,&local_148,0xd0);
  local_38 = 1;
  local_40 = 1;
  local_3c = iVar3;
  FUN_00a35ef4(param_1,&local_1f0,&local_40);
  return;
}

