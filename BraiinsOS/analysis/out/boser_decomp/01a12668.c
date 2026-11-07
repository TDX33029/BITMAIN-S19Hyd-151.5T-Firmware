// FUN_01a12668 @ 01a12668 size=1004 calls_out=11 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

int FUN_01a12668(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  undefined4 ***local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 ***local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 ****local_7c;
  code *local_78;
  undefined4 *local_74;
  undefined *local_70;
  undefined4 ***local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 ****local_5c;
  undefined **local_58;
  undefined4 *local_54;
  undefined4 ***local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 ***local_38;
  undefined4 ****local_34;
  undefined4 ****local_30;
  undefined4 ***local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 9)) {
  case 0:
    uVar3 = *param_1;
    iVar6 = param_1[1];
    param_1[7] = uVar3;
    param_1[8] = iVar6;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d29e30);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d29e30);
  case 3:
    uVar3 = param_1[7];
    iVar6 = param_1[8];
  }
  iVar6 = (**(code **)(iVar6 + 0xc))(uVar3);
  uVar7 = 3;
  if (iVar6 == 0) {
    FUN_01139b38(param_1[7],param_1[8]);
    local_50 = (undefined4 ***)param_1[3];
    iStack_4c = param_1[4];
    uStack_48 = param_1[5];
    uStack_44 = param_1[6];
    local_40 = 3;
    FUN_01a14c7c(&local_a8,param_1[2],&local_50);
    if (local_98 != 5) {
      local_90 = local_a8;
      uStack_8c = uStack_a4;
      uStack_88 = uStack_a0;
      uStack_84 = uStack_9c;
      iStack_80 = local_98;
      if ((DAT_01d50f88 < 5) &&
         (((DAT_01d506d8 - 1 < 2 ||
           ((DAT_01d506d8 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d506d0), cVar2 != '\0')))) &&
          (iVar4 = FUN_01aaa278(DAT_01d506d0), iVar4 != 0)))) {
        if (*(int *)(DAT_01d506d0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29e40);
        }
        local_58 = &local_70;
        uStack_48 = *(undefined4 *)(DAT_01d506d0 + 0x24);
        uStack_44 = *(undefined4 *)(DAT_01d506d0 + 0x28);
        local_74 = (undefined4 *)(DAT_01d506d0 + 0x1c);
        local_50 = (undefined4 ***)*local_74;
        local_7c = &local_5c;
        local_40 = 0;
        local_78 = (code *)0x1;
        local_6c = &local_38;
        local_38 = &local_90;
        local_54 = (undefined4 *)&DAT_01d2ea4c;
        local_70 = &DAT_005897b5;
        local_34 = (undefined4 ****)FUN_01a05bf8;
        local_5c = &local_50;
        iStack_4c = *(int *)(DAT_01d506d0 + 0x20);
        FUN_01aaaecc(DAT_01d506d0,&local_7c);
        iVar4 = DAT_01d506d0;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_2c = *(undefined4 ****)(DAT_01d506d0 + 0x14);
          local_28 = *(undefined1 **)(DAT_01d506d0 + 0x18);
          local_30 = (undefined4 ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          puVar8 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar8 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar8[3])(pcVar1,&local_30);
          if (iVar5 != 0) {
            FUN_01aaa328(iVar4,pcVar1,puVar8[4],&local_30,&local_7c);
          }
        }
      }
      else {
        iVar4 = DAT_01d506d0;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_64 = *(undefined4 *)(DAT_01d506d0 + 0x14);
          local_60 = *(undefined4 *)(DAT_01d506d0 + 0x18);
          local_68 = 1;
          DataMemoryBarrier(0xb);
          puVar8 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar8 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar8[3])(pcVar1,&local_68);
          if (iVar5 != 0) {
            local_54 = (undefined4 *)(DAT_01d506d0 + 0x1c);
            if (*(int *)(DAT_01d506d0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29e40);
            }
            local_5c = &local_30;
            uStack_48 = *(undefined4 *)(DAT_01d506d0 + 0x24);
            local_40 = 0;
            uStack_44 = *(undefined4 *)(DAT_01d506d0 + 0x28);
            local_2c = &local_38;
            local_58 = (undefined **)&DAT_00000001;
            local_28 = &DAT_01d2ea4c;
            local_34 = &local_7c;
            local_38 = (undefined4 ***)&DAT_005897b5;
            local_78 = FUN_01a05bf8;
            local_7c = &local_90;
            local_50 = (undefined4 ***)*local_54;
            iStack_4c = *(int *)(DAT_01d506d0 + 0x20);
            local_30 = &local_50;
            FUN_01aaa328(iVar4,pcVar1,puVar8[4],&local_68,&local_5c);
          }
        }
      }
    }
    uVar7 = 1;
    FUN_0193c71c(param_1 + 2);
  }
  *(undefined1 *)(param_1 + 9) = uVar7;
  return iVar6;
}

