// FUN_00d40168 @ 00d40168 size=720 calls_out=9 calls_in=4
// strings: 

void FUN_00d40168(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int extraout_r2;
  undefined *puVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  uVar9 = thunk_FUN_016de0ee(param_1,param_2,0x40);
  iVar7 = (int)uVar9 + extraout_r2;
  if (*(char *)(iVar7 + 0x38) == '\x01') {
LAB_00d401c4:
    cVar3 = *(char *)(iVar7 + 0x31);
    cVar5 = *(char *)(iVar7 + 0x30);
    cVar2 = cVar3;
    if (cVar5 == '\x01') {
      if (cVar3 == '\0') {
        FUN_016455a4(*param_3,param_3[1]);
        iVar7 = 9;
        goto LAB_00d4037c;
      }
      cVar2 = cVar3 + -1;
    }
    *(char *)(iVar7 + 0x31) = cVar2;
  }
  else {
    cVar5 = '\0';
    cVar3 = '\0';
    if (*(char *)(iVar7 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar7,FUN_00bacf28);
      *(undefined1 *)(iVar7 + 0x38) = 1;
      goto LAB_00d401c4;
    }
  }
  iVar8 = *(int *)((ulonglong)uVar9 >> 0x20);
  FUN_00c7458c(&local_88,iVar8 + 0x70,iVar8 + 0x20);
  if (local_88 == 8) {
    DataMemoryBarrier(0xb);
    if (*(uint *)(iVar8 + 0x94) != *(uint *)(iVar8 + 0x90) >> 1) {
      puVar4 = &DAT_018ac108;
LAB_00d40428:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00412a7f,0x30,puVar4);
    }
  }
  else {
    if (local_88 != 9) {
      local_58 = local_88;
      iStack_54 = iStack_84;
      iStack_50 = iStack_80;
      iStack_4c = iStack_7c;
      iStack_48 = iStack_78;
      iStack_44 = iStack_74;
      local_40 = local_70;
      iStack_3c = iStack_6c;
      iStack_38 = iStack_68;
      iStack_34 = iStack_64;
      iStack_30 = iStack_60;
      iStack_2c = iStack_5c;
      pcVar6 = (char *)(iVar8 + 0x80);
      if (*pcVar6 == '\0') {
        bVar1 = (bool)hasExclusiveAccess(pcVar6);
        if (bVar1) {
          *pcVar6 = '\x01';
          DataMemoryBarrier(0xb);
          goto LAB_00d40334;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      FUN_01280da8(pcVar6);
LAB_00d40334:
      FUN_0128236c(pcVar6);
      FUN_0163af68(pcVar6,1,pcVar6);
      *param_1 = local_88;
      param_1[1] = iStack_84;
      param_1[2] = iStack_80;
      param_1[3] = iStack_7c;
      param_1[4] = iStack_78;
      param_1[5] = iStack_74;
      param_1[6] = local_70;
      param_1[7] = iStack_6c;
      param_1[8] = iStack_68;
      param_1[9] = iStack_64;
      param_1[10] = iStack_60;
      param_1[0xb] = iStack_5c;
      return;
    }
    FUN_0163e1c0(iVar8 + 0x40,param_3);
    FUN_00c7458c(&local_88,iVar8 + 0x70,iVar8 + 0x20);
    if (local_88 == 8) {
      DataMemoryBarrier(0xb);
      if (*(uint *)(iVar8 + 0x94) != *(uint *)(iVar8 + 0x90) >> 1) {
        puVar4 = &DAT_018ac0f8;
        goto LAB_00d40428;
      }
    }
    else {
      if (local_88 != 9) {
        local_58 = local_88;
        iStack_54 = iStack_84;
        iStack_50 = iStack_80;
        iStack_4c = iStack_7c;
        iStack_48 = iStack_78;
        iStack_44 = iStack_74;
        local_40 = local_70;
        iStack_3c = iStack_6c;
        iStack_38 = iStack_68;
        iStack_34 = iStack_64;
        iStack_30 = iStack_60;
        iStack_2c = iStack_5c;
        pcVar6 = (char *)(iVar8 + 0x80);
        if (*pcVar6 == '\0') {
          bVar1 = (bool)hasExclusiveAccess(pcVar6);
          if (bVar1) {
            *pcVar6 = '\x01';
            DataMemoryBarrier(0xb);
            goto LAB_00d403e8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        FUN_01280da8(pcVar6);
LAB_00d403e8:
        FUN_0128236c(pcVar6);
        FUN_0163af68(pcVar6,1,pcVar6);
        *param_1 = local_88;
        param_1[1] = iStack_84;
        param_1[2] = iStack_80;
        param_1[3] = iStack_7c;
        param_1[4] = iStack_78;
        param_1[5] = iStack_74;
        param_1[6] = local_70;
        param_1[7] = iStack_6c;
        param_1[8] = iStack_68;
        param_1[9] = iStack_64;
        param_1[10] = iStack_60;
        param_1[0xb] = iStack_5c;
        return;
      }
      if ((*(char *)(iVar8 + 0x7c) != '\x01') ||
         (DataMemoryBarrier(0xb), *(uint *)(iVar8 + 0x94) != *(uint *)(iVar8 + 0x90) >> 1)) {
        *param_1 = 9;
        if (cVar5 == '\0') {
          return;
        }
        if (*(char *)(iVar7 + 0x38) != '\x01') {
          if (*(char *)(iVar7 + 0x38) == '\x02') {
            return;
          }
          FUN_015e8e6c(iVar7,FUN_01655ec4);
          *(undefined1 *)(iVar7 + 0x38) = 1;
        }
        *(char *)(iVar7 + 0x31) = cVar3;
        *(undefined1 *)(iVar7 + 0x30) = 1;
        return;
      }
    }
  }
  iVar7 = 8;
LAB_00d4037c:
  *param_1 = iVar7;
  return;
}

