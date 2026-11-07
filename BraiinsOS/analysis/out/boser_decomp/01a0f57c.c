// FUN_01a0f57c @ 01a0f57c size=932 calls_out=9 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

int FUN_01a0f57c(undefined4 *param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  undefined1 local_79;
  undefined4 ***local_78;
  undefined1 *local_74;
  undefined4 *local_70;
  undefined *local_6c;
  byte **local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 **local_58;
  undefined **local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  byte *local_38;
  undefined4 ****local_34;
  undefined4 **local_30;
  byte **local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x15)) {
  case 0:
    uVar3 = param_1[2];
    iVar6 = param_1[3];
    *(undefined1 *)(param_1 + 5) = 1;
    *param_1 = uVar3;
    param_1[1] = iVar6;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d2a4f0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2a4f0);
  case 3:
    uVar3 = *param_1;
    iVar6 = param_1[1];
  }
  iVar6 = (**(code **)(iVar6 + 0xc))(uVar3);
  uVar7 = 3;
  if (iVar6 == 0) {
    FUN_01139b38(*param_1,param_1[1]);
    *(undefined1 *)(param_1 + 5) = 0;
    local_79 = FUN_01a368f8(param_1[4]);
    uVar7 = 1;
    if (local_79 != 2) {
      if (DAT_01d50f88 < 5) {
        if (1 < DAT_01d505f4 - 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xe9,0x1a0fe44);
          (*pcVar1)();
        }
        iVar4 = FUN_01aaa278(DAT_01d505ec);
        if (iVar4 != 0) {
          local_48 = *(int *)(DAT_01d505ec + 0x20);
          if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2a500);
          }
          local_44 = *(undefined4 *)(DAT_01d505ec + 0x24);
          local_40 = *(undefined4 *)(DAT_01d505ec + 0x28);
          local_54 = &local_6c;
          local_70 = (undefined4 *)(DAT_01d505ec + 0x1c);
          local_4c = (undefined4 *)*local_70;
          local_58 = &local_4c;
          local_74 = (undefined1 *)0x1;
          local_68 = &local_38;
          local_78 = &local_58;
          local_38 = &local_79;
          local_3c = 0;
          local_50 = (undefined4 *)&DAT_01d2ea4c;
          local_6c = &DAT_005b616d;
          local_34 = (undefined4 ****)&LAB_01a705e0;
          FUN_01aaaecc(DAT_01d505ec,&local_78);
          iVar4 = DAT_01d505ec;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_2c = *(byte ***)(DAT_01d505ec + 0x14);
            local_28 = *(undefined1 **)(DAT_01d505ec + 0x18);
            local_30 = (undefined4 **)0x1;
            DataMemoryBarrier(0xb);
            puVar8 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar8 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar5 = (*(code *)puVar8[3])(pcVar2,&local_30);
            if (iVar5 != 0) {
              FUN_01aaa328(iVar4,pcVar2,puVar8[4],&local_30,&local_78);
            }
          }
          goto LAB_01a0f7b8;
        }
      }
      iVar4 = DAT_01d505ec;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_60 = *(undefined4 *)(DAT_01d505ec + 0x14);
        local_5c = *(undefined4 *)(DAT_01d505ec + 0x18);
        local_64 = 1;
        DataMemoryBarrier(0xb);
        puVar8 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar5 = (*(code *)puVar8[3])(pcVar2,&local_64);
        if (iVar5 != 0) {
          local_50 = (undefined4 *)(DAT_01d505ec + 0x1c);
          local_4c = (undefined4 *)*local_50;
          local_48 = *(int *)(DAT_01d505ec + 0x20);
          if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2a500);
          }
          local_30 = &local_4c;
          local_44 = *(undefined4 *)(DAT_01d505ec + 0x24);
          local_40 = *(undefined4 *)(DAT_01d505ec + 0x28);
          local_2c = &local_38;
          local_58 = &local_30;
          local_3c = 0;
          local_54 = (undefined **)0x1;
          local_34 = &local_78;
          local_28 = &DAT_01d2ea4c;
          local_38 = &DAT_005b616d;
          local_74 = &LAB_01a705e0;
          local_78 = (undefined4 ***)&local_79;
          FUN_01aaa328(iVar4,pcVar2,puVar8[4],&local_64,&local_58);
        }
      }
    }
  }
LAB_01a0f7b8:
  *(undefined1 *)((int)param_1 + 0x15) = uVar7;
  return iVar6;
}

