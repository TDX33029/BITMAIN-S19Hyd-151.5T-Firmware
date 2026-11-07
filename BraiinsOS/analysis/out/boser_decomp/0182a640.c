// FUN_0182a640 @ 0182a640 size=568 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0182a640(undefined4 *param_1)

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
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 *local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined2 local_6f;
  undefined1 local_6d;
  int *local_6c;
  int *piStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  int *local_44;
  int *local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar6 = (int *)param_1[0xb];
  do {
    iVar7 = *piVar6;
    bVar5 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar5);
  *piVar6 = iVar7 + 1;
  if (-1 < iVar7) {
    piVar8 = (int *)param_1[0xc];
    do {
      iVar7 = *piVar8;
      bVar5 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar5);
    *piVar8 = iVar7 + 1;
    if (-1 < iVar7) {
      uVar12 = param_1[0xd];
      piVar9 = (int *)param_1[0xe];
      do {
        iVar7 = *piVar9;
        bVar5 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar5);
      *piVar9 = iVar7 + 1;
      if (-1 < iVar7) {
        piVar11 = (int *)param_1[0xf];
        do {
          iVar7 = *piVar11;
          bVar5 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar5);
        *piVar11 = iVar7 + 1;
        if (-1 < iVar7) {
          piVar10 = (int *)param_1[0x10];
          do {
            iVar7 = *piVar10;
            bVar5 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar5);
          *piVar10 = iVar7 + 1;
          local_50 = piVar6;
          local_4c = piVar8;
          local_48 = uVar12;
          local_44 = piVar9;
          local_40 = piVar11;
          if (-1 < iVar7) {
            puVar13 = (undefined1 *)param_1[2];
            if (puVar13 != &DAT_3b9aca00) {
              local_a4 = *param_1;
              local_a8 = param_1[1];
            }
            uVar2 = *(undefined1 *)(param_1 + 0x11);
            local_70 = 2;
            uVar3 = *(undefined1 *)((int)param_1 + 0x45);
            uVar4 = *(undefined1 *)((int)param_1 + 0x46);
            if (*(char *)(param_1 + 10) != '\x02') {
              (**(code **)param_1[6])(&local_98,param_1 + 9,param_1[7],param_1[8]);
              local_70 = *(undefined1 *)(param_1 + 10);
              local_38 = local_98;
              uStack_34 = local_94;
              uStack_30 = local_90;
              uStack_2c = uStack_8c;
              local_3a = local_88._3_1_;
              local_3c = local_88._1_2_;
            }
            local_88 = (int *)param_1[4];
            if (local_88 != (int *)0x0) {
              do {
                iVar7 = *local_88;
                bVar5 = (bool)hasExclusiveAccess(local_88);
              } while (!bVar5);
              *local_88 = iVar7 + 1;
              if (iVar7 < 0) goto LAB_0182a874;
              local_a0 = param_1[5];
            }
            local_6c = local_50;
            piStack_68 = local_4c;
            uStack_64 = local_48;
            piStack_60 = local_44;
            piStack_5c = local_40;
            local_80 = local_38;
            uStack_7c = uStack_34;
            uStack_78 = uStack_30;
            uStack_74 = uStack_2c;
            local_94 = local_a8;
            local_98 = local_a4;
            local_6f = local_3c;
            local_84 = local_a0;
            local_6d = local_3a;
            local_90 = puVar13;
            local_58 = piVar10;
            local_54 = uVar2;
            local_53 = uVar3;
            local_52 = uVar4;
            iVar7 = thunk_FUN_01be5118(0x48);
            if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(8,0x48);
            }
            FUN_01bed4e2(iVar7,&local_98,0x48);
            return CONCAT44(&DAT_01d1e16c,iVar7);
          }
        }
      }
    }
  }
LAB_0182a874:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x182a874);
  (*pcVar1)();
}

