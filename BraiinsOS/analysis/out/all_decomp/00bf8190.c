// FUN_00bf8190 @ 00bf8190 size=808 calls_out=12 calls_in=2
// strings: `Extensions` tracks values by type | a Display implementation returned an error unexpectedly

undefined8
FUN_00bf8190(code *param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined4 uStack_44;
  undefined2 *puStack_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined1 uStack_25;
  
  FUN_00fab1e0(&local_38,param_4,param_5);
  puVar3 = local_30;
  puVar9 = local_34;
  if (local_38 == (undefined4 *)&DAT_00000001) {
    piVar7 = (int *)param_2[0x1e];
    iVar6 = param_2[0x1f] << 4;
    uVar4 = 0xffffffff;
    do {
      if (iVar6 == 0) {
        puVar9 = (undefined4 *)0x0;
        goto LAB_00bf8364;
      }
      iVar8 = *piVar7;
      piVar11 = piVar7 + 1;
      iVar6 = iVar6 + -0x10;
      piVar1 = piVar7 + 2;
      piVar2 = piVar7 + 3;
      uVar4 = uVar4 + 1;
      piVar7 = piVar7 + 4;
    } while ((iVar8 != -0x7e2dea42 || *piVar1 != -0x2f8246a2) ||
             (*piVar11 != 0x4c65521b || *piVar2 != 0x76f4a2ad));
    if ((uint)param_2[0x22] <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,param_2[0x22],&DAT_01880824);
    }
    piVar7 = (int *)(param_2[0x21] + uVar4 * 0x18);
    iVar6 = piVar7[1];
    puVar9 = (undefined4 *)(*piVar7 + (*(int *)(iVar6 + 8) - 1U & 0xfffffff8) + 8);
    (**(code **)(iVar6 + 0xc))(&local_38,puVar9);
    if ((local_38 != (undefined4 *)0x81d215be || local_30 != (undefined4 *)0xd07db95e) ||
        (local_34 != (undefined4 *)0x4c65521b || local_2c != 0x76f4a2ad)) {
      puVar9 = (undefined4 *)0x0;
    }
    if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
    }
LAB_00bf8364:
    local_34 = &DAT_0035dc52;
    if (puVar9 != (undefined4 *)0x0) {
      local_34 = puVar9;
    }
    local_30 = (undefined4 *)0x0;
    local_38 = param_2;
    FUN_00fa04ec(&uStack_44,&local_38,4,0);
    piVar7 = (int *)FUN_00bdd0ac(param_2,&uStack_44);
  }
  else {
    uVar12 = (*param_1)(local_34,local_30);
    piVar7 = (int *)(uVar12 >> 0x20);
    uVar5 = 0;
    if ((uVar12 & 1) == 0) goto LAB_00bf83ac;
    if (param_3 == 0) {
      puStack_40 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puStack_40 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      *(undefined1 *)(puStack_40 + 1) = 0x2e;
      *puStack_40 = 0x2e2e;
      local_3c = 3;
      uStack_44 = 3;
    }
    else {
      local_3c = 0;
      local_34 = (undefined4 *)&DAT_018725a4;
      local_38 = &uStack_44;
      uStack_44 = 0;
      puStack_40 = (undefined2 *)&DAT_00000001;
      local_2c = 0;
      local_30 = (undefined4 *)&DAT_60000020;
      iVar6 = FUN_00f9d654(param_3,&local_38);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                     &DAT_018725bc,&DAT_018af130);
      }
    }
    if ((int)puVar3 < 0) {
      uVar5 = 0;
LAB_00bf8350:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar5,puVar3);
    }
    if (puVar3 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
      iVar6 = 1;
    }
    else {
      iVar6 = thunk_FUN_016d4a50(puVar3);
      if (iVar6 == 0) {
        uVar5 = 1;
        goto LAB_00bf8350;
      }
      puVar10 = puVar3;
    }
    FUN_016dd1aa(iVar6,puVar9,puVar3);
    local_38 = puVar10;
    local_34 = (undefined4 *)iVar6;
    uVar13 = (**(code **)(*piVar7 + 8))(piVar7);
    piVar7 = (int *)FUN_00bdd250(&uStack_44,&local_38,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
    FUN_00bdd4d8(piVar7,param_2);
  }
  uVar5 = 1;
LAB_00bf83ac:
  return CONCAT44(piVar7,uVar5);
}

