// FUN_018f8bdc @ 018f8bdc size=1144 calls_out=22 calls_in=1
// strings: InconsistentComponents

void FUN_018f8bdc(undefined4 *param_1,int *param_2,undefined4 param_3,byte ***param_4)

{
  byte ****ppppbVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  char *pcVar12;
  byte ***pppbVar13;
  char *pcVar14;
  undefined8 uVar15;
  byte ****local_58;
  code *local_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  byte ***local_40;
  int local_3c;
  char local_38;
  uint local_34;
  byte ***local_30;
  int local_2c;
  uint local_28;
  
  iVar4 = (*(code *)param_2[0x29])(param_3,param_4);
  if (iVar4 == 0) {
    *(undefined1 *)(param_1 + 1) = 0x1a;
    *param_1 = &DAT_8000001c;
    FUN_018f9278(param_2);
    return;
  }
  iVar4 = param_2[1];
  pcVar14 = *(char **)(&DAT_01d33ed4 + *param_2 * 4);
  pppbVar13 = *(byte ****)(&DAT_00568e88 + (uint)*(byte *)param_2[0x28] * 4);
  if (param_4 == (byte ***)0x0) {
    local_48._4_4_ = (code *)0x1;
    local_48._0_4_ = (byte ***)0x0;
  }
  else {
    local_48._4_4_ = (code *)FUN_01298504(param_4,1);
    local_48._0_4_ = param_4;
    if (local_48._4_4_ == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_4);
    }
  }
  FUN_01bed4e2(local_48._4_4_,param_3,param_4);
  local_40 = param_4;
  uVar15 = FUN_00703dd4(&local_48);
  iVar6 = (int)((ulonglong)uVar15 >> 0x20);
  pbVar5 = (byte *)uVar15;
  if (iVar6 == 0) {
LAB_018f8e00:
    FUN_01b46fd8(iVar4);
  }
  else {
    local_48 = uVar15;
    if (((int)pppbVar13 - 0x2cbU < 2) || (pppbVar13 == (byte ***)0x19f)) {
      FUN_00703b44(&local_58,pbVar5,iVar6,0x198);
      pcVar2 = local_54;
      if (local_58 == (byte ****)0x0) {
        iVar6 = FUN_01b47ba8();
        if (iVar6 == 0) {
          pcVar12 = &DAT_0051d665;
        }
        else {
          pcVar12 = (char *)FUN_00705238(iVar6,pppbVar13);
          if (pcVar12 == (char *)0x0) {
            iVar6 = FUN_01b455d0(iVar6);
            pcVar12 = (char *)0x0;
            if (iVar6 != 1) {
              pcVar12 = "InconsistentComponents";
            }
          }
        }
        if (pcVar12 == (char *)0x0) {
          cVar3 = '\0';
          local_48._4_4_ = pcVar2;
          goto LAB_018f8e70;
        }
        FUN_01b46fd8(pcVar2);
      }
      else {
        FUN_00704260(&local_48,pbVar5,iVar6,pppbVar13);
        if ((byte ***)local_48 == (byte ***)0x0) {
          uVar7 = *pbVar5 - 2 & 0xff;
          if (uVar7 < 6) {
            cVar3 = (&DAT_00538ab4)[uVar7];
            if (cVar3 == '\x06') goto LAB_018f8e00;
          }
          else {
            cVar3 = '\x05';
          }
LAB_018f8e70:
          local_40 = pppbVar13;
          local_3c = (int)local_48._4_4_;
          local_38 = cVar3;
          if ((int)pppbVar13 < 0x2cc) {
            if (pppbVar13 == (byte ***)0x19f) {
              pcVar12 = "";
            }
            else {
              if (pppbVar13 != (byte ***)0x2cb) {
LAB_018f901c:
                local_54 = FUN_012fce60;
                local_58 = &local_30;
                local_30 = pppbVar13;
                    /* WARNING: Subroutine does not return */
                FUN_012fb100(&DAT_005a0fbf,&local_58,&DAT_01c06624);
              }
              pcVar12 = &DAT_00528c36;
            }
          }
          else if (pppbVar13 == (byte ***)0x2cc) {
            pcVar12 = 
            "\x02.//[consistency] already confirmed that there are no more dot segments[consistency] loop condition of the previous loopdeflatebrinternal error: entered unreachable code: this case should be handled by the callerInvalidUriimage/image/svg+xmltext/event-stream"
            ;
          }
          else {
            if (pppbVar13 != (byte ***)0x3b4) goto LAB_018f901c;
            pcVar12 = 
            "\x03\x04\x05OutputLengthErrorRsaSignerschemeEcdsaSignerEd25519SignerRsaSigningKeyEcdsaSigningKeyEd25519SigningKey"
            ;
          }
          goto LAB_018f8ec4;
        }
      }
LAB_018f8df8:
      thunk_FUN_01be4678(pbVar5);
      goto LAB_018f8e00;
    }
    if (pppbVar13 != (byte ***)0x3b4) goto LAB_018f8df8;
    FUN_00703b44(&local_48,pbVar5,iVar6,0x3b4);
    if ((byte ***)local_48 != (byte ***)0x0) {
      if (iVar6 == 0x20) {
        iVar6 = FUN_01b47d00(0x3b4,0,pbVar5,0x20);
        cVar3 = '\x04';
        if (iVar6 != 0) goto LAB_018f8e44;
      }
      goto LAB_018f8df8;
    }
    cVar3 = '\0';
    iVar6 = (int)local_48._4_4_;
LAB_018f8e44:
    pcVar12 = 
    "\x03\x04\x05OutputLengthErrorRsaSignerschemeEcdsaSignerEd25519SignerRsaSigningKeyEcdsaSigningKeyEd25519SigningKey"
    ;
    local_40 = (byte ***)0x3b4;
    local_3c = iVar6;
    local_38 = cVar3;
LAB_018f8ec4:
    iVar6 = local_3c;
    if (*pcVar12 == *pcVar14) {
      iVar8 = FUN_01b47ffc(iVar4,0);
      if (iVar8 == 0) goto LAB_018f8fd4;
      iVar9 = FUN_01b485c0();
      if (iVar9 != 1) {
LAB_018f8fcc:
        FUN_01b47028(iVar8);
        goto LAB_018f8fd4;
      }
      local_34 = 0;
      iVar9 = FUN_01b4865c(iVar8,iVar6);
      if (iVar9 != 1) goto LAB_018f8fcc;
      iVar9 = FUN_01b4883c(iVar8,0,&local_34);
      if (iVar9 != 1) goto LAB_018f8fcc;
      FUN_018a7af8(&local_30,local_34);
      iVar9 = local_2c;
      iVar10 = FUN_01b4883c(iVar8,local_2c,&local_34);
      if (iVar10 != 1) {
        FUN_0134bd64(local_30,iVar9);
        goto LAB_018f8fcc;
      }
      if (local_34 < local_28) {
        local_28 = local_34;
      }
      local_58 = (byte ****)local_30;
      local_54 = (code *)local_2c;
      uStack_50 = local_28;
      uVar15 = FUN_00703dd4();
      iVar10 = (int)((ulonglong)uVar15 >> 0x20);
      iVar9 = (int)uVar15;
      FUN_01b47028(iVar8);
      if (iVar9 == 0) goto LAB_018f8fd4;
      FUN_0190def0(&local_58,iVar9,iVar10);
      if (iVar10 != 0) {
        thunk_FUN_01be4678(iVar9);
      }
    }
    else {
LAB_018f8fd4:
      local_58 = (byte ****)0x80000000;
    }
    FUN_01b46fd8(iVar6);
    thunk_FUN_01be4678(pbVar5);
    ppppbVar1 = local_58;
    FUN_01b46fd8(iVar4);
    if (ppppbVar1 != (byte ****)0x80000000) {
      param_1[1] = local_58;
      param_1[2] = local_54;
      param_1[3] = uStack_50;
      param_1[4] = uStack_4c;
      puVar11 = (undefined1 *)0x80000029;
      goto LAB_018f8e18;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0x1a;
  puVar11 = &DAT_8000001c;
LAB_018f8e18:
  *param_1 = puVar11;
  FUN_01b46fd8(param_2[3]);
  thunk_FUN_01be4678(param_2);
  return;
}

