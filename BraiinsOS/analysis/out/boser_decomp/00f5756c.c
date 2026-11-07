// FUN_00f5756c @ 00f5756c size=1884 calls_out=26 calls_in=0
// strings: boser::bosminer::contextopen/boser/boser/src/bosminer/context.rsevent open/boser/boser/src/bosminer/context.rs:524event open/boser/boser/src/bosminer/context.rs:353event open/boser/boser/src/bosminer/context.rs:393event open/boser/boser/src/bosminer/context.rs:380event open/boser/boser/src/bosminer/context.rs:209event open/boser/boser/src/bosminer/context.rs:333event open/boser/boser/src/bosminer/context.rs:637event open/boser/boser/src/bosminer/context.rs:639event open/boser/boser/src/bosminer/context.rs:690event open/boser/boser/src/bosminer/context.rs:683event open/boser/boser/src/bosminer/context.rs:698 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::bosminer::contextopen/boser/boser/src/bosminer/context.rsevent open/boser/boser/src/bosminer/context.rs:524event open/boser/boser/src/bosminer/context.rs:353event open/boser/boser/src/bosminer/context.rs:393event open/boser/boser/src/bosminer/context.rs:380event open/boser/boser/src/bosminer/context.rs:209event open/boser/boser/src/bosminer/context.rs:333event open/boser/boser/src/bosminer/context.rs:637event open/boser/boser/src/bosminer/context.rs:639event open/boser/boser/src/bosminer/context.rs:690event open/boser/boser/src/bosminer/context.rs:683event open/boser/boser/src/bosminer/context.rs:698 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::bosminer::contextopen/boser/boser/src/bosminer/context.rsevent open/boser/boser/src/bosminer/context.rs:524event open/boser/boser/src/bosminer/context.rs:353event open/boser/boser/src/bosminer/context.rs:393event open/boser/boser/src/bosminer/context.rs:380event open/boser/boser/src/bosminer/context.rs:209event open/boser/boser/src/bosminer/context.rs:333event open/boser/boser/src/bosminer/context.rs:637event open/boser/boser/src/bosminer/context.rs:639event open/boser/boser/src/bosminer/context.rs:690event open/boser/boser/src/bosminer/context.rs:683event open/boser/boser/src/bosminer/context.rs:698

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00f5756c(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  int *piVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined4 **local_158;
  int iStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 **local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined1 local_7c;
  undefined4 ***local_74;
  code *local_70;
  undefined4 *local_6c;
  undefined *local_68;
  int ***local_64;
  undefined4 **local_60;
  int ***local_5c;
  undefined1 *local_58;
  undefined4 ***local_54;
  undefined **local_50;
  undefined4 *local_4c;
  undefined4 ***local_48;
  undefined4 ****local_44;
  undefined4 **local_40;
  int ***local_3c;
  undefined1 *local_38;
  undefined4 **ppuStack_30;
  int ***pppiStack_2c;
  undefined1 *puStack_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar13 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  uVar8 = (undefined4)((ulonglong)uVar13 >> 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x24)) {
  case 0:
    FUN_019e6e74(&local_108,&DAT_01c19d2c,*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c),0,&DAT_01c19d2c);
    FUN_01bed4e2(&local_158,&local_108,0x50);
    FUN_01bed4e2(param_1 + 0x28,&local_158,0x50);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19d3c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19d3c);
  case 4:
    piVar12 = *(int **)(param_1 + 0x28);
    goto LAB_00f57680;
  }
  piVar11 = (int *)(param_1 + 0x28);
  iVar6 = FUN_019e84a0(piVar11,*param_2);
  if (iVar6 == 0) {
    FUN_01431b40(piVar11);
    local_108 = *(undefined4 ***)(param_1 + 0x20);
    do {
      puVar9 = *local_108;
      bVar2 = (bool)hasExclusiveAccess(local_108);
    } while (!bVar2);
    *local_108 = (undefined4 *)((int)puVar9 + 1);
    if ((int)puVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xf57d24);
      (*pcVar1)();
    }
    local_7c = 0;
    piVar12 = (int *)thunk_FUN_01be5118(0x90);
    if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x90);
    }
    FUN_01bed4e2(piVar12,&local_108,0x90);
    *piVar11 = (int)piVar12;
LAB_00f57680:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)piVar12[0x23]) {
    case '\0':
      piVar12[1] = *piVar12 + 8;
      *(undefined1 *)(piVar12 + 9) = 0;
switchD_00f57720_caseD_0:
      piVar12[2] = piVar12[1];
      iVar6 = FUN_00615e5c(*(int *)(piVar12[1] + 0x34) + 8);
      puVar10 = &DAT_01c02a80;
      piVar12[10] = iVar6;
      piVar12[0xb] = (int)&DAT_01c02a80;
LAB_00f576e0:
      (**(code **)(puVar10 + 0xc))(&local_108,iVar6,param_2);
      if (local_108 == (undefined4 **)0x80000017) {
        uVar4 = 3;
        goto LAB_00f57998;
      }
      piVar11 = piVar12 + 3;
      *piVar11 = (int)local_108;
      piVar12[4] = iStack_104;
      piVar12[5] = iStack_100;
      piVar12[6] = iStack_fc;
      piVar12[7] = iStack_f8;
      piVar12[8] = iStack_f4;
      FUN_01139b38(piVar12[10],piVar12[0xb]);
      if ((undefined1 *)*piVar11 == &DAT_80000016) {
        iVar6 = piVar12[2];
        piVar12[10] = iVar6;
        piVar12[0xb] = 0;
        goto LAB_00f57968;
      }
      local_108 = (undefined4 **)*piVar11;
      iStack_104 = piVar12[4];
      iStack_100 = piVar12[5];
      iStack_fc = piVar12[6];
      iStack_f8 = piVar12[7];
      iStack_f4 = piVar12[8];
      if ((DAT_01d50f88 < 5) &&
         (((DAT_01d4c6bc - 1 < 2 ||
           ((DAT_01d4c6bc != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c6b4), cVar5 != '\0')))) &&
          (iVar6 = FUN_01aaa278(DAT_01d4c6b4), iVar6 != 0)))) {
        iStack_154 = *(int *)(DAT_01d4c6b4 + 0x20);
        if (iStack_154 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19c9c);
        }
        local_50 = &local_68;
        uStack_150 = *(undefined4 *)(DAT_01d4c6b4 + 0x24);
        local_14c = *(undefined4 *)(DAT_01d4c6b4 + 0x28);
        local_6c = (undefined4 *)(DAT_01d4c6b4 + 0x1c);
        local_158 = (undefined4 **)*local_6c;
        local_54 = &local_158;
        local_74 = &local_54;
        local_148 = 0;
        local_70 = (code *)0x1;
        local_64 = (int ***)&local_48;
        local_48 = &local_108;
        local_4c = (undefined4 *)&DAT_01d2ea4c;
        local_68 = &DAT_0057c647;
        local_44 = (undefined4 ****)FUN_0121efc4;
        FUN_01aaaecc(DAT_01d4c6b4,&local_74);
        iVar6 = DAT_01d4c6b4;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_3c = *(int ****)(DAT_01d4c6b4 + 0x14);
          local_38 = *(undefined1 **)(DAT_01d4c6b4 + 0x18);
          local_40 = (undefined4 **)&DAT_00000001;
          DataMemoryBarrier(0xb);
          puVar9 = DAT_01d4edc8;
          pcVar3 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar9 = &DAT_01cfc5e0;
            pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar7 = (*(code *)puVar9[3])(pcVar3,&local_40);
          if (iVar7 != 0) {
            ppuStack_30 = local_40;
            pppiStack_2c = local_3c;
            puStack_28 = local_38;
            FUN_01aaa328(iVar6,pcVar3,puVar9[4],&ppuStack_30,&local_74);
          }
        }
      }
      else {
        iVar6 = DAT_01d4c6b4;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_5c = *(int ****)(DAT_01d4c6b4 + 0x14);
          local_58 = *(undefined1 **)(DAT_01d4c6b4 + 0x18);
          local_60 = (undefined4 **)&DAT_00000001;
          DataMemoryBarrier(0xb);
          puVar9 = DAT_01d4edc8;
          pcVar3 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar9 = &DAT_01cfc5e0;
            pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar7 = (*(code *)puVar9[3])();
          if (iVar7 != 0) {
            local_4c = (undefined4 *)(DAT_01d4c6b4 + 0x1c);
            local_158 = (undefined4 **)*local_4c;
            iStack_154 = *(int *)(DAT_01d4c6b4 + 0x20);
            if (iStack_154 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19c9c);
            }
            local_3c = (int ***)&local_48;
            uStack_150 = *(undefined4 *)(DAT_01d4c6b4 + 0x24);
            local_14c = *(undefined4 *)(DAT_01d4c6b4 + 0x28);
            local_40 = &local_158;
            local_54 = &local_40;
            local_148 = 0;
            local_50 = (undefined **)&DAT_00000001;
            local_44 = &local_74;
            local_74 = &local_108;
            local_38 = &DAT_01d2ea4c;
            local_48 = (undefined4 ***)&DAT_0057c647;
            local_70 = FUN_0121efc4;
            ppuStack_30 = local_60;
            pppiStack_2c = local_5c;
            puStack_28 = local_58;
            FUN_01aaa328(iVar6,pcVar3,puVar9[4],&ppuStack_30,&local_54);
          }
        }
      }
      FUN_00b9937c(&local_108);
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c140e4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c140e4);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)piVar12[9]) {
      case '\0':
        goto switchD_00f57720_caseD_0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c19c8c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c19c8c);
      case '\x03':
        iVar6 = piVar12[10];
        puVar10 = (undefined *)piVar12[0xb];
        goto LAB_00f576e0;
      case '\x04':
        if ((*(byte *)(piVar12 + 0xb) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c20224);
        }
        iVar6 = piVar12[2];
LAB_00f57968:
        piVar12[10] = iVar6;
        *(undefined1 *)(piVar12 + 0x11) = 0;
        *(undefined1 *)(piVar12 + 0xb) = 1;
      }
      iVar6 = FUN_00bd24ac(piVar12 + 10,param_2);
      uVar4 = 5;
      if (iVar6 != 0) {
LAB_00f57998:
        *(undefined1 *)(piVar12 + 9) = uVar4;
        *(undefined1 *)(piVar12 + 0x23) = 3;
        uVar4 = 4;
        goto LAB_00f579a8;
      }
      FUN_00bd234c(piVar12 + 10);
    }
    *(undefined1 *)(piVar12 + 9) = 1;
    FUN_00c1f6a0(piVar12 + 1);
    piVar11 = (int *)*piVar12;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177340(*piVar12);
    }
    *(undefined1 *)(piVar12 + 0x23) = 1;
    FUN_00f2ade4(*(undefined4 *)(param_1 + 0x28));
    piVar12 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177340(*(undefined4 *)(param_1 + 0x20));
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
    FUN_019ec558((int)uVar13,uVar8);
    local_108 = (undefined4 **)0x2;
    FUN_00f31830(param_1,&local_108);
    uVar8 = 0;
  }
  else {
    uVar4 = 3;
LAB_00f579a8:
    *(undefined1 *)(param_1 + 0x24) = uVar4;
    FUN_019ec558((int)uVar13,uVar8);
    uVar8 = 1;
  }
  return uVar8;
}

