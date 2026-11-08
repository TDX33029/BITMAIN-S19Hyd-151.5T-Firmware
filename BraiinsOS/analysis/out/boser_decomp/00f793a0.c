// FUN_00f793a0 @ 00f793a0 size=1324 calls_out=20 calls_in=0
// strings: boser::bosopen/boser/boser/src/bos.rsevent open/boser/boser/src/bos.rs:125event open/boser/boser/src/bos.rs:432event open/boser/boser/src/bos.rs:471event open/boser/boser/src/bos.rs:464event open/boser/boser/src/bos.rs:454event open/boser/boser/src/bos.rs:459event open/boser/boser/src/bos.rs:450event open/boser/boser/src/bos.rs:446event open/boser/boser/src/bos.rs:456uievent open/boser/boser/src/web/graphql/bosminer/license.rs:120 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::bosopen/boser/boser/src/bos.rsevent open/boser/boser/src/bos.rs:125event open/boser/boser/src/bos.rs:432event open/boser/boser/src/bos.rs:471event open/boser/boser/src/bos.rs:464event open/boser/boser/src/bos.rs:454event open/boser/boser/src/bos.rs:459event open/boser/boser/src/bos.rs:450event open/boser/boser/src/bos.rs:446event open/boser/boser/src/bos.rs:456uievent open/boser/boser/src/web/graphql/bosminer/license.rs:120 | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_00f793a0(int param_1,undefined4 *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 ***local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 ***local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 ****local_64;
  code *local_60;
  undefined4 *local_5c;
  undefined *local_58;
  undefined4 *****local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 ****local_44;
  undefined **local_40;
  undefined4 *local_3c;
  undefined4 ****local_38;
  undefined4 *****local_34;
  undefined4 ***local_30;
  undefined4 *****local_2c;
  undefined1 *local_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar12 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  uVar8 = (undefined4)((ulonglong)uVar12 >> 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x21)) {
  case 0:
    *(undefined1 *)(param_1 + 0x20) = 1;
    FUN_019e6e74(&local_130,&DAT_01c19acc,0,0,100000000,&DAT_01c19acc);
    FUN_01bed4e2(&local_c8,&local_130,0x50);
    FUN_01bed4e2(param_1 + 0x28,&local_c8,0x50);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19adc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19adc);
  case 4:
    uVar9 = *(undefined4 *)(param_1 + 0x24);
    puVar10 = *(undefined **)(param_1 + 0x28);
    goto LAB_00f79498;
  }
  iVar5 = FUN_019e84a0(param_1 + 0x28,*param_2);
  if (iVar5 == 0) {
    FUN_01431b40(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x20) = 0;
    uVar9 = FUN_00b6c8d0(*(int *)(param_1 + 0x18) + 8,*(undefined4 *)(param_1 + 0x1c),
                         *(undefined1 *)(param_1 + 0x22));
    puVar10 = &DAT_01c133f0;
    *(undefined4 *)(param_1 + 0x24) = uVar9;
    *(undefined **)(param_1 + 0x28) = &DAT_01c133f0;
LAB_00f79498:
    (**(code **)(puVar10 + 0xc))(&local_130,uVar9,param_2);
    if (local_130 != (undefined4 ***)0x80000017) {
      local_78 = local_12c;
      uStack_74 = uStack_128;
      uStack_70 = uStack_124;
      uStack_6c = uStack_120;
      uStack_68 = uStack_11c;
      FUN_01139b38(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
      if (local_130 != (undefined4 ***)&DAT_80000016) {
        local_12c = local_78;
        uStack_128 = uStack_74;
        uStack_124 = uStack_70;
        uStack_120 = uStack_6c;
        uStack_11c = uStack_68;
        if ((DAT_01d50f88 < 5) &&
           (((DAT_01d4c680 - 1 < 2 ||
             ((DAT_01d4c680 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c678), cVar4 != '\0')))) &&
            (iVar5 = FUN_01aaa278(DAT_01d4c678), iVar5 != 0)))) {
          iStack_c4 = *(int *)(DAT_01d4c678 + 0x20);
          if (iStack_c4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19aec);
          }
          local_40 = &local_58;
          uStack_c0 = *(undefined4 *)(DAT_01d4c678 + 0x24);
          local_bc = *(undefined4 *)(DAT_01d4c678 + 0x28);
          local_5c = (undefined4 *)(DAT_01d4c678 + 0x1c);
          local_c8 = (undefined4 ***)*local_5c;
          local_44 = &local_c8;
          local_64 = &local_44;
          local_b8 = 0;
          local_60 = (code *)0x1;
          local_54 = &local_38;
          local_3c = (undefined4 *)&DAT_01d2ea4c;
          local_58 = &DAT_0057b62e;
          local_34 = (undefined4 *****)FUN_0121efc4;
          local_38 = &local_130;
          FUN_01aaaecc(DAT_01d4c678,&local_64);
          iVar5 = DAT_01d4c678;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_2c = *(undefined4 ******)(DAT_01d4c678 + 0x14);
            local_28 = *(undefined1 **)(DAT_01d4c678 + 0x18);
            local_30 = (undefined4 ***)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar11 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar11 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar6 = (*(code *)puVar11[3])(pcVar2,&local_30);
            if (iVar6 != 0) {
              FUN_01aaa328(iVar5,pcVar2,puVar11[4],&local_30,&local_64);
            }
          }
        }
        else {
          iVar5 = DAT_01d4c678;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_4c = *(undefined4 *)(DAT_01d4c678 + 0x14);
            local_48 = *(undefined4 *)(DAT_01d4c678 + 0x18);
            local_50 = 1;
            DataMemoryBarrier(0xb);
            puVar11 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar11 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar6 = (*(code *)puVar11[3])(pcVar2,&local_50);
            if (iVar6 != 0) {
              local_3c = (undefined4 *)(DAT_01d4c678 + 0x1c);
              local_c8 = (undefined4 ***)*local_3c;
              iStack_c4 = *(int *)(DAT_01d4c678 + 0x20);
              if (iStack_c4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19aec);
              }
              local_2c = &local_38;
              uStack_c0 = *(undefined4 *)(DAT_01d4c678 + 0x24);
              local_bc = *(undefined4 *)(DAT_01d4c678 + 0x28);
              local_30 = &local_c8;
              local_44 = &local_30;
              local_40 = (undefined **)&DAT_00000001;
              local_34 = &local_64;
              local_b8 = 0;
              local_28 = &DAT_01d2ea4c;
              local_38 = (undefined4 ****)&DAT_0057b62e;
              local_60 = FUN_0121efc4;
              local_64 = &local_130;
              FUN_01aaa328(iVar5,pcVar2,puVar11[4],&local_50,&local_44);
            }
          }
        }
        FUN_00f2b248(&local_130);
      }
      piVar7 = *(int **)(param_1 + 0x18);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011772ac(*(undefined4 *)(param_1 + 0x18));
      }
      *(undefined1 *)(param_1 + 0x21) = 1;
      FUN_019ec558((int)uVar12,uVar8);
      local_130 = (undefined4 ***)0x2;
      FUN_00f317ac(param_1,&local_130);
      return 0;
    }
    uVar3 = 4;
  }
  else {
    uVar3 = 3;
  }
  *(undefined1 *)(param_1 + 0x21) = uVar3;
  FUN_019ec558((int)uVar12,uVar8);
  return 1;
}

