// FUN_014418a0 @ 014418a0 size=900 calls_out=9 calls_in=3
// strings: hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_014418a0(undefined1 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 **ppuVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 ***pppuVar8;
  undefined4 *puVar9;
  undefined4 ****ppppuVar10;
  undefined1 local_cd;
  int ***local_cc;
  undefined1 *local_c8;
  undefined4 *local_c4;
  undefined *local_c0;
  undefined **local_bc;
  undefined4 **local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 ***local_ac;
  undefined **local_a8;
  undefined4 *local_a4;
  undefined *local_a0;
  undefined4 ****local_9c;
  undefined4 **local_98;
  int local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined1 local_7b;
  undefined1 local_78;
  int **local_2c;
  undefined **local_28;
  undefined1 *local_24;
  
  local_cd = param_1;
  if ((DAT_01d50f88 < 4) &&
     (((DAT_01d4eb40 - 1 < 2 ||
       ((DAT_01d4eb40 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4eb38), cVar1 != '\0')))) &&
      (iVar2 = FUN_01aaa278(DAT_01d4eb38), iVar2 != 0)))) {
    local_94 = *(int *)(DAT_01d4eb38 + 0x20);
    if (local_94 == 0) {
LAB_01441c14:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf8434);
    }
    local_a8 = &local_c0;
    local_90 = *(undefined4 *)(DAT_01d4eb38 + 0x24);
    uStack_8c = *(undefined4 *)(DAT_01d4eb38 + 0x28);
    local_c4 = (undefined4 *)(DAT_01d4eb38 + 0x1c);
    local_98 = (undefined4 **)*local_c4;
    local_ac = &local_98;
    local_cc = (int ***)&local_ac;
    local_88 = 0;
    ppppuVar10 = &local_cc;
    local_c8 = (undefined1 *)0x1;
    local_bc = &local_a0;
    local_a0 = &local_cd;
    local_a4 = (undefined4 *)&DAT_01d2ea4c;
    local_c0 = &DAT_005969f7;
    local_9c = (undefined4 ****)&LAB_0141457c;
    FUN_01aaaecc(DAT_01d4eb38,ppppuVar10);
    iVar2 = DAT_01d4eb38;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 2)) goto LAB_01441b70;
    local_28 = *(undefined ***)(DAT_01d4eb38 + 0x14);
    local_24 = *(undefined1 **)(DAT_01d4eb38 + 0x18);
    local_2c = (int **)0x2;
    DataMemoryBarrier(0xb);
    puVar9 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar9 = &DAT_01cfc5e0;
    }
    pcVar6 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar9[3])(pcVar6,&local_2c);
    if (iVar3 == 0) goto LAB_01441b70;
    uVar7 = puVar9[4];
    pppuVar8 = &local_2c;
  }
  else {
    iVar2 = DAT_01d4eb38;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 2)) goto LAB_01441b70;
    local_b4 = *(undefined4 *)(DAT_01d4eb38 + 0x14);
    local_b0 = *(undefined4 *)(DAT_01d4eb38 + 0x18);
    local_b8 = (undefined4 **)0x2;
    DataMemoryBarrier(0xb);
    puVar9 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar9 = &DAT_01cfc5e0;
    }
    pcVar6 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar9[3])(pcVar6,&local_b8);
    if (iVar3 == 0) goto LAB_01441b70;
    local_a4 = (undefined4 *)(DAT_01d4eb38 + 0x1c);
    local_98 = (undefined4 **)*local_a4;
    local_94 = *(int *)(DAT_01d4eb38 + 0x20);
    if (local_94 == 0) goto LAB_01441c14;
    local_28 = &local_a0;
    local_90 = *(undefined4 *)(DAT_01d4eb38 + 0x24);
    uStack_8c = *(undefined4 *)(DAT_01d4eb38 + 0x28);
    local_2c = (int **)&local_98;
    local_ac = &local_2c;
    local_a8 = (undefined **)&DAT_00000001;
    local_9c = &local_cc;
    local_88 = 0;
    local_cc = (int ***)&local_cd;
    local_24 = &DAT_01d2ea4c;
    pppuVar8 = &local_b8;
    ppppuVar10 = &local_ac;
    local_a0 = &DAT_005969f7;
    local_c8 = &LAB_0141457c;
    uVar7 = puVar9[4];
  }
  FUN_01aaa328(iVar2,pcVar6,uVar7,pppuVar8,ppppuVar10);
LAB_01441b70:
  local_98 = (undefined4 **)0x3;
  local_78 = 4;
  local_94 = 0;
  local_90 = 0;
  local_7b = 2;
  ppuVar4 = (undefined4 **)thunk_FUN_01be5118(0x68);
  if (ppuVar4 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x68);
  }
  FUN_01bed4e2(ppuVar4,&local_98,0x68);
  local_98 = ppuVar4;
  piVar5 = (int *)thunk_FUN_01be5118(4);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *piVar5 = (int)ppuVar4;
  return;
}

