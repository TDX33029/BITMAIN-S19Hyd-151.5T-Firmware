// FUN_015f1920 @ 015f1920 size=824 calls_out=10 calls_in=0
// strings: deadlock in SIGSEGV handler | failed to write whole buffer | failed to write whole buffer | fatal runtime error: stack overflow; aborting no /proc/self/exe available. Is /proc mounted? | fatal runtime error: a thread received SIGSEGV while modifying its stack overflow information; aborting 

void FUN_015f1920(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  bool bVar16;
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
  
  uVar15 = *(uint *)(param_2 + 0xc);
  if (uVar15 != 0) {
    puVar12 = (undefined1 *)0x0;
    puVar4 = (undefined4 *)FUN_016d2bc8();
    do {
      while (DAT_018dd96c != (undefined4 *)0x0) {
        ClearExclusiveLocal();
        if (DAT_018dd96c == puVar4) {
          FUN_015bee18(&local_d0,&uStack_25,
                       "fatal runtime error: a thread received SIGSEGV while modifying its stack overflow information, aborting\n"
                       ,0xd1);
          FUN_015ff474((uint)local_d0 & 0xff,local_cc);
          goto LAB_015f1c58;
        }
        puVar12 = puVar12 + 1;
        HintYield();
        if (puVar12 == &LAB_00989680) {
          uVar15 = 0x1b;
          pcVar9 = "deadlock in SIGSEGV handler";
          goto LAB_015f19e0;
        }
      }
      bVar1 = (bool)hasExclusiveAccess(0x18dd96c);
    } while (!bVar1);
    DataMemoryBarrier(0xb);
    if (DAT_018dd960 != 0) {
      iVar5 = DAT_018dd960;
      iVar6 = DAT_018dd964;
      while( true ) {
        uVar8 = (uint)*(ushort *)(iVar5 + 0x13a);
        iVar10 = uVar8 << 2;
        iVar2 = 0x43;
        do {
          iVar13 = iVar2;
          if (iVar10 == 0) goto LAB_015f1a88;
          puVar14 = *(undefined4 **)(iVar5 + iVar13 * 4);
          iVar10 = iVar10 + -4;
          bVar16 = puVar4 < puVar14;
          bVar1 = !bVar16 && puVar4 != puVar14;
          iVar2 = iVar13 + 1;
        } while ((char)(bVar1 - bVar16) == '\x01');
        if (bVar1 == bVar16) break;
        uVar8 = iVar13 - 0x43;
LAB_015f1a88:
        if (iVar6 == 0) goto LAB_015f1ac4;
        iVar6 = iVar6 + -1;
        iVar5 = *(int *)(iVar5 + uVar8 * 4 + 0x140);
      }
      puVar14 = (undefined4 *)(iVar5 + (iVar13 + -0x43) * 0x18);
      if (((uint)puVar14[4] <= uVar15) && (uVar15 < (uint)puVar14[5])) {
        local_40 = *puVar14;
        local_3c = puVar14[1];
        local_38 = (undefined1 *)puVar14[2];
        if (local_38 == (undefined1 *)0x0) {
          local_34 = 9;
          local_38 = &DAT_0040fb1c;
        }
        else {
          local_34 = puVar14[3];
        }
        local_c8 = &local_40;
        local_d0 = &local_38;
        local_c4 = FUN_00fac4cc;
        local_cc = &DAT_015bee04;
        DAT_018dd96c = puVar4;
        FUN_015bee18(local_30,&uStack_25,&DAT_0058ef2d,&local_d0);
        if (local_30[0] != '\x04') {
          FUN_015bf4a0(local_30);
        }
        FUN_015bee18(&local_d0,&uStack_25,
                     "fatal runtime error: stack overflow, aborting\nno /proc/self/exe available. Is /proc mounted?"
                     ,0x5d);
        FUN_015ff474((uint)local_d0 & 0xff,local_cc);
LAB_015f1c58:
                    /* WARNING: Subroutine does not return */
        FUN_015bef44();
      }
    }
LAB_015f1ac4:
    DataMemoryBarrier(0xb);
    DAT_018dd96c = (undefined4 *)0x0;
  }
  goto LAB_015f1ad0;
LAB_015f19e0:
  do {
    uVar8 = FUN_016e034e(2,pcVar9,uVar15);
    if (uVar8 == 0xffffffff) {
      puVar14 = (undefined4 *)*puVar4;
      local_d0 = (undefined1 **)((uint)local_d0._1_3_ << 8);
      if (puVar14 != (undefined4 *)&DAT_00000004) {
        cVar3 = '\0';
LAB_015f1b2c:
        if (cVar3 == '\x03') {
          uVar11 = *puVar14;
          puVar4 = (undefined4 *)puVar14[1];
          pcVar7 = (code *)*puVar4;
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(uVar11);
          }
          if (puVar4[1] != 0) {
            thunk_FUN_016d3fb4(uVar11);
          }
          thunk_FUN_016d3fb4(puVar14);
        }
        break;
      }
    }
    else {
      local_d0 = (undefined1 **)CONCAT31(local_d0._1_3_,4);
      if (uVar8 == 0) {
        puVar14 = &DAT_018aeae8;
        cVar3 = '\x02';
        goto LAB_015f1b2c;
      }
      if (uVar15 < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar8,uVar15,uVar15,&DAT_018aab58);
      }
      pcVar9 = pcVar9 + uVar8;
      uVar15 = uVar15 - uVar8;
    }
  } while (uVar15 != 0);
LAB_015f1ad0:
  FUN_016dd606(&local_d0,0,0x8c);
  FUN_016da630(param_1,&local_d0,0);
  return;
}

