// FUN_008cdaf8 @ 008cdaf8 size=1796 calls_out=21 calls_in=2
// strings: 

void FUN_008cdaf8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 **ppuVar4;
  undefined4 ***pppuVar5;
  int iVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 *puVar9;
  undefined4 **ppuVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 ***pppuVar13;
  char *pcVar14;
  undefined4 *puVar15;
  uint uVar16;
  bool bVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  code *local_8c;
  undefined4 **local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
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
    iVar6 = FUN_007d67b8(param_2 + 0xc,param_3);
    if (iVar6 == 0) {
      *param_1 = 0x80000001;
      *(undefined1 *)(param_2 + 0xb) = 3;
      return;
    }
    param_2[10] = iVar6;
    if (*(char *)(param_2 + 0x1a) == '\x03') {
      cVar1 = *(char *)(param_2 + 0x19);
      bVar17 = cVar1 == '\x03';
      if (bVar17) {
        cVar1 = *(char *)(param_2 + 0x10);
      }
      if (bVar17 && cVar1 == '\x04') {
        FUN_0163c790(param_2 + 0x11);
        if (param_2[0x12] != 0) {
          (**(code **)(param_2[0x12] + 0xc))(param_2[0x13]);
        }
      }
    }
    if (param_2[6] == 1) {
      uVar16 = *(int *)param_2[5] * param_2[7];
      if (0xff < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034b2fb,0x2e,&local_60,&DAT_0186b108,&DAT_0186afe8);
      }
    }
    else {
      uVar16 = (uint)*(byte *)((int *)param_2[5] + 1);
    }
    uVar19 = (**(code **)(*(int *)(param_2[10] + 0x20) + 0xc))
                       (*(undefined4 *)(param_2[10] + 0x1c),param_2[6],uVar16,param_2[8],param_2[9])
    ;
    *(undefined8 *)(param_2 + 0xc) = uVar19;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018713e8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018713e8);
  case 4:
    uVar19 = *(undefined8 *)(param_2 + 0xc);
    break;
  case 5:
    uVar19 = *(undefined8 *)(param_2 + 0xf);
    goto LAB_008cddd8;
  }
  uVar18 = (**(code **)((int)((ulonglong)uVar19 >> 0x20) + 0xc))((int)uVar19,param_3);
  local_8c = (code *)(uVar18 >> 0x20);
  if ((uVar18 & 1) != 0) {
    *param_1 = 0x80000001;
    *(undefined1 *)(param_2 + 0xb) = 4;
    return;
  }
  uVar12 = param_2[0xc];
  puVar15 = (undefined4 *)param_2[0xd];
  pcVar7 = (code *)*puVar15;
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(uVar12);
  }
  if (puVar15[1] != 0) {
    thunk_FUN_016d3fb4(uVar12);
  }
  if (local_8c == (code *)0x0) {
    param_2[0xc] = 0;
    param_2[0xe] = 0;
    iVar6 = param_2[10];
    param_2[0xd] = 4;
    *(undefined1 *)((int)param_2 + 0x2d) = 1;
    do {
      uVar19 = (**(code **)(*(int *)(iVar6 + 0x20) + 0x10))(*(undefined4 *)(iVar6 + 0x1c));
      *(undefined8 *)(param_2 + 0xf) = uVar19;
LAB_008cddd8:
      (**(code **)((int)((ulonglong)uVar19 >> 0x20) + 0xc))(&local_60,(int)uVar19,param_3);
      puVar9 = local_4c;
      ppuVar4 = local_50;
      pcVar7 = local_54;
      pcVar11 = local_58;
      pppuVar5 = local_60;
      if (local_60 == (undefined4 ***)&DAT_00000004) {
        *param_1 = 0x80000001;
        *(undefined1 *)(param_2 + 0xb) = 5;
        return;
      }
      local_8c = local_5c;
      uVar12 = param_2[0xf];
      puVar15 = (undefined4 *)param_2[0x10];
      pcVar8 = (code *)*puVar15;
      uVar3 = local_4c._1_1_;
      uVar16 = (uint)local_4c & 0xff;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar12);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      if (pppuVar5 == (undefined4 ***)&SUB_00000002) {
        if (param_2[6] != 0) {
          puVar9 = (undefined1 *)param_2[0xe];
LAB_008ce0ac:
          local_58 = (char *)(param_2 + 6);
          if (puVar9 == (undefined1 *)0x1) goto LAB_008ce0b4;
          local_60 = (undefined4 ***)(param_2 + 8);
          local_54 = FUN_00813248;
          local_5c = FUN_00facd88;
          FUN_00600d2c(&local_30,&DAT_0034ffa6,&local_60);
          local_40 = local_30;
          local_3c = local_2c;
          puStack_38 = puStack_28;
          local_8c = (code *)FUN_008c8bc8(&local_40);
          goto LAB_008ce150;
        }
        iVar6 = param_2[10];
        if (*(int *)(iVar6 + 0x14) != 1) goto LAB_008ce0b4;
        break;
      }
      if (pppuVar5 == (undefined4 ***)0x3) goto LAB_008ce150;
      if (uVar16 != 2) {
        if (((uint)puVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0034b2c5,0x6d,&DAT_0186afc8);
        }
        if (*(int *)param_2[5] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faf2a4(&DAT_0186afd8);
        }
        pppuVar5 = (undefined4 ***)FUN_018462e8(uVar3);
      }
      pppuVar13 = (undefined4 ***)param_2[0xe];
      if (uVar16 == 2) {
        pppuVar5 = pppuVar13;
      }
      if (pppuVar13 == (undefined4 ***)param_2[0xc]) {
        FUN_008cfc58(param_2 + 0xc);
      }
      puVar15 = (undefined4 *)(param_2[0xd] + (int)pppuVar13 * 0x10);
      *puVar15 = pcVar11;
      puVar15[3] = pppuVar5;
      puVar15[1] = pcVar7;
      puVar15[2] = ppuVar4;
      puVar9 = (undefined1 *)((int)pppuVar13 + 1);
      param_2[0xe] = puVar9;
      if (param_2[6] != 0) goto LAB_008ce0ac;
      iVar6 = param_2[10];
    } while ((*(int *)(iVar6 + 0x14) != 1) || (puVar9 != *(undefined1 **)(iVar6 + 0x18)));
    local_80 = *(undefined4 ***)(iVar6 + 0x18);
    local_64 = (undefined4 **)param_2[0xe];
    if (local_80 == local_64) {
LAB_008ce0b4:
      pcVar11 = (char *)param_2[0xe];
      local_8c = (code *)param_2[0xd];
      local_60 = (undefined4 ***)param_2[0xc];
      *(undefined1 *)((int)param_2 + 0x2d) = 0;
      local_5c = local_8c;
      local_58 = pcVar11;
      if (&DAT_00000001 < pcVar11) {
        if (&DAT_00000014 < pcVar11) {
          FUN_008b97d0(local_8c,pcVar11);
        }
        else {
          FUN_008c4190(local_8c,pcVar11);
        }
      }
      pppuVar5 = local_60;
      pcVar14 = (char *)param_2[10];
      *(undefined1 *)((int)param_2 + 0x2d) = 0;
      if (*pcVar14 == '\0') {
        bVar17 = (bool)hasExclusiveAccess(pcVar14);
        if (!bVar17) goto LAB_008ce210;
        *pcVar14 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_008ce210:
        FUN_01280da8(pcVar14);
      }
      FUN_0128236c(pcVar14);
      FUN_0163af68(pcVar14,1,pcVar14);
      goto LAB_008ce230;
    }
    local_74 = 0;
    local_78 = 4;
    local_7c = 0;
    ppuVar4 = (undefined4 **)0x0;
    do {
      ppuVar10 = ppuVar4;
      if (local_80 == ppuVar10) goto LAB_008cdfac;
      if (local_64 == ppuVar10) goto LAB_008cdf5c;
      ppuVar4 = (undefined4 **)((int)ppuVar10 + 1);
    } while (ppuVar10 == *(undefined4 ***)(param_2[0xd] + (int)ppuVar10 * 0x10 + 0xc));
    local_64 = ppuVar10;
LAB_008cdf5c:
    local_70 = (undefined4 ***)((int)local_64 << 1);
    local_40 = &local_70;
    local_3c = FUN_00facd88;
    FUN_008c8c20(&local_60,&local_40);
    local_30 = local_60;
    local_2c = local_5c;
    puStack_28 = (undefined4 *)local_58;
    FUN_00813460(&local_7c,&local_30);
    local_64 = (undefined4 **)param_2[0xe];
LAB_008cdfac:
    uVar2 = local_74;
    uVar12 = local_78;
    FUN_008bc320(&local_30,local_78,local_74,&DAT_0041950f);
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
    local_8c = (code *)FUN_008c8bc8(&local_70);
    FUN_008cff08(uVar12,uVar2);
    if (local_7c != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
LAB_008ce150:
    iVar6 = param_2[0xe];
    if (iVar6 != 0) {
      puVar15 = (undefined4 *)(param_2[0xd] + 4);
      do {
        if (puVar15[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar15);
        }
        puVar15 = puVar15 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (param_2[0xc] != 0) {
      thunk_FUN_016d3fb4(param_2[0xd]);
    }
    *(undefined1 *)((int)param_2 + 0x2d) = 0;
    pcVar11 = (char *)param_2[10];
    cVar1 = *pcVar11;
  }
  else {
    pcVar11 = (char *)param_2[10];
    cVar1 = *pcVar11;
  }
  if (cVar1 == '\0') {
    bVar17 = (bool)hasExclusiveAccess(pcVar11);
    if (!bVar17) goto LAB_008ce1d0;
    *pcVar11 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_008ce1d0:
    FUN_01280da8(pcVar11);
  }
  FUN_0128236c(pcVar11);
  FUN_0163af68(pcVar11,1,pcVar11);
  pppuVar5 = (undefined4 ***)0x80000000;
LAB_008ce230:
  *param_1 = pppuVar5;
  param_1[1] = local_8c;
  param_1[2] = pcVar11;
  *(undefined1 *)(param_2 + 0xb) = 1;
  return;
}

