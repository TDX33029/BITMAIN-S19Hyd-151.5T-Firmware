// FUN_01743390 @ 01743390 size=552 calls_out=0 calls_in=2
// strings: 

void FUN_01743390(undefined8 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  undefined4 unaff_lr;
  undefined8 uVar16;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_27;
  undefined1 local_25;
  
  if (param_2[2] == 0x3b9aca01) {
    uVar16 = (**(code **)(param_2[1] + 0x14))(*param_2);
    *param_1 = uVar16;
    *(undefined4 *)(param_1 + 1) = 0x3b9aca01;
    return;
  }
  piVar6 = (int *)param_2[0xb];
  do {
    iVar7 = *piVar6;
    bVar5 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar5);
  *piVar6 = iVar7 + 1;
  if (-1 < iVar7) {
    piVar8 = (int *)param_2[0xc];
    do {
      iVar7 = *piVar8;
      bVar5 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar5);
    *piVar8 = iVar7 + 1;
    if (-1 < iVar7) {
      uVar13 = param_2[0xd];
      piVar10 = (int *)param_2[0xe];
      do {
        iVar7 = *piVar10;
        bVar5 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar5);
      *piVar10 = iVar7 + 1;
      if (-1 < iVar7) {
        piVar11 = (int *)param_2[0xf];
        do {
          iVar7 = *piVar11;
          bVar5 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar5);
        *piVar11 = iVar7 + 1;
        if (-1 < iVar7) {
          piVar12 = (int *)param_2[0x10];
          do {
            iVar7 = *piVar12;
            bVar5 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar5);
          *piVar12 = iVar7 + 1;
          if (-1 < iVar7) {
            puVar14 = (undefined1 *)param_2[2];
            if (puVar14 != &DAT_3b9aca00) {
              local_6c = *param_2;
              local_70 = param_2[1];
            }
            uVar2 = *(undefined1 *)(param_2 + 0x11);
            uVar15 = 2;
            uVar3 = *(undefined1 *)((int)param_2 + 0x45);
            uVar4 = *(undefined1 *)((int)param_2 + 0x46);
            if (*(char *)(param_2 + 10) != '\x02') {
              unaff_lr = 0x17434e0;
              (**(code **)param_2[6])(&local_38,param_2 + 9,param_2[7],param_2[8]);
              uVar15 = *(undefined1 *)(param_2 + 10);
              local_48 = local_38;
              uStack_44 = uStack_34;
              uStack_40 = uStack_30;
              uStack_3c = uStack_2c;
              local_4a = local_25;
              local_4c = local_27;
            }
            piVar9 = (int *)param_2[4];
            if (piVar9 != (int *)0x0) {
              do {
                iVar7 = *piVar9;
                bVar5 = (bool)hasExclusiveAccess(piVar9);
              } while (!bVar5);
              *piVar9 = iVar7 + 1;
              if (iVar7 < 0) goto LAB_017435b4;
              unaff_lr = param_2[5];
            }
            *(int **)((int)param_1 + 0x2c) = piVar6;
            *(int **)(param_1 + 6) = piVar8;
            *(undefined4 *)((int)param_1 + 0x34) = uVar13;
            *(int **)(param_1 + 7) = piVar10;
            *(int **)((int)param_1 + 0x3c) = piVar11;
            *(undefined4 *)(param_1 + 3) = local_48;
            *(undefined4 *)((int)param_1 + 0x1c) = uStack_44;
            *(undefined4 *)(param_1 + 4) = uStack_40;
            *(undefined4 *)((int)param_1 + 0x24) = uStack_3c;
            *(undefined1 *)((int)param_1 + 0x2b) = local_4a;
            *(undefined1 *)((int)param_1 + 0x46) = uVar4;
            *(undefined4 *)param_1 = local_6c;
            *(undefined4 *)((int)param_1 + 4) = local_70;
            *(int **)(param_1 + 2) = piVar9;
            *(undefined2 *)((int)param_1 + 0x29) = local_4c;
            *(undefined1 *)((int)param_1 + 0x45) = uVar3;
            *(undefined1 *)((int)param_1 + 0x44) = uVar2;
            *(int **)(param_1 + 8) = piVar12;
            *(undefined1 *)(param_1 + 5) = uVar15;
            *(undefined4 *)((int)param_1 + 0x14) = unaff_lr;
            *(undefined1 **)(param_1 + 1) = puVar14;
            return;
          }
        }
      }
    }
  }
LAB_017435b4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x17435b4);
  (*pcVar1)();
}

