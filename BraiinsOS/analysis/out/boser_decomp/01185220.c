// FUN_01185220 @ 01185220 size=1044 calls_out=11 calls_in=2
// strings: eep-alive

void FUN_01185220(int *param_1,int *param_2,undefined **param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined **ppuVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  undefined8 uVar9;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined **local_98;
  int local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined **local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined **local_68;
  char *local_64;
  int *local_60;
  undefined1 *local_5c;
  int *local_58;
  int *local_54;
  undefined4 local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  cVar1 = (char)param_1[0x3e];
  if (cVar1 == '\x01') {
    local_68 = (undefined **)0x0;
    local_64 = (char *)0x14;
    local_60 = (int *)0x0;
    local_5c = (undefined1 *)0x0;
    iVar5 = FUN_0160ab20(param_2);
    if ((iVar5 == 0) ||
       (iVar5 = FUN_01429a28(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8),"k",10),
       iVar5 == 0)) {
      if (*(char *)((int)param_2 + 0x46) == '\x02') {
        if (*(char *)((int)param_1 + 0xf7) != '\x02') {
          local_98 = (undefined **)0x0;
          local_94 = 0x14;
          uStack_90 = 0;
          uStack_8c = 0;
          iVar5 = 0;
          do {
            if (((byte)"k"[iVar5] != 9) && (0x5e < (byte)"k"[iVar5] - 0x20)) goto LAB_01185620;
            iVar5 = iVar5 + 1;
          } while (iVar5 != 10);
          local_58 = (int *)((uint)local_58 & 0xffffff00);
          local_5c = (undefined1 *)0x0;
          local_64 = "k";
          local_60 = (int *)0xa;
          local_68 = &PTR_FUN_01c20a7c;
          FUN_00714c58(&local_80,param_2,&local_98,&local_68);
          if ((char)local_70 != '\x02') {
            (*(code *)local_80[4])(&uStack_74,iStack_7c,uStack_78);
          }
        }
      }
      else if (*(char *)((int)param_2 + 0x46) == '\x01') {
        *(undefined1 *)((int)param_1 + 0xf7) = 2;
      }
    }
    *(undefined1 *)((int)param_2 + 0x46) = 1;
  }
  else {
    bVar8 = cVar1 == '\x02';
    if (bVar8) {
      cVar1 = *(char *)((int)param_1 + 0xf7);
    }
    if (bVar8 && cVar1 == '\x02') {
      local_98 = (undefined **)0x0;
      local_94 = 0x14;
      uStack_90 = 0;
      uStack_8c = 0;
      iVar5 = 0;
      do {
        if (((byte)(&DAT_005319a4)[iVar5] != 9) && (0x5e < (byte)(&DAT_005319a4)[iVar5] - 0x20)) {
LAB_01185620:
          uStack_8c = 0;
          uStack_90 = 0;
          local_94 = 0x14;
          local_98 = (undefined **)0x0;
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(0,0,&DAT_01d2e4bc);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 5);
      local_58 = (int *)((uint)local_58 & 0xffffff00);
      local_5c = (undefined1 *)0x0;
      local_64 = &DAT_005319a4;
      local_60 = (int *)0x5;
      local_68 = &PTR_FUN_01c20a7c;
      FUN_00714c58(&local_80,param_2,&local_98,&local_68);
      if ((char)local_70 != '\x02') {
        (*(code *)local_80[4])(&uStack_74,iStack_7c,uStack_78);
      }
    }
  }
  local_5c = (undefined1 *)param_6;
  local_54 = param_1 + 0x34;
  local_60 = (int *)param_5;
  local_50 = CONCAT31(CONCAT21(CONCAT11(local_50._3_1_,*(undefined1 *)((int)param_1 + 0xf1)),
                               *(undefined1 *)((int)param_1 + 0xf3)),
                      *(char *)((int)param_1 + 0xf7) != '\x02');
  local_68 = param_3;
  local_64 = (char *)param_4;
  local_58 = param_2;
  FUN_010a04e8(&local_98,&local_68,param_1 + 0x4a);
  iVar5 = local_94;
  if (local_98 == (undefined **)0x3) {
    if (param_1[0x39] != 0) {
      FUN_01a69838();
    }
    puVar7 = (uint *)(param_1 + 0x24);
    param_1[0x39] = iVar5;
    if (*puVar7 < 3) {
      FUN_0116c8d0(puVar7);
    }
    *puVar7 = 6;
    FUN_01139cd4(param_2);
    FUN_0178e884(param_2[0x10]);
  }
  else {
    local_80 = local_98;
    iStack_7c = local_94;
    uStack_78 = uStack_90;
    uStack_74 = uStack_8c;
    local_70 = uStack_88;
    uStack_6c = uStack_84;
    local_68 = (undefined **)*param_2;
    local_64 = (char *)param_2[1];
    local_60 = (int *)param_2[2];
    local_5c = (undefined1 *)param_2[3];
    local_58 = (int *)param_2[4];
    local_54 = (int *)param_2[5];
    local_50 = param_2[6];
    iStack_4c = param_2[7];
    iStack_48 = param_2[8];
    iStack_44 = param_2[9];
    local_40 = param_2[10];
    iStack_3c = param_2[0xb];
    iStack_38 = param_2[0xc];
    iStack_34 = param_2[0xd];
    iStack_30 = param_2[0xe];
    iStack_2c = param_2[0xf];
    if (*param_1 != 3 || param_1[1] != 0) {
      FUN_01139cd4(param_1);
    }
    *param_1 = (int)local_68;
    param_1[1] = (int)local_64;
    param_1[2] = (int)local_60;
    param_1[3] = (int)local_5c;
    param_1[4] = (int)local_58;
    param_1[5] = (int)local_54;
    param_1[6] = local_50;
    param_1[7] = iStack_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = local_40;
    param_1[0xb] = iStack_3c;
    param_1[0xc] = iStack_38;
    param_1[0xd] = iStack_34;
    param_1[0xe] = iStack_30;
    param_1[0xf] = iStack_2c;
    uVar9 = FUN_0181cc7c(param_2[0x10]);
    piVar3 = (int *)param_1[0x32];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar8 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar8);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(param_1[0x32],param_1[0x33]);
      }
    }
    ppuVar2 = local_80;
    piVar3 = (int *)((uint)&local_80 | 4);
    *(undefined8 *)(param_1 + 0x32) = uVar9;
    local_b0 = *piVar3;
    iStack_ac = piVar3[1];
    iStack_a8 = piVar3[2];
    iStack_a4 = piVar3[3];
    iStack_a0 = piVar3[4];
    FUN_0178e884(param_2[0x10]);
    if (ppuVar2 != (undefined **)0x3) {
      local_68 = ppuVar2;
      piVar4 = (int *)((uint)&local_68 | 4);
      *piVar4 = local_b0;
      piVar4[1] = iStack_ac;
      piVar4[2] = iStack_a8;
      piVar4[3] = iStack_a4;
      piVar4[4] = iStack_a0;
      piVar3 = &local_b0;
      if (ppuVar2 == (undefined **)0x1) {
        piVar3 = (int *)local_5c;
        piVar4 = local_60;
      }
      if (ppuVar2 == (undefined **)0x1 && (piVar4 == (int *)0x0 && piVar3 == (int *)0x0)) {
        uVar6 = 5;
        puVar7 = (uint *)(param_1 + 0x24);
        if ((char)local_58 != '\0') {
          uVar6 = 6;
        }
        if (*puVar7 < 3) {
          FUN_0116c8d0(puVar7);
        }
        *puVar7 = uVar6;
        FUN_0116c8d0(&local_68);
      }
      else {
        if ((uint)param_1[0x24] < 3) {
          FUN_0116c8d0();
        }
        param_1[0x24] = (int)ppuVar2;
        param_1[0x25] = local_b0;
        param_1[0x26] = iStack_ac;
        param_1[0x27] = iStack_a8;
        param_1[0x28] = iStack_a4;
        param_1[0x29] = iStack_a0;
      }
    }
  }
  return;
}

