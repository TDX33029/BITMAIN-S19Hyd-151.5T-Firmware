// FUN_014e65e0 @ 014e65e0 size=564 calls_out=12 calls_in=3
// strings: 

void FUN_014e65e0(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 local_b4 [4];
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  uint local_84;
  uint local_80;
  undefined1 local_7c;
  
  local_90 = 0;
  local_84 = local_84 & 0xffff0000;
  local_88 = 1;
  local_8c = 0x1b6;
  FUN_019a581c(&local_a8,&local_90,param_2,param_3);
  uVar2 = local_a4;
  uVar4 = local_a8;
  if (((char)local_a8 != '\x04') && ((local_a8 & 0xff) != 4)) {
    FUN_019afae4(&local_a8,param_2,param_3);
    local_90 = local_a8;
    local_8c = local_a4;
    local_88 = local_a0;
    local_94 = uVar2;
    local_98 = uVar4;
    uVar1 = FUN_005ef5e8(&local_98);
    local_7c = 0;
    local_80 = uVar2;
    local_84 = uVar4;
    FUN_01348748(&local_b0,uVar1,&local_90);
    uVar2 = local_ac;
    if (((char)local_b0 != '\x04') && ((local_b0 & 0xff) != 4)) {
      param_1[1] = local_b0;
      param_1[2] = local_ac;
      *param_1 = 0x80000000;
      return;
    }
  }
  pcVar3 = (char *)((uint)&local_90 | 4);
  FUN_019a6040(&local_90,uVar2);
  if (local_90 == 0) {
    uVar4 = *(int *)(pcVar3 + 0x34) + 1;
LAB_014e6708:
    if ((int)uVar4 < 0) {
      uVar5 = 0;
LAB_014e6714:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar5,uVar4);
    }
    if (uVar4 == 0) goto LAB_014e6754;
    uVar5 = 1;
    local_a4 = FUN_01298504(uVar4,1);
    if (local_a4 == 0) goto LAB_014e6714;
  }
  else {
    if (*pcVar3 == '\x04') {
      uVar4 = *(uint *)(pcVar3 + 4);
      goto LAB_014e6708;
    }
    FUN_0069263c(local_8c,local_88);
LAB_014e6754:
    local_a4 = 1;
    uVar4 = 0;
  }
  local_a0 = 0;
  local_a8 = uVar4;
  FUN_01980288(&local_98,local_b4,&local_a8);
  if ((char)local_98 != '\x04') {
    local_8c = local_94;
    local_90 = local_98;
    FUN_013487cc(&local_b0,&local_90,10,param_2,param_3);
    if (((char)local_b0 != '\x04') && ((local_b0 & 0xff) != 4)) {
      *param_1 = 0x80000000;
      param_1[1] = local_b0;
      param_1[2] = local_ac;
      FUN_019bb7e0(local_a8,local_a4);
      goto LAB_014e67d8;
    }
  }
  *param_1 = local_a8;
  param_1[1] = local_a4;
  param_1[2] = local_a0;
LAB_014e67d8:
  FUN_01bf01d6(uVar2);
  return;
}

