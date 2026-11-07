// FUN_01431ec8 @ 01431ec8 size=916 calls_out=11 calls_in=1
// strings: 

void FUN_01431ec8(uint *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  byte local_88 [4];
  uint local_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  if (*param_2 == 0) {
    uVar5 = param_2[1];
    param_2[1] = 0;
    if (uVar5 != 0) {
      local_40 = param_2[2];
      uStack_3c = param_2[3];
      uStack_38 = param_2[4];
    }
    *param_1 = (uint)(uVar5 != 0);
    param_1[1] = uVar5;
    param_1[2] = local_40;
    param_1[3] = uStack_3c;
    param_1[4] = uStack_38;
    return;
  }
  if (*param_2 == 1) {
    iVar1 = param_2[2];
    piVar7 = param_2 + 1;
    DataMemoryBarrier(0xb);
    piVar2 = (int *)(iVar1 + 8);
    do {
      iVar4 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = 2;
    DataMemoryBarrier(0xb);
    if (iVar4 != 2) {
      puVar3 = (uint *)(iVar1 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar3;
        bVar8 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar8);
      *puVar3 = uVar5 | 2;
      DataMemoryBarrier(0xb);
      if (uVar5 == 0) {
        iVar4 = *(int *)(iVar1 + 0xc);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar8 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar8);
        *puVar3 = *puVar3 & 0xfffffffd;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar1 + 0x10));
        }
      }
    }
    FUN_01438470(&local_58,piVar7);
    if (local_58 == 2) {
      if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2df1c);
      }
      FUN_01348e78(*piVar7 + 0x24,param_3);
      FUN_01438470(&local_70,piVar7);
    }
    else {
      local_40 = local_58;
      uStack_3c = uStack_54;
      uStack_38 = local_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      if (local_58 == 0) {
        piVar2 = (int *)*piVar7;
        if (piVar2 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar1 = *piVar2;
            bVar8 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar8);
          *piVar2 = iVar1 + -1;
          if (iVar1 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01436d60(*piVar7);
          }
        }
        *piVar7 = 0;
      }
      local_70 = local_40;
      local_6c = uStack_3c;
      local_68 = uStack_38;
      uStack_64 = uStack_34;
      uStack_60 = uStack_30;
    }
    if (local_70 == 2) {
LAB_014320e0:
      uVar5 = 2;
      goto LAB_014321c8;
    }
    if ((local_70 & 1) == 0) goto LAB_01432138;
    if (local_6c != 0) {
      uVar5 = param_2[4];
      iVar1 = param_2[5];
      if (iVar1 != -1 || -iVar1 - 1U < (uint)(uVar5 < 0xfffffffe)) {
        param_2[4] = uVar5 - uStack_64;
        param_2[5] = iVar1 - (uint)(uVar5 < uStack_64);
      }
      param_1[1] = local_6c;
      param_1[2] = local_68;
      param_1[3] = uStack_64;
      param_1[4] = uStack_60;
      *param_1 = 1;
      return;
    }
LAB_01432238:
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = local_68;
  }
  else {
    FUN_013b8e80(local_88,param_2 + 2,param_3);
    uVar5 = uStack_7c;
    uVar6 = (uint)local_88[0];
    if (uVar6 == 5) {
      local_58 = local_84;
      uStack_54 = uStack_80;
      local_50 = uStack_7c;
      uStack_4c = uStack_78;
      FUN_013b9174(&local_40,param_2 + 2,uStack_7c);
      if ((char)local_40 != '\x05') {
        FUN_01432478(&local_40);
      }
      uVar6 = param_2[6];
      iVar1 = param_2[7];
      iVar4 = -1 - (iVar1 + (uint)(uVar6 >= 0xfffffffe));
      if (iVar1 != -1 || -iVar1 - 1U < (uint)(uVar6 < 0xfffffffe)) {
        bVar8 = uVar6 < uVar5;
        uVar6 = uVar6 - uVar5;
        iVar4 = iVar1 - (uint)bVar8;
        param_2[6] = uVar6;
        param_2[7] = iVar4;
      }
      FUN_01431bc0(param_2[1],uVar5,uVar6,iVar4);
      param_1[1] = local_84;
      param_1[2] = uStack_80;
      param_1[3] = uStack_7c;
      param_1[4] = uStack_78;
      uVar5 = 1;
    }
    else {
      if (uVar6 != 6) {
        if (uVar6 == 7) goto LAB_014320e0;
        local_70 = CONCAT31(local_70._1_3_,local_88[0]);
        FUN_01bed4e2((uint)&local_70 | 1,(uint)local_88 | 1,0x13);
        local_5c = local_74;
        if (uVar6 - 1 < 2) {
          puVar3 = (uint *)((uint)&local_70 | 4);
LAB_014321e0:
          if ((*puVar3 & 0xfffffff7) == 0) {
            *param_1 = 0;
            FUN_01432478(&local_70);
            return;
          }
        }
        else if (uVar6 == 0) {
          puVar3 = &local_68;
          goto LAB_014321e0;
        }
        local_58 = local_70;
        uStack_54 = local_6c;
        local_50 = local_68;
        uStack_4c = uStack_64;
        uStack_48 = uStack_60;
        uStack_44 = local_74;
        FUN_0143b8e8(8);
        local_40 = local_70;
        uStack_3c = local_6c;
        uStack_38 = local_68;
        uStack_34 = uStack_64;
        uStack_30 = uStack_60;
        uStack_2c = local_5c;
        local_68 = FUN_0143bbdc();
        goto LAB_01432238;
      }
LAB_01432138:
      uVar5 = 0;
    }
LAB_014321c8:
    *param_1 = uVar5;
  }
  return;
}

