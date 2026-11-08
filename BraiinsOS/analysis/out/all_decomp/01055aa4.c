// FUN_01055aa4 @ 01055aa4 size=1200 calls_out=2 calls_in=0
// strings: ProtoErrorop_codeauthoritativetruncationrecursion_desiredrecursion_availableauthentic_datachecking_disabledresponse_codequery_countanswer_countname_server_countUpdateBadQueryCountCharacterDataTooLongLabelOverlapsWithOtherDnsKeyProtocolNot3DomainNameTooLong | ProtoErrorop_codeauthoritativetruncationrecursion_desiredrecursion_availableauthentic_datachecking_disabledresponse_codequery_countanswer_countname_server_countUpdateBadQueryCountCharacterDataTooLongLabelOverlapsWithOtherDnsKeyProtocolNot3DomainNameTooLong | ProtoErrorop_codeauthoritativetruncationrecursion_desiredrecursion_availableauthentic_datachecking_disabledresponse_codequery_countanswer_countname_server_countUpdateBadQueryCountCharacterDataTooLongLabelOverlapsWithOtherDnsKeyProtocolNot3DomainNameTooLong | ProtoErrorop_codeauthoritativetruncationrecursion_desiredrecursion_availableauthentic_datachecking_disabledresponse_codequery_countanswer_countname_server_countUpdateBadQueryCountCharacterDataTooLongLabelOverlapsWithOtherDnsKeyProtocolNot3DomainNameTooLong

undefined4 FUN_01055aa4(int param_1,int *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int local_50;
  int iStack_4c;
  undefined1 *puStack_48;
  undefined1 local_41;
  int *local_40;
  undefined4 local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int **local_2c;
  char local_28;
  char local_27;
  
  iVar10 = *(int *)(param_1 + 4);
  iVar11 = *(int *)(param_1 + 8);
  uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar11 == 0) goto LAB_01055c9c;
  bVar12 = uVar4 == 0;
  uVar4 = 1;
  if (bVar12) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      local_50 = iVar10;
      uVar2 = (**(code **)(param_2[1] + 0xc))
                        (*param_2,
                         "ProtoErrorop_codeauthoritativetruncationrecursion_desiredrecursion_availableauthentic_datachecking_disabledresponse_codequery_countanswer_countname_server_countUpdateBadQueryCountCharacterDataTooLongLabelOverlapsWithOtherDnsKeyProtocolNot3DomainNameTooLong"
                         ,10);
      local_3c = (undefined *)(CONCAT31((int3)((uint)local_3c >> 8),uVar2) & 0xffff00ff);
      local_40 = param_2;
      FUN_00fb2258(&local_40,&DAT_005691b4,4,&local_50,FUN_010447f0);
      uVar4 = (uint)(local_3c._1_1_ | (byte)local_3c);
      if (local_3c._1_1_ == 1 && ((uint)local_3c & 1) == 0) {
        if ((*(byte *)((int)local_40 + 10) & 0x80) == 0) {
          pcVar9 = *(code **)(local_40[1] + 0xc);
          pcVar7 = " }";
          piVar6 = (int *)*local_40;
LAB_01055c6c:
          uVar8 = 2;
        }
        else {
          piVar6 = (int *)*local_40;
          uVar8 = 1;
          pcVar9 = *(code **)(local_40[1] + 0xc);
          pcVar7 = "}";
        }
        uVar4 = (*pcVar9)(piVar6,pcVar7,uVar8);
      }
    }
    else {
      uVar4 = 1;
      iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
      if (iVar5 == 0) {
        local_50 = *param_2;
        iStack_4c = param_2[1];
        local_41 = 1;
        local_38 = param_2[2];
        iStack_34 = param_2[3];
        local_3c = &DAT_01880dc4;
        puStack_48 = &local_41;
        local_40 = &local_50;
        local_30 = iVar10;
        local_28 = FUN_00fb1f64(local_40,
                                "ProtoErrorop_codeauthoritativetruncationrecursion_desiredrecursion_availableauthentic_datachecking_disabledresponse_codequery_countanswer_countname_server_countUpdateBadQueryCountCharacterDataTooLongLabelOverlapsWithOtherDnsKeyProtocolNot3DomainNameTooLong"
                                ,10);
        local_2c = &local_40;
        local_27 = '\0';
        FUN_00fb2258(&local_2c,&DAT_005691b4,4,&local_30,FUN_010447f0);
        if (local_27 == '\x01' && local_28 == '\0') {
          if ((*(byte *)((int)local_2c + 10) & 0x80) == 0) {
            piVar6 = *local_2c;
            uVar8 = 2;
            pcVar9 = (code *)local_2c[1][3];
            pcVar7 = " }";
          }
          else {
            piVar6 = *local_2c;
            uVar8 = 1;
            pcVar9 = (code *)local_2c[1][3];
            pcVar7 = "}";
          }
          iVar5 = (*pcVar9)(piVar6,pcVar7,uVar8);
          if (iVar5 == 0) goto LAB_01055c58;
        }
        else if ((local_27 == '\0') && (local_28 == '\0')) {
LAB_01055c58:
          pcVar9 = *(code **)(local_3c + 0xc);
          pcVar7 = &DAT_00414a81;
          piVar6 = local_40;
          goto LAB_01055c6c;
        }
        uVar4 = 1;
      }
    }
  }
  if (iVar11 != 1) {
    iVar11 = iVar11 * 4 + -4;
    do {
      iVar10 = iVar10 + 4;
      uVar1 = uVar4 & 1;
      uVar4 = 1;
      if (uVar1 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
          uVar4 = 1;
          if (iVar5 == 0) {
            local_50 = iVar10;
            bVar3 = (**(code **)(param_2[1] + 0xc))
                              (*param_2,
                               "ProtoErrorop_codeauthoritativetruncationrecursion_desiredrecursion_availableauthentic_datachecking_disabledresponse_codequery_countanswer_countname_server_countUpdateBadQueryCountCharacterDataTooLongLabelOverlapsWithOtherDnsKeyProtocolNot3DomainNameTooLong"
                               ,10);
            local_3c._0_2_ = (ushort)bVar3;
            local_40 = param_2;
            FUN_00fb2258(&local_40,&DAT_005691b4,4,&local_50,FUN_010447f0);
            uVar4 = (uint)(local_3c._1_1_ | (byte)local_3c);
            if ((local_3c._1_1_ == 1) && (((uint)local_3c & 1) == 0)) {
              if ((*(byte *)((int)local_40 + 10) & 0x80) == 0) {
                pcVar9 = *(code **)(local_40[1] + 0xc);
                piVar6 = (int *)*local_40;
                pcVar7 = " }";
                goto LAB_01055f30;
              }
              piVar6 = (int *)*local_40;
              uVar8 = 1;
              pcVar9 = *(code **)(local_40[1] + 0xc);
              pcVar7 = "}";
              goto LAB_01055f34;
            }
          }
        }
        else {
          local_50 = *param_2;
          iStack_4c = param_2[1];
          local_41 = 1;
          local_38 = param_2[2];
          iStack_34 = param_2[3];
          puStack_48 = &local_41;
          local_3c = &DAT_01880dc4;
          local_40 = &local_50;
          local_30 = iVar10;
          local_28 = FUN_00fb1f64(&local_50,
                                  "ProtoErrorop_codeauthoritativetruncationrecursion_desiredrecursion_availableauthentic_datachecking_disabledresponse_codequery_countanswer_countname_server_countUpdateBadQueryCountCharacterDataTooLongLabelOverlapsWithOtherDnsKeyProtocolNot3DomainNameTooLong"
                                  ,10);
          local_27 = '\0';
          local_2c = &local_40;
          FUN_00fb2258(&local_2c,&DAT_005691b4,4,&local_30,FUN_010447f0);
          if (local_27 == '\x01' && local_28 == '\0') {
            if ((*(byte *)((int)local_2c + 10) & 0x80) == 0) {
              iVar5 = (*(code *)local_2c[1][3])(*local_2c," }",2);
            }
            else {
              iVar5 = (*(code *)local_2c[1][3])(*local_2c,"}",1);
            }
            if (iVar5 == 0) goto LAB_01055f1c;
          }
          else if ((local_27 == '\0') && (local_28 == '\0')) {
LAB_01055f1c:
            pcVar9 = *(code **)(local_3c + 0xc);
            pcVar7 = &DAT_00414a81;
            piVar6 = local_40;
LAB_01055f30:
            uVar8 = 2;
LAB_01055f34:
            uVar4 = (*pcVar9)(piVar6,pcVar7,uVar8);
            goto LAB_01055d54;
          }
          uVar4 = 1;
        }
      }
LAB_01055d54:
      iVar11 = iVar11 + -4;
    } while (iVar11 != 0);
  }
LAB_01055c9c:
  uVar8 = 1;
  if ((uVar4 & 1) == 0) {
    uVar8 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
  }
  return uVar8;
}

