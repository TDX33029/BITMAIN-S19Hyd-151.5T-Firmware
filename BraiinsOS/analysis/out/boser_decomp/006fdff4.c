// FUN_006fdff4 @ 006fdff4 size=792 calls_out=12 calls_in=2
// strings: 

void FUN_006fdff4(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  byte *local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  byte *local_4c;
  uint local_48;
  undefined1 local_44;
  undefined4 *local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [3];
  
  iVar10 = *param_2;
  uVar8 = param_2[4];
  uVar11 = FUN_0070093c(param_3,iVar10,uVar8);
  uVar6 = *(uint *)(iVar10 + 0x10);
  if (uVar6 <= uVar8) {
LAB_006fe300:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar8,uVar6,&DAT_01c062d0);
  }
  iVar7 = 8;
  pcVar3 = (char *)(*(int *)(iVar10 + 0xc) + uVar8 * 0x14);
  if (*pcVar3 != '\0') {
    iVar7 = 0x10;
  }
  uVar9 = *(uint *)(pcVar3 + iVar7);
  uVar8 = FUN_006fb3b4(iVar10,uVar8);
  uVar6 = *(uint *)(iVar10 + 0x10);
  if (uVar6 <= uVar8) goto LAB_006fe300;
  iVar7 = 8;
  pcVar3 = (char *)(*(int *)(iVar10 + 0xc) + uVar8 * 0x14);
  if (*pcVar3 != '\0') {
    iVar7 = 0x10;
  }
  local_58 = *(uint *)(pcVar3 + iVar7);
  iVar7 = param_2[1];
  uVar8 = param_2[2];
  if (local_58 < uVar9) goto LAB_006fe0d8;
  if (uVar9 != 0) {
    if (uVar9 < uVar8) {
      if (*(char *)(iVar7 + uVar9) < -0x40) goto LAB_006fe0d8;
    }
    else if (uVar9 != uVar8) goto LAB_006fe0d8;
  }
  if (local_58 != 0) {
    if (local_58 < uVar8) {
      if (*(char *)(iVar7 + local_58) < -0x40) goto LAB_006fe0d8;
    }
    else if (local_58 != uVar8) {
LAB_006fe0d8:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(iVar7,uVar8,uVar9,local_58,&DAT_01c064f0);
    }
  }
  local_58 = local_58 - uVar9;
  local_5c = (byte *)(iVar7 + uVar9);
  local_54 = 0;
  local_44 = 0x80;
  local_50 = 0;
  local_60 = 0;
  local_64 = 1;
  local_68 = 0;
  local_4c = local_5c;
  local_48 = local_58;
  if (local_58 == 0) {
    local_40 = (undefined4 *)&DAT_00000005;
    uVar4 = FUN_01964674(&local_68,&local_40);
  }
  else {
    uVar8 = (uint)*local_5c;
    if (uVar8 == 0x2d) {
      local_54 = 1;
LAB_006fe200:
      FUN_01964ce0(&local_40,&local_68,uVar8 != 0x2d);
    }
    else {
      if (uVar8 - 0x30 < 10) goto LAB_006fe200;
      local_30[0] = 0xd;
      local_38 = FUN_01964674(&local_68,local_30);
      local_3c = (undefined1 *)0x0;
      local_40 = (undefined4 *)&DAT_00000003;
    }
    uVar4 = local_38;
    uVar6 = local_54;
    uVar8 = local_58;
    if (local_54 < local_58) {
      local_30[0] = 0xd;
      uVar4 = FUN_01964674(&local_68,local_30);
    }
    else if (local_40 != (undefined4 *)&DAT_00000003 || local_3c != (undefined1 *)0x0) {
      if (local_40 == (undefined4 *)0x0) {
        uVar8 = 2;
      }
      else {
        uVar8 = (uint)(local_40 != (undefined4 *)&DAT_00000001);
      }
      FUN_0134bd64(local_68,local_64);
      param_1[4] = uVar8;
      *(undefined8 *)(param_1 + 2) = uVar11;
      uVar5 = 9;
      param_1[6] = uVar4;
      param_1[5] = 0;
      param_1[7] = local_34;
      goto LAB_006fe2e8;
    }
    uVar4 = FUN_01966f00(uVar4,&local_68);
    if ((uVar6 < uVar8) &&
       (local_40 == (undefined4 *)&DAT_00000003 && local_3c == (undefined1 *)0x0)) {
      FUN_01674208(local_38);
    }
  }
  FUN_0134bd64(local_68,local_64);
  local_3c = &LAB_019674bc;
  local_40 = local_30;
  local_30[0] = uVar4;
  FUN_00664898(&local_68,&DAT_005ac8d2,&local_40);
  uVar2 = local_60;
  uVar1 = local_64;
  uVar4 = local_68;
  FUN_006c7e7c(local_30[0]);
  uVar5 = 0;
  param_1[2] = 0;
  param_1[3] = uVar4;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  *(undefined8 *)(param_1 + 6) = uVar11;
LAB_006fe2e8:
  iVar7 = param_2[3];
  *param_1 = uVar5;
  FUN_006f6e98(iVar10,iVar7);
  return;
}

