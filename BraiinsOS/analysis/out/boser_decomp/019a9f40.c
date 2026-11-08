// FUN_019a9f40 @ 019a9f40 size=800 calls_out=10 calls_in=0
// strings: deadlock in SIGSEGV handler | fatal runtime error: stack overflow; aborting no /proc/self/exe available. Is /proc mounted? | fatal runtime error: a thread received SIGSEGV while modifying its stack overflow information; aborting 

void FUN_019a9f40(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 ***pppuVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined1 **local_d0;
  undefined4 *local_cc;
  undefined4 *local_c8;
  code *local_c4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  char local_30 [11];
  undefined1 uStack_25;
  
  pppuVar4 = &local_d0;
  uVar13 = *(uint *)(param_2 + 0xc);
  if (uVar13 != 0) {
    iVar11 = 0;
    puVar3 = (undefined4 *)FUN_01be3244();
    do {
      while (DAT_01d51a90 != (undefined4 *)0x0) {
        ClearExclusiveLocal();
        if (DAT_01d51a90 == puVar3) {
          FUN_0197a828(&local_d0,&uStack_25,
                       "fatal runtime error: a thread received SIGSEGV while modifying its stack overflow information, aborting\n"
                       ,0xd1);
          FUN_019b6d48(&local_d0);
          goto LAB_019aa260;
        }
        iVar11 = iVar11 + 1;
        HintYield();
        if (iVar11 == 10000000) {
          uVar13 = 0x1b;
          pcVar9 = "deadlock in SIGSEGV handler";
          goto LAB_019a9ffc;
        }
      }
      bVar1 = (bool)hasExclusiveAccess(0x1d51a90);
    } while (!bVar1);
    DataMemoryBarrier(0xb);
    if (DAT_01d51a7c != 0) {
      iVar11 = DAT_01d51a7c;
      iVar14 = DAT_01d51a80;
      while( true ) {
        uVar8 = (uint)*(ushort *)(iVar11 + 0x13a);
        iVar7 = uVar8 << 2;
        iVar2 = 0x43;
        do {
          iVar12 = iVar2;
          if (iVar7 == 0) goto LAB_019aa0a4;
          puVar5 = *(undefined4 **)(iVar11 + iVar12 * 4);
          iVar7 = iVar7 + -4;
          bVar15 = puVar3 < puVar5;
          bVar1 = !bVar15 && puVar3 != puVar5;
          iVar2 = iVar12 + 1;
        } while ((char)(bVar1 - bVar15) == '\x01');
        if (bVar1 == bVar15) break;
        uVar8 = iVar12 - 0x43;
LAB_019aa0a4:
        if (iVar14 == 0) goto LAB_019aa0e0;
        iVar14 = iVar14 + -1;
        iVar11 = *(int *)(iVar11 + uVar8 * 4 + 0x140);
      }
      puVar5 = (undefined4 *)(iVar11 + (iVar12 + -0x43) * 0x18);
      if (((uint)puVar5[4] <= uVar13) && (uVar13 < (uint)puVar5[5])) {
        local_40 = *puVar5;
        local_3c = puVar5[1];
        local_38 = (undefined1 *)puVar5[2];
        if (local_38 == (undefined1 *)0x0) {
          local_34 = 9;
          local_38 = &DAT_00525a44;
        }
        else {
          local_34 = puVar5[3];
        }
        local_c8 = &local_40;
        local_d0 = &local_38;
        local_c4 = FUN_012fd074;
        local_cc = &DAT_0197a814;
        DAT_01d51a90 = puVar3;
        FUN_0197a828(local_30,&uStack_25,&DAT_0058f326,&local_d0);
        if (local_30[0] != '\x04') {
          FUN_0197acb4(local_30);
        }
        FUN_0197a828(&local_d0,&uStack_25,
                     "fatal runtime error: stack overflow, aborting\nno /proc/self/exe available. Is /proc mounted?"
                     ,0x5d);
        FUN_019b6d48(&local_d0);
LAB_019aa260:
                    /* WARNING: Subroutine does not return */
        FUN_0197a954();
      }
    }
LAB_019aa0e0:
    DataMemoryBarrier(0xb);
    DAT_01d51a90 = (undefined4 *)0x0;
  }
  goto LAB_019aa0ec;
LAB_019a9ffc:
  do {
    uVar8 = FUN_01bf053e(2,pcVar9,uVar13);
    if (uVar8 == 0xffffffff) {
      puVar5 = (undefined4 *)*puVar3;
      local_d0 = (undefined1 **)((uint)local_d0._1_3_ << 8);
      if (puVar5 != (undefined4 *)&SUB_00000004) goto LAB_019aa130;
    }
    else {
      local_d0 = (undefined1 **)CONCAT31(local_d0._1_3_,4);
      if (uVar8 == 0) {
        puVar5 = &DAT_01d2e7b8;
        pppuVar4 = (undefined1 ***)0x1d2e7c8;
LAB_019aa130:
        if ((*(char *)pppuVar4 != '\x04') && (*(char *)pppuVar4 == '\x03')) {
          uVar10 = *puVar5;
          puVar3 = (undefined4 *)puVar5[1];
          pcVar6 = (code *)*puVar3;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(uVar10);
          }
          if (puVar3[1] != 0) {
            thunk_FUN_01be4678(uVar10);
          }
          thunk_FUN_01be4678(puVar5);
        }
        break;
      }
      if (uVar13 < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar8,uVar13,uVar13,&DAT_01d27754);
      }
      pcVar9 = pcVar9 + uVar8;
      uVar13 = uVar13 - uVar8;
    }
  } while (uVar13 != 0);
LAB_019aa0ec:
  FUN_01bed93e(&local_d0,0,0x8c);
  FUN_01bea86c(param_1,&local_d0,0);
  return;
}

