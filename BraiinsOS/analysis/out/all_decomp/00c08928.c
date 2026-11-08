// FUN_00c08928 @ 00c08928 size=1380 calls_out=19 calls_in=1
// strings: Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks. | reached max `enter` depth | failed to park thread

void FUN_00c08928(uint param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 **ppuVar8;
  uint *puVar9;
  undefined1 *puVar10;
  int extraout_r2;
  int extraout_r2_00;
  undefined1 *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  int *piVar14;
  undefined1 **ppuVar15;
  int *piVar16;
  int *piVar17;
  undefined8 uVar18;
  int *local_90;
  undefined1 *local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar18 = thunk_FUN_016de0ee(param_1,param_2,0x40);
  piVar17 = (int *)((ulonglong)uVar18 >> 0x20);
  piVar14 = (int *)((int)uVar18 + extraout_r2);
  if ((char)piVar14[0xe] != '\x01') {
    if ((char)piVar14[0xe] == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(piVar14,FUN_00bacf28);
    *(undefined1 *)(piVar14 + 0xe) = 1;
  }
  if (*(char *)((int)piVar14 + 0x32) != '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
                 ,0x183,&DAT_018a6a7c);
  }
  iVar6 = 0x220;
  if ((param_1 & 1) != 0) {
    iVar6 = 0x158;
  }
  *(undefined1 *)((int)piVar14 + 0x32) = 1;
  uVar18 = FUN_016470fc((int)piVar17 + iVar6);
  if ((piVar14[9] & 1U) == 0) {
    FUN_0164e918();
  }
  piVar14[9] = 1;
  *(undefined8 *)(piVar14 + 10) = uVar18;
  if (*piVar14 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018aca90);
  }
  *piVar14 = -1;
  do {
    iVar6 = *piVar17;
    bVar3 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar3);
  *piVar17 = iVar6 + 1;
  if (-1 < iVar6) {
    piVar14[2] = (int)piVar17;
    iVar6 = piVar14[3] + 1;
    *piVar14 = *piVar14 + 1;
    piVar14[1] = (uint)((param_1 & 1) != 0);
    if (0xfffffffe < (uint)piVar14[3]) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("reached max `enter` depth",0x33,&DAT_018aca80);
    }
    piVar14[3] = iVar6;
    uVar18 = thunk_FUN_016de0ee(iVar6,0x278);
    piVar16 = (int *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
    piVar17 = piVar16;
    if (((char)piVar16[1] != '\x01') &&
       (piVar17 = (int *)FUN_01655dc8(piVar16), piVar17 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("failed to park thread",0x15,&local_90,&DAT_018ac53c,&DAT_018a6a8c);
    }
    puVar9 = (uint *)*piVar17;
    do {
      uVar7 = *puVar9;
      bVar3 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar3);
    *puVar9 = uVar7 + 1;
    if (uVar7 < 0x80000000) {
      iVar6 = thunk_FUN_016de0ee(uVar7,puVar9,0x1c4);
      ppuVar15 = (undefined1 **)(iVar6 + extraout_r2_00);
LAB_00c08b0c:
      do {
        if ((char)piVar14[0xe] == '\x01' || (char)piVar14[0xe] == '\x02') {
          cVar2 = (char)piVar16[1];
        }
        else {
          FUN_015e8e6c(piVar14,FUN_00bacf28);
          *(undefined1 *)(piVar14 + 0xe) = 1;
          cVar2 = (char)piVar16[1];
        }
        piVar17 = piVar16;
        if ((cVar2 != '\x01') && (piVar17 = (int *)FUN_01655dc8(piVar16), piVar17 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_90,&DAT_018ac53c,&DAT_018ac54c);
        }
        iVar6 = *piVar17;
        piVar17 = (int *)(iVar6 + 8);
        if (*piVar17 == 2) {
          DataMemoryBarrier(0xb);
          do {
            bVar3 = (bool)hasExclusiveAccess(piVar17);
            if (bVar3) {
              *piVar17 = 0;
              DataMemoryBarrier(0xb);
              goto LAB_00c08b0c;
            }
          } while (*piVar17 == 2);
        }
        ClearExclusiveLocal();
        pcVar13 = (char *)(iVar6 + 0x10);
        DataMemoryBarrier(0xb);
        if (*pcVar13 == '\0') {
          bVar3 = (bool)hasExclusiveAccess(pcVar13);
          if (!bVar3) goto LAB_00c08b8c;
          *pcVar13 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_00c08b8c:
          FUN_01280da8(pcVar13);
        }
        FUN_0128236c(pcVar13);
        local_58 = *piVar17;
        if (local_58 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar4 = true;
            bVar3 = (bool)hasExclusiveAccess(piVar17);
            if (bVar3) {
              *piVar17 = 1;
              goto LAB_00c08bd0;
            }
            local_58 = *piVar17;
          } while (local_58 == 0);
        }
        bVar4 = false;
        ClearExclusiveLocal();
LAB_00c08bd0:
        DataMemoryBarrier(0xb);
        if (bVar4) {
          do {
            FUN_0127fd30(iVar6 + 0xc,pcVar13);
            if (*piVar17 == 2) {
              DataMemoryBarrier(0xb);
              do {
                bVar3 = (bool)hasExclusiveAccess(piVar17);
                if (bVar3) {
                  *piVar17 = 0;
                  goto LAB_00c08c4c;
                }
              } while (*piVar17 == 2);
            }
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
          } while( true );
        }
        if (local_58 != 2) {
          local_90 = &local_58;
          local_8c = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0057f434,&local_90,&DAT_018ac58c);
        }
        DataMemoryBarrier(0xb);
        do {
          bVar3 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar3);
        *piVar17 = 0;
LAB_00c08c4c:
        DataMemoryBarrier(0xb);
        bVar3 = true;
        local_90 = (int *)0x0;
        if (*(char *)(ppuVar15 + 0xd) == '\x01') {
          ppuVar8 = ppuVar15;
        }
        else {
          ppuVar8 = (undefined1 **)FUN_01284e64(ppuVar15);
          if (ppuVar8 == (undefined1 **)0x0) {
            FUN_01283788(&local_58);
            local_90 = (int *)0x1;
            bVar3 = false;
            uStack_88 = uStack_54;
            uStack_84 = uStack_50;
            uStack_80 = uStack_4c;
            local_7c = local_48;
            local_78 = iStack_44;
            local_74 = uStack_40;
            local_70 = iStack_3c;
            local_6c = local_38;
            local_68 = uStack_34;
            uStack_64 = uStack_30;
            uStack_60 = uStack_2c;
            uStack_5c = uStack_28;
            ppuVar8 = &local_8c;
          }
        }
        puVar11 = ppuVar8[8];
        puVar12 = ppuVar8[9];
        iVar6 = (int)puVar12 * -4;
        puVar10 = puVar12;
        do {
          if (iVar6 == 0) goto LAB_00c08ca4;
          iVar5 = -4 - iVar6;
          iVar6 = iVar6 + 4;
          puVar10 = puVar10 + -1;
        } while (*(char **)(puVar11 + iVar5) != pcVar13);
        *(undefined4 *)(puVar11 + (int)puVar10 * 4) =
             *(undefined4 *)(puVar11 + (int)(puVar12 + -1) * 4);
        ppuVar8[9] = puVar12 + -1;
LAB_00c08ca4:
        if (!bVar3) {
          do {
            iVar6 = DAT_018dd954 + -1;
            bVar3 = (bool)hasExclusiveAccess(0x18dd954);
          } while (!bVar3);
          DAT_018dd954 = iVar6;
          if (local_70 != 0) {
            thunk_FUN_016d3fb4(local_6c);
          }
          if (local_78 != 3) {
            if (local_78 == 0) {
              FUN_012848c0(local_74);
            }
            else if (local_78 == 1) {
              FUN_01283d28();
            }
            else {
              FUN_01284358();
            }
          }
        }
        if (*pcVar13 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar3 = (bool)hasExclusiveAccess(pcVar13);
            if (bVar3) {
              *pcVar13 = '\0';
              goto LAB_00c08b0c;
            }
          } while (*pcVar13 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar13);
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xc08ac4);
  (*pcVar1)();
}

