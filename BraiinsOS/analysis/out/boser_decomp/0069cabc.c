// FUN_0069cabc @ 0069cabc size=2832 calls_out=36 calls_in=1
// strings: user_agents | apisd; | first_access_time | max_user_agents | max_endpoints | stats

/* WARNING: Removing unreachable block (ram,0x0069d584) */
/* WARNING: Removing unreachable block (ram,0x0069d4e8) */

void FUN_0069cabc(int param_1,uint ****param_2,uint ****param_3)

{
  uint ****ppppuVar1;
  uint ****ppppuVar2;
  uint ****ppppuVar3;
  uint ****ppppuVar4;
  undefined1 *puVar5;
  char cVar6;
  uint ****ppppuVar7;
  char *pcVar8;
  uint ***pppuVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint ***local_94;
  uint ****local_90;
  uint ****local_8c;
  undefined4 *local_88;
  uint ***local_80;
  uint ****local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint ****local_6c;
  uint ****local_68;
  undefined4 *local_64;
  uint ****local_60;
  uint ****local_5c;
  uint ****local_58;
  code *local_54;
  uint ****local_50;
  uint ****local_4c;
  uint ****local_48;
  code *local_44;
  int local_40;
  uint ****local_38;
  uint ****local_34;
  uint ****local_30;
  uint ****local_2c;
  undefined1 *local_28;
  
  local_2c = (uint ****)thunk_FUN_01be5118(0x80);
  if (local_2c == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x80);
  }
  local_38 = (uint ****)&local_30;
  local_28 = (undefined1 *)0x0;
  local_30 = (uint ****)&DAT_00000080;
  FUN_01ac6cbc(local_38,"{",1);
  local_8c = (uint ****)&local_38;
  local_90 = (uint ****)0x200;
  FUN_006bc51c(&local_50,local_38,"user_agents",0xb);
  if ((char)local_50 == '\x04') {
    FUN_01ac6cbc(local_38,":",1);
    ppppuVar7 = local_38;
    local_50 = *(uint *****)(param_1 + 0x60);
    iVar12 = *(int *)(param_1 + 0x6c);
    local_44 = (code *)((int)local_50 + *(int *)(param_1 + 100) + 1);
    local_48 = local_50 + 1;
    local_4c = (uint ****)(~(uint)*local_50 & 0x80808080);
    local_40 = iVar12;
    FUN_01ac6cbc(local_38,"{",1);
    iVar14 = 0x100;
    if (iVar12 == 0) {
      iVar14 = 0;
      FUN_01ac6cbc(ppppuVar7,"}",1);
    }
    while( true ) {
      uVar15 = FUN_0067cfec(&local_50);
      iVar10 = (int)((ulonglong)uVar15 >> 0x20);
      iVar12 = (int)uVar15;
      if (iVar12 == 0) break;
      if (iVar14 != 0x100) {
        FUN_01ac6cbc(local_38,",",1);
      }
      FUN_006bc51c(&local_60,local_38,*(undefined4 *)(iVar12 + 4),*(undefined4 *)(iVar12 + 8));
      if ((char)local_60 != '\x04') {
        ppppuVar7 = (uint ****)FUN_01966f50(local_60,local_5c);
        goto LAB_0069d0e0;
      }
      FUN_01ac6cbc(local_38,":",1);
      FUN_01ac6cbc(local_38,"{",1);
      local_68 = (uint ****)&local_38;
      local_6c = (uint ****)&DAT_00000100;
      ppppuVar7 = (uint ****)FUN_0069863c(&local_6c,"apisd,",iVar10);
      if (ppppuVar7 != (uint ****)0x0) goto LAB_0069d0e0;
      if ((char)local_6c != '\0') {
LAB_0069d050:
        local_60 = (uint ****)&DAT_0000000a;
        ppppuVar7 = (uint ****)FUN_01966fbc(&local_60,0,0);
        goto LAB_0069d0e0;
      }
      ppppuVar7 = (uint ****)FUN_00698a00(&local_6c,"first_access_time",0x11,iVar10 + 0x20);
      if (ppppuVar7 != (uint ****)0x0) goto LAB_0069d0e0;
      if ((char)local_6c != '\0') goto LAB_0069d050;
      ppppuVar7 = (uint ****)FUN_00698a00(&local_6c,&DAT_00569748,0x10,iVar10 + 0x2c);
      if (ppppuVar7 != (uint ****)0x0) goto LAB_0069d0e0;
      if ((((uint)local_6c & 0xff00) != 0) && (((uint)local_6c & 1) == 0)) {
        FUN_01ac6cbc(*local_68,"}",1);
      }
      iVar14 = 0x200;
    }
    if (iVar14 != 0) {
      FUN_01ac6cbc(local_38,"}",1);
    }
    ppppuVar7 = (uint ****)
                FUN_00697c58(&local_90,"max_user_agents",0xf,*(undefined4 *)(param_1 + 0x80));
    if (ppppuVar7 != (uint ****)0x0) goto LAB_0069d0e0;
    if ((char)local_90 != '\0') {
LAB_0069cf10:
      local_50 = (uint ****)&DAT_0000000a;
      ppppuVar7 = (uint ****)FUN_01966fbc(&local_50,0,0);
      goto LAB_0069d0e0;
    }
    ppppuVar7 = (uint ****)
                FUN_00697c58(&local_90,"max_endpoints",0xd,*(undefined4 *)(param_1 + 0x84));
    if (ppppuVar7 != (uint ****)0x0) goto LAB_0069d0e0;
    if ((char)local_90 != '\0') goto LAB_0069cf10;
    ppppuVar7 = (uint ****)FUN_00697f28(&local_90,"stats",param_1 + 0x40);
    if (ppppuVar7 != (uint ****)0x0) goto LAB_0069d0e0;
    if ((char)local_90 != '\0') goto LAB_0069cf10;
    ppppuVar7 = (uint ****)FUN_00698138(&local_90,param_1 + 0x94);
    if (ppppuVar7 != (uint ****)0x0) goto LAB_0069d0e0;
    if ((char)local_90 != '\0') goto LAB_0069cf10;
    ppppuVar7 = (uint ****)FUN_0069853c(&local_90,param_1 + 0x88);
    if (ppppuVar7 != (uint ****)0x0) goto LAB_0069d0e0;
    if ((((uint)local_90 & 0xff00) != 0) && (((uint)local_90 & 1) == 0)) {
      FUN_01ac6cbc(*local_8c,"}",1);
    }
    puVar5 = local_28;
    ppppuVar7 = local_2c;
    ppppuVar4 = local_30;
    if (local_30 == (uint ****)&DAT_80000000) goto LAB_0069d0ec;
    uVar16 = FUN_019aff98(param_2,param_3);
    iVar12 = (int)(uVar16 >> 0x20);
    pcVar8 = (char *)uVar16;
    if (pcVar8 == (char *)0x0) {
      pppuVar9 = (uint ***)FUN_00adb354(param_2,param_3);
    }
    else {
      FUN_0069f5ac(&local_50,pcVar8,iVar12);
      ppppuVar3 = local_48;
      ppppuVar2 = local_4c;
      ppppuVar1 = local_50;
      if ((char)local_44 == '\x02') {
        local_34 = local_4c;
        local_38 = local_50;
        local_68 = (uint ****)&LAB_019ba78c;
        local_90 = param_2;
        local_8c = param_3;
        local_6c = (uint ****)&local_90;
        FUN_00664898(&local_30,&DAT_0059ec59,&local_6c);
        pppuVar9 = (uint ***)FUN_0069f534(&local_38,&local_30);
      }
      else {
        local_58 = local_48;
        local_5c = local_4c;
        local_54 = local_44;
        local_60 = local_50;
        FUN_01281710(&local_50,local_50,ppppuVar7,puVar5);
        FUN_006926b4(&local_38,&local_50,ppppuVar2,ppppuVar3);
        if ((char)local_38 == '\x04') {
          FUN_019a6110(&local_38,ppppuVar1);
          if ((char)local_38 == '\x04') {
            FUN_01bf01d6(ppppuVar1);
            FUN_0069ff64(&local_50,&local_5c,param_2,param_3);
            if ((char)local_40 == '\x02') {
              pcVar11 = ".";
              if (iVar12 != 0) {
                pcVar11 = pcVar8;
              }
              local_48 = (uint ****)&DAT_00000001;
              iVar14 = 1;
              if (0x1ffffffff < uVar16) {
                iVar14 = iVar12;
              }
              local_4c = (uint ****)&DAT_000001b6;
              local_50 = (uint ****)0x0;
              local_44 = (code *)((uint)local_44 & 0xffff0000);
              FUN_019a581c(&local_30,&local_50,pcVar11,iVar14);
              ppppuVar1 = local_2c;
              if ((char)local_30 == '\x04') {
                FUN_019a60bc(&local_38,local_2c);
                FUN_01bf01d6(ppppuVar1);
              }
              else {
                local_38 = local_30;
                local_34 = local_2c;
              }
              if (((uint)local_38 & 0xff) == 4) {
                FUN_019bb7e0(ppppuVar4,ppppuVar7);
                goto LAB_0069d344;
              }
              local_8c = local_34;
              local_90 = local_38;
              local_2c = (uint ****)&LAB_019ba78c;
              local_6c = param_2;
              local_68 = param_3;
              local_30 = (uint ****)&local_6c;
              FUN_00664898(&local_50,&DAT_0059651e,&local_30);
              pppuVar9 = (uint ***)FUN_0069f534(&local_90,&local_50);
            }
            else {
              local_68 = (uint ****)&LAB_019ba78c;
              local_90 = param_2;
              local_8c = param_3;
              local_6c = (uint ****)&local_90;
              FUN_00664898(&local_30,&DAT_005b42a8,&local_6c);
              pppuVar9 = (uint ***)FUN_0069f48c(&local_50,&local_30);
            }
            goto LAB_0069d15c;
          }
          local_8c = local_34;
          local_90 = local_38;
          local_2c = (uint ****)&LAB_019ba78c;
          local_6c = param_2;
          local_68 = param_3;
          local_30 = (uint ****)&local_6c;
          FUN_00664898(&local_50,&DAT_005b930e,&local_30);
          pppuVar9 = (uint ***)FUN_0069f534(&local_90,&local_50);
        }
        else {
          local_8c = local_34;
          local_90 = local_38;
          local_2c = (uint ****)&LAB_019ba78c;
          local_6c = param_2;
          local_68 = param_3;
          local_30 = (uint ****)&local_6c;
          FUN_00664898(&local_50,&DAT_00578a4c,&local_30);
          pppuVar9 = (uint ***)FUN_0069f534(&local_90,&local_50);
        }
        FUN_006a00e0(&local_60);
      }
    }
LAB_0069d15c:
    FUN_019bb7e0(ppppuVar4,ppppuVar7);
  }
  else {
    ppppuVar7 = (uint ****)FUN_01966f50(local_50,local_4c);
LAB_0069d0e0:
    FUN_019bb7e0(local_30,local_2c);
LAB_0069d0ec:
    pppuVar9 = (uint ***)FUN_0069a804(ppppuVar7);
  }
  local_94 = pppuVar9;
  if ((DAT_01d50f88 < 5) &&
     ((DAT_01d4b67c - 1 < 2 ||
      ((DAT_01d4b67c != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4b674), cVar6 != '\0')))))) {
    iVar12 = FUN_01aaa278(DAT_01d4b674);
    if (iVar12 == 0) goto LAB_0069d320;
    if (*(uint *****)(DAT_01d4b674 + 0x20) == (uint ****)0x0) goto LAB_0069d5b8;
    local_68 = &local_80;
    local_48 = *(uint *****)(DAT_01d4b674 + 0x24);
    local_44 = *(code **)(DAT_01d4b674 + 0x28);
    local_88 = (undefined4 *)(DAT_01d4b674 + 0x1c);
    local_50 = (uint ****)*local_88;
    local_40 = 0;
    local_6c = (uint ****)&local_50;
    local_7c = (uint ****)&local_60;
    local_58 = &local_94;
    local_60 = (uint ****)&local_38;
    local_8c = (uint ****)&DAT_00000001;
    local_90 = (uint ****)&local_6c;
    local_64 = (undefined4 *)&DAT_01d2ea4c;
    local_80 = (uint ***)&DAT_0058ddec;
    local_54 = FUN_00667a08;
    local_5c = (uint ****)&LAB_019ba78c;
    local_4c = *(uint *****)(DAT_01d4b674 + 0x20);
    local_38 = param_2;
    local_34 = param_3;
    FUN_01aaaecc(DAT_01d4b674,&local_90);
    iVar12 = DAT_01d4b674;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_2c = *(uint *****)(DAT_01d4b674 + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4b674 + 0x18);
      local_30 = (uint ****)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      pcVar8 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
        pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar14 = (*(code *)puVar13[3])(pcVar8,&local_30);
      if (iVar14 != 0) {
        FUN_01aaa328(iVar12,pcVar8,puVar13[4],&local_30,&local_90);
      }
    }
  }
  else {
LAB_0069d320:
    iVar12 = DAT_01d4b674;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_74 = *(undefined4 *)(DAT_01d4b674 + 0x14);
      local_70 = *(undefined4 *)(DAT_01d4b674 + 0x18);
      local_78 = 1;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      pcVar8 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
        pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar14 = (*(code *)puVar13[3])(pcVar8,&local_78);
      if (iVar14 != 0) {
        local_64 = (undefined4 *)(DAT_01d4b674 + 0x1c);
        if (*(uint *****)(DAT_01d4b674 + 0x20) == (uint ****)0x0) {
LAB_0069d5b8:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0560c);
        }
        local_2c = (uint ****)&local_38;
        local_48 = *(uint *****)(DAT_01d4b674 + 0x24);
        local_44 = *(code **)(DAT_01d4b674 + 0x28);
        local_40 = 0;
        local_30 = (uint ****)&local_50;
        local_34 = (uint ****)&local_60;
        local_58 = &local_94;
        local_60 = (uint ****)&local_90;
        local_68 = (uint ****)&DAT_00000001;
        local_6c = (uint ****)&local_30;
        local_28 = &DAT_01d2ea4c;
        local_38 = (uint ****)&DAT_0058ddec;
        local_54 = FUN_00667a08;
        local_5c = (uint ****)&LAB_019ba78c;
        local_90 = param_2;
        local_8c = param_3;
        local_50 = (uint ****)*local_64;
        local_4c = *(uint *****)(DAT_01d4b674 + 0x20);
        FUN_01aaa328(iVar12,pcVar8,puVar13[4],&local_78,&local_6c);
      }
    }
  }
  (*(code *)**local_94)();
LAB_0069d344:
  *(undefined1 *)(param_1 + 0xa8) = 0;
  return;
}

