// FUN_007318f8 @ 007318f8 size=552 calls_out=3 calls_in=1
// strings: 

void FUN_007318f8(byte *param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  ushort *puVar5;
  int extraout_r1;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort *local_40;
  int local_3c;
  byte local_38;
  undefined2 local_37;
  byte local_35;
  uint local_34;
  uint local_30;
  undefined4 uStack_2c;
  
  FUN_00719ebc(&local_38);
  uVar3 = local_34;
  bVar4 = (byte)local_30;
  if (local_38 != 0x4f) {
    *(uint *)(param_1 + 0x11) = CONCAT13((undefined1)uStack_2c,local_30._1_3_);
    param_1[0xb] = local_35;
    *(undefined2 *)(param_1 + 9) = local_37;
    *(undefined4 *)(param_1 + 0x14) = uStack_2c;
    param_1[0x10] = (byte)local_30;
    *(uint *)(param_1 + 0xc) = local_34;
    goto LAB_00731994;
  }
  puVar5 = (ushort *)*param_2;
  if ((uint)param_2[1] < local_34) {
LAB_0073194c:
    *(ushort **)(param_1 + 0xc) = puVar5;
    *(ushort **)(param_1 + 0x10) = puVar5;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
LAB_0073195c:
    local_38 = 0x13;
  }
  else {
    uVar8 = local_30 & 0xff;
    *param_2 = (byte *)((int)puVar5 + local_34);
    param_2[1] = param_2[1] - local_34;
    if (local_34 < 2) goto LAB_0073194c;
    local_40 = puVar5 + 1;
    uVar2 = *puVar5;
    local_3c = local_34 - 2;
    if ((uVar2 & 0xfffffffe) == 2) {
      FUN_007194a0(&local_38,&local_40,uVar8);
      if (local_38 != 0x4f) {
        *(undefined2 *)(param_1 + 9) = local_37;
        param_1[0xb] = local_35;
        *(uint *)(param_1 + 0xc) = local_34;
        *(uint *)(param_1 + 0x10) = local_30;
        *(undefined4 *)(param_1 + 0x14) = uStack_2c;
        goto LAB_00731994;
      }
      if (local_3c == 0) {
        bVar6 = 0x13;
LAB_00731a58:
        *(ushort **)(param_1 + 0xc) = local_40;
        *(ushort **)(param_1 + 0x10) = local_40;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[9] = (byte)param_2;
        param_1[8] = bVar6;
        goto LAB_00731998;
      }
      bVar1 = (byte)*local_40;
      param_2 = (undefined4 *)(uint)bVar1;
      bVar6 = 0x19;
      if ((&DAT_00000008 < param_2) || ((1 << (int)param_2 & 0x116U) == 0)) goto LAB_00731a58;
      if (local_3c == 1) {
        puVar5 = (ushort *)((int)local_40 + 1);
        goto LAB_0073194c;
      }
      if (*(byte *)((int)local_40 + 1) != 0) {
        local_38 = 0x44;
        goto LAB_00731994;
      }
      iVar7 = 6;
      if (uVar8 == 8) {
        iVar7 = 0xe;
      }
      if ((bVar1 & 0x7f) == 0) {
        param_1[9] = bVar1;
        local_38 = 0x19;
        goto LAB_00731994;
      }
      puVar5 = local_40 + 1;
      uVar9 = local_3c - 2;
      FUN_01bf0fd4(uVar8 + iVar7 + 2,(int)param_2 * 2 & 0xff);
      uVar8 = 0;
      if (extraout_r1 != 0) {
        uVar8 = (int)param_2 * 2 - extraout_r1;
      }
      uVar8 = uVar8 & 0xff;
      if (uVar8 <= uVar9) {
        *(ushort *)(param_1 + 2) = uVar2;
        param_1[1] = bVar4;
        *(byte **)(param_1 + 4) = (byte *)((int)puVar5 + uVar8);
        *(uint *)(param_1 + 8) = uVar9 - uVar8;
        *(undefined4 *)(param_1 + 0xc) = param_3;
        *(uint *)(param_1 + 0x10) = uVar3;
        *(uint *)(param_1 + 0x14) = local_34;
        *param_1 = bVar1;
        return;
      }
      *(ushort **)(param_1 + 0x10) = puVar5;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      goto LAB_0073195c;
    }
    local_38 = 0x11;
    *(uint *)(param_1 + 0x10) = (uint)uVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
LAB_00731994:
  param_1[8] = local_38;
LAB_00731998:
  param_1[1] = 3;
  return;
}

