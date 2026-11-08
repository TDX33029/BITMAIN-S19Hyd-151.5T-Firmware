// FUN_01b89e74 @ 01b89e74 size=916 calls_out=11 calls_in=2
// strings: 

uint FUN_01b89e74(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5,int param_6,
                 int param_7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_50;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_2c;
  
  iVar5 = param_1[3];
  iVar3 = param_1[2];
  local_2c = DAT_01d53560;
  uVar2 = *(uint *)(param_4 + 0x1c);
  uVar7 = FUN_01b8511c(param_4,param_2,0x408);
  local_44 = 0xff;
  local_50 = *(uint *)((int)((ulonglong)uVar7 >> 0x20) + 0x404);
  FUN_01bed4e2(param_3);
  if ((int)uVar7 == 0) {
    uVar6 = iVar5 - iVar3;
    if (*(int *)(param_2 + 0x404) == 2) {
      uVar4 = 6;
    }
    else {
      uVar4 = 0x3f;
    }
    if (uVar6 <= uVar4) goto LAB_01b89f00;
    uVar4 = FUN_01b83060(param_6,&local_44,iVar3,uVar6,param_6,param_7);
    if (0xffffff88 < uVar4) {
LAB_01b89f54:
      param_5[0x21] = uVar4;
      goto LAB_01b89f58;
    }
    if (uVar6 != uVar4) {
      if (uVar4 <= (uVar6 >> 7) + 4) goto LAB_01b89f00;
      iVar3 = param_7 + -0x400;
      if (local_50 == 1) {
        iVar5 = FUN_01b8470c(param_2,param_6,local_44);
        local_50 = (uint)(iVar5 != 0);
      }
      FUN_01bed93e(param_3,0,0x404);
      uVar1 = FUN_01b847d8(0xb,uVar6,local_44,param_6 + 0x400,iVar3,param_3,param_6,
                           (uint)(7 < uVar2) << 1);
      uVar4 = FUN_01b84024(param_3,param_6,local_44,uVar1,param_6 + 0x400,iVar3);
      if (0xffffff88 < uVar4) goto LAB_01b89f54;
      iVar5 = FUN_01b846ac(param_3,param_6,local_44);
      uVar4 = FUN_01b83ae8(param_5 + 1,0x80,param_3,local_44,uVar4,param_6 + 0x400,iVar3);
      if ((local_50 == 0) || (uVar2 = FUN_01b846ac(param_2,param_6,local_44), uVar6 <= uVar2)) {
        if (uVar6 <= iVar5 + uVar4) {
          FUN_01bed4e2(param_3,param_2,0x408);
          goto LAB_01b89f00;
        }
LAB_01b8a1a4:
        *param_5 = 2;
        *(undefined4 *)(param_3 + 0x404) = 1;
        param_5[0x21] = uVar4;
        if (0xffffff88 < uVar4) goto LAB_01b89f58;
        goto LAB_01b8a0e8;
      }
      if ((iVar5 + uVar4 < uVar2) && (uVar4 + 0xc < uVar6)) goto LAB_01b8a1a4;
      FUN_01bed4e2(param_3,param_2,0x408);
      *param_5 = 3;
      goto LAB_01b8a0e4;
    }
    param_5[0x21] = 0;
    *param_5 = 1;
  }
  else {
LAB_01b89f00:
    *param_5 = 0;
LAB_01b8a0e4:
    param_5[0x21] = 0;
  }
LAB_01b8a0e8:
  iVar3 = param_1[1] - *param_1 >> 3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_3 + 0x11e4) = 0;
    *(undefined4 *)(param_3 + 0x11dc) = 0;
    *(undefined4 *)(param_3 + 0x11e0) = 0;
    uVar1 = 0;
    uStack_40 = 0;
    local_3c = 0;
    local_34 = 0;
    local_38 = 0;
  }
  else {
    FUN_01b885b8(&local_44,param_1,iVar3,param_2 + 0x408,param_3 + 0x408,param_5 + 0x25,
                 (int)param_5 + 0x119,*(undefined4 *)(param_4 + 0x1c),param_6,param_6 + 0xd4,
                 param_7 + -0xd4);
    if (0xffffff88 < local_38) {
      param_5[0x47] = local_38;
      uVar4 = local_38;
      goto LAB_01b89f58;
    }
    uVar1 = local_44;
  }
  param_5[0x47] = local_38;
  uVar4 = 0;
  param_5[0x22] = uVar1;
  param_5[0x23] = uStack_40;
  param_5[0x24] = local_3c;
  param_5[0x48] = local_34;
LAB_01b89f58:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar4;
}

