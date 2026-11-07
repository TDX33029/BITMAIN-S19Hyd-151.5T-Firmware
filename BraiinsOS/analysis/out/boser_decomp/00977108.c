// FUN_00977108 @ 00977108 size=436 calls_out=5 calls_in=1
// strings: {     'major': 2;     'minor': 0;     'patch': 0;     'advanced_settings_file_hash': '5fe935d6f8e466ef19d09044a46b672e928315e90a82039ae3f386041d552ed6' }  | major | BUG: Missing `major` in advanced settings schema version file | minor | BUG: Missing `minor` in advanced settings schema version file | patch

void FUN_00977108(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int unaff_r10;
  undefined4 uVar11;
  int unaff_r11;
  bool bVar12;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  uint local_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  
  FUN_019664a4(&local_40,
               "{\n    \"major\": 2,\n    \"minor\": 0,\n    \"patch\": 0,\n    \"advanced_settings_file_hash\": \"5fe935d6f8e466ef19d09044a46b672e928315e90a82039ae3f386041d552ed6\"\n}\n"
               ,0x9a);
  if ((char)local_40 == '\x06') {
    local_58 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: Cannot deserialize advanced settings schema version file",0x3d,&local_58,
                 &DAT_01c0c780,&DAT_01c0c790);
  }
  local_58 = local_40;
  local_54 = local_3c;
  local_50 = uStack_38;
  uStack_4c = uStack_34;
  iStack_48 = iStack_30;
  iStack_44 = iStack_2c;
  pcVar2 = (char *)0x0;
  uVar6 = local_40 & 0xff;
  if (uVar6 == 5) {
    pcVar2 = (char *)FUN_0196b3a8(local_3c,uStack_38,"major",5);
  }
  pcVar7 = "";
  if (pcVar2 == (char *)0x0) {
    pcVar2 = pcVar7;
  }
  if (*pcVar2 == '\x02') {
    iStack_30 = *(int *)(pcVar2 + 8);
    iStack_2c = *(int *)(pcVar2 + 0xc);
  }
  puVar3 = &DAT_01c0c7a0;
  pcVar1 = "BUG: Missing `major` in advanced settings schema version file";
  if (*pcVar2 == '\x02' && (iStack_30 == 0 && iStack_2c == 0)) {
    uVar8 = *(undefined4 *)(pcVar2 + 0x10);
    uVar9 = *(undefined4 *)(pcVar2 + 0x14);
    pcVar2 = (char *)0x0;
    if (uVar6 == 5) {
      pcVar2 = (char *)FUN_0196b3a8(local_54,local_50,"minor",5);
    }
    if (pcVar2 == (char *)0x0) {
      pcVar2 = pcVar7;
    }
    if (*pcVar2 == '\x02') {
      unaff_r10 = *(int *)(pcVar2 + 8);
      unaff_r11 = *(int *)(pcVar2 + 0xc);
    }
    puVar3 = &DAT_01c0c7b0;
    pcVar1 = "BUG: Missing `minor` in advanced settings schema version file";
    if (*pcVar2 == '\x02' && (unaff_r10 == 0 && unaff_r11 == 0)) {
      uVar11 = *(undefined4 *)(pcVar2 + 0x10);
      pcVar1 = (char *)0x0;
      uVar10 = *(undefined4 *)(pcVar2 + 0x14);
      if (uVar6 == 5) {
        pcVar1 = (char *)FUN_0196b3a8(local_54,local_50,"patch",5);
      }
      if (pcVar1 != (char *)0x0) {
        pcVar7 = pcVar1;
      }
      puVar3 = &DAT_01c0c7c0;
      bVar12 = false;
      if (*pcVar7 == '\x02') {
        bVar12 = *(int *)(pcVar7 + 8) == 0 && *(int *)(pcVar7 + 0xc) == 0;
      }
      pcVar1 = "BUG: Missing `patch` in advanced settings schema version file";
      if (bVar12) {
        uVar4 = *(undefined4 *)(pcVar7 + 0x10);
        uVar5 = *(undefined4 *)(pcVar7 + 0x14);
        *param_1 = uVar8;
        param_1[1] = uVar9;
        param_1[2] = uVar11;
        param_1[3] = uVar10;
        param_1[4] = uVar4;
        param_1[5] = uVar5;
        FUN_00db4764(&local_58);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(pcVar1,0x3d,puVar3);
}

