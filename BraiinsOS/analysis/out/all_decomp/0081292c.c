// FUN_0081292c @ 0081292c size=1820 calls_out=20 calls_in=2
// strings: 

void FUN_0081292c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined4 **ppuVar4;
  code *pcVar5;
  code *pcVar6;
  undefined4 **ppuVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  undefined4 ***pppuVar13;
  undefined4 uVar14;
  uint uVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  code *local_8c;
  undefined4 **local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 ***local_70;
  code *pcStack_6c;
  undefined4 *puStack_68;
  undefined4 **local_64;
  undefined4 ***local_60;
  code *local_5c;
  char *local_58;
  code *local_54;
  undefined4 **local_50;
  undefined4 local_4c;
  undefined4 ***local_48;
  undefined4 *local_44;
  undefined4 ***local_40;
  code *local_3c;
  undefined4 *puStack_38;
  undefined4 ***local_30;
  code *local_2c;
  undefined4 *puStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xb)) {
  case 0:
    *(undefined1 *)((int)param_2 + 0x2d) = 0;
    param_2[6] = *param_2;
    param_2[7] = param_2[1];
    param_2[8] = param_2[3];
    param_2[9] = param_2[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[5] = param_2[2];
    param_2[0xc] = param_2[2] + 0xc;
  case 3:
    iVar8 = FUN_007d67b8(param_2 + 0xc,param_3);
    if (iVar8 == 0) {
      *param_1 = 0x80000001;
      *(undefined1 *)(param_2 + 0xb) = 3;
      return;
    }
    param_2[10] = iVar8;
    if (*(char *)(param_2 + 0x1a) == '\x03') {
      cVar1 = *(char *)(param_2 + 0x19);
      bVar16 = cVar1 == '\x03';
      if (bVar16) {
        cVar1 = *(char *)(param_2 + 0x10);
      }
      if (bVar16 && cVar1 == '\x04') {
        FUN_0163c790(param_2 + 0x11);
        if (param_2[0x12] != 0) {
          (**(code **)(param_2[0x12] + 0xc))(param_2[0x13]);
        }
      }
    }
    if (param_2[6] == 1) {
      uVar15 = *(int *)param_2[5] * param_2[7];
      if (0xff < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034b2fb,0x2e,&local_60,&DAT_0186b108,&DAT_0186afe8);
      }
    }
    else {
      uVar15 = (uint)*(byte *)((int *)param_2[5] + 1);
    }
    uVar18 = (**(code **)(*(int *)(param_2[10] + 0x20) + 0xc))
                       (*(undefined4 *)(param_2[10] + 0x1c),param_2[6],uVar15,param_2[8],param_2[9])
    ;
    *(undefined8 *)(param_2 + 0xc) = uVar18;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018713e8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018713e8);
  case 4:
    uVar18 = *(undefined8 *)(param_2 + 0xc);
    break;
  case 5:
    uVar18 = *(undefined8 *)(param_2 + 0xf);
    goto LAB_00812c10;
  }
  uVar17 = (**(code **)((int)((ulonglong)uVar18 >> 0x20) + 0xc))((int)uVar18,param_3);
  local_8c = (code *)(uVar17 >> 0x20);
  if ((uVar17 & 1) != 0) {
    *param_1 = 0x80000001;
    *(undefined1 *)(param_2 + 0xb) = 4;
    return;
  }
  uVar14 = param_2[0xc];
  puVar9 = (undefined4 *)param_2[0xd];
  pcVar5 = (code *)*puVar9;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar14);
  }
  if (puVar9[1] != 0) {
    thunk_FUN_016d3fb4(uVar14);
  }
  if (local_8c == (code *)0x0) {
    param_2[0xc] = 0;
    param_2[0xe] = 0;
    iVar8 = param_2[10];
    param_2[0xd] = 4;
    *(undefined1 *)((int)param_2 + 0x2d) = 1;
    do {
      uVar18 = (**(code **)(*(int *)(iVar8 + 0x20) + 0x10))(*(undefined4 *)(iVar8 + 0x1c));
      *(undefined8 *)(param_2 + 0xf) = uVar18;
LAB_00812c10:
      (**(code **)((int)((ulonglong)uVar18 >> 0x20) + 0xc))(&local_60,(int)uVar18,param_3);
      puVar2 = local_4c;
      ppuVar4 = local_50;
      pcVar5 = local_54;
      pcVar10 = local_58;
      pppuVar13 = local_60;
      if (local_60 == (undefined4 ***)&DAT_00000004) {
        *param_1 = 0x80000001;
        *(undefined1 *)(param_2 + 0xb) = 5;
        return;
      }
      iVar8 = param_2[0xf];
      puVar9 = (undefined4 *)param_2[0x10];
      pcVar6 = (code *)*puVar9;
      uVar3 = local_4c._1_1_;
      uVar15 = (uint)local_4c & 0xff;
      local_8c = local_5c;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(iVar8);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(iVar8);
      }
      if (pppuVar13 == (undefined4 ***)&SUB_00000002) {
        if (param_2[6] != 0) {
          iVar12 = param_2[0xe];
LAB_00812edc:
          local_58 = (char *)(param_2 + 6);
          if (iVar12 == 1) goto LAB_00812ee4;
          local_60 = (undefined4 ***)(param_2 + 8);
          local_54 = FUN_00813248;
          local_5c = FUN_00facd88;
          FUN_00600d2c(&local_30,&DAT_0034ffa6,&local_60);
          local_40 = local_30;
          local_3c = local_2c;
          puStack_38 = puStack_28;
          local_8c = (code *)FUN_00808de4(&local_40);
          goto LAB_00812fd4;
        }
        iVar8 = param_2[10];
        if (*(int *)(iVar8 + 0x14) != 1) goto LAB_00812ee4;
        break;
      }
      if (pppuVar13 == (undefined4 ***)0x3) goto LAB_00812fd4;
      if (uVar15 != 2) {
        if (((uint)puVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0034b2c5,0x6d,&DAT_0186afc8);
        }
        if (*(int *)param_2[5] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faf2a4(&DAT_0186afd8);
        }
        iVar8 = FUN_018462e8(uVar3);
      }
      iVar12 = param_2[0xe];
      if (uVar15 == 2) {
        iVar8 = iVar12;
      }
      if (iVar12 == param_2[0xc]) {
        FUN_008cfc58(param_2 + 0xc);
      }
      puVar9 = (undefined4 *)(param_2[0xd] + iVar12 * 0x10);
      *puVar9 = pcVar10;
      puVar9[3] = iVar8;
      puVar9[1] = pcVar5;
      puVar9[2] = ppuVar4;
      iVar12 = iVar12 + 1;
      param_2[0xe] = iVar12;
      if (param_2[6] != 0) goto LAB_00812edc;
      iVar8 = param_2[10];
    } while ((*(int *)(iVar8 + 0x14) != 1) || (iVar12 != *(int *)(iVar8 + 0x18)));
    local_80 = *(undefined4 ***)(iVar8 + 0x18);
    local_64 = (undefined4 **)param_2[0xe];
    if (local_80 == local_64) {
LAB_00812ee4:
      local_60 = (undefined4 ***)param_2[0xc];
      local_8c = (code *)param_2[0xd];
      pcVar10 = (char *)param_2[0xe];
      *(undefined1 *)((int)param_2 + 0x2d) = 0;
      local_5c = local_8c;
      local_58 = pcVar10;
      if (&DAT_00000001 < pcVar10) {
        if (&DAT_00000014 < pcVar10) {
          FUN_008b97d0(local_8c,pcVar10);
        }
        else {
          FUN_008c4190(local_8c,pcVar10);
        }
      }
      pppuVar13 = local_60;
      pcVar11 = (char *)param_2[10];
      *(undefined1 *)((int)param_2 + 0x2d) = 0;
      if (*pcVar11 == '\0') {
        bVar16 = (bool)hasExclusiveAccess(pcVar11);
        if (!bVar16) goto LAB_00812f98;
        *pcVar11 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00812f98:
        FUN_01280da8(pcVar11);
      }
      FUN_0128236c(pcVar11);
      FUN_0163af68(pcVar11,1,pcVar11);
      goto LAB_00813070;
    }
    local_74 = 0;
    local_78 = 4;
    local_7c = 0;
    ppuVar4 = (undefined4 **)0x0;
    do {
      ppuVar7 = ppuVar4;
      if (local_80 == ppuVar7) goto LAB_00812dd4;
      if (local_64 == ppuVar7) goto LAB_00812d84;
      ppuVar4 = (undefined4 **)((int)ppuVar7 + 1);
    } while (ppuVar7 == *(undefined4 ***)(param_2[0xd] + (int)ppuVar7 * 0x10 + 0xc));
    local_64 = ppuVar7;
LAB_00812d84:
    local_70 = (undefined4 ***)((int)local_64 << 1);
    local_40 = &local_70;
    local_3c = FUN_00facd88;
    FUN_008133d4(&local_60,&local_40);
    local_30 = local_60;
    local_2c = local_5c;
    puStack_28 = (undefined4 *)local_58;
    FUN_00813460(&local_7c,&local_30);
    local_64 = (undefined4 **)param_2[0xe];
LAB_00812dd4:
    iVar12 = local_74;
    iVar8 = local_78;
    FUN_008670f8(&local_30,local_78,local_74,&DAT_0041950f);
    local_50 = &local_80;
    local_58 = (char *)(param_2 + 8);
    local_60 = &local_64;
    local_44 = &DAT_006043a8;
    local_4c = &LAB_00fac484;
    local_54 = FUN_00facd88;
    local_5c = (code *)&LAB_00fac484;
    local_48 = &local_30;
    FUN_00600d2c(&local_40,&DAT_00350000,&local_60);
    if (local_30 != (undefined4 ***)0x0) {
      thunk_FUN_016d3fb4(local_2c);
    }
    local_70 = local_40;
    pcStack_6c = local_3c;
    puStack_68 = puStack_38;
    local_8c = (code *)FUN_00808de4(&local_70);
    puVar9 = (undefined4 *)(iVar8 + 4);
    for (; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (puVar9[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar9);
      }
      puVar9 = puVar9 + 3;
    }
    if (local_7c != 0) {
      thunk_FUN_016d3fb4(iVar8);
    }
LAB_00812fd4:
    puVar9 = (undefined4 *)(param_2[0xd] + 4);
    for (iVar8 = param_2[0xe]; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (puVar9[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar9);
      }
      puVar9 = puVar9 + 4;
    }
    if (param_2[0xc] != 0) {
      thunk_FUN_016d3fb4(param_2[0xd]);
    }
    *(undefined1 *)((int)param_2 + 0x2d) = 0;
    pcVar10 = (char *)param_2[10];
    cVar1 = *pcVar10;
  }
  else {
    pcVar10 = (char *)param_2[10];
    cVar1 = *pcVar10;
  }
  if (cVar1 == '\0') {
    bVar16 = (bool)hasExclusiveAccess(pcVar10);
    if (!bVar16) goto LAB_0081304c;
    *pcVar10 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0081304c:
    FUN_01280da8(pcVar10);
  }
  FUN_0128236c(pcVar10);
  FUN_0163af68(pcVar10,1,pcVar10);
  pppuVar13 = (undefined4 ***)0x80000000;
LAB_00813070:
  *param_1 = pppuVar13;
  param_1[1] = local_8c;
  param_1[2] = pcVar10;
  *(undefined1 *)(param_2 + 0xb) = 1;
  return;
}

