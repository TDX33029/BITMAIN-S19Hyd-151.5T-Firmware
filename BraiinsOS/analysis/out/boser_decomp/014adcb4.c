// FUN_014adcb4 @ 014adcb4 size=2056 calls_out=20 calls_in=1
// strings: all branches are disabled and there is no else branch | ii_cgminer_apiopen/protocols/cgminer-api/src/lib.rsevent open/protocols/cgminer-api/src/lib.rs:268 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | ii_cgminer_apiopen/protocols/cgminer-api/src/lib.rsevent open/protocols/cgminer-api/src/lib.rs:268 | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_014adcb4(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 uVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  undefined4 **local_218;
  int local_214;
  undefined4 local_210;
  int local_20c;
  undefined4 local_208;
  undefined4 ***pppuStack_130;
  undefined **ppuStack_12c;
  undefined4 *puStack_128;
  undefined1 local_124;
  undefined4 ***local_e0;
  undefined **local_dc;
  undefined4 *local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined *local_cc;
  undefined4 ****ppppuStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 ***local_b8;
  undefined **ppuStack_b4;
  undefined4 *puStack_b0;
  undefined4 uStack_ac;
  undefined4 ***local_a8;
  undefined **ppuStack_a4;
  undefined4 *puStack_a0;
  undefined4 uStack_9c;
  undefined4 ***local_98;
  undefined **local_94;
  undefined4 *local_90;
  undefined *local_88;
  undefined **local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 ***local_78;
  undefined **local_74;
  undefined4 *local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined *local_64;
  undefined4 ****ppppuStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined *local_50;
  undefined4 ****local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 ***local_38;
  undefined **local_34;
  undefined4 *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xc9)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01cf96a4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01cf96a4);
  case 3:
    puVar6 = (undefined1 *)param_1[0xb6];
    puVar9 = (undefined4 *)param_1[0xb7];
LAB_014ae010:
    cVar4 = FUN_014a9370(puVar6,puVar9,param_2);
    if (cVar4 == '\x03') {
      uVar12 = 3;
    }
    else {
      FUN_014adafc(param_1 + 6);
      if (cVar4 == '\0') {
        if ((DAT_01d50f88 < 4) &&
           (((DAT_01d4ebac - 1 < 2 ||
             ((DAT_01d4ebac != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4eba4), cVar5 != '\0')))) &&
            (iVar7 = FUN_01aaa278(DAT_01d4eba4), iVar7 != 0)))) {
          local_214 = *(int *)(DAT_01d4eba4 + 0x20);
          if (local_214 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf96b4);
          }
          local_dc = &local_88;
          local_210 = *(undefined4 *)(DAT_01d4eba4 + 0x24);
          local_20c = *(int *)(DAT_01d4eba4 + 0x28);
          local_30 = (undefined4 *)(DAT_01d4eba4 + 0x1c);
          local_218 = (undefined4 **)*local_30;
          local_e0 = &local_218;
          local_38 = &local_e0;
          local_208 = 0;
          local_34 = (undefined **)&DAT_00000001;
          local_84 = &local_50;
          local_d8 = (undefined4 *)&DAT_01d2ea4c;
          local_88 = &DAT_00590e5f;
          local_4c = (undefined4 ****)&DAT_0132b6a0;
          local_50 = &DAT_01cf96c4;
          FUN_01aaaecc(DAT_01d4eba4,&local_38);
          iVar7 = DAT_01d4eba4;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_74 = *(undefined ***)(DAT_01d4eba4 + 0x14);
            local_70 = *(undefined4 **)(DAT_01d4eba4 + 0x18);
            local_78 = (undefined4 ***)0x2;
            DataMemoryBarrier(0xb);
            puVar9 = DAT_01d4edc8;
            pcVar3 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar9 = &DAT_01cfc5e0;
              pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar8 = (*(code *)puVar9[3])(pcVar3,&local_78);
            if (iVar8 != 0) {
              pppuStack_130 = local_78;
              ppuStack_12c = local_74;
              puStack_128 = local_70;
              FUN_01aaa328(iVar7,pcVar3,puVar9[4],&pppuStack_130,&local_38);
            }
          }
        }
        else {
          iVar7 = DAT_01d4eba4;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_94 = *(undefined ***)(DAT_01d4eba4 + 0x14);
            local_90 = *(undefined4 **)(DAT_01d4eba4 + 0x18);
            local_98 = (undefined4 ***)0x2;
            DataMemoryBarrier(0xb);
            puVar9 = DAT_01d4edc8;
            pcVar3 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar9 = &DAT_01cfc5e0;
              pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar8 = (*(code *)puVar9[3])(pcVar3,&local_98);
            if (iVar8 != 0) {
              local_218 = *(undefined4 ***)(DAT_01d4eba4 + 0x1c);
              local_214 = *(int *)(DAT_01d4eba4 + 0x20);
              if (local_214 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf96b4);
              }
              local_78 = &local_218;
              local_210 = *(undefined4 *)(DAT_01d4eba4 + 0x24);
              local_20c = *(int *)(DAT_01d4eba4 + 0x28);
              local_74 = &local_50;
              local_e0 = &local_78;
              local_dc = (undefined **)0x1;
              local_4c = &local_38;
              local_208 = 0;
              local_70 = (undefined4 *)&DAT_01d2ea4c;
              local_50 = &DAT_00590e5f;
              local_34 = (undefined **)&DAT_0132b6a0;
              local_38 = (undefined4 ***)&DAT_01cf96c4;
              pppuStack_130 = local_98;
              ppuStack_12c = local_94;
              puStack_128 = local_90;
              local_d8 = (undefined4 *)(DAT_01d4eba4 + 0x1c);
              FUN_01aaa328(iVar7,pcVar3,puVar9[4],&pppuStack_130,&local_e0);
            }
          }
        }
        local_38 = (undefined4 ***)&DAT_80000000;
        local_124 = 2;
        *(undefined1 *)((int)param_1 + 0x326) = 0;
        local_e0 = (undefined4 ***)param_1[0xbb];
        local_dc = (undefined **)param_1[0xbc];
        local_d8 = (undefined4 *)param_1[0xbd];
        iVar7 = thunk_FUN_01be5118(0x5f);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x5f);
        }
        FUN_01bed4e2(iVar7,
                     "Cgminer connection timeout. Client\'s connection was idle or request took a long time to execute"
                     ,0x5f);
        local_208 = 0x5f;
        local_210 = 0x5f;
        local_218 = (undefined4 **)0x0;
        local_78 = (undefined4 ***)param_1[0xc6];
        local_74 = (undefined **)param_1[199];
        local_70 = (undefined4 *)param_1[200];
        local_20c = iVar7;
        FUN_014ad6c8(param_1 + 0xbf,&local_38,&pppuStack_130,&local_e0,3,&local_218,&local_78);
      }
      else if (cVar4 != '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("all branches are disabled and there is no else branch",0x6b,&DAT_01cf96cc);
      }
      FUN_006763fc(param_1 + 0xbf);
      uVar12 = 1;
      if ((*(char *)((int)param_1 + 0x326) == '\x01') && (param_1[0xbb] != -0x80000000)) {
        FUN_019bb7e0(param_1[0xbb],param_1[0xbc]);
      }
    }
    *(undefined1 *)(param_1 + 0xc9) = uVar12;
    return cVar4 == '\x03';
  }
  puVar6 = (undefined1 *)((int)param_1 + 0x325);
  *puVar6 = 0;
  *(undefined1 *)((int)param_1 + 0x32a) = 1;
  *(undefined4 *)((int)param_1 + 0x326) = 0x1010101;
  FUN_019e6e74(&pppuStack_130,&switchD_014adcd0::switchdataD_014adcd4,10,0,0,&DAT_01cf9694);
  *(undefined1 *)((int)param_1 + 0x32a) = 0;
  local_a8 = (undefined4 ***)*param_1;
  ppuStack_a4 = (undefined **)param_1[1];
  puStack_a0 = (undefined4 *)param_1[2];
  uStack_9c = param_1[3];
  local_88 = (undefined *)*param_1;
  local_84 = (undefined **)param_1[1];
  uStack_80 = param_1[2];
  uStack_7c = param_1[3];
  FUN_01a3d3d8(&local_50);
  FUN_01a3d418(&local_38);
  uStack_6c = uStack_2c;
  local_70 = local_30;
  local_74 = local_34;
  local_78 = local_38;
  local_64 = local_50;
  ppppuStack_60 = local_4c;
  uStack_5c = uStack_48;
  uStack_58 = uStack_44;
  uStack_54 = uStack_40;
  uStack_68 = uStack_28;
  local_b8 = local_a8;
  ppuStack_b4 = ppuStack_a4;
  puStack_b0 = puStack_a0;
  uStack_ac = uStack_9c;
  local_e0 = local_38;
  local_dc = local_34;
  local_d8 = local_30;
  uStack_d4 = uStack_2c;
  uStack_d0 = uStack_28;
  local_cc = local_50;
  ppppuStack_c8 = local_4c;
  uStack_c4 = uStack_48;
  uStack_c0 = uStack_44;
  uStack_bc = uStack_40;
  piVar21 = (int *)param_1[0xbf];
  uVar14 = param_1[4];
  uVar13 = param_1[5];
  uVar11 = param_1[0xbe];
  *(undefined2 *)(param_1 + 0xca) = 0;
  piVar18 = piVar21 + 0x26;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar18);
  } while (!bVar2);
  *piVar18 = *piVar18 + 1;
  do {
    iVar7 = *piVar21;
    bVar2 = (bool)hasExclusiveAccess(piVar21);
  } while (!bVar2);
  *piVar21 = iVar7 + 1;
  if (-1 < iVar7) {
    piVar18 = (int *)param_1[0xc0];
    do {
      iVar7 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar7 + 1;
    if (-1 < iVar7) {
      piVar19 = (int *)param_1[0xc1];
      piVar20 = piVar19 + 0x26;
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar2);
      *piVar20 = *piVar20 + 1;
      do {
        iVar7 = *piVar19;
        bVar2 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar2);
      *piVar19 = iVar7 + 1;
      if (-1 < iVar7) {
        piVar20 = (int *)param_1[0xc2];
        uVar16 = param_1[0xc3];
        do {
          iVar7 = *piVar20;
          bVar2 = (bool)hasExclusiveAccess(piVar20);
        } while (!bVar2);
        *piVar20 = iVar7 + 1;
        if (-1 < iVar7) {
          piVar15 = piVar20 + 0x29;
          do {
            bVar2 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar2);
          *piVar15 = *piVar15 + 1;
          piVar15 = (int *)param_1[0xc4];
          do {
            iVar7 = *piVar15;
            bVar2 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar2);
          *piVar15 = iVar7 + 1;
          if (-1 < iVar7) {
            piVar17 = (int *)param_1[0xc5];
            piVar10 = piVar17 + 0x26;
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar2);
            *piVar10 = *piVar10 + 1;
            do {
              iVar7 = *piVar17;
              bVar2 = (bool)hasExclusiveAccess(piVar17);
            } while (!bVar2);
            *piVar17 = iVar7 + 1;
            if (-1 < iVar7) {
              *(undefined1 *)((int)param_1 + 0x327) = 0;
              local_38 = local_a8;
              local_34 = ppuStack_a4;
              local_30 = puStack_a0;
              uStack_2c = uStack_9c;
              FUN_01bed4e2(&local_218,&pppuStack_130,0x50);
              puVar9 = param_1 + 6;
              FUN_01bed4e2(puVar9,&local_218,0x50);
              param_1[0x62] = piVar18;
              param_1[99] = piVar19;
              param_1[100] = piVar20;
              param_1[0x61] = piVar21;
              param_1[0x65] = uVar16;
              param_1[0x66] = piVar15;
              param_1[0x67] = piVar17;
              param_1[0x40] = uVar14;
              param_1[0x41] = uVar13;
              param_1[0x68] = param_1[0xc6];
              param_1[0x69] = param_1[199];
              param_1[0x6a] = param_1[200];
              param_1[0x6b] = uVar11;
              param_1[0x6c] = param_1[0xb8];
              param_1[0x6d] = param_1[0xb9];
              param_1[0x6e] = param_1[0xba];
              param_1[0x6f] = local_38;
              param_1[0x70] = local_34;
              param_1[0x71] = local_30;
              param_1[0x72] = uStack_2c;
              param_1[0x74] = 1;
              param_1[0x73] = 0;
              param_1[0x75] = 0;
              param_1[0x76] = local_78;
              param_1[0x77] = local_74;
              param_1[0x78] = local_70;
              param_1[0x79] = uStack_6c;
              param_1[0x7a] = uStack_68;
              param_1[0x7b] = local_64;
              param_1[0x7c] = ppppuStack_60;
              param_1[0x7d] = uStack_5c;
              param_1[0x7e] = uStack_58;
              param_1[0x7f] = uStack_54;
              *(undefined1 *)(param_1 + 0x82) = 0;
              param_1[0xb6] = puVar6;
              param_1[0xb7] = puVar9;
              goto LAB_014ae010;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x14ae4d4);
  (*pcVar1)();
}

