// FUN_00d56b40 @ 00d56b40 size=1276 calls_out=6 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Removing unreachable block (ram,0x00d57028) */

void FUN_00d56b40(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 local_d4;
  undefined4 *local_d0;
  undefined1 *local_cc;
  undefined4 *local_c8;
  undefined1 *local_c4;
  undefined4 local_c0;
  undefined4 *local_b8;
  undefined1 *local_b4;
  int local_b0;
  undefined1 *local_ac;
  undefined4 *local_a8;
  undefined1 *local_a4;
  undefined4 ***local_a0;
  undefined4 local_9c;
  int *local_98;
  undefined4 **local_94;
  undefined **local_90;
  undefined *local_8c;
  undefined *local_88;
  undefined4 **local_84;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_50;
  ushort local_48;
  undefined2 local_46;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 ****local_30;
  undefined *local_2c;
  
  puVar8 = *(undefined1 **)(param_1 + 0x540);
  if (puVar8 == &DAT_3b9aca00) {
    uVar2 = 0x23;
    puVar5 = &DAT_018779e8;
    puVar7 = &DAT_0035734e;
    goto LAB_00d57014;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x538);
  uVar3 = *(undefined4 *)(param_1 + 0x53c);
  iVar9 = *(int *)(param_1 + 0x5a0);
  if (iVar9 == 0) {
    if (DAT_018d9130 < 3) {
      cVar1 = FUN_0169ac90(0x18da0ec);
      if (cVar1 != '\0') {
        if (cVar1 != '\x02') {
          DataMemoryBarrier(0xb);
          pcVar6 = s_SetGloba_00414c05;
          puVar7 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar6 = DAT_018daa74, puVar7 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar4 = (**(code **)(puVar7 + 0x14))(pcVar6,&DAT_01877968);
          if (iVar4 == 0) goto LAB_00d56f8c;
        }
        local_2c = &DAT_01877968;
        local_b4 = (undefined1 *)0x1;
        local_b0 = 0x18da0ec;
        local_ac = &DAT_018778b0;
        local_94 = &local_b8;
        local_90 = &local_88;
        local_98 = &DAT_01877984;
        local_b8 = (undefined4 *)&DAT_018aeb80;
        local_84 = &local_d0;
        local_a8 = (undefined4 *)0x0;
        local_8c = &DAT_018abb78;
        local_88 = &DAT_0059110f;
        local_cc = &LAB_00fac484;
        local_d0 = (undefined4 *)(param_1 + 0x580);
        local_a0 = &local_94;
        local_30 = &local_a0;
        local_c4 = &LAB_00a6c218;
        local_9c = 1;
        local_3c = 0;
        local_40 = 1;
        DataMemoryBarrier(0xb);
        pcVar6 = s_SetGloba_00414c05;
        puVar7 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar7 = DAT_018daa78, DAT_018daa70 != 0)
           ) {
          pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_c8 = param_2;
        iVar4 = (**(code **)(puVar7 + 0x28))(pcVar6,&local_40);
        if (iVar4 != 0) {
          (**(code **)(puVar7 + 0x2c))(pcVar6,&local_40);
        }
      }
    }
    goto LAB_00d56f8c;
  }
  local_d4 = *(undefined4 *)(param_1 + 0x5a4);
  if ((2 < DAT_018d9130) || (DAT_018da0e8 == '\0')) goto LAB_00d56f8c;
  if (DAT_018da0e8 == '\x01') {
LAB_00d56bdc:
    DataMemoryBarrier(0xb);
    puVar7 = &DAT_018ae394;
    pcVar6 = s_SetGloba_00414c05;
    if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar7 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar4 = (**(code **)(puVar7 + 0x14))(pcVar6,DAT_018da0e0);
    if (iVar4 == 0) goto LAB_00d56f8c;
  }
  else if (DAT_018da0e8 != '\x02') {
    cVar1 = FUN_0169ac90(&DAT_018da0e0);
    if (cVar1 == '\0') goto LAB_00d56f8c;
    if (cVar1 != '\x02') goto LAB_00d56bdc;
  }
  local_2c = DAT_018da0e0;
  if (*(int *)(DAT_018da0e0 + 0x20) == 0) {
    puVar5 = &DAT_01877a08;
    uVar2 = 0x22;
    puVar7 = &DAT_00411c02;
LAB_00d57014:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(puVar7,uVar2,puVar5);
  }
  local_cc = *(undefined1 **)(DAT_018da0e0 + 0x20);
  local_c8 = *(undefined4 **)(DAT_018da0e0 + 0x24);
  local_c4 = *(undefined1 **)(DAT_018da0e0 + 0x28);
  local_98 = (int *)(DAT_018da0e0 + 0x1c);
  local_d0 = (undefined4 *)*local_98;
  local_84 = &local_b8;
  local_b0 = param_1 + 0x580;
  local_c0 = 0;
  local_88 = &DAT_00570d78;
  local_a4 = &LAB_00a6c218;
  local_b8 = &local_d4;
  local_90 = &local_88;
  local_94 = &local_d0;
  local_a0 = &local_94;
  local_30 = &local_a0;
  local_ac = &LAB_00fac484;
  local_b4 = &LAB_00fac484;
  local_8c = &DAT_018abb78;
  local_9c = 1;
  local_3c = 0;
  local_40 = 1;
  DataMemoryBarrier(0xb);
  pcVar6 = s_SetGloba_00414c05;
  puVar7 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar7 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  local_a8 = param_2;
  iVar4 = (**(code **)(puVar7 + 0x28))(pcVar6,&local_40);
  if (iVar4 != 0) {
    (**(code **)(puVar7 + 0x2c))(pcVar6,&local_40);
  }
LAB_00d56f8c:
  local_7c = *(uint *)(param_1 + 0x580);
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = param_2[4];
  uStack_64 = param_2[5];
  uStack_60 = param_2[6];
  uStack_5c = param_2[7];
  local_46 = (undefined2)*(uint *)(param_1 + 0x5a4);
  local_48 = (ushort)iVar9 & (ushort)(*(uint *)(param_1 + 0x5a4) < 0x8000);
  local_80 = ~local_7c >> 0x1f;
  local_58 = uVar2;
  local_54 = uVar3;
  local_50 = puVar8;
  FUN_00a35ad4(param_1 + 0x61c);
  return;
}

