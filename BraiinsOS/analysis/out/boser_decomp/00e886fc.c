// FUN_00e886fc @ 00e886fc size=1100 calls_out=5 calls_in=1
// strings: web_theme | Light | Autob | dashboard_density | Compact | Default

int FUN_00e886fc(int param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint local_38;
  undefined4 *local_34;
  uint local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  param_2[3] = param_2[3] + 1;
  *(undefined1 *)(param_2 + 4) = 0;
  FUN_01ac6cbc(*param_2,"{",1);
  local_38 = 0x100;
  local_34 = param_2;
  iVar5 = FUN_00ec08a8(&local_38,&DAT_0051d9f5,6);
  puVar3 = local_34;
  if (iVar5 != 0) {
LAB_00e88958:
    return iVar5;
  }
  if ((char)local_38 != '\x01') {
    FUN_01ac6cbc(*local_34,0x5312dd,2);
    puVar3[3] = puVar3[3] + 1;
    *(undefined1 *)(puVar3 + 4) = 0;
    FUN_01ac6cbc(*puVar3,"{",1);
    local_30 = 0x100;
    local_2c = puVar3;
    cVar1 = *(char *)(param_1 + 9);
    iVar5 = FUN_00ec08a8(&local_30,"web_theme",9);
    puVar4 = local_2c;
    if (iVar5 != 0) goto LAB_00e88958;
    if ((char)local_30 != '\x01') {
      FUN_01ac6cbc(*local_2c,0x5312dd,2);
      if (cVar1 == '\x03') {
        FUN_01ac6cbc(*puVar4,&DAT_0056d030,4);
      }
      else {
        if (cVar1 == '\0') {
          uVar7 = 5;
          pcVar6 = "Light";
        }
        else {
          if (cVar1 == '\x01') {
            pcVar6 = "DarkP\x04";
          }
          else {
            pcVar6 = "Autob";
          }
          uVar7 = 4;
        }
        FUN_014b5d34(&local_28,*puVar4,pcVar6,uVar7);
        iVar5 = 0;
        if ((char)local_28 != '\x04') {
          iVar5 = FUN_01966f50(local_28,local_24);
        }
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      bVar2 = *(byte *)(param_1 + 8);
      *(undefined1 *)(puVar4 + 4) = 1;
      iVar5 = FUN_00ec08a8(&local_30,"dashboard_density",0x11);
      puVar4 = local_2c;
      if (iVar5 != 0) goto LAB_00e88958;
      if ((char)local_30 != '\x01') {
        FUN_01ac6cbc(*local_2c,0x5312dd,2);
        if (bVar2 == 2) {
          FUN_01ac6cbc(*puVar4,&DAT_0056d030,4);
        }
        else {
          if ((bVar2 & 1) == 0) {
            pcVar6 = "Default";
          }
          else {
            pcVar6 = "Compact";
          }
          FUN_014b5d34(&local_28,*puVar4,pcVar6,7);
          iVar5 = 0;
          if ((char)local_28 != '\x04') {
            iVar5 = FUN_01966f50(local_28,local_24);
          }
          if (iVar5 != 0) {
            return iVar5;
          }
        }
        cVar1 = *(char *)(param_1 + 10);
        *(undefined1 *)(puVar4 + 4) = 1;
        iVar5 = FUN_00ec08a8(&local_30,"web_languagestruct PublicStorage with 3 elements",0xc);
        puVar4 = local_2c;
        if (iVar5 != 0) goto LAB_00e88958;
        if ((char)local_30 != '\x01') {
          FUN_01ac6cbc(*local_2c,0x5312dd,2);
          if (cVar1 == '\x03') {
            FUN_01ac6cbc(*puVar4,&DAT_0056d030,4);
          }
          else {
            if (cVar1 == '\0') {
              pcVar6 = "En";
            }
            else if (cVar1 == '\x01') {
              pcVar6 = "Ru";
            }
            else {
              pcVar6 = "Zh";
            }
            FUN_014b5d34(&local_28,*puVar4,pcVar6,2);
            iVar5 = 0;
            if ((char)local_28 != '\x04') {
              iVar5 = FUN_01966f50(local_28,local_24);
            }
            if (iVar5 != 0) {
              return iVar5;
            }
          }
          *(undefined1 *)(puVar4 + 4) = 1;
          if (((local_30 & 0xff00) != 0) && ((local_30 & 1) == 0)) {
            iVar5 = puVar4[3] + -1;
            puVar4[3] = iVar5;
            FUN_01ac6cbc(*puVar4,"\n",1);
            if (iVar5 != 0) {
              uVar9 = *puVar4;
              uVar7 = puVar4[1];
              uVar8 = puVar4[2];
              do {
                FUN_01ac6cbc(uVar9,uVar7,uVar8);
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            FUN_01ac6cbc(*puVar4,"}",1);
          }
          *(undefined1 *)(puVar3 + 4) = 1;
          if ((local_38 & 0xff00) == 0) {
            return 0;
          }
          if ((local_38 & 1) != 0) {
            return 0;
          }
          iVar5 = puVar3[3] + -1;
          puVar3[3] = iVar5;
          FUN_01ac6cbc(*puVar3,"\n",1);
          if (iVar5 != 0) {
            uVar7 = puVar3[2];
            uVar8 = *puVar3;
            uVar9 = puVar3[1];
            do {
              FUN_01ac6cbc(uVar8,uVar9,uVar7);
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          FUN_01ac6cbc(*puVar3,"}",1);
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d273b0);
}

