// FUN_0194a298 @ 0194a298 size=1496 calls_out=20 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug) | FieldSet corrupted (this is a bug)

undefined4 FUN_0194a298(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  uint *puVar10;
  uint *puVar11;
  bool bVar12;
  undefined8 uVar13;
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 **local_1b0;
  int local_1ac;
  int iStack_1a8;
  int iStack_1a4;
  undefined4 local_1a0;
  uint local_88;
  int iStack_84;
  int iStack_80;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined1 local_69;
  int **local_68;
  undefined **local_64;
  undefined1 *local_60;
  int ***local_58;
  code *local_54;
  int *local_50;
  undefined4 ***local_4c;
  undefined **local_48;
  int *local_44;
  undefined *local_40;
  undefined **local_3c;
  undefined *local_38;
  undefined4 ****local_34;
  int **local_30;
  undefined **local_2c;
  undefined1 *local_28;
  
  puVar11 = (uint *)(param_1 + 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x155)) {
  case 0:
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)(param_1 + 0x61) = 0;
    param_1[0x56] = param_1[0x54] + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d25f64);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d25f64);
  case 4:
    uVar13 = *(undefined8 *)(param_1 + 0x56);
    goto LAB_0194a370;
  case 5:
    uVar13 = *(undefined8 *)(param_1 + 0xfc);
    goto LAB_0194a488;
  }
  FUN_006177f4(&local_1c0,param_1 + 0x56,param_2);
  if (local_1c0 == 0) {
    uVar7 = 1;
    uVar9 = 3;
    goto LAB_0194a6d4;
  }
  param_1[0x4e] = local_1c0;
  param_1[0x4f] = iStack_1bc;
  param_1[0x50] = iStack_1b8;
  cVar2 = (char)param_1[0x61];
  bVar12 = cVar2 == '\x03';
  if (bVar12) {
    cVar2 = (char)param_1[0x60];
  }
  if (bVar12 && cVar2 == '\x03') {
    FUN_0193c3cc(param_1 + 0x58);
  }
  local_1b0 = (undefined4 **)*param_1;
  local_1ac = param_1[1];
  iStack_1a8 = param_1[2];
  iStack_1a4 = param_1[3];
  uVar13 = (**(code **)(((undefined4 *)param_1[0x50])[1] + 0xc))(*(undefined4 *)param_1[0x50]);
  *(undefined8 *)(param_1 + 0x56) = uVar13;
LAB_0194a370:
  (**(code **)((int)((ulonglong)uVar13 >> 0x20) + 0xc))(&local_1b0,(int)uVar13,param_2);
  if (local_1b0 == (undefined4 **)0x4 && local_1ac == 0) {
    uVar7 = 1;
    uVar9 = 4;
    goto LAB_0194a6d4;
  }
  *(undefined1 *)(param_1 + 0x55) = 1;
  FUN_01bed4e2(puVar11,&local_1b0,0x128);
  FUN_01139b38(param_1[0x56],param_1[0x57]);
  uVar4 = *puVar11;
  iVar3 = param_1[5];
  if ((uint)-iVar3 < (uint)(uVar4 < 2)) {
    FUN_01bed4e2(param_1 + 0x56,puVar11,0x128);
    piVar6 = param_1 + 0xa0;
    FUN_01a2c5a4(piVar6,param_1 + 0x56);
    if (*piVar6 != -0x80000000) {
      FUN_01bed4e2(param_1 + 0xce,piVar6,0xb8);
      piVar6 = param_1 + 0x51;
      FUN_01298334(param_1 + 0x101,(short)param_1[0x9f],piVar6);
      param_1[0xfe] = *piVar6;
      param_1[0xff] = param_1[0x52];
      param_1[0x100] = param_1[0x53];
      puVar10 = (uint *)(param_1 + 0x106);
      FUN_01a20054(puVar10,param_1 + 0xce);
      if ((short)param_1[0x10d] == 0x255) {
        uVar4 = *puVar10;
LAB_0194a650:
        if (3 < uVar4) {
          FUN_019bb7e0(param_1[0x107],param_1[0x108]);
        }
      }
      else {
        param_1[0x10e] = *puVar10;
        param_1[0x10f] = param_1[0x107];
        param_1[0x110] = param_1[0x108];
        param_1[0x111] = param_1[0x109];
        param_1[0x112] = param_1[0x10a];
        param_1[0x113] = param_1[0x10b];
        param_1[0x114] = param_1[0x10c];
        param_1[0x115] = param_1[0x10d];
        local_88 = *puVar10;
        iStack_84 = param_1[0x107];
        iStack_80 = param_1[0x108];
        local_78 = *piVar6;
        iStack_74 = param_1[0x52];
        iStack_70 = param_1[0x53];
        local_1b0 = (undefined4 **)*param_1;
        local_1ac = param_1[1];
        iStack_1a8 = param_1[2];
        iStack_1a4 = param_1[3];
        uVar13 = (**(code **)(((undefined4 *)param_1[0x50])[1] + 0x28))
                           (*(undefined4 *)param_1[0x50],&local_1b0);
        *(undefined8 *)(param_1 + 0xfc) = uVar13;
LAB_0194a488:
        cVar2 = (**(code **)((int)((ulonglong)uVar13 >> 0x20) + 0xc))((int)uVar13,param_2);
        if (cVar2 == '\x1c') {
          uVar7 = 1;
          uVar9 = 5;
          goto LAB_0194a6d4;
        }
        FUN_01139b38(param_1[0xfc],param_1[0xfd]);
        if (cVar2 != '\x1b') {
          local_69 = cVar2;
          if ((DAT_01d50f88 < 5) &&
             (((DAT_01d50684 - 1 < 2 ||
               ((DAT_01d50684 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d5067c), cVar2 != '\0')))) &&
              (iVar3 = FUN_01aaa278(DAT_01d5067c), iVar3 != 0)))) {
            local_44 = (int *)(DAT_01d5067c + 0x1c);
            if (*(int *)(DAT_01d5067c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25f74);
            }
            local_2c = &local_38;
            iStack_1a8 = *(int *)(DAT_01d5067c + 0x24);
            iStack_1a4 = *(int *)(DAT_01d5067c + 0x28);
            local_30 = (int **)&local_1b0;
            local_4c = &local_30;
            local_1a0 = 0;
            local_48 = (undefined **)&DAT_00000001;
            local_34 = &local_58;
            local_58 = (int ***)&local_69;
            local_28 = &DAT_01d2ea4c;
            local_38 = &DAT_005a9e51;
            local_54 = FUN_01941074;
            local_1b0 = (undefined4 **)*local_44;
            local_1ac = *(int *)(DAT_01d5067c + 0x20);
            FUN_0194aa2c(&local_4c);
          }
          else {
            iVar3 = DAT_01d5067c;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_64 = *(undefined ***)(DAT_01d5067c + 0x14);
              local_60 = *(undefined1 **)(DAT_01d5067c + 0x18);
              local_68 = (int **)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar8 = DAT_01d4edc8;
              pcVar1 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar8 = &DAT_01cfc5e0;
                pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar5 = (*(code *)puVar8[3])(pcVar1,&local_68);
              if (iVar5 != 0) {
                local_50 = (int *)(DAT_01d5067c + 0x1c);
                if (*(int *)(DAT_01d5067c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25f74);
                }
                local_4c = &local_1b0;
                iStack_1a8 = *(int *)(DAT_01d5067c + 0x24);
                iStack_1a4 = *(int *)(DAT_01d5067c + 0x28);
                local_48 = &local_40;
                local_58 = (int ***)&local_4c;
                local_1a0 = 0;
                local_54 = (code *)0x1;
                local_3c = &local_38;
                local_44 = (int *)&DAT_01d2ea4c;
                local_40 = &DAT_005a9e51;
                local_34 = (undefined4 ****)FUN_01941074;
                local_38 = &local_69;
                local_30 = local_68;
                local_2c = local_64;
                local_28 = local_60;
                local_1b0 = (undefined4 **)*local_50;
                local_1ac = *(int *)(DAT_01d5067c + 0x20);
                FUN_01aaa328(iVar3,pcVar1,puVar8[4],&local_30,&local_58);
              }
            }
          }
        }
        if ((short)param_1[0x10d] == 0x255) {
          uVar4 = param_1[0x106];
          goto LAB_0194a650;
        }
      }
      FUN_0193f164(param_1 + 0xce);
    }
    FUN_0193f694(param_1 + 0x56);
    uVar4 = *puVar11;
    iVar3 = param_1[5];
  }
  if (uVar4 != 3 || iVar3 != 0) {
    *(undefined1 *)(param_1 + 0x55) = 0;
  }
  *(undefined1 *)(param_1 + 0x55) = 0;
  FUN_019f8c54(param_1[0x4e],param_1[0x4f]);
  piVar6 = (int *)param_1[0x54];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar6;
    bVar12 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar12);
  *piVar6 = iVar3 + -1;
  uVar7 = 0;
  uVar9 = 1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0x54]);
  }
LAB_0194a6d4:
  *(undefined1 *)((int)param_1 + 0x155) = uVar9;
  return uVar7;
}

