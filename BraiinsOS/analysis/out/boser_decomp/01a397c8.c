// FUN_01a397c8 @ 01a397c8 size=420 calls_out=4 calls_in=9
// strings: 

void FUN_01a397c8(undefined1 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined1 uVar3;
  uint unaff_r11;
  byte local_50;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  uVar1 = FUN_019ec670(param_3);
  if ((uVar1 & 0xff) == 2) {
    uVar1 = 0;
  }
  else {
    FUN_019edbc4(0);
    if ((uVar1 & 1) != 0) {
      *param_1 = 2;
      return;
    }
    local_4c = (uVar1 & 0xffffff) >> 0x10;
    uVar1 = (uVar1 & 0xffffff) >> 8;
  }
  puVar2 = param_2 + 1;
  FUN_01a15884(&local_48,*param_2,puVar2,param_3);
  if (local_48 == 3 && local_44 == 0) {
    puVar2 = (undefined4 *)(uint)*(byte *)(local_40 + 0x15);
    if (puVar2 == (undefined4 *)0x2) {
LAB_01a398bc:
      local_28 = *(undefined1 *)(local_40 + 0x1a);
      local_2c = *(undefined4 *)(local_40 + 0x16);
      unaff_r11 = *(uint *)(local_40 + 0x1b);
      unaff_r9 = *(undefined4 *)(local_40 + 0x1f);
      param_3 = (uint)*(uint3 *)(local_40 + 0x23);
LAB_01a39900:
      unaff_r8 = 0;
      uVar3 = 0;
      local_30 = local_28;
      local_34 = local_2c;
    }
    else {
      if (puVar2 != (undefined4 *)&DAT_00000003) {
        local_50 = *(byte *)(local_40 + 0x14);
        param_3 = (uint)local_50;
        if ((*(byte *)(local_40 + 0x15) & 1) != 0) {
          puVar2 = (undefined4 *)&DAT_00000001;
          goto LAB_01a398bc;
        }
        puVar2 = (undefined4 *)0x0;
        goto LAB_01a39900;
      }
      unaff_r11 = 0;
      uVar3 = 1;
      unaff_r9 = 0;
    }
    FUN_01a185f4();
  }
  else {
    if (local_48 == 0) {
      uVar3 = 2;
      goto LAB_01a39958;
    }
    unaff_r9 = 0;
    if (local_48 != 1) {
      param_3 = local_40;
      unaff_r8 = local_3c;
    }
    unaff_r11 = (uint)(local_48 != 1);
    uVar3 = 1;
  }
  param_1[7] = local_30;
  uVar1 = 0;
  param_1[2] = (char)puVar2;
  param_1[1] = local_50;
  *(undefined4 *)(param_1 + 3) = local_34;
  *(uint *)(param_1 + 8) = unaff_r11;
  *(undefined4 *)(param_1 + 0xc) = unaff_r9;
  *(uint *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = unaff_r8;
LAB_01a39958:
  *param_1 = uVar3;
  FUN_019edbc4(uVar1,local_4c);
  return;
}

