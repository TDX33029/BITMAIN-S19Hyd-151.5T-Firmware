// FUN_0110e880 @ 0110e880 size=2116 calls_out=19 calls_in=3
// strings: API usage task shutdown called but task was never started or already shut down. | api_logging::api_usage::manageropen/utils-rs/api-logging/src/api_usage/manager.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | api_logging::api_usage::manageropen/utils-rs/api-logging/src/api_usage/manager.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | api_logging::api_usage::manageropen/utils-rs/api-logging/src/api_usage/manager.rs

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0110e880(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  uint **ppuVar2;
  undefined4 ****ppppuVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  char *pcVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  int *local_9c;
  uint **local_98;
  undefined4 ****local_94;
  undefined1 *local_90;
  uint **local_88;
  undefined4 ****ppppuStack_84;
  undefined1 *puStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 **local_70;
  int iStack_6c;
  uint **local_68;
  undefined4 ****local_64;
  undefined1 *local_60;
  int local_5c;
  uint ***local_54;
  undefined4 local_50;
  uint *local_4c;
  char *local_48;
  undefined4 local_44;
  uint **local_40;
  undefined4 ****local_3c;
  undefined1 *local_38;
  undefined4 ***local_30;
  char **local_2c;
  uint *local_28;
  
  iVar17 = param_2[1];
  uVar8 = *param_3;
  iVar16 = 2;
  iVar12 = 0;
  if (iVar17 != 1) {
    iVar12 = iVar17 + 1;
  }
  piVar9 = (int *)((uint)&local_88 | 4);
  param_2[1] = iVar12;
  bVar1 = false;
LAB_0110e8e4:
  do {
    while( true ) {
      if (iVar17 == 1) goto LAB_0110e9a0;
      if (iVar17 == 0) break;
      iVar17 = iVar17 + -2;
    }
    if (iVar16 == 0) {
LAB_0110ef80:
      if (!bVar1) {
        piVar9 = (int *)*param_2;
        if (*piVar9 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("expected completed future",0x19,&DAT_01c20014);
        }
        local_70 = (undefined4 **)piVar9[2];
        iStack_6c = piVar9[3];
        local_68 = (uint **)piVar9[4];
        local_64 = (undefined4 ****)piVar9[5];
        *piVar9 = 2;
        if (piVar9[6] != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("expected completed future",0x19,&DAT_01c20014);
        }
        piVar9[6] = 2;
        iVar12 = piVar9[3];
        iVar16 = piVar9[4];
        iVar17 = piVar9[5];
        param_1[2] = piVar9[2];
        param_1[3] = iVar12;
        param_1[4] = iVar16;
        param_1[5] = iVar17;
        uVar8 = 0;
        goto LAB_0110eff0;
      }
LAB_0110ef94:
      uVar8 = 1;
LAB_0110eff0:
      *param_1 = uVar8;
      param_1[1] = 0;
      return;
    }
    piVar13 = (int *)*param_2;
    iVar16 = iVar16 + -1;
    if (*piVar13 == 0) {
      FUN_00f6119c(&local_70,piVar13 + 2,uVar8);
      if (((uint)local_70 & 1) == 0) {
        local_98 = local_68;
        local_94 = local_64;
        local_90 = local_60;
        *piVar9 = (int)local_68;
        piVar9[1] = (int)local_64;
        piVar9[2] = (int)local_60;
        piVar9[3] = local_5c;
        FUN_0110f3c8(piVar13);
        *piVar13 = 1;
        piVar13[1] = (int)local_88;
        piVar13[2] = (int)ppppuStack_84;
        piVar13[3] = (int)puStack_80;
        piVar13[4] = iStack_7c;
        piVar13[5] = iStack_78;
        goto LAB_0110e9a0;
      }
      bVar1 = true;
      if (iVar16 != 0) {
        iVar16 = 0;
        goto LAB_0110e9b0;
      }
      goto LAB_0110ef94;
    }
    if (*piVar13 != 1) goto LAB_0110effc;
LAB_0110e9a0:
    if (iVar16 == 0) goto LAB_0110ef80;
    piVar13 = (int *)*param_2;
    iVar16 = iVar16 + -1;
LAB_0110e9b0:
    iVar17 = 0;
    if (piVar13[6] == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)piVar13[0x19]) {
      case '\0':
        iVar12 = piVar13[7] + 0x18;
        piVar13[8] = iVar12;
        *(undefined1 *)((int)piVar13 + 0x25) = 0;
LAB_0110ea48:
        *(undefined1 *)(piVar13 + 9) = 0;
        FUN_01a3b7c0(*(undefined4 *)(iVar12 + 8));
        iVar12 = iVar12 + 0x1c;
        piVar13[10] = iVar12;
        *(undefined1 *)(piVar13 + 0x18) = 0;
LAB_0110ea68:
        *(undefined1 *)(piVar13 + 0x17) = 0;
        piVar13[0xb] = iVar12;
LAB_0110ea74:
        *(undefined1 *)(piVar13 + 0xe) = 0;
        piVar13[0xc] = iVar12;
LAB_0110ea80:
        piVar13[0xd] = iVar12;
LAB_0110ea84:
        piVar13[0xf] = iVar12;
        *(undefined1 *)(piVar13 + 0x16) = 0;
        piVar13[0x12] = 0;
        piVar13[0x13] = 0;
        piVar13[0x14] = 1;
        piVar13[0x15] = 1;
        piVar13[0x10] = 0;
switchD_0110edd0_caseD_4:
        bVar5 = FUN_019f9bc4(piVar13 + 0xf,param_3);
        if (bVar5 == 2) {
          *(undefined1 *)(piVar13 + 0xe) = 4;
          uVar6 = 3;
          *(undefined1 *)(piVar13 + 0x17) = 3;
          *(undefined1 *)(piVar13 + 0x18) = 3;
          goto LAB_0110eb94;
        }
        FUN_0193c3cc(piVar13 + 0xf);
        if ((bVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c232b0);
        }
        iVar12 = piVar13[0xb];
        *(undefined1 *)(piVar13 + 0x18) = 1;
        *(undefined1 *)(piVar13 + 0x17) = 1;
        *(undefined1 *)(piVar13 + 0xe) = 1;
        iVar11 = *(int *)(iVar12 + 0x14);
        *(undefined4 *)(iVar12 + 0x14) = 0;
        *(undefined1 *)(piVar13 + 9) = 1;
        piVar13[10] = iVar11;
        FUN_019f8c54(iVar12,1);
        iVar12 = piVar13[10];
        if (iVar12 != 0) {
          piVar13[0xb] = iVar12;
          *(undefined1 *)(piVar13 + 9) = 0;
          goto LAB_0110eb78;
        }
        if ((DAT_01d50f88 < 4) &&
           (((DAT_01d4c770 - 1 < 2 ||
             ((DAT_01d4c770 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4c768), cVar7 != '\0')))) &&
            (iVar12 = FUN_01aaa278(DAT_01d4c768), iVar12 != 0)))) {
          if (*(int *)(DAT_01d4c768 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1f150);
          }
          local_2c = &local_48;
          local_68 = *(uint ***)(DAT_01d4c768 + 0x24);
          local_64 = *(undefined4 *****)(DAT_01d4c768 + 0x28);
          local_4c = (uint *)(DAT_01d4c768 + 0x1c);
          local_70 = (undefined4 **)*local_4c;
          local_30 = &local_70;
          local_60 = (undefined1 *)0x0;
          local_54 = (uint ***)&local_30;
          local_50 = 1;
          local_28 = (uint *)&DAT_01d2ea4c;
          local_44 = 0x9f;
          local_48 = 
          "API usage task shutdown called but task was never started or already shut down.";
          iStack_6c = *(int *)(DAT_01d4c768 + 0x20);
          FUN_01aaaecc(DAT_01d4c768,&local_54);
          iVar12 = DAT_01d4c768;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_94 = *(undefined4 *****)(DAT_01d4c768 + 0x14);
            local_90 = *(undefined1 **)(DAT_01d4c768 + 0x18);
            local_98 = (uint **)0x2;
            DataMemoryBarrier(0xb);
            pcVar14 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar15 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar15 = &DAT_01cfc5e0;
            }
            iVar11 = (*(code *)puVar15[3])(pcVar14,&local_98);
            if (iVar11 != 0) {
              local_88 = local_98;
              ppppuStack_84 = local_94;
              puStack_80 = local_90;
              FUN_01aaa328(iVar12,pcVar14,puVar15[4],&local_88,&local_54);
            }
          }
        }
        else {
          iVar12 = DAT_01d4c768;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_3c = *(undefined4 *****)(DAT_01d4c768 + 0x14);
            local_38 = *(undefined1 **)(DAT_01d4c768 + 0x18);
            local_40 = (uint **)0x2;
            DataMemoryBarrier(0xb);
            pcVar14 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar15 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar15 = &DAT_01cfc5e0;
            }
            iVar11 = (*(code *)puVar15[3])(pcVar14,&local_40);
            if (iVar11 != 0) {
              if (*(int *)(DAT_01d4c768 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1f150);
              }
              local_94 = &local_54;
              local_98 = (uint **)&local_70;
              local_30 = &local_98;
              local_64 = *(undefined4 *****)(DAT_01d4c768 + 0x28);
              local_68 = *(uint ***)(DAT_01d4c768 + 0x24);
              local_60 = (undefined1 *)0x0;
              local_2c = (char **)&DAT_00000001;
              local_90 = &DAT_01d2ea4c;
              local_50 = 0x9f;
              local_54 = (uint ***)0x40036f;
              local_88 = local_40;
              ppppuStack_84 = local_3c;
              puStack_80 = local_38;
              local_70 = *(undefined4 ***)(DAT_01d4c768 + 0x1c);
              iStack_6c = *(int *)(DAT_01d4c768 + 0x20);
              local_28 = (uint *)(DAT_01d4c768 + 0x1c);
              FUN_01aaa328(iVar12,pcVar14,puVar15[4],&local_88,&local_30);
            }
          }
        }
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1f130);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1f130);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)piVar13 + 0x25)) {
        case 0:
          iVar12 = piVar13[8];
          goto LAB_0110ea48;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c1f140);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c1f140);
        case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)piVar13[0x18]) {
          case '\0':
            iVar12 = piVar13[10];
            goto LAB_0110ea68;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c23280);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c23280);
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)piVar13[0x17]) {
          case '\0':
            iVar12 = piVar13[0xb];
            goto LAB_0110ea74;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c23290);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c23290);
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)piVar13[0xe]) {
          case '\0':
            iVar12 = piVar13[0xc];
            goto LAB_0110ea80;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c232a0);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c232a0);
          case '\x03':
            iVar12 = piVar13[0xd];
            goto LAB_0110ea84;
          }
          goto switchD_0110edd0_caseD_4;
        case 4:
          iVar12 = piVar13[0xb];
        }
LAB_0110eb78:
        FUN_01209998(&local_70,iVar12,uVar8);
        iVar12 = local_5c;
        puVar4 = local_60;
        ppppuVar3 = local_64;
        ppuVar2 = local_68;
        if (((uint)local_70 & 1) != 0) {
          uVar6 = 4;
LAB_0110eb94:
          *(undefined1 *)((int)piVar13 + 0x25) = uVar6;
          *(undefined1 *)(piVar13 + 0x19) = 3;
          bVar1 = true;
          goto LAB_0110e8e4;
        }
        piVar10 = (int *)piVar13[0xb];
        if (*piVar10 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar18 = (bool)hasExclusiveAccess(piVar10);
          if (!bVar18) goto LAB_0110ed6c;
          *piVar10 = 0x84;
        }
        else {
          ClearExclusiveLocal();
LAB_0110ed6c:
          (**(code **)(piVar10[2] + 0x10))();
        }
        bVar18 = ppuVar2 == (uint **)0x0 && ppppuVar3 == (undefined4 ****)0x0;
        if (ppuVar2 != (uint **)0x0 || ppppuVar3 != (undefined4 ****)0x0) {
          bVar18 = puVar4 == (undefined1 *)0x0;
        }
        if (!bVar18) {
          FUN_00f80320(puVar4,iVar12);
        }
      }
      local_9c = piVar13 + 8;
      *(undefined2 *)(piVar13 + 9) = 0x100;
      FUN_0110f420(local_9c);
      piVar13[6] = 1;
      *(undefined1 *)(piVar13 + 0x19) = 1;
      goto LAB_0110e8e4;
    }
    if (piVar13[6] != 1) {
LAB_0110effc:
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("MaybeDone polled after value taken",0x45,&DAT_01d270f0);
    }
  } while( true );
}

