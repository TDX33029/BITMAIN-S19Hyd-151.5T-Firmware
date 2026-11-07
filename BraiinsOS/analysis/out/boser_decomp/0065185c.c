// FUN_0065185c @ 0065185c size=1488 calls_out=23 calls_in=0
// strings: /dev/null | /dev/null | /dev/null | /dev/null | fatal runtime error: assertion failed: signal(libc::SIGPIPE; handler) != libc::SIG_ERR; aborting invalid timestamp | std::process::exit called re-entrantly

undefined4 FUN_0065185c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  code **ppcVar17;
  bool bVar18;
  undefined8 uVar19;
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
  
  uVar19 = thunk_FUN_01bee35a(param_1,0x238);
  puVar4 = (uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
  uVar11 = puVar4[1];
  uVar10 = *puVar4;
  if (*puVar4 == 0 && puVar4[1] == 0) {
    ClearExclusiveLocal();
    uVar12 = DAT_01d51ab8;
    uVar15 = DAT_01d51abc;
    do {
      uVar2 = DAT_01d51abc;
      uVar1 = DAT_01d51ab8;
      uVar10 = uVar12 + 1;
      uVar11 = uVar15 + (0xfffffffe < uVar12);
      if (CARRY4(uVar15,(uint)(0xfffffffe < uVar12))) {
        FUN_019a7340();
                    /* WARNING: Does not return */
        pcVar9 = (code *)software_udf(0xfdee,0x651e58);
        (*pcVar9)();
      }
      if (DAT_01d51ab8 == uVar12 && DAT_01d51abc == uVar15) {
        bVar18 = (bool)hasExclusiveAccess(0x1d51ab8);
        if (bVar18) {
          DAT_01d51ab8 = uVar10;
          DAT_01d51abc = uVar11;
        }
        bVar16 = 0;
        if (bVar18) {
          bVar16 = 0xff;
        }
      }
      else {
        bVar16 = 0;
        ClearExclusiveLocal();
      }
      uVar12 = uVar1;
      uVar15 = uVar2;
    } while (!(bool)(bVar16 & 1));
    *puVar4 = uVar10;
    puVar4[1] = uVar11;
  }
  do {
    DAT_01d51ab0 = uVar10;
    DAT_01d51ab4 = uVar11;
    bVar18 = (bool)hasExclusiveAccess(0x1d51ab0);
    uVar11 = DAT_01d51ab4;
    uVar10 = DAT_01d51ab0;
  } while (!bVar18);
  local_c4 = (int *)0x0;
  local_c8 = (code *)0x0;
  local_b4 = 0;
  local_bc = 0;
  local_b8 = 2;
  local_c0 = 1;
  do {
    iVar5 = FUN_01bea68a(&local_c8,3,0);
    if (iVar5 != -1) {
      puVar4 = (uint *)&DAT_ffffffff;
      iVar5 = 0;
      goto LAB_00651c50;
    }
    puVar4 = (uint *)FUN_01be3244();
    uVar11 = *puVar4;
  } while (uVar11 == 4);
  if ((uVar11 < 0x17) && ((1 << (uVar11 & 0xff) & 0x401800U) != 0)) {
    uVar11 = FUN_01be3388(0,1);
    bVar18 = uVar11 == 0xffffffff;
    iVar5 = -1;
    if (bVar18) {
      uVar11 = *puVar4;
    }
    if ((!bVar18 || uVar11 != 9) || (iVar5 = FUN_01be34a6("/dev/null",2,0), iVar5 != -1)) {
      uVar11 = FUN_01be3388(1,1);
      bVar18 = uVar11 == 0xffffffff;
      if (bVar18) {
        uVar11 = *puVar4;
      }
      if ((!bVar18 || uVar11 != 9) ||
         (((iVar5 != -1 && (iVar7 = FUN_01bf0200(iVar5), iVar7 != -1)) ||
          (iVar5 = FUN_01be34a6("/dev/null",2,0), iVar5 != -1)))) {
        uVar11 = FUN_01be3388(2,1);
        bVar18 = uVar11 == 0xffffffff;
        if (bVar18) {
          uVar11 = *puVar4;
        }
        if (((!bVar18 || uVar11 != 9) ||
            ((iVar5 != -1 && (iVar5 = FUN_01bf0200(iVar5), iVar5 != -1)))) ||
           (iVar5 = FUN_01be34a6("/dev/null",2,0), iVar5 != -1)) {
LAB_006519d0:
          iVar5 = FUN_01bea98e(0xd,1);
          if (iVar5 == -1) {
            FUN_0197a828(&local_c8,&local_2c,
                         "fatal runtime error: assertion failed: signal(libc::SIGPIPE, handler) != libc::SIG_ERR, aborting\ninvalid timestamp"
                         ,0xc3);
            FUN_019b6d48(&local_c8);
                    /* WARNING: Subroutine does not return */
            FUN_0197a954();
          }
          DAT_01d51a9c = FUN_01be2b70(0x1e);
          ppcVar17 = &local_c8;
          FUN_01bed93e(ppcVar17,0,0x8c);
          FUN_01bea86c(0xb,0,ppcVar17);
          if (local_c8 == (code *)0x0) {
            if (DAT_01d51a98 == '\0') {
              DataMemoryBarrier(0xb);
              DAT_01d51a98 = '\x01';
              DAT_01d51a94 = FUN_019a8cb0(1);
            }
            local_44 = 0x8000004;
            local_c8 = FUN_019a9f40;
            FUN_01bea86c(0xb,&local_c8,0);
          }
          FUN_01bea86c(7,0,&local_c8);
          if (local_c8 == (code *)0x0) {
            if (DAT_01d51a98 == '\0') {
              DataMemoryBarrier(0xb);
              DAT_01d51a98 = '\x01';
              DAT_01d51a94 = FUN_019a8cb0(1);
            }
            local_44 = 0x8000004;
            local_c8 = FUN_019a9f40;
            FUN_01bea86c(7,&local_c8,0);
          }
          DAT_01d51aa0 = param_1;
          DAT_01d51aa4 = param_2;
          puVar6 = (undefined4 *)FUN_01178414(FUN_005da29c);
          if (puVar6 == (undefined4 *)0x0) {
            uVar13 = 0;
          }
          else {
            local_2c = &local_30;
            local_28 = &LAB_00667a00;
            local_30 = puVar6;
            FUN_019a7060(&local_c8,&DAT_01d51ad0,&DAT_00572070,&local_2c);
            piVar3 = local_c4;
            if ((((uint)local_c8 & 0xff) != 4) && (((uint)local_c8 & 0xff) == 3)) {
              ppcVar17 = (code **)*local_c4;
              puVar4 = (uint *)local_c4[1];
              if ((code *)*puVar4 != (code *)0x0) {
                (*(code *)*puVar4)(ppcVar17);
              }
              if (puVar4[1] != 0) {
                thunk_FUN_01be4678(ppcVar17);
              }
              thunk_FUN_01be4678(piVar3);
            }
            (**(code **)*local_30)();
            uVar13 = 1;
          }
          while( true ) {
            DataMemoryBarrier(0xb);
            if (DAT_01d50338 != 0) {
              local_35 = 1;
              local_34 = &local_35;
              FUN_019a768c(&DAT_01d50338,0,&local_34,&DAT_01d27cac,&DAT_01d277fc);
            }
            iVar5 = FUN_01be3244();
            while (DAT_01d51a68 == 0) {
              bVar18 = (bool)hasExclusiveAccess(0x1d51a68);
              if (bVar18) {
                DAT_01d51a68 = iVar5;
                DataMemoryBarrier(0xb);
                return uVar13;
              }
            }
            ClearExclusiveLocal();
            if (DAT_01d51a68 != iVar5) break;
            uVar8 = FUN_01307bf0("std::process::exit called re-entrantly");
            if (puVar4[1] != 0) {
              thunk_FUN_01be4678(ppcVar17);
            }
            thunk_FUN_01be4678(uVar13);
            (**(code **)*local_30)();
            uVar19 = FUN_019aa2cc(uVar8);
            puVar6 = (undefined4 *)((ulonglong)uVar19 >> 0x20);
            pcVar9 = (code *)*puVar6;
            if (pcVar9 != (code *)0x0) {
              (*pcVar9)((int)uVar19);
            }
            uVar13 = 0x65;
            if (puVar6[1] != 0) {
              thunk_FUN_01be4678((int)uVar19);
            }
          }
          do {
            FUN_01bf036a();
          } while( true );
        }
      }
    }
  }
LAB_00651d38:
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
  while ((iVar14 = iVar5 + 8, iVar7 = iVar5 + 2, iVar5 = iVar14,
         (*(ushort *)((int)&local_c4 + iVar7) & 0x20) == 0 ||
         (((puVar4 != (uint *)&DAT_ffffffff && (iVar7 = FUN_01bf0200(puVar4), iVar7 != -1)) ||
          (puVar4 = (uint *)FUN_01be34a6("/dev/null",2,0), puVar4 != (uint *)&DAT_ffffffff))))) {
LAB_00651c50:
    if (iVar5 == 0x18) goto LAB_006519d0;
  }
  goto LAB_00651d38;
}

