// FUN_01797bf0 @ 01797bf0 size=432 calls_out=0 calls_in=2
// strings: 

void FUN_01797bf0(undefined4 *param_1,undefined4 *param_2)

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
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined4 unaff_lr;
  undefined4 local_68;
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
  
  piVar6 = (int *)param_2[9];
  do {
    iVar7 = *piVar6;
    bVar5 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar5);
  *piVar6 = iVar7 + 1;
  if (-1 < iVar7) {
    piVar8 = (int *)param_2[10];
    do {
      iVar7 = *piVar8;
      bVar5 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar5);
    *piVar8 = iVar7 + 1;
    if (-1 < iVar7) {
      uVar12 = param_2[0xb];
      piVar9 = (int *)param_2[0xc];
      do {
        iVar7 = *piVar9;
        bVar5 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar5);
      *piVar9 = iVar7 + 1;
      if (-1 < iVar7) {
        piVar11 = (int *)param_2[0xd];
        do {
          iVar7 = *piVar11;
          bVar5 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar5);
        *piVar11 = iVar7 + 1;
        if (-1 < iVar7) {
          piVar10 = (int *)param_2[0xe];
          do {
            iVar7 = *piVar10;
            bVar5 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar5);
          *piVar10 = iVar7 + 1;
          if (-1 < iVar7) {
            puVar13 = (undefined1 *)param_2[2];
            if (puVar13 != &DAT_3b9aca00) {
              unaff_lr = *param_2;
              local_68 = param_2[1];
            }
            uVar2 = *(undefined1 *)(param_2 + 0xf);
            uVar14 = 2;
            uVar3 = *(undefined1 *)((int)param_2 + 0x3e);
            uVar4 = *(undefined1 *)((int)param_2 + 0x3d);
            if (*(char *)(param_2 + 8) != '\x02') {
              (**(code **)param_2[4])(&local_38,param_2 + 7,param_2[5],param_2[6]);
              uVar14 = *(undefined1 *)(param_2 + 8);
              local_48 = local_38;
              uStack_44 = uStack_34;
              uStack_40 = uStack_30;
              uStack_3c = uStack_2c;
              local_4a = local_25;
              local_4c = local_27;
            }
            param_1[9] = piVar6;
            param_1[10] = piVar8;
            param_1[0xb] = uVar12;
            param_1[0xc] = piVar9;
            param_1[0xd] = piVar11;
            *(undefined1 *)((int)param_1 + 0x3d) = uVar4;
            *(undefined1 *)(param_1 + 0xf) = uVar2;
            param_1[1] = local_68;
            param_1[2] = puVar13;
            param_1[0xe] = piVar10;
            *(undefined1 *)((int)param_1 + 0x3e) = uVar3;
            *param_1 = unaff_lr;
            param_1[4] = local_48;
            param_1[5] = uStack_44;
            param_1[6] = uStack_40;
            param_1[7] = uStack_3c;
            *(undefined1 *)(param_1 + 8) = uVar14;
            *(undefined2 *)((int)param_1 + 0x21) = local_4c;
            *(undefined1 *)((int)param_1 + 0x23) = local_4a;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1797d9c);
  (*pcVar1)();
}

