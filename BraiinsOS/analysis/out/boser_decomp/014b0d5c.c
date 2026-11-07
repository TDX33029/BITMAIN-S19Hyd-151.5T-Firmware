// FUN_014b0d5c @ 014b0d5c size=1076 calls_out=10 calls_in=1
// strings: STATUSUnexpectedInvalidPath | STATUSUnexpectedInvalidPath | MsgParseIpAddrLoopbackV4LoopbackV6 | DescriptionCallsMaxMin | idlast_updatedlast_ticknext_tickran | internal error: entered unreachable code

int FUN_014b0d5c(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 local_64;
  undefined4 *local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar5 = *param_2;
  bVar6 = true;
  FUN_01ac6cbc(uVar5,"{",1);
  local_64 = 0x200;
  local_60 = param_2;
  local_5c = param_1;
  FUN_006bc51c(&local_50,uVar5,"STATUSUnexpectedInvalidPath",6);
  if ((char)local_50 == '\x04') {
    FUN_01ac6cbc(*param_2,":",1);
    FUN_01ac6cbc(*param_2,&DAT_0053340d,1);
    for (iVar9 = 0; iVar9 != 4; iVar9 = iVar9 + 4) {
      if (!bVar6) {
        FUN_01ac6cbc(*param_2,",",1);
      }
      puVar10 = *(uint **)((int)&local_5c + iVar9);
      FUN_01ac6cbc(*param_2,"{",1);
      local_58 = 0x200;
      uVar2 = puVar10[10];
      local_54 = param_2;
      FUN_006bc51c(&local_50,*param_2,"STATUSUnexpectedInvalidPath",6);
      if ((char)local_50 != '\x04') goto LAB_014b1150;
      FUN_01ac6cbc(*param_2,":",1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)uVar2) {
      case '\0':
        pcVar4 = "W";
        break;
      case '\x01':
        pcVar4 = "I";
        break;
      case '\x02':
        pcVar4 = "S";
        break;
      case '\x03':
        pcVar4 = "E";
      }
      FUN_006bc51c(&local_50,*param_2,pcVar4,1);
      iVar11 = 0;
      if ((char)local_50 != '\x04') {
        iVar11 = FUN_01966f50(local_50,local_4c);
      }
      if (iVar11 != 0) {
        return iVar11;
      }
      uVar2 = puVar10[2];
      uVar3 = puVar10[3];
      iVar11 = FUN_00697b64(&local_58,&DAT_0056d998,4);
      puVar1 = local_54;
      if (iVar11 != 0) {
        return iVar11;
      }
      if ((char)local_58 != '\0') {
LAB_014b1160:
        local_50 = 10;
        iVar9 = FUN_01966fbc(&local_50,0,0);
        return iVar9;
      }
      uVar7 = *puVar10;
      uVar12 = puVar10[1];
      if (local_58._1_1_ != '\x01') {
        FUN_01ac6cbc(*local_54,",",1);
      }
      local_58._0_2_ = CONCAT11(2,(char)local_58);
      FUN_006bc51c(&local_50,*puVar1,&DAT_0056cb30,4,uVar2,uVar3);
      if ((char)local_50 != '\x04') goto LAB_014b1150;
      FUN_01ac6cbc(*puVar1,":",1);
      if ((uVar7 & 1) != 0) {
        uVar12 = uVar12 + 300;
      }
      uVar5 = *puVar1;
      uVar13 = FUN_019ce0bc(&local_50,uVar12);
      FUN_01ac6cbc(uVar5,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      iVar11 = FUN_014ad064(&local_58,"MsgParseIpAddrLoopbackV4LoopbackV6",3,puVar10[5],puVar10[6]);
      if (iVar11 != 0) {
        return iVar11;
      }
      if ((char)local_58 != '\0') goto LAB_014b1160;
      iVar11 = FUN_014ad064(&local_58,"DescriptionCallsMaxMin",0xb,puVar10[8],puVar10[9]);
      if (iVar11 != 0) {
        return iVar11;
      }
      if (((local_58 & 0xff00) != 0) && ((local_58 & 1) == 0)) {
        FUN_01ac6cbc(*local_54,"}",1);
      }
      bVar6 = false;
    }
    FUN_01ac6cbc(*param_2,"]",1);
    if (*(int *)(param_1 + 0x30) != -0x80000000) {
      uVar5 = *(undefined4 *)(param_1 + 0x34);
      uVar8 = *(undefined4 *)(param_1 + 0x38);
      FUN_01ac6cbc(*param_2,",",1);
      local_64._0_2_ = CONCAT11(2,(undefined1)local_64);
      FUN_006bc51c(&local_50,*param_2,uVar5,uVar8);
      if ((char)local_50 != '\x04') goto LAB_014b1150;
      FUN_01ac6cbc(*param_2,":",1);
      iVar9 = FUN_014acd60(param_1 + 0x40,param_2);
      if (iVar9 != 0) {
        return iVar9;
      }
    }
    iVar9 = FUN_014ad148(&local_64,"idlast_updatedlast_ticknext_tickran",2,1);
    if (iVar9 == 0) {
      if ((local_64 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffc0);
      }
      if ((local_64 & 0xff00) == 0) {
        return 0;
      }
      FUN_01ac6cbc(*local_60,"}",1);
      return 0;
    }
  }
  else {
LAB_014b1150:
    iVar9 = FUN_01966f50(local_50,local_4c);
  }
  return iVar9;
}

