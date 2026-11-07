// FUN_00fe43f8 @ 00fe43f8 size=704 calls_out=5 calls_in=3
// strings: 

void FUN_00fe43f8(int *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60 [2];
  uint local_58;
  byte local_53;
  char local_52;
  int local_3c;
  int local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_00fb6cfc(local_60,param_2,param_3,&DAT_00377989,2);
  if (local_60[0] == 1) {
    FUN_00fe46fc(&local_6c,&local_58,local_30,local_2c,uStack_28,uStack_24,local_3c == -1);
    uVar6 = local_68;
  }
  else {
    local_6c = 0;
    uVar6 = local_68;
    if (local_52 != '\0') goto joined_r0x00fe4634;
    if (local_58 == 0) {
      local_58 = 0;
      local_6c = local_58;
      if ((local_53 & 1) == 0) goto joined_r0x00fe4634;
    }
    else {
      pcVar3 = (char *)(local_30 + local_58);
      if (local_58 < local_2c) {
        if (*pcVar3 < -0x40) goto LAB_00fe45d4;
      }
      else if (local_58 != local_2c) goto LAB_00fe45d4;
      uVar6 = (uint)pcVar3[-1];
      if ((int)uVar6 < 0) {
        bVar1 = pcVar3[-2];
        if ((char)bVar1 < -0x40) {
          bVar2 = pcVar3[-3];
          if ((char)bVar2 < -0x40) {
            uVar4 = (int)(char)bVar2 & 0x3fU | ((byte)pcVar3[-4] & 7) << 6;
          }
          else {
            uVar4 = bVar2 & 0xf;
          }
          uVar4 = (int)(char)bVar1 & 0x3fU | uVar4 << 6;
        }
        else {
          uVar4 = bVar1 & 0x1f;
        }
        uVar6 = uVar6 & 0x3f | uVar4 << 6;
      }
      if ((local_53 & 1) == 0) {
        iVar5 = -1;
        if (0x7f < uVar6) {
          iVar5 = -2;
        }
        if ((0x7ff < uVar6) && (iVar5 = -4, uVar6 < 0x10000)) {
          iVar5 = -3;
        }
        local_58 = iVar5 + local_58;
        if (local_58 == 0) {
          local_58 = 0;
        }
        else if (local_58 < local_2c) {
          if (*(char *)(local_30 + local_58) < -0x40) {
LAB_00fe45d4:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(local_30,local_2c,0,local_58,&DAT_018a940c);
          }
        }
        else if (local_58 != local_2c) goto LAB_00fe45d4;
      }
    }
    local_6c = 1;
    uVar6 = local_58;
    local_64 = local_58;
  }
joined_r0x00fe4634:
  local_68 = uVar6;
  if (local_6c == 1) {
    uVar7 = FUN_010ceb84(param_2 + local_64,param_3 - local_64);
    iVar5 = (int)((ulonglong)uVar7 >> 0x20);
    if ((iVar5 == 0) || (*(char *)((int)uVar7 + iVar5 + -1) != '>')) {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0x10;
      return;
    }
    uVar8 = FUN_010ceb84(param_2,uVar6);
    param_3 = iVar5 - 1;
    param_2 = (int)uVar7;
  }
  else {
    uVar8 = 1;
  }
  uVar6 = param_3;
  do {
    uVar9 = FUN_00fb737c(0x40,param_2,uVar6);
    uVar6 = (uint)(uVar9 >> 0x20);
    if ((uVar9 & 1) == 0) break;
    if ((uVar6 < param_3) && (*(char *)(param_2 + uVar6) == '@')) {
      param_1[1] = uVar6;
      *param_1 = param_2;
      param_1[2] = param_2 + uVar6 + 1;
      param_1[3] = param_3 - (uVar6 + 1);
      *(undefined8 *)(param_1 + 4) = uVar8;
      return;
    }
  } while (uVar6 <= param_3);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

