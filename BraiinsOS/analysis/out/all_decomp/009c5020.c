// FUN_009c5020 @ 009c5020 size=744 calls_out=8 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_009c5020(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint in_fpscr;
  float fVar7;
  uint uVar8;
  undefined4 *local_84;
  undefined ***local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined **local_74;
  undefined **local_70;
  undefined *local_6c;
  undefined *local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined *local_50;
  undefined4 ***local_4c;
  undefined4 **local_48;
  code *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined ****local_30;
  int local_2c;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar5 = *(int *)(param_1 + 4);
    fVar7 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    iVar4 = *(int *)(param_1 + 8) * 0x18;
    fVar7 = (float)FUN_016d6208(fVar7 * 2.55);
    uVar8 = (uint)(0.0 < fVar7) * (int)fVar7;
    puVar6 = (undefined4 *)(iVar5 + 4);
    if (uVar8 < 0x10) {
      uVar8 = 0xf;
    }
    do {
      iVar5 = FUN_0113ce68(*puVar6,puVar6[1],uVar8);
      if (iVar5 != 0) {
        local_40 = 3;
        local_64 = 0x19;
        local_68 = &DAT_00349283;
        local_60 = iVar5;
        local_84 = (undefined4 *)FUN_0099eff8(&local_68,&local_40);
        if ((DAT_018d9130 < 5) && (DAT_018d9830 != '\0')) {
          if (DAT_018d9830 == '\x01') {
LAB_009c5148:
            DataMemoryBarrier(0xb);
            puVar3 = DAT_018daa78;
            if (DAT_018dd984 != 2) {
              puVar3 = &DAT_018ae394;
            }
            pcVar2 = s_SetGloba_00414c05;
            if ((DAT_018dd984 == 2) && (pcVar2 = DAT_018daa74, DAT_018daa70 != 0)) {
              pcVar2 = DAT_018daa74 + (*(int *)(puVar3 + 8) - 1U & 0xfffffff8) + 8;
            }
            iVar5 = (**(code **)(puVar3 + 0x14))(pcVar2,DAT_018d9828);
            if (iVar5 == 0) goto LAB_009c5090;
          }
          else if (DAT_018d9830 != '\x02') {
            cVar1 = FUN_0169ac90(&DAT_018d9828);
            if (cVar1 == '\0') goto LAB_009c5090;
            if (cVar1 != '\x02') goto LAB_009c5148;
          }
          if (*(int *)(DAT_018d9828 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186a290);
          }
          local_64 = *(undefined4 *)(DAT_018d9828 + 0x20);
          local_60 = *(int *)(DAT_018d9828 + 0x24);
          local_5c = *(undefined4 *)(DAT_018d9828 + 0x28);
          local_74 = &local_68;
          local_70 = &local_50;
          local_78 = (undefined4 *)(DAT_018d9828 + 0x1c);
          local_68 = (undefined *)*local_78;
          local_58 = 0;
          local_6c = &DAT_018abb78;
          local_4c = &local_48;
          local_50 = &DAT_0058516e;
          local_44 = FUN_00604528;
          local_48 = &local_84;
          local_80 = &local_74;
          local_30 = &local_80;
          local_7c = 1;
          local_3c = 0;
          local_40 = 1;
          DataMemoryBarrier(0xb);
          pcVar2 = s_SetGloba_00414c05;
          puVar3 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar2 = DAT_018daa74, puVar3 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar2 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          local_2c = DAT_018d9828;
          iVar5 = (**(code **)(puVar3 + 0x28))(pcVar2,&local_40);
          if (iVar5 != 0) {
            (**(code **)(puVar3 + 0x2c))(pcVar2,&local_40);
          }
        }
LAB_009c5090:
        (**(code **)*local_84)();
      }
      puVar6 = puVar6 + 6;
      iVar4 = iVar4 + -0x18;
    } while (iVar4 != 0);
  }
  return;
}

