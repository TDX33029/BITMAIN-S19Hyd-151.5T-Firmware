// FUN_0147f5c4 @ 0147f5c4 size=484 calls_out=0 calls_in=3
// strings: 

void FUN_0147f5c4(undefined4 *param_1,undefined4 *param_2)

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
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar6 = (int *)param_2[0xb];
  do {
    iVar7 = *piVar6;
    bVar5 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar5);
  *piVar6 = iVar7 + 1;
  if (-1 < iVar7) {
    piVar10 = (int *)param_2[0xc];
    uVar15 = param_2[0xd];
    do {
      iVar7 = *piVar10;
      bVar5 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar5);
    *piVar10 = iVar7 + 1;
    if (-1 < iVar7) {
      piVar8 = (int *)param_2[0xe];
      do {
        iVar7 = *piVar8;
        bVar5 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar5);
      *piVar8 = iVar7 + 1;
      if (-1 < iVar7) {
        piVar13 = (int *)param_2[0xf];
        do {
          iVar7 = *piVar13;
          bVar5 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar5);
        *piVar13 = iVar7 + 1;
        if (-1 < iVar7) {
          piVar9 = (int *)param_2[0x10];
          do {
            iVar7 = *piVar9;
            bVar5 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar5);
          *piVar9 = iVar7 + 1;
          if (-1 < iVar7) {
            puVar14 = (undefined1 *)param_2[2];
            if (puVar14 != &DAT_3b9aca00) {
              local_6c = *param_2;
              local_70 = param_2[1];
            }
            uVar12 = param_2[0x10];
            uVar16 = 2;
            uVar2 = *(undefined1 *)(param_2 + 0x11);
            uVar3 = *(undefined1 *)((int)param_2 + 0x45);
            uVar4 = *(undefined1 *)((int)param_2 + 0x46);
            if (*(char *)(param_2 + 10) != '\x02') {
              (**(code **)param_2[6])(&local_38,param_2 + 9,param_2[7],param_2[8]);
              uVar16 = *(undefined1 *)(param_2 + 10);
              local_48 = local_38;
              uStack_44 = uStack_34;
              uStack_40 = uStack_30;
              uStack_3c = uStack_2c;
            }
            piVar9 = (int *)param_2[4];
            if (piVar9 == (int *)0x0) {
              uVar11 = 0;
            }
            else {
              do {
                iVar7 = *piVar9;
                bVar5 = (bool)hasExclusiveAccess(piVar9);
              } while (!bVar5);
              *piVar9 = iVar7 + 1;
              if (iVar7 < 0) goto LAB_0147f7a4;
              uVar11 = param_2[4];
              local_68 = param_2[5];
            }
            param_1[0xb] = piVar6;
            param_1[0xc] = piVar10;
            param_1[0xd] = uVar15;
            param_1[0xe] = piVar8;
            param_1[0xf] = piVar13;
            *param_1 = local_6c;
            param_1[4] = uVar11;
            param_1[5] = local_68;
            *(undefined1 *)(param_1 + 0x11) = uVar2;
            param_1[0x10] = uVar12;
            *(undefined1 *)((int)param_1 + 0x46) = uVar4;
            *(undefined1 *)((int)param_1 + 0x45) = uVar3;
            param_1[1] = local_70;
            param_1[2] = puVar14;
            *(undefined1 *)(param_1 + 10) = uVar16;
            param_1[6] = local_48;
            param_1[7] = uStack_44;
            param_1[8] = uStack_40;
            param_1[9] = uStack_3c;
            return;
          }
        }
      }
    }
  }
LAB_0147f7a4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x147f7a4);
  (*pcVar1)();
}

