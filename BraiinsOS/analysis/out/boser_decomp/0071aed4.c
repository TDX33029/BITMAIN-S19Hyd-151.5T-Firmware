// FUN_0071aed4 @ 0071aed4 size=400 calls_out=6 calls_in=1
// strings: 

void FUN_0071aed4(int *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_r10;
  uint unaff_r11;
  undefined4 uVar6;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar5 = *param_2;
  if (uVar5 == 3) {
    uVar3 = param_2[1];
    iVar1 = 8;
LAB_0071af0c:
    FUN_0071a118(&local_60,uVar3,*(undefined4 *)((int)param_2 + iVar1));
    if (local_60 != 3) {
      uVar6 = 0;
      if ((int)local_3c < 0) {
LAB_0071af40:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar6,local_3c);
      }
      if (local_3c == 0) {
        unaff_r11 = 1;
        uVar3 = 0;
      }
      else {
        uVar6 = 1;
        unaff_r11 = FUN_01298504(local_3c,1);
        uVar3 = local_3c;
        if (unaff_r11 == 0) goto LAB_0071af40;
      }
      FUN_01bed4e2(unaff_r11,local_40,local_3c);
      unaff_r10 = local_3c;
      goto LAB_0071af90;
    }
  }
  else {
    uVar3 = param_2[7];
    iVar1 = 0x20;
    if (uVar3 != 0) goto LAB_0071af0c;
  }
  uVar3 = 0x80000000;
LAB_0071af90:
  uVar4 = param_2[6];
  if ((uVar5 < 2) && (param_2[4] != 0)) {
    FUN_019afae4(&local_30,param_2[4],param_2[5]);
  }
  else {
    local_30 = 0x80000000;
  }
  local_54 = param_2[1];
  local_50 = param_2[2];
  local_4c = param_2[3];
  local_3c = local_30;
  uStack_38 = uStack_2c;
  uStack_34 = uStack_28;
  local_58 = uVar5;
  if (1 < uVar5) {
    local_58 = 0;
    local_50 = 0;
  }
  iVar1 = param_1[2];
  local_60 = (uint)(uVar5 != 3);
  local_5c = uVar4;
  local_48 = uVar3;
  local_44 = unaff_r11;
  local_40 = unaff_r10;
  if (iVar1 == *param_1) {
    FUN_01381550(param_1);
  }
  puVar2 = (uint *)(param_1[1] + iVar1 * 0x30);
  *puVar2 = local_60;
  puVar2[1] = local_5c;
  puVar2[2] = local_58;
  puVar2[3] = local_54;
  puVar2[4] = local_50;
  puVar2[5] = local_4c;
  puVar2[6] = local_48;
  puVar2[7] = local_44;
  puVar2[8] = local_40;
  puVar2[9] = local_3c;
  puVar2[10] = uStack_38;
  puVar2[0xb] = uStack_34;
  param_1[2] = iVar1 + 1;
  return;
}

