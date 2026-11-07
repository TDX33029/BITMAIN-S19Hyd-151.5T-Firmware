// FUN_005ee4a0 @ 005ee4a0 size=660 calls_out=2 calls_in=0
// strings: SmallIndexError | attemptedUnicodeWordBoundaryError | SmallIndexError | attemptedUnicodeWordBoundaryError

undefined4 FUN_005ee4a0(undefined4 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_50;
  int local_4c;
  undefined1 *local_48;
  undefined1 local_41;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 **local_2c;
  char local_28;
  char local_27;
  
  uVar7 = *param_2;
  iVar8 = param_2[1];
  pcVar6 = *(code **)(iVar8 + 0xc);
  iVar2 = (*pcVar6)(uVar7,&DAT_003ced53,0xc);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar6)(uVar7,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      local_50 = param_1;
      uVar1 = (*pcVar6)(uVar7,"SmallIndexError",0xf);
      local_3c = (undefined *)((uint)local_3c._2_2_ << 0x10);
      local_3c = (undefined *)CONCAT31(local_3c._1_3_,uVar1);
      local_40 = param_2;
      FUN_00fb2258(&local_40,"attemptedUnicodeWordBoundaryError",9,&local_50,FUN_016a5a58);
      uVar3 = (uint)local_3c & 0xff;
      if (local_3c._1_1_ == '\x01' && uVar3 == 0) {
        if ((*(byte *)((int)local_40 + 10) & 0x80) == 0) {
          uVar3 = (**(code **)(local_40[1] + 0xc))(*local_40," }",2);
        }
        else {
          uVar3 = (**(code **)(local_40[1] + 0xc))(*local_40,"}",1);
        }
      }
      else if (local_3c._1_1_ != '\0') {
        return 1;
      }
    }
    else {
      iVar2 = (*pcVar6)(uVar7,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_48 = &local_41;
      local_38 = param_2[2];
      local_34 = param_2[3];
      local_40 = &local_50;
      local_3c = &DAT_01880dc4;
      local_41 = 1;
      local_50 = uVar7;
      local_4c = iVar8;
      local_30 = param_1;
      local_28 = FUN_00fb1f64(local_40,"SmallIndexError",0xf);
      local_2c = &local_40;
      local_27 = '\0';
      FUN_00fb2258(&local_2c,"attemptedUnicodeWordBoundaryError",9,&local_30,FUN_016a5a58);
      if (local_27 == '\x01' && local_28 == '\0') {
        if ((*(byte *)((int)local_2c + 10) & 0x80) == 0) {
          puVar4 = *local_2c;
          uVar7 = 2;
          pcVar6 = (code *)local_2c[1][3];
          pcVar5 = " }";
        }
        else {
          puVar4 = *local_2c;
          uVar7 = 1;
          pcVar6 = (code *)local_2c[1][3];
          pcVar5 = "}";
        }
        iVar2 = (*pcVar6)(puVar4,pcVar5,uVar7);
        if (iVar2 != 0) {
          return 1;
        }
      }
      else if ((local_27 != '\0') || (local_28 != '\0')) {
        return 1;
      }
      uVar3 = (**(code **)(local_3c + 0xc))(local_40,&DAT_00414a81,2);
    }
    if (uVar3 == 0) {
      uVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
      return uVar7;
    }
  }
  return 1;
}

