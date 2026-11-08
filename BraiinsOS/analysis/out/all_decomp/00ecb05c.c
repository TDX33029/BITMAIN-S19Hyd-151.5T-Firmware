// FUN_00ecb05c @ 00ecb05c size=1476 calls_out=23 calls_in=0
// strings: /dev/null | /dev/null | /dev/null | /dev/null | fatal runtime error: assertion failed: signal(libc::SIGPIPE; handler) != libc::SIG_ERR; aborting invalid timestamp | std::process::exit called re-entrantly

/* WARNING: Removing unreachable block (ram,0x00ecb0a8) */

undefined4 FUN_00ecb05c(undefined4 param_1,undefined1 *param_2)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  char *pcVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  char *unaff_r8;
  undefined1 *puVar14;
  bool bVar15;
  undefined8 uVar16;
  code *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_44;
  undefined1 local_35;
  undefined1 *local_34;
  undefined4 *local_30;
  undefined4 **local_2c;
  undefined1 *local_28;
  
  uVar16 = thunk_FUN_016de0ee(param_1,0x240);
  pcVar1 = DAT_018dd9a8;
  puVar2 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  puVar14 = &DAT_018dd940;
  uVar11 = puVar2[1];
  pcVar9 = (char *)*puVar2;
  if ((char *)*puVar2 == (char *)0x0 && puVar2[1] == 0) {
    ClearExclusiveLocal();
    do {
      pcVar9 = DAT_018dd9a8 + 1;
      uVar11 = DAT_018dd9ac + ((char *)0xfffffffe < DAT_018dd9a8);
      if (CARRY4(DAT_018dd9ac,(uint)((char *)0xfffffffe < DAT_018dd9a8))) {
        FUN_015ee8c8();
                    /* WARNING: Does not return */
        pcVar8 = (code *)software_udf(0xfdee,0xecb654);
        (*pcVar8)();
      }
      bVar15 = (bool)hasExclusiveAccess(0x18dd9a8);
    } while (!bVar15);
    DAT_018dd9a8 = pcVar9;
    DAT_018dd9ac = uVar11;
    *puVar2 = (uint)pcVar9;
    puVar2[1] = uVar11;
    unaff_r8 = pcVar1;
  }
  do {
    DAT_018dd9a0 = pcVar9;
    DAT_018dd9a4 = uVar11;
    bVar15 = (bool)hasExclusiveAccess(0x18dd9a0);
    uVar11 = DAT_018dd9a4;
    pcVar9 = DAT_018dd9a0;
  } while (!bVar15);
  local_c4 = (uint *)0x0;
  local_c8 = (code *)0x0;
  local_b4 = 0;
  local_bc = 0;
  local_b8 = 2;
  local_c0 = 1;
  do {
    iVar3 = FUN_016da3b6(&local_c8,3,0);
    if (iVar3 != -1) {
      iVar6 = -1;
      unaff_r8 = "/dev/null";
      iVar3 = 0;
      goto LAB_00ecb238;
    }
    puVar2 = (uint *)FUN_016d2bc8();
    uVar11 = *puVar2;
  } while (uVar11 == 4);
  if ((uVar11 < 0x17) && ((1 << (uVar11 & 0xff) & 0x401800U) != 0)) {
    uVar11 = FUN_016d2d0c(0,1);
    bVar15 = uVar11 == 0xffffffff;
    iVar3 = -1;
    if (bVar15) {
      uVar11 = *puVar2;
    }
    if ((!bVar15 || uVar11 != 9) || (iVar3 = FUN_016d2e2a("/dev/null",2,0), iVar3 != -1)) {
      uVar11 = FUN_016d2d0c(1,1);
      bVar15 = uVar11 == 0xffffffff;
      if (bVar15) {
        uVar11 = *puVar2;
      }
      if ((!bVar15 || uVar11 != 9) ||
         (((iVar3 != -1 && (iVar6 = FUN_016dffdc(iVar3), iVar6 != -1)) ||
          (iVar3 = FUN_016d2e2a("/dev/null",2,0), iVar3 != -1)))) {
        uVar11 = FUN_016d2d0c(2,1);
        bVar15 = uVar11 != 0xffffffff;
        if (!bVar15) {
          uVar11 = *puVar2;
        }
        if (((bVar15 || uVar11 != 9) ||
            ((iVar3 != -1 && (iVar3 = FUN_016dffdc(iVar3), iVar3 != -1)))) ||
           (iVar3 = FUN_016d2e2a("/dev/null",2,0), iVar3 != -1)) {
LAB_00ecb290:
          iVar3 = FUN_016da752(0xd,1);
          if (iVar3 == -1) {
            FUN_015bee18(&local_c8,&local_2c,
                         "fatal runtime error: assertion failed: signal(libc::SIGPIPE, handler) != libc::SIG_ERR, aborting\ninvalid timestamp"
                         ,0xc3);
            FUN_015ff474((uint)local_c8 & 0xff,local_c4);
                    /* WARNING: Subroutine does not return */
            FUN_015bef44();
          }
          DAT_018dd974 = FUN_016d2558(0x1e);
          FUN_016dd606(&local_c8,0,0x8c);
          FUN_016da630(0xb,0,&local_c8);
          if (local_c8 == (code *)0x0) {
            if (DAT_018dd943 == '\0') {
              DataMemoryBarrier(0xb);
              DAT_018dd943 = '\x01';
              DAT_018dd970 = FUN_015f0744();
            }
            local_44 = 0x8000004;
            local_c8 = FUN_015f1920;
            FUN_016da630(0xb,&local_c8,0);
          }
          FUN_016da630(7,0,&local_c8);
          if (local_c8 == (code *)0x0) {
            if (DAT_018dd943 == '\0') {
              DataMemoryBarrier(0xb);
              DAT_018dd943 = '\x01';
              DAT_018dd970 = FUN_015f0744();
            }
            local_44 = 0x8000004;
            local_c8 = FUN_015f1920;
            FUN_016da630(7,&local_c8,0);
          }
          DAT_018dd978 = param_1;
          DAT_018dd97c = param_2;
          puVar5 = (undefined4 *)FUN_00ebdba4(FUN_00eb1e14);
          if (puVar5 == (undefined4 *)0x0) {
            uVar13 = 0;
          }
          else {
            local_2c = &local_30;
            local_28 = &LAB_00604520;
            local_30 = puVar5;
            FUN_015ee5cc(&local_c8,&DAT_018dd9d8,&DAT_0056c1df,&local_2c);
            puVar2 = local_c4;
            if ((((uint)local_c8 & 0xff) != 4) && (((uint)local_c8 & 0xff) == 3)) {
              unaff_r8 = (char *)*local_c4;
              puVar5 = (undefined4 *)local_c4[1];
              pcVar8 = (code *)*puVar5;
              if (pcVar8 != (code *)0x0) {
                (*pcVar8)(unaff_r8);
              }
              if (puVar5[1] != 0) {
                thunk_FUN_016d3fb4(unaff_r8);
              }
              thunk_FUN_016d3fb4(puVar2);
              param_2 = puVar14;
            }
            (**(code **)*local_30)();
            uVar13 = 1;
          }
          while( true ) {
            DataMemoryBarrier(0xb);
            if (DAT_018d9088 != 0) {
              local_35 = 1;
              local_34 = &local_35;
              FUN_015eedc4(&DAT_018d9088,0,&local_34,&DAT_018ab088,&DAT_018aabfc);
            }
            iVar3 = FUN_016d2bc8();
            piVar10 = (int *)(puVar14 + 0x1c);
            while (*piVar10 == 0) {
              bVar15 = (bool)hasExclusiveAccess(piVar10);
              if (bVar15) {
                *piVar10 = iVar3;
                DataMemoryBarrier(0xb);
                return uVar13;
              }
            }
            ClearExclusiveLocal();
            if (*piVar10 != iVar3) break;
            uVar7 = FUN_00fb7ebc("std::process::exit called re-entrantly");
            if (*(int *)(puVar14 + 4) != 0) {
              thunk_FUN_016d3fb4(unaff_r8);
            }
            thunk_FUN_016d3fb4(uVar13);
            (**(code **)*local_30)();
            uVar16 = FUN_015f1cbc(uVar7);
            puVar5 = (undefined4 *)((ulonglong)uVar16 >> 0x20);
            pcVar8 = (code *)*puVar5;
            if (pcVar8 != (code *)0x0) {
              (*pcVar8)((int)uVar16);
            }
            uVar13 = 0x65;
            if (puVar5[1] != 0) {
              thunk_FUN_016d3fb4((int)uVar16);
            }
            puVar14 = param_2;
          }
          do {
            FUN_016e0196();
          } while( true );
        }
      }
    }
  }
LAB_00ecb524:
                    /* WARNING: Subroutine does not return */
  FUN_016d2c24();
  while ((iVar12 = iVar3 + 8, iVar4 = iVar3 + 2, iVar3 = iVar12,
         (*(ushort *)((int)&local_c4 + iVar4) & 0x20) == 0 ||
         (((iVar6 != -1 && (iVar4 = FUN_016dffdc(iVar6), iVar4 != -1)) ||
          (iVar6 = FUN_016d2e2a("/dev/null",2,0), iVar6 != -1))))) {
LAB_00ecb238:
    if (iVar3 == 0x18) goto LAB_00ecb290;
  }
  goto LAB_00ecb524;
}

