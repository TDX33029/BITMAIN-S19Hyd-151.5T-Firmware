// FUN_00f56eac @ 00f56eac size=1332 calls_out=16 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

bool FUN_00f56eac(int param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined4 ***local_1068;
  int local_1064;
  undefined4 local_1060;
  undefined4 local_105c;
  undefined4 local_1058;
  undefined2 local_64;
  undefined1 local_62;
  undefined4 ****local_60;
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  undefined *puStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 ****local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined4 ****local_34;
  undefined4 ****local_30;
  undefined1 *local_2c;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  puVar9 = (undefined2 *)(param_1 + 0x100c);
  uVar10 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
  iVar6 = param_1 + 0x18;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x100e)) {
  case 0:
    *puVar9 = 0;
    FUN_01bed4e2(iVar6,param_1 + 0x838,0x7c8);
    *(undefined1 *)(param_1 + 0x7e4) = 0;
    *(int *)(param_1 + 0x7e0) = param_1 + 0x1008;
    *(undefined2 **)(param_1 + 0x1000) = puVar9;
    *(int *)(param_1 + 0x1004) = iVar6;
    iVar4 = iVar6;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19804);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19804);
  case 3:
    puVar9 = *(undefined2 **)(param_1 + 0x1000);
    iVar4 = *(int *)(param_1 + 0x1004);
  }
  FUN_01119b48(&local_1068,puVar9,iVar4,param_2);
  uVar2 = local_1060;
  uVar8 = local_1060 & 0xff;
  if (uVar8 == 6) {
    *(undefined1 *)(param_1 + 0x100e) = 3;
    FUN_019ec558((int)uVar10,uVar5);
  }
  else {
    local_64 = local_1060._1_2_;
    local_62 = local_1060._3_1_;
    FUN_00f28240(iVar6);
    iVar6 = uVar8 - 3;
    if (uVar8 < 3 || iVar6 == 0) {
      iVar6 = 0;
    }
    if (iVar6 == 0) {
      if (uVar8 != 3) {
        local_1060 = CONCAT13(local_62,CONCAT21(local_64,(char)uVar2));
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_0056c868,0x20,&local_1068,&DAT_01c19324,&DAT_01c19814);
      }
    }
    else {
      if (iVar6 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("all branches are disabled and there is no else branch",0x6b,&DAT_01c19834);
      }
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d4c668 - 1 < 2 ||
           ((DAT_01d4c668 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c660), cVar3 != '\0')))) &&
          (iVar6 = FUN_01aaa278(DAT_01d4c660), iVar6 != 0)))) {
        local_1064 = *(int *)(DAT_01d4c660 + 0x20);
        if (local_1064 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19824);
        }
        local_3c = &puStack_54;
        local_1060 = *(uint *)(DAT_01d4c660 + 0x24);
        local_105c = *(undefined4 *)(DAT_01d4c660 + 0x28);
        puStack_58 = (undefined4 *)(DAT_01d4c660 + 0x1c);
        local_1068 = (undefined4 ***)*puStack_58;
        local_60 = &local_40;
        local_38 = (undefined4 *)&DAT_01d2ea4c;
        local_1058 = 0;
        uStack_5c = 1;
        puStack_54 = &DAT_003f2e9c;
        local_50 = 0x73;
        local_40 = &local_1068;
        FUN_01aaaecc(DAT_01d4c660,&local_60);
        iVar6 = DAT_01d4c660;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_30 = *(undefined4 *****)(DAT_01d4c660 + 0x14);
          local_2c = *(undefined1 **)(DAT_01d4c660 + 0x18);
          local_34 = (undefined4 ****)0x2;
          DataMemoryBarrier(0xb);
          puVar7 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar7 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar4 = (*(code *)puVar7[3])(pcVar1,&local_34);
          if (iVar4 != 0) {
            FUN_01aaa328(iVar6,pcVar1,puVar7[4],&local_34,&local_60);
          }
        }
      }
      else {
        iVar6 = DAT_01d4c660;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_48 = *(undefined4 *)(DAT_01d4c660 + 0x14);
          local_44 = *(undefined4 *)(DAT_01d4c660 + 0x18);
          local_4c = 2;
          DataMemoryBarrier(0xb);
          puVar7 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar7 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar4 = (*(code *)puVar7[3])(pcVar1,&local_4c);
          if (iVar4 != 0) {
            local_38 = (undefined4 *)(DAT_01d4c660 + 0x1c);
            local_1068 = (undefined4 ***)*local_38;
            local_1064 = *(int *)(DAT_01d4c660 + 0x20);
            if (local_1064 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19824);
            }
            local_1060 = *(uint *)(DAT_01d4c660 + 0x24);
            local_105c = *(undefined4 *)(DAT_01d4c660 + 0x28);
            local_40 = &local_34;
            local_3c = (undefined **)&DAT_00000001;
            local_30 = &local_60;
            local_1058 = 0;
            local_2c = &DAT_01d2ea4c;
            local_60 = (undefined4 ****)&DAT_003f2e9c;
            uStack_5c = 0x73;
            local_34 = &local_1068;
            FUN_01aaa328(iVar6,pcVar1,puVar7[4],&local_4c,&local_40);
          }
        }
      }
    }
    FUN_005faf6c(param_1 + 0x1008);
    *(undefined1 *)(param_1 + 0x100e) = 1;
    FUN_019ec558((int)uVar10,uVar5);
    local_1068 = (undefined4 ***)0x2;
    FUN_00f32104(param_1,&local_1068);
  }
  return uVar8 == 6;
}

