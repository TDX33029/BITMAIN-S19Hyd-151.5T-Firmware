// FUN_013b8260 @ 013b8260 size=432 calls_out=2 calls_in=5
// strings: 

void FUN_013b8260(undefined4 *param_1,int *param_2,code *param_3,uint *param_4,uint *param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_60;
  int iStack_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int iStack_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  if (*param_2 - 1U < 2) {
    if (param_5 < (uint)param_2[3]) {
      if (*(char *)(param_2[2] + (int)param_5) < -0x40) {
LAB_013b82f4:
        uVar2 = 0;
        goto LAB_013b8390;
      }
    }
    else if (param_5 != (uint *)param_2[3]) goto LAB_013b82f4;
  }
  else {
    local_60 = *param_2;
    iStack_5c = param_2[1];
    iVar5 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    local_4c = param_2[5];
    iStack_48 = param_2[6];
    local_58 = iVar5;
    local_54 = uVar3;
    local_50 = uVar4;
    if (local_4c - 1 <= uVar3) {
      uVar1 = local_4c;
      do {
        if (param_5 < uVar3) {
          if (-0x41 < *(char *)(iVar5 + (int)param_5)) goto LAB_013b838c;
        }
        else if (param_5 == (uint *)uVar3) goto LAB_013b838c;
        if (uVar1 == 0) break;
        uVar6 = uVar1 - 1;
        local_3c = uVar6;
        if (uVar1 < uVar4) goto LAB_013b83b8;
        local_4c = uVar6;
        local_40 = uVar4;
        FUN_013b1554(&local_34,param_6,&local_60);
        if (local_34 == (uint *)0x2) {
          param_1[1] = local_30;
          *param_1 = 2;
          return;
        }
        uVar1 = uVar6;
        param_3 = local_30;
        param_4 = local_2c;
        param_5 = local_2c;
      } while (((uint)local_34 & 1) != 0);
      goto LAB_013b837c;
    }
    if (param_5 < uVar3) {
      if (*(char *)(iVar5 + (int)param_5) < -0x40) {
LAB_013b83a4:
        if (local_4c != 0) {
          local_3c = local_4c - 1;
LAB_013b83b8:
          local_30 = FUN_005ffff4;
          local_34 = &local_40;
          local_28 = &LAB_00fac484;
          local_2c = &local_38;
          local_40 = uVar4;
          local_38 = uVar3;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
        }
LAB_013b837c:
        *param_1 = 0;
        return;
      }
    }
    else if (param_5 != (uint *)uVar3) goto LAB_013b83a4;
  }
LAB_013b838c:
  uVar2 = 1;
LAB_013b8390:
  *param_1 = uVar2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

