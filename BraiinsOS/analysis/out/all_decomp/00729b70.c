// FUN_00729b70 @ 00729b70 size=1016 calls_out=3 calls_in=0
// strings: MsgDuplicate metrics collector registration attempted | Message | ProtoErrorop_codeauthoritativetruncationrecursion_desiredrecursion_availableauthentic_datachecking_disabledresponse_codequery_countanswer_countname_server_countUpdateBadQueryCountCharacterDataTooLongLabelOverlapsWithOtherDnsKeyProtocolNot3DomainNameTooLong | ProtoErrorop_codeauthoritativetruncationrecursion_desiredrecursion_availableauthentic_datachecking_disabledresponse_codequery_countanswer_countname_server_countUpdateBadQueryCountCharacterDataTooLongLabelOverlapsWithOtherDnsKeyProtocolNot3DomainNameTooLong

undefined4 FUN_00729b70(undefined4 *param_1,uint **param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint *puVar7;
  code *pcVar8;
  uint **ppuVar9;
  uint *puVar10;
  uint *puVar11;
  uint *local_4c;
  uint *local_48;
  undefined1 *local_44;
  undefined1 local_3d;
  uint **local_3c;
  undefined4 local_38;
  uint **local_34;
  uint *local_30;
  uint *local_2c;
  uint ***local_28;
  byte local_24;
  char local_23;
  
  puVar7 = (uint *)*param_1;
  uVar3 = 1;
  if ((int)*puVar7 < 0) {
    uVar3 = *puVar7 ^ 0x80000000;
  }
  if (uVar3 == 0) {
    ppuVar9 = (uint **)*param_2;
    puVar10 = param_2[1];
    pcVar8 = (code *)puVar10[3];
    iVar4 = (*pcVar8)(ppuVar9,"Message",7);
    if (iVar4 != 0) {
      return 1;
    }
    bVar1 = *(byte *)((int)param_2 + 10);
  }
  else {
    if (uVar3 != 1) {
      puVar10 = *param_2;
      puVar11 = param_2[1];
      pcVar8 = (code *)puVar11[3];
      iVar4 = (*pcVar8)(puVar10,&DAT_003404ff,5);
      if (iVar4 != 0) {
        return 1;
      }
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar4 = (*pcVar8)(puVar10,"(",1);
        if (iVar4 != 0) {
          return 1;
        }
        local_4c = puVar7 + 1;
        uVar2 = (*pcVar8)(puVar10,
                          "ProtoErrorop_codeauthoritativetruncationrecursion_desiredrecursion_availableauthentic_datachecking_disabledresponse_codequery_countanswer_countname_server_countUpdateBadQueryCountCharacterDataTooLongLabelOverlapsWithOtherDnsKeyProtocolNot3DomainNameTooLong"
                          ,10);
        local_38 = (uint *)((uint)local_38._2_2_ << 0x10);
        local_38 = (uint *)CONCAT31(local_38._1_3_,uVar2);
        local_3c = param_2;
        FUN_00fb2258(&local_3c,&DAT_005691b4,4,&local_4c,FUN_0071fc64);
        uVar3 = (uint)local_38 & 0xff;
        if (local_38._1_1_ == '\x01' && uVar3 == 0) {
          if ((*(byte *)((int)local_3c + 10) & 0x80) == 0) {
            uVar3 = (*(code *)local_3c[1][3])(*local_3c," }",2);
          }
          else {
            uVar3 = (*(code *)local_3c[1][3])(*local_3c,"}",1);
          }
        }
        else if (local_38._1_1_ != '\0') {
          return 1;
        }
      }
      else {
        iVar4 = (*pcVar8)(puVar10,"(\n",2);
        if (iVar4 != 0) {
          return 1;
        }
        local_44 = &local_3d;
        local_3d = 1;
        local_34 = (uint **)param_2[2];
        local_30 = param_2[3];
        local_3c = &local_4c;
        local_38 = (uint *)&DAT_01880dc4;
        local_4c = puVar10;
        local_48 = puVar11;
        local_2c = puVar7 + 1;
        local_24 = FUN_00fb1f64(local_3c,
                                "ProtoErrorop_codeauthoritativetruncationrecursion_desiredrecursion_availableauthentic_datachecking_disabledresponse_codequery_countanswer_countname_server_countUpdateBadQueryCountCharacterDataTooLongLabelOverlapsWithOtherDnsKeyProtocolNot3DomainNameTooLong"
                                ,10);
        local_28 = &local_3c;
        local_23 = '\0';
        FUN_00fb2258(&local_28,&DAT_005691b4,4,&local_2c,FUN_0071fc64);
        uVar3 = (uint)local_24;
        if (local_23 == '\x01' && uVar3 == 0) {
          if ((*(byte *)((int)local_28 + 10) & 0x80) == 0) {
            ppuVar9 = *local_28;
            uVar5 = 2;
            pcVar8 = (code *)local_28[1][3];
            pcVar6 = " }";
          }
          else {
            ppuVar9 = *local_28;
            uVar5 = 1;
            pcVar8 = (code *)local_28[1][3];
            pcVar6 = "}";
          }
          uVar3 = (*pcVar8)(ppuVar9,pcVar6,uVar5);
        }
        else if (local_23 != '\0') {
          return 1;
        }
        if (uVar3 != 0) {
          return 1;
        }
        uVar3 = (**(code **)((int)local_38 + 0xc))(local_3c,&DAT_00414a81,2);
      }
      if (uVar3 == 0) {
        uVar5 = (*(code *)param_2[1][3])(*param_2,&DAT_00418e07,1);
        return uVar5;
      }
      return 1;
    }
    ppuVar9 = (uint **)*param_2;
    puVar10 = param_2[1];
    pcVar8 = (code *)puVar10[3];
    iVar4 = (*pcVar8)(ppuVar9,"MsgDuplicate metrics collector registration attempted",3);
    if (iVar4 != 0) {
      return 1;
    }
    bVar1 = *(byte *)((int)param_2 + 10);
  }
  if ((bVar1 & 0x80) == 0) {
    iVar4 = (*pcVar8)(ppuVar9,"(",1);
    if (iVar4 != 0) {
      return 1;
    }
    iVar4 = FUN_00faa4e8(puVar7[1],puVar7[2],ppuVar9,puVar10);
  }
  else {
    iVar4 = (*pcVar8)(ppuVar9,"(\n",2);
    if (iVar4 != 0) {
      return 1;
    }
    local_34 = &local_4c;
    local_4c = (uint *)CONCAT31(local_4c._1_3_,1);
    local_3c = ppuVar9;
    local_38 = puVar10;
    iVar4 = FUN_00faa4e8(puVar7[1],puVar7[2],&local_3c,&DAT_01880dc4);
    if (iVar4 != 0) {
      return 1;
    }
    iVar4 = FUN_00fb1f64(&local_3c,&DAT_00414a81,2);
  }
  if (iVar4 == 0) {
    uVar5 = (*pcVar8)(ppuVar9,&DAT_00418e07,1);
    return uVar5;
  }
  return 1;
}

