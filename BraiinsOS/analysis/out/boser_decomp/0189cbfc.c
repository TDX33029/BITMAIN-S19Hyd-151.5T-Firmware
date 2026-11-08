// FUN_0189cbfc @ 0189cbfc size=1696 calls_out=12 calls_in=8
// strings: {recursion limit reached} | {recursion limit reached} | closure

undefined4 FUN_0189cbfc(int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *local_58;
  int local_54;
  undefined1 *local_50;
  int iStack_4c;
  undefined1 *puStack_48;
  int iStack_44;
  undefined1 *local_40;
  int local_3c;
  undefined1 *puStack_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  int local_24;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
LAB_0189d088:
    iVar3 = param_1[4];
    if (iVar3 == 0) {
      return 0;
    }
LAB_0189d094:
    uVar9 = FUN_012fb940(iVar3,&DAT_005258a1,1);
    return uVar9;
  }
  iVar6 = param_1[3];
  param_1[3] = iVar6 + 1U;
  if (500 < iVar6 + 1U) {
    if ((param_1[4] != 0) &&
       (iVar3 = FUN_012fb940(param_1[4],"{recursion limit reached}",0x19), iVar3 != 0)) {
      return 1;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_0189cda0;
  }
  uVar7 = param_1[2];
  if ((uint)param_1[1] <= uVar7) goto LAB_0189cd70;
  bVar1 = *(byte *)(iVar3 + uVar7);
  uVar10 = uVar7 + 1;
  param_1[2] = uVar10;
  if (bVar1 < 0x4d) {
    if (bVar1 != 0x42) {
      if (bVar1 == 0x43) {
        FUN_0189d414(&local_30,param_1,0x73);
        iVar3 = local_24;
        puVar11 = local_28;
        if ((char)local_30 == '\x01') goto LAB_0189ceb8;
        local_54 = local_24;
        local_58 = local_28;
        if (*param_1 == 0) {
          if (param_1[4] == 0) {
            return 0;
          }
          uVar9 = FUN_012fb940(param_1[4],&DAT_005258a1,1);
          return uVar9;
        }
        FUN_0189d4b0(&local_30,param_1);
        if (local_30 != (undefined1 *)0x0) {
          local_50 = local_30;
          iStack_4c = local_2c;
          puStack_48 = local_28;
          iStack_44 = local_24;
          if (param_1[4] == 0) goto LAB_0189ce80;
          iVar6 = FUN_0189d714(&local_50);
          if (iVar6 != 0) {
            return 1;
          }
          puVar5 = (undefined4 *)param_1[4];
          if ((puVar5 == (undefined4 *)0x0 || puVar11 == (undefined1 *)0x0 && iVar3 == 0) ||
             ((puVar5[2] & 0x800000) != 0)) goto LAB_0189ce80;
          iVar3 = (**(code **)(puVar5[1] + 0xc))(*puVar5,&DAT_0053340d,1);
          if (iVar3 != 0) {
            return 1;
          }
          iVar3 = FUN_012fda48(&local_58,param_1[4]);
          if (iVar3 != 0) {
            return 1;
          }
          iVar3 = (**(code **)(((undefined4 *)param_1[4])[1] + 0xc))
                            (*(undefined4 *)param_1[4],"]",1);
          goto LAB_0189ce78;
        }
LAB_0189d0fc:
        iVar3 = param_1[4];
        cVar2 = (char)local_2c;
LAB_0189cec0:
        if (iVar3 != 0) {
          pcVar8 = "{recursion limit reached}";
          if (cVar2 == '\0') {
            pcVar8 = 
            "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05";
          }
          uVar9 = 0x10;
          if (cVar2 != '\0') {
            uVar9 = 0x19;
          }
          iVar3 = FUN_012fb940(iVar3,pcVar8,uVar9);
          if (iVar3 != 0) {
            return 1;
          }
        }
        *(char *)(param_1 + 1) = cVar2;
        goto LAB_0189cda0;
      }
      if (bVar1 != 0x49) goto LAB_0189cd70;
      iVar3 = FUN_0189cbfc(param_1,param_2);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = 0;
      if (param_2 != 0) {
        iVar3 = param_1[4];
      }
      if ((param_2 != 0 && iVar3 != 0) && (iVar3 = FUN_012fb940(iVar3,"::",2), iVar3 != 0)) {
        return 1;
      }
      if ((param_1[4] != 0) && (iVar3 = FUN_012fb940(param_1[4],"<",1), iVar3 != 0)) {
        return 1;
      }
      iVar3 = FUN_0189e278(param_1);
LAB_0189ce40:
      if (iVar3 != 0) {
        return 1;
      }
      goto LAB_0189ce48;
    }
    iVar3 = FUN_0189d30c(param_1,param_2);
  }
  else {
    if (bVar1 < 0x58) {
      if (bVar1 == 0x4d) {
LAB_0189cda8:
        FUN_0189d414(&local_30,param_1,0x73);
        if ((char)local_30 == '\x01') {
LAB_0189ceb8:
          iVar3 = param_1[4];
          cVar2 = local_30._1_1_;
          goto LAB_0189cec0;
        }
        FUN_0189dbc8(param_1);
        goto LAB_0189cdcc;
      }
      if ((bVar1 != 0x4e) || ((uint)param_1[1] <= uVar10)) {
LAB_0189cd70:
        if ((param_1[4] != 0) && (iVar3 = FUN_012fb940(param_1[4],&DAT_005687f8,0x10), iVar3 != 0))
        {
          return 1;
        }
        *(undefined1 *)(param_1 + 1) = 0;
LAB_0189cda0:
        *param_1 = 0;
        return 0;
      }
      puVar11 = (undefined1 *)(uint)*(byte *)(iVar3 + uVar10);
      param_1[2] = uVar7 + 2;
      if (((undefined1 *)0x19 < puVar11 + -0x41) &&
         (puVar4 = puVar11 + -0x61, puVar11 = &DAT_00110000, (undefined1 *)0x19 < puVar4))
      goto LAB_0189cd70;
      iVar3 = FUN_0189cbfc(param_1,param_2);
      if (iVar3 != 0) {
        return 1;
      }
      if (*param_1 == 0) {
        if (param_1[4] == 0) {
          return 0;
        }
        iVar3 = FUN_012fb940(param_1[4],"::",2);
        if (iVar3 != 0) {
          return 1;
        }
        if (*param_1 == 0) {
          iVar3 = param_1[4];
          if (iVar3 == 0) {
            return 0;
          }
          goto LAB_0189d094;
        }
      }
      FUN_0189d414(&local_30,param_1,0x73);
      iVar3 = local_24;
      puVar4 = local_28;
      if ((char)local_30 == '\x01') goto LAB_0189ceb8;
      if (*param_1 == 0) goto LAB_0189d088;
      FUN_0189d4b0(&local_30,param_1);
      if (local_30 == (undefined1 *)0x0) goto LAB_0189d0fc;
      local_40 = local_30;
      local_3c = local_2c;
      puStack_38 = local_28;
      local_34 = local_24;
      if (puVar11 == &DAT_00110000) {
        iVar3 = 0;
        if (local_2c != 0 || local_24 != 0) {
          iVar3 = param_1[4];
        }
        if (local_2c == 0 && local_24 == 0 || iVar3 == 0) goto LAB_0189ce80;
        iVar3 = FUN_012fb940(iVar3,"::",2);
        if (iVar3 != 0) {
          return 1;
        }
        if (param_1[4] == 0) goto LAB_0189ce80;
        iVar3 = FUN_0189d714(&local_40);
        goto LAB_0189ce78;
      }
      if ((param_1[4] != 0) && (iVar6 = FUN_012fb940(param_1[4],"::{",3), iVar6 != 0)) {
        return 1;
      }
      if (puVar11 == (undefined1 *)0x43) {
        iVar6 = param_1[4];
        if (iVar6 != 0) {
          uVar9 = 7;
          pcVar8 = "closure";
LAB_0189d1b4:
          iVar6 = FUN_012fb940(iVar6,pcVar8,uVar9);
LAB_0189d1d4:
          if (iVar6 != 0) {
            return 1;
          }
        }
      }
      else if (puVar11 == (undefined1 *)0x53) {
        iVar6 = param_1[4];
        if (iVar6 != 0) {
          uVar9 = 4;
          pcVar8 = &DAT_0056ce1c;
          goto LAB_0189d1b4;
        }
      }
      else {
        local_30 = puVar11;
        if (param_1[4] != 0) {
          iVar6 = FUN_012fbb84(&local_30);
          goto LAB_0189d1d4;
        }
      }
      iVar6 = param_1[4];
      if (local_3c != 0 || local_34 != 0) {
        if (iVar6 == 0) goto LAB_0189ce80;
        iVar6 = FUN_012fb940(iVar6,":",1);
        if (iVar6 != 0) {
          return 1;
        }
        if (param_1[4] == 0) goto LAB_0189ce80;
        iVar6 = FUN_0189d714(&local_40);
        if (iVar6 != 0) {
          return 1;
        }
        iVar6 = param_1[4];
      }
      if (iVar6 == 0) goto LAB_0189ce80;
      iVar6 = FUN_012fb940(iVar6,"#",1);
      if (iVar6 != 0) {
        return 1;
      }
      local_2c = iVar3;
      local_30 = puVar4;
      if (param_1[4] == 0) goto LAB_0189ce80;
      iVar3 = FUN_012fd074(&local_30);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = param_1[4];
      if (iVar3 == 0) goto LAB_0189ce80;
      pcVar8 = "}";
    }
    else {
      if (bVar1 == 0x58) goto LAB_0189cda8;
      if (bVar1 != 0x59) goto LAB_0189cd70;
LAB_0189cdcc:
      if ((param_1[4] != 0) && (iVar3 = FUN_012fb940(param_1[4],"<",1), iVar3 != 0)) {
        return 1;
      }
      iVar3 = FUN_0189dc34(param_1);
      if (iVar3 != 0) {
        return 1;
      }
      if (bVar1 != 0x4d) {
        if ((param_1[4] != 0) && (iVar3 = FUN_012fb940(param_1[4],&DAT_0056edc8,4), iVar3 != 0)) {
          return 1;
        }
        iVar3 = FUN_0189cbfc(param_1,0);
        goto LAB_0189ce40;
      }
LAB_0189ce48:
      iVar3 = param_1[4];
      if (iVar3 == 0) goto LAB_0189ce80;
      pcVar8 = ">";
    }
    iVar3 = FUN_012fb940(iVar3,pcVar8,1);
  }
LAB_0189ce78:
  if (iVar3 != 0) {
    return 1;
  }
LAB_0189ce80:
  if (*param_1 != 0) {
    param_1[3] = param_1[3] + -1;
  }
  return 0;
}

