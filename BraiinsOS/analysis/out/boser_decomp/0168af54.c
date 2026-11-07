// FUN_0168af54 @ 0168af54 size=1060 calls_out=8 calls_in=2
// strings: 

void FUN_0168af54(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  uint local_c0 [4];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  uint local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar10 = param_3[1];
  iVar11 = param_3[2];
  if (param_2[0x1f] != 0) {
    uVar3 = FUN_016c850c(param_2[0x20],param_2[0x21],param_2[0x22],param_2[0x23],iVar10,iVar11);
    uVar12 = uVar3 >> 0x19;
    iVar14 = param_2[0x1c];
    uVar13 = param_2[0x1d];
    iVar15 = 0;
    while( true ) {
      uVar3 = uVar13 & uVar3;
      uVar4 = *(uint *)(iVar14 + uVar3);
      uVar5 = uVar4 ^ uVar12 * 0x1010101;
      for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5)
      {
        uVar6 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar13;
        piVar7 = (int *)(iVar14 + -0xc + uVar6 * -0xc);
        if ((iVar11 == piVar7[1]) && (iVar8 = thunk_FUN_01bed842(iVar10,*piVar7 + 8), iVar8 == 0)) {
          iVar10 = param_2[0x2a];
          iVar11 = param_2[0x2b];
          iVar15 = param_3[1];
          iVar14 = *(int *)(iVar14 + uVar6 * -0xc + -4);
          param_2[0x2a] = *param_3;
          param_2[0x2b] = iVar15;
          param_2[0x2c] = 0;
          FUN_0134bd64(iVar10,iVar11);
          *(undefined1 *)(param_1 + 2) = 0;
          *param_1 = 0x30;
          param_1[1] = iVar14;
          return;
        }
      }
      if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
      iVar15 = iVar15 + 4;
      uVar3 = uVar3 + iVar15;
    }
  }
  iVar15 = *param_3;
  iVar14 = param_2[0x2e];
  FUN_016b2ad4(&local_68,iVar14 + 0x50);
  if (local_68 == 0x30) {
    iVar8 = thunk_FUN_01bed842(param_2 + 4,"",0x20);
    if (iVar8 != 0) {
      uVar12 = 0;
      while( true ) {
        uVar3 = uVar12;
        if (uVar12 < 0x101) {
          uVar3 = 0x100;
        }
        do {
          uVar13 = uVar12;
          if (uVar3 == uVar13) goto LAB_0168b22c;
          puVar9 = (uint *)((int)(param_2 + 4) + (uVar13 >> 3 & 0xfffffff0));
          local_c0[0] = *puVar9;
          local_c0[3] = puVar9[3];
          local_c0[2] = puVar9[2];
          uVar12 = uVar13 + 1;
          local_a4 = 0;
          local_a8 = 0;
          local_ac = 0;
          local_b0 = 0;
          local_c0[1] = puVar9[1];
        } while ((*(uint *)((int)local_c0 + ((uVar13 & 0x60) >> 3)) >> (uVar13 & 0x1f) & 1) == 0);
        if (0xff < uVar13) break;
        FUN_016b3344(iVar14,local_64,(uVar13 & 0xff) << 8,1 << (*(uint *)(iVar14 + 0x15c) & 0x1f));
      }
    }
LAB_0168b22c:
    uVar16 = FUN_016bc0ec(iVar10,iVar11);
    iVar11 = (int)((ulonglong)uVar16 >> 0x20);
    piVar7 = (int *)uVar16;
    param_2[0x2f] = param_2[0x2f] + iVar11;
    do {
      iVar14 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar14 + 1;
    if (iVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x168b374);
      (*pcVar1)();
    }
    iVar14 = param_2[0x26];
    if (iVar14 == param_2[0x24]) {
      FUN_015f5ab8();
    }
    *(undefined8 *)(param_2[0x25] + iVar14 * 8) = uVar16;
    param_2[0x26] = iVar14 + 1;
    FUN_016c9580(param_2 + 0x1c,piVar7,iVar11,local_64);
    iVar11 = param_2[0x2a];
    iVar14 = param_2[0x2b];
    param_2[0x2a] = iVar15;
    param_2[0x2b] = iVar10;
    param_2[0x2c] = 0;
    FUN_0134bd64(iVar11,iVar14);
    if (*param_2 == 1) {
      iVar10 = param_2[0x2e];
      local_68 = 0x2e;
      uVar12 = param_2[1];
      if ((uint)param_2[1] <
          (uint)((*(int *)(iVar10 + 0x1a8) + *(int *)(iVar10 + 0x58) + *(int *)(iVar10 + 0x168) +
                  *(int *)(iVar10 + 0x174) + *(int *)(iVar10 + 0x184)) * 4)) goto LAB_0168b1fc;
    }
    if (param_2[2] == 1) {
      local_68 = 0x2f;
      uVar12 = param_2[3];
      if ((uint)param_2[3] <
          (uint)(param_2[0x1f] * 0xc + param_2[0x26] * 8 + param_2[0x2f] + param_2[0x27] * 4 +
                param_2[0x2a])) goto LAB_0168b1fc;
    }
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = 0x30;
    param_1[1] = local_64;
  }
  else {
    local_a0 = local_60;
    iStack_9c = iStack_5c;
    iStack_98 = iStack_58;
    iStack_94 = iStack_54;
    local_90 = local_50;
    iStack_8c = iStack_4c;
    iStack_88 = iStack_48;
    iStack_84 = iStack_44;
    iStack_80 = iStack_40;
    local_7c = local_3c;
    iStack_78 = iStack_38;
    iStack_74 = iStack_34;
    iStack_70 = iStack_30;
    iStack_6c = iStack_2c;
    FUN_0134bd64(iVar15,iVar10);
    uVar12 = local_64;
LAB_0168b1fc:
    *param_1 = local_68;
    param_1[1] = uVar12;
    param_1[2] = local_a0;
    param_1[3] = iStack_9c;
    param_1[4] = iStack_98;
    param_1[5] = iStack_94;
    param_1[6] = local_90;
    param_1[7] = iStack_8c;
    param_1[8] = iStack_88;
    param_1[9] = iStack_84;
    param_1[10] = iStack_80;
    param_1[0xb] = local_7c;
    param_1[0xc] = iStack_78;
    param_1[0xd] = iStack_74;
    param_1[0xe] = iStack_70;
    param_1[0xf] = iStack_6c;
  }
  return;
}

