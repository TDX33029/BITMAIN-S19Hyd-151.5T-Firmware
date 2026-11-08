// FUN_0087232c @ 0087232c size=1456 calls_out=15 calls_in=0
// strings: 

undefined8 FUN_0087232c(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
  int local_150;
  int local_14c;
  undefined8 local_148;
  int local_140;
  int iStack_13c;
  int *local_138;
  int local_134;
  undefined1 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined2 local_118;
  int *local_110;
  int local_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined2 local_f0;
  int *local_e8;
  int local_e4;
  undefined1 local_e0;
  int *local_d8;
  int local_d4;
  undefined1 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_30;
  undefined4 local_2c;
  int local_28;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (*(char *)(param_1 + 0xc) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186148c);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186148c);
  }
  iVar6 = *(int *)(param_1 + 8);
  piVar8 = *(int **)(param_1 + 4);
  uVar9 = (**(code **)(iVar6 + 0x18))((int)piVar8 + (*(int *)(iVar6 + 8) - 1U & 0xfffffff8) + 8);
  piVar3 = (int *)uVar9;
  (**(code **)((int)((ulonglong)uVar9 >> 0x20) + 0xc))(&local_148,piVar3);
  if (piVar3 == (int *)0x0) {
LAB_008724dc:
    uVar5 = FUN_0087af84(piVar8,*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0x34));
  }
  else {
    if (((int *)local_148 != (int *)0x34f9631d || local_140 != 0x30678a24) ||
        (local_148._4_4_ != -0x4f0b6094 || iStack_13c != -0x4f0a8321)) goto LAB_008724dc;
    local_148 = *(undefined8 *)(*piVar3 + 0x50);
    local_140 = *(int *)(*piVar3 + 0x58);
    FUN_007e5b48(&local_150,&local_148);
    if (local_150 == 0) {
      local_148 = CONCAT44(local_148._4_4_,3);
      local_28 = local_14c;
      local_2c = 0x1d;
      local_30 = (undefined4 *)&DAT_003440df;
      uVar5 = FUN_0080807c(&local_30,&local_148);
    }
    else {
      piVar3 = (int *)thunk_FUN_016d4a50(0x10);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      *piVar3 = 1;
      piVar3[1] = 1;
      piVar3[2] = local_150;
      piVar3[3] = local_14c;
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_00872884;
      local_148 = CONCAT44(local_148._4_4_,piVar3);
      DataMemoryBarrier(0xb);
      if (DAT_018cd428 != 0) {
        FUN_007df068(&local_148);
      }
      if ((int *)local_148 == (int *)0x0) {
        local_138 = (int *)piVar3[2];
        local_134 = piVar3[3];
        do {
          iVar4 = *local_138;
          bVar2 = (bool)hasExclusiveAccess(local_138);
        } while (!bVar2);
        *local_138 = iVar4 + 1;
        if (iVar4 < 0) {
LAB_00872884:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x872884);
          (*pcVar1)();
        }
        do {
          iVar4 = *local_138;
          bVar2 = (bool)hasExclusiveAccess(local_138);
        } while (!bVar2);
        *local_138 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_00872884;
        do {
          iVar4 = *local_138;
          bVar2 = (bool)hasExclusiveAccess(local_138);
        } while (!bVar2);
        *local_138 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_00872884;
        do {
          iVar4 = *local_138;
          bVar2 = (bool)hasExclusiveAccess(local_138);
        } while (!bVar2);
        *local_138 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_00872884;
        do {
          iVar4 = *local_138;
          bVar2 = (bool)hasExclusiveAccess(local_138);
        } while (!bVar2);
        *local_138 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_00872884;
        local_11c = 0x3f789374;
        local_120 = 0xbc6a7efa;
        local_f4 = 0x3f600e6a;
        local_f8 = 0xfcce1c58;
        local_140 = 0x1020240;
        local_d0 = 8;
        local_e0 = 0x43;
        local_f0 = 0x43;
        local_108 = 0x46;
        local_118 = 0x46;
        local_130 = 0x40;
        local_100 = 0x403e000000000000;
        local_128 = 0x4018000000000000;
        local_148 = 0x3fe8000000000000;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *local_138;
          bVar2 = (bool)hasExclusiveAccess(local_138);
        } while (!bVar2);
        *local_138 = iVar4 + -1;
        local_110 = local_138;
        local_10c = local_134;
        local_e8 = local_138;
        local_e4 = local_134;
        local_d8 = local_138;
        local_d4 = local_134;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015614d8();
        }
        iVar4 = thunk_FUN_016d4a50(0x80);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar4,&local_148,0x80);
        DataMemoryBarrier(0xb);
        if (DAT_018cd4c8 != 0) {
          local_30 = &DAT_018cd430;
          local_148 = CONCAT44(local_148._4_4_,&local_30);
          FUN_015eedc4(&DAT_018cd4c8,1,&local_148,&DAT_0186181c,&DAT_018ac9b8);
        }
        local_68 = DAT_018cd490;
        uStack_60 = DAT_018cd498;
        uStack_58 = DAT_018cd4a0;
        local_38 = DAT_018cd4c0;
        local_48 = DAT_018cd4b0;
        local_88 = DAT_018cd470;
        uStack_84 = DAT_018cd474;
        uStack_80 = DAT_018cd478;
        uStack_7c = DAT_018cd47c;
        local_78 = DAT_018cd480;
        uStack_74 = DAT_018cd484;
        uStack_70 = DAT_018cd488;
        uStack_6c = DAT_018cd48c;
        local_50 = DAT_018cd4a8;
        local_40 = DAT_018cd4b8;
        local_3c = DAT_018cd4bc;
        local_b0 = DAT_018cd448;
        local_4c = DAT_018cd4ac;
        local_b8 = DAT_018cd440;
        uStack_b4 = DAT_018cd444;
        local_c4 = DAT_018cd434;
        local_c0 = DAT_018cd438;
        local_c8 = DAT_018cd430;
        local_90 = DAT_018cd468;
        local_a0 = DAT_018cd458;
        local_a8 = DAT_018cd450;
        uStack_a4 = DAT_018cd454;
        local_98 = DAT_018cd460;
        uStack_94 = DAT_018cd464;
        uVar5 = FUN_008efac8(iVar4,&DAT_01861458,&local_c8);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00894304(piVar3);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar4 + -1;
        uVar7 = 0;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_007846b4(piVar8,iVar6);
        }
        goto LAB_00872554;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *(int *)local_148;
        bVar2 = (bool)hasExclusiveAccess((int *)local_148);
      } while (!bVar2);
      *(int *)local_148 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00894304();
      }
      uVar5 = FUN_00808f1c(&DAT_00344112,0x2e);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00894304(piVar3);
      }
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar4 + -1;
  uVar7 = 1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(piVar8,iVar6);
  }
LAB_00872554:
  *(undefined1 *)(param_1 + 0xc) = 1;
  return CONCAT44(uVar5,uVar7);
}

