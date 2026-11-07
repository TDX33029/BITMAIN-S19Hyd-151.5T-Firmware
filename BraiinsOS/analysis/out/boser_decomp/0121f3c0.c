// FUN_0121f3c0 @ 0121f3c0 size=1000 calls_out=14 calls_in=2
// strings: support archive collection task terminated unexpectedly

void FUN_0121f3c0(undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 extraout_r2;
  undefined1 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 *unaff_r9;
  int iVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined4 *local_44;
  undefined4 **local_40;
  code *local_3c;
  undefined4 uStack_38;
  undefined4 **local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  if ((char)param_2[3] == '\0') {
    iVar14 = *param_2;
    pcVar12 = (char *)(iVar14 + 8);
    if (*pcVar12 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar12);
      if (!bVar1) goto LAB_0121f670;
      *pcVar12 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0121f670:
      FUN_0164fba8(pcVar12);
    }
    FUN_0165098c(pcVar12);
    uVar3 = FUN_019ec670(param_3);
    bVar1 = false;
    uVar7 = 0;
    if ((uVar3 & 0xff) != 2) {
      uVar7 = uVar3;
    }
    if ((uVar7 & 1) == 0) {
      uVar7 = uVar7 & 0xffffff;
      uVar13 = *(uint *)(iVar14 + 0x10);
      uVar3 = uVar7 >> 8;
      uVar16 = (undefined1)(uVar7 >> 0x10);
      if (uVar13 == 0) {
        if (*(char *)(iVar14 + 0x30) == '\0') {
          uVar15 = (**(code **)*param_3)(param_3[1]);
          unaff_r9 = (undefined4 *)((ulonglong)uVar15 >> 0x20);
          uVar5 = (undefined4)uVar15;
          uVar11 = 5;
          if (*(int *)(iVar14 + 0x20) != 0) {
            uVar5 = (**(code **)(*(int *)(iVar14 + 0x20) + 0xc))(*(undefined4 *)(iVar14 + 0x24));
          }
          uVar17 = (undefined1)uVar3;
          *(undefined8 *)(iVar14 + 0x20) = uVar15;
          if ((uVar3 & 1) != 0) {
            uVar15 = thunk_FUN_01bee35a(uVar5,0x20);
            iVar14 = (int)uVar15 + (int)((ulonglong)uVar15 >> 0x20);
            uVar9 = extraout_r2;
            if (*(char *)(iVar14 + 0x38) != '\x01') {
              if (*(char *)(iVar14 + 0x38) == '\x02') goto LAB_0121f5b4;
              uVar9 = uVar17;
              FUN_019a2bcc(iVar14,&LAB_019efb68);
              *(undefined1 *)(iVar14 + 0x38) = 1;
            }
            uVar11 = 5;
            *(undefined1 *)(iVar14 + 0x31) = uVar16;
            *(undefined1 *)(iVar14 + 0x30) = uVar9;
          }
        }
        else {
          uVar11 = 4;
          bVar1 = true;
        }
      }
      else {
        puVar8 = (undefined4 *)param_4[1];
        unaff_r9 = (undefined4 *)param_4[2];
        if ((uint)((int)puVar8 - (int)unaff_r9) < uVar13) {
          uVar13 = (int)puVar8 - (int)unaff_r9;
        }
        puVar10 = (undefined4 *)(uVar13 + (int)unaff_r9);
        if ((CARRY4(uVar13,(uint)unaff_r9)) || (puVar8 < puVar10)) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(unaff_r9,puVar10,puVar8,&DAT_01d295c0,uVar7 >> 0x10,uVar3);
        }
        FUN_01bed4e2(*param_4 + (int)unaff_r9,*(undefined4 *)(iVar14 + 0xc),uVar13);
        param_4[2] = (int)puVar10;
        if ((undefined4 *)param_4[3] < puVar10) {
          param_4[3] = (int)puVar10;
        }
        FUN_01283ef4((undefined4 *)(iVar14 + 0xc),uVar13);
        uVar11 = 4;
        bVar1 = true;
        if (puVar8 != unaff_r9) {
          iVar4 = *(int *)(iVar14 + 0x28);
          *(undefined4 *)(iVar14 + 0x28) = 0;
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar14 + 0x2c));
          }
        }
      }
    }
    else {
      uVar11 = 5;
    }
LAB_0121f5b4:
    FUN_01650a90(pcVar12);
    if (*pcVar12 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(pcVar12);
        if (bVar2) {
          *pcVar12 = '\0';
          goto LAB_0121f5f8;
        }
      } while (*pcVar12 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar12);
LAB_0121f5f8:
    if (bVar1) {
      uVar7 = param_4[2];
      if ((uint)param_4[1] < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar7,param_4[1],&DAT_01d2e4e0);
      }
      if (uVar7 == 0) {
        piVar6 = (int *)param_2[2];
        *(undefined1 *)(param_2 + 3) = 1;
        if (piVar6 == (int *)0x0) {
          param_2[2] = 0;
          goto LAB_0121f6f0;
        }
        DataMemoryBarrier(0xb);
        if ((piVar6[8] & 2U) == 0) {
          if ((piVar6[8] & 4U) == 0) goto LAB_0121f3d8;
LAB_0121f69c:
          bVar1 = true;
        }
        else {
          unaff_r9 = (undefined4 *)piVar6[3];
          iVar14 = piVar6[2];
          piVar6[2] = 0;
          if (iVar14 != 1) goto LAB_0121f69c;
          bVar1 = false;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0121ce30(param_2[2]);
        }
        param_2[2] = 0;
        if (bVar1) {
LAB_0121f6f0:
          FUN_01af9864(param_1,"support archive collection task terminated unexpectedly",0x37);
          return;
        }
        if (unaff_r9 != (undefined4 *)0x0) {
          local_3c = FUN_00667a08;
          local_40 = &local_44;
          local_44 = unaff_r9;
          FUN_00664898(&local_30,&DAT_0059d540,&local_40);
          local_40 = local_30;
          local_3c = (code *)local_2c;
          uStack_38 = uStack_28;
          FUN_00768b9c(&local_30,&local_40);
          puVar8 = (undefined4 *)*local_44;
          *param_1 = local_30;
          param_1[1] = local_2c;
          (*(code *)*puVar8)();
          return;
        }
        goto LAB_0121f3d8;
      }
    }
    *param_1 = uVar11;
    param_1[1] = 0;
  }
  else {
LAB_0121f3d8:
    *(undefined1 *)param_1 = 4;
  }
  return;
}

