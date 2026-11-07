// FUN_01119600 @ 01119600 size=1088 calls_out=11 calls_in=0
// strings: boser::led_manageropen/boser/boser/src/led_manager.rsevent open/boser/boser/src/led_manager.rs:152event open/boser/boser/src/led_manager.rs:63 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::led_manageropen/boser/boser/src/led_manager.rsevent open/boser/boser/src/led_manager.rs:152event open/boser/boser/src/led_manager.rs:63 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01119600(uint *param_1,uint *param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 **ppuVar8;
  uint ***pppuVar9;
  undefined4 *puVar10;
  uint ***local_8c;
  code *local_88;
  uint *local_84;
  undefined *local_80;
  undefined4 ****local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 ***local_6c;
  undefined **local_68;
  uint *local_64;
  undefined4 **local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint ***local_48;
  undefined4 ****local_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint **local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x6e)) {
  case 0:
    uVar7 = (uint)*(byte *)((int)param_2 + 0x6d);
    *param_2 = param_2[0x1a];
    pppuVar9 = (uint ***)(param_2 + 0x1b);
    *(byte *)pppuVar9 = *(byte *)((int)param_2 + 0x6d);
    uVar6 = (uint)*(byte *)(param_2[0x1a] + 0x30);
    if (uVar6 != uVar7) {
      if ((DAT_01d50f88 < 3) &&
         (((DAT_01d4c7c0 - 1 < 2 ||
           ((DAT_01d4c7c0 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c7b8), cVar3 != '\0')))) &&
          (iVar4 = FUN_01aaa278(DAT_01d4c7b8), iVar4 != 0)))) {
        local_5c = *(uint *)(DAT_01d4c7b8 + 0x20);
        if (local_5c == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1f97c);
        }
        local_58 = *(undefined4 *)(DAT_01d4c7b8 + 0x24);
        local_54 = *(undefined4 *)(DAT_01d4c7b8 + 0x28);
        local_68 = &local_80;
        local_84 = (uint *)(DAT_01d4c7b8 + 0x1c);
        local_60 = (undefined4 **)*local_84;
        local_6c = &local_60;
        local_8c = (uint ***)&local_6c;
        local_88 = (code *)0x1;
        local_7c = &local_48;
        local_50 = 0;
        local_64 = (uint *)&DAT_01d2ea4c;
        local_80 = &DAT_005b0b55;
        local_44 = (undefined4 ****)FUN_00ba809c;
        local_48 = pppuVar9;
        FUN_01aaaecc(DAT_01d4c7b8,&local_8c);
        iVar4 = DAT_01d4c7b8;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_2c = *(undefined4 *****)(DAT_01d4c7b8 + 0x14);
          local_28 = *(undefined1 **)(DAT_01d4c7b8 + 0x18);
          local_30 = (uint **)&DAT_00000003;
          DataMemoryBarrier(0xb);
          puVar10 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar10 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar10[3])(pcVar1,&local_30);
          if (iVar5 != 0) {
            FUN_01aaa328(iVar4,pcVar1,puVar10[4],&local_30,&local_8c);
          }
        }
      }
      else {
        iVar4 = DAT_01d4c7b8;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_74 = *(undefined4 *)(DAT_01d4c7b8 + 0x14);
          local_70 = *(undefined4 *)(DAT_01d4c7b8 + 0x18);
          local_78 = 3;
          DataMemoryBarrier(0xb);
          puVar10 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar10 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar10[3])(pcVar1,&local_78);
          if (iVar5 != 0) {
            local_64 = (uint *)(DAT_01d4c7b8 + 0x1c);
            local_60 = (undefined4 **)*local_64;
            local_5c = *(uint *)(DAT_01d4c7b8 + 0x20);
            if (local_5c == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1f97c);
            }
            local_30 = (uint **)&local_60;
            local_6c = &local_30;
            local_58 = *(undefined4 *)(DAT_01d4c7b8 + 0x24);
            local_50 = 0;
            local_54 = *(undefined4 *)(DAT_01d4c7b8 + 0x28);
            local_2c = &local_48;
            local_68 = (undefined **)&DAT_00000001;
            local_28 = &DAT_01d2ea4c;
            local_44 = &local_8c;
            local_48 = (uint ***)&DAT_005b0b55;
            local_88 = FUN_00ba809c;
            local_8c = pppuVar9;
            FUN_01aaa328(iVar4,pcVar1,puVar10[4],&local_78,&local_6c);
          }
        }
      }
      FUN_00ada164(&local_40,(char)param_2[0x1b],*(undefined4 *)*param_2);
      param_2[1] = local_40;
      param_2[2] = uStack_3c;
      param_2[3] = uStack_38;
      *(undefined1 *)(param_2 + 10) = 0;
      param_2[4] = *param_2;
      goto switchD_01119620_caseD_3;
    }
LAB_011199b4:
    ppuVar8 = (undefined4 **)0x4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f98c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f98c);
  case 3:
switchD_01119620_caseD_3:
    FUN_01117068(&local_60,param_2 + 1,param_3);
    uVar6 = local_5c;
    ppuVar8 = local_60;
    if ((char)local_60 == '\x05') {
      *(undefined1 *)param_1 = 5;
      uVar2 = 3;
      goto LAB_011199e0;
    }
    FUN_00ba6dc4(param_2 + 1);
    if (((uint)ppuVar8 & 0xff) == 4) {
      uVar6 = *param_2;
      uVar7 = (uint)(byte)param_2[0x1b];
      *(byte *)(uVar6 + 0x30) = (byte)param_2[0x1b];
      goto LAB_011199b4;
    }
    uVar7 = uVar6 >> 8;
    uVar6 = (uint)ppuVar8 >> 8 | uVar6 << 0x18;
  }
  *param_1 = (uint)ppuVar8 & 0xff | uVar6 << 8;
  param_1[1] = uVar7 << 8 | uVar6 >> 0x18;
  uVar2 = 1;
LAB_011199e0:
  *(undefined1 *)((int)param_2 + 0x6e) = uVar2;
  return;
}

