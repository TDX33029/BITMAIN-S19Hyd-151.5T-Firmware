// FUN_015559ac @ 015559ac size=924 calls_out=5 calls_in=1
// strings: 

void FUN_015559ac(undefined4 *param_1,int *param_2,int param_3,uint param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined1 *local_50;
  uint local_4c;
  undefined1 *puStack_48;
  uint local_44;
  uint uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar12 = param_2[4];
  uVar10 = param_2[6];
  if (param_4 == uVar12 + uVar10) {
    bVar1 = *(byte *)(param_2 + 7);
    if ((bVar1 & 1) == 0) {
      if (param_4 < uVar12) {
        puVar7 = &DAT_018a8b28;
        goto LAB_01555d1c;
      }
      uVar10 = param_4 - uVar12;
      iVar14 = param_3 + uVar12;
    }
    else {
      if (param_4 < uVar10) {
        puVar7 = &DAT_018a8b38;
LAB_01555d1c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,puVar7);
      }
      uVar12 = param_4 - uVar10;
      iVar14 = param_3;
      param_3 = param_3 + uVar10;
    }
    FUN_01465b84(&DAT_005666d0);
    (**(code **)(param_2[9] + 0xc))(&local_50,param_2[8],param_3,uVar12);
    uVar3 = uStack_40;
    uVar6 = local_44;
    puVar9 = puStack_48;
    uVar12 = local_4c;
    if (local_50 != (undefined1 *)0x80000029) {
      *param_1 = local_50;
      param_1[1] = local_4c;
      param_1[2] = puStack_48;
      param_1[3] = local_44;
      param_1[4] = uStack_40;
      param_1[5] = local_3c;
      param_1[6] = local_38;
      param_1[7] = local_34;
      goto LAB_01555b78;
    }
    (**(code **)(param_2[0xb] + 0xc))(&local_50,param_2[10],iVar14,uVar10);
    uVar11 = local_44;
    puVar2 = puStack_48;
    uVar10 = local_4c;
    if (local_50 == (undefined1 *)0x80000029) {
      if (local_44 < uStack_40) {
LAB_01555d38:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uStack_40,local_44,local_44,&DAT_018a7c34);
      }
      if (uVar6 < uVar3) {
        uStack_40 = uVar3;
        local_44 = uVar6;
        goto LAB_01555d38;
      }
      local_44 = local_44 - uStack_40;
      local_4c = uVar6 - uVar3;
      puStack_48 = puStack_48 + uStack_40;
      local_50 = puVar9 + uVar3;
      if ((bVar1 & 1) == 0) {
        FUN_0155c778(&local_30,&local_50);
      }
      else {
        puVar8 = local_50;
        local_50 = puStack_48;
        uVar3 = local_4c;
        local_4c = local_44;
        puStack_48 = puVar8;
        local_44 = uVar3;
        FUN_0155c778(&local_30,&local_50);
      }
      *param_1 = 0x80000029;
      param_1[1] = local_30;
      param_1[2] = uStack_2c;
      param_1[3] = uStack_28;
      param_1[4] = 0;
      uVar3 = uVar10;
      puVar8 = puVar2;
      if (uVar11 != 0) {
        puVar5 = puVar2;
        do {
          *puVar5 = 0;
          uVar11 = uVar11 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar11 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      if (uVar10 != 0) {
        thunk_FUN_016d3fb4(puVar2);
      }
      uVar10 = uVar12;
      puVar2 = puVar9;
      if (uVar6 != 0) {
        puVar8 = puVar9;
        do {
          *puVar8 = 0;
          uVar6 = uVar6 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar6 != 0);
      }
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    else {
      *param_1 = local_50;
      param_1[1] = local_4c;
      param_1[2] = puStack_48;
      param_1[3] = local_44;
      param_1[4] = uStack_40;
      param_1[5] = local_3c;
      param_1[6] = local_38;
      param_1[7] = local_34;
      uVar10 = uVar12;
      puVar2 = puVar9;
      if (uVar6 != 0) {
        puVar8 = puVar9;
        do {
          *puVar8 = 0;
          uVar6 = uVar6 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar6 != 0);
      }
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    if (uVar12 == 0) goto LAB_01555ce4;
  }
  else {
    puVar13 = (undefined4 *)param_2[9];
    iVar14 = param_2[8];
    param_1[1] = 0x1a;
    pcVar4 = (code *)*puVar13;
    *param_1 = &DAT_8000001c;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar14);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(iVar14);
    }
LAB_01555b78:
    puVar13 = (undefined4 *)param_2[0xb];
    puVar9 = (undefined1 *)param_2[10];
    pcVar4 = (code *)*puVar13;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(puVar9);
    }
    if (puVar13[1] == 0) goto LAB_01555ce4;
  }
  thunk_FUN_016d3fb4(puVar9);
LAB_01555ce4:
  if (*param_2 != 0) {
    thunk_FUN_016d3fb4(param_2[1]);
  }
  thunk_FUN_016d3fb4(param_2);
  return;
}

