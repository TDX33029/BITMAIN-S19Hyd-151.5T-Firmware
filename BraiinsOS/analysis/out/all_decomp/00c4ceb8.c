// FUN_00c4ceb8 @ 00c4ceb8 size=1652 calls_out=19 calls_in=2
// strings: secs_since_epoch | nanos_since_epoch | nanos_since_epoch | secs_since_epoch | secs_since_epoch | nanos_since_epoch

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c4ceb8(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_r11;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  int *local_54;
  char *local_48;
  undefined1 local_44;
  undefined4 local_40;
  int *local_3c;
  int *local_38;
  uint local_34;
  char *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  uVar8 = *(uint *)(param_2 + 0x14);
  if (uVar8 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar9 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar8);
      if ((0x17 < uVar9 - 9) || ((1 << (uVar9 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar9 != 0x5b) {
          if (uVar9 != 0x7b) {
            local_54 = (int *)FUN_00c7f220(param_2,&uStack_25,&DAT_01873e28);
            goto LAB_00c4d354;
          }
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) == '\0') {
LAB_00c4d404:
            local_40 = (char **)0x18;
            uVar4 = FUN_00c629ac(param_2,&local_40);
            *param_1 = uVar4;
            param_1[2] = &DAT_3b9aca00;
            return;
          }
          *(uint *)(param_2 + 0x14) = uVar8 + 1;
          local_44 = 1;
          bVar11 = false;
          bVar10 = false;
          piVar7 = (int *)0x7b;
          local_48 = param_2;
          goto LAB_00c4cfac;
        }
        cVar1 = param_2[0x24];
        param_2[0x24] = cVar1 + -1;
        if ((char)(cVar1 + -1) == '\0') goto LAB_00c4d404;
        *(uint *)(param_2 + 0x14) = uVar8 + 1;
        local_2c = CONCAT31(local_2c._1_3_,1);
        local_30 = param_2;
        FUN_00c63a28(&local_40,&local_30);
        if ((char)local_40 == '\x01') goto LAB_00c4d15c;
        if (local_40._1_1_ != '\x01') {
          uVar4 = 0;
LAB_00c4d334:
          piVar7 = (int *)FUN_00f2c2f0(uVar4,&uStack_25,&DAT_01873e28);
          goto LAB_00c4d160;
        }
        FUN_00c7efcc(&local_40,local_30);
        if (local_40 == (char **)&DAT_00000001) {
LAB_00c4d15c:
          piVar7 = local_3c;
LAB_00c4d160:
          local_54 = piVar7;
          piVar7 = (int *)&DAT_3b9aca00;
        }
        else {
          FUN_00c63a28(&local_40,&local_30);
          unaff_r11 = local_34;
          if ((char)local_40 == '\x01') goto LAB_00c4d15c;
          if (local_40._1_1_ != '\x01') {
            uVar4 = 1;
            goto LAB_00c4d334;
          }
          uVar12 = FUN_00c7f5d8(local_30);
          piVar7 = (int *)(uVar12 >> 0x20);
          if ((uVar12 & 1) != 0) goto LAB_00c4d160;
          uVar8 = (uint)((ulonglong)((uint)piVar7 >> 9) * 0x44b83 >> 0x20);
          bVar10 = CARRY4((uint)local_38,uVar8 >> 7);
          if (CARRY4(local_34,(uint)bVar10)) {
            piVar7 = (int *)FUN_00c4c3ec("overflow deserializing SystemTime epoch offsetan array of length 16"
                                         ,0x2e,local_34 + bVar10);
            goto LAB_00c4d160;
          }
          local_54 = local_38;
          if (0x3b9ac9ffffffffff < uVar12) {
            uVar8 = uVar8 >> 7;
            local_54 = (int *)((int)local_38 + uVar8);
            unaff_r11 = local_34 + CARRY4((uint)local_38,uVar8);
            if (CARRY4(local_34,(uint)CARRY4((uint)local_38,uVar8))) goto LAB_00c4d500;
            piVar7 = piVar7 + uVar8 * -250000000;
          }
        }
        param_2[0x24] = param_2[0x24] + '\x01';
        piVar6 = (int *)FUN_00c63be8(param_2);
        if (piVar7 != (int *)&DAT_3b9aca00) goto LAB_00c4d268;
        if (piVar6 == (int *)0x0) goto LAB_00c4d354;
        iVar5 = *piVar6;
        if (iVar5 != 1) goto LAB_00c4d2b4;
        FUN_009b8520(piVar6 + 1);
        goto LAB_00c4d34c;
      }
      uVar8 = uVar8 + 1;
      *(uint *)(param_2 + 0x14) = uVar8;
    } while (*(uint *)(param_2 + 0x10) != uVar8);
  }
  local_40 = (char **)0x5;
  uVar4 = FUN_00c629ac(param_2,&local_40);
  *param_1 = uVar4;
  param_1[2] = &DAT_3b9aca00;
  return;
LAB_00c4cfac:
  FUN_011bd334(&local_40,&local_48);
  if ((char)local_40 == '\x01') {
LAB_00c4d23c:
    piVar6 = local_3c;
LAB_00c4d248:
    local_54 = piVar6;
    piVar7 = (int *)&DAT_3b9aca00;
LAB_00c4d24c:
    param_2[0x24] = param_2[0x24] + '\x01';
    piVar6 = (int *)FUN_00c63e14(param_2);
    if (piVar7 == (int *)&DAT_3b9aca00) {
      if (piVar6 != (int *)0x0) {
        iVar5 = *piVar6;
        if (iVar5 == 1) {
          FUN_009b8520(piVar6 + 1);
        }
        else {
LAB_00c4d2b4:
          if ((iVar5 == 0) && (piVar6[2] != 0)) {
            thunk_FUN_016d3fb4(piVar6[1]);
          }
        }
LAB_00c4d34c:
        thunk_FUN_016d3fb4(piVar6);
      }
    }
    else {
LAB_00c4d268:
      if (piVar6 == (int *)0x0) {
        if ((int)unaff_r11 < 0) {
          uVar4 = FUN_00c4c3ec("overflow deserializing SystemTime",0x21);
          *param_1 = uVar4;
          param_1[2] = &DAT_3b9aca00;
          return;
        }
        *param_1 = local_54;
        param_1[1] = unaff_r11;
        param_1[2] = piVar7;
        return;
      }
      local_54 = piVar6;
    }
LAB_00c4d354:
    uVar4 = FUN_011da0d4(local_54,param_2);
    *param_1 = uVar4;
    param_1[2] = &DAT_3b9aca00;
    return;
  }
  if (local_40._1_1_ != '\x01') {
    if (!bVar10) {
      local_2c = 0x10;
      local_3c = &DAT_0157d360;
      local_40 = &local_30;
      local_30 = "secs_since_epoch";
      piVar6 = (int *)FUN_00f56780(&DAT_0057a25d,&local_40);
      goto LAB_00c4d248;
    }
    if (bVar11) {
      uVar8 = (uint)((ulonglong)((uint)piVar7 >> 9) * 0x44b83 >> 0x20);
      bVar10 = CARRY4((uint)local_54,uVar8 >> 7);
      if (!CARRY4(unaff_r11,(uint)bVar10)) {
        if ((int *)0x3b9ac9ff < piVar7) {
          uVar8 = uVar8 >> 7;
          bVar11 = CARRY4((uint)local_54,uVar8);
          local_54 = (int *)((int)local_54 + uVar8);
          bVar10 = CARRY4(unaff_r11,(uint)bVar11);
          unaff_r11 = unaff_r11 + bVar11;
          if (bVar10) {
LAB_00c4d500:
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0);
          }
          piVar7 = piVar7 + uVar8 * -250000000;
        }
        goto LAB_00c4d24c;
      }
      piVar6 = (int *)FUN_00c4c3ec("overflow deserializing SystemTime epoch offsetan array of length 16"
                                   ,0x2e,unaff_r11 + bVar10);
    }
    else {
      local_2c = 0x11;
      local_3c = &DAT_0157d360;
      local_40 = &local_30;
      local_30 = "nanos_since_epoch";
      piVar6 = (int *)FUN_00f56780(&DAT_0057a25d,&local_40);
    }
    goto LAB_00c4d248;
  }
  iVar5 = *(int *)(local_48 + 0x14);
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  *(int *)(local_48 + 0x14) = iVar5 + 1;
  FUN_0157e384(&local_40,local_48 + 0xc);
  piVar3 = local_38;
  piVar6 = local_3c;
  if (local_40 == (char **)&SUB_00000002) goto LAB_00c4d248;
  if (local_38 != (int *)&DAT_00000010) {
    if (local_38 == (int *)&DAT_00000011) {
      iVar5 = thunk_FUN_016dd50a(local_3c,"nanos_since_epoch",0x11);
      pcVar2 = local_48;
      if (iVar5 == 0) {
        if (bVar11) {
          local_2c = 0x11;
          local_30 = "nanos_since_epoch";
LAB_00c4d3e4:
          local_3c = &DAT_0157d360;
          local_40 = &local_30;
          piVar6 = (int *)FUN_00f56780(&DAT_00582dbd,&local_40);
          goto LAB_00c4d248;
        }
        piVar7 = (int *)FUN_011be240(local_48);
        if (piVar7 == (int *)0x0) {
          uVar12 = FUN_00c7f5d8(pcVar2);
          piVar7 = (int *)(uVar12 >> 0x20);
          if ((uVar12 & 1) == 0) {
            bVar11 = true;
            goto LAB_00c4cfac;
          }
        }
        piVar6 = piVar7;
        goto LAB_00c4d248;
      }
    }
LAB_00c4d384:
    piVar6 = (int *)FUN_00c49874(piVar6,piVar3,&DAT_0187338c);
    goto LAB_00c4d248;
  }
  iVar5 = thunk_FUN_016dd50a(local_3c,"secs_since_epoch",0x10);
  pcVar2 = local_48;
  if (iVar5 != 0) goto LAB_00c4d384;
  if (bVar10) {
    local_2c = 0x10;
    local_30 = "secs_since_epoch";
    goto LAB_00c4d3e4;
  }
  piVar6 = (int *)FUN_011be240(local_48);
  if (piVar6 != (int *)0x0) {
    local_3c = piVar6;
    goto LAB_00c4d23c;
  }
  FUN_00c7efcc(&local_40,pcVar2);
  if (local_40 == (char **)&DAT_00000001) goto LAB_00c4d23c;
  bVar10 = true;
  local_54 = local_38;
  unaff_r11 = local_34;
  goto LAB_00c4cfac;
}

