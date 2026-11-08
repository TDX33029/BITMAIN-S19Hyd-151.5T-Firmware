// FUN_0152194c @ 0152194c size=2468 calls_out=30 calls_in=1
// strings: idn-hostname | json-pointer | uri-template | iri-reference | uri-reference | email

void FUN_0152194c(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  byte bVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  int ****ppppiVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  int local_e8;
  int ****local_c8;
  int local_c4;
  int local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int ****local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 *local_94;
  int *local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  undefined8 local_30;
  
  if (*param_4 != '\x03') {
    uVar23 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                          &DAT_004e94a9,6);
    uVar18 = (undefined4)((ulonglong)uVar23 >> 0x20);
    piVar20 = (int *)uVar23;
    do {
      iVar17 = *piVar20;
      bVar7 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar7);
    *piVar20 = iVar17 + 1;
    if (-1 < iVar17) {
      uVar23 = FUN_015321a0();
      uVar18 = FUN_015956e0(piVar20,uVar18,piVar20,uVar18,uVar23,param_4,0x40);
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = uVar18;
      return;
    }
LAB_01522348:
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xfdee,0x1522348);
    (*pcVar2)();
  }
  iVar17 = *(int *)(param_2 + 0x48);
  bVar3 = *(byte *)(param_2 + 0x88);
  bVar14 = bVar3 < 3;
  if (*(byte *)(iVar17 + 0x1d6) != 2) {
    bVar14 = *(byte *)(iVar17 + 0x1d6);
  }
  if ((bVar14 & 1) == 0) {
    FUN_006666fc(&local_a8,*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc));
    FUN_01bed4e2((uint)&local_b8 | 3,&local_a8,0xc);
    local_a4._4_4_ = CONCAT31(local_a4._5_3_,3);
    local_a4._0_4_ = (undefined2 *)0x1;
    local_a8 = (int ****)0x1;
    FUN_01bed4e2((int)&local_a4 + 5,&local_b8,0xf);
    puVar13 = (undefined4 *)thunk_FUN_01be5118(0x20);
    if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x20);
    }
    *puVar13 = local_a8;
    puVar13[1] = (undefined2 *)local_a4;
    puVar13[2] = local_a4._4_4_;
    puVar13[3] = (undefined4)local_9c;
    puVar13[4] = local_9c._4_4_;
    puVar13[5] = local_94;
    puVar13[6] = local_90;
    puVar13[7] = local_8c;
    piVar20 = (int *)thunk_FUN_01be5118(4);
    if (piVar20 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,4);
    }
    *piVar20 = (int)puVar13;
    puVar15 = &DAT_01cfb160;
LAB_01521d00:
    param_1[1] = piVar20;
    *param_1 = 1;
    param_1[2] = puVar15;
    return;
  }
  ppppiVar22 = *(int *****)(param_4 + 8);
  iVar16 = *(int *)(param_4 + 0xc);
  if (*(int *)(iVar17 + 0xc4) != 0) {
    uVar8 = FUN_0155d010(iVar17 + 200,ppppiVar22,iVar16);
    uVar1 = uVar8 >> 0x19;
    iVar21 = *(int *)(iVar17 + 0xb8);
    uVar19 = *(uint *)(iVar17 + 0xbc);
    local_e8 = 0;
    while( true ) {
      uVar8 = uVar19 & uVar8;
      uVar9 = *(uint *)(iVar21 + uVar8);
      uVar10 = uVar9 ^ uVar1 * 0x1010101;
      uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
      while (uVar10 != 0) {
        uVar11 = uVar10 >> 8;
        uVar4 = uVar10 >> 0x10;
        uVar5 = uVar10 >> 0x18;
        uVar6 = uVar10 << 0x18;
        uVar10 = uVar10 - 1 & uVar10;
        uVar11 = uVar8 + ((uint)LZCOUNT(uVar6 | (uVar11 & 0xff) << 0x10 | (uVar4 & 0xff) << 8 |
                                        uVar5) >> 3) & uVar19;
        iVar12 = iVar21 + -0x14 + uVar11 * -0x14;
        if (iVar16 == *(int *)(iVar12 + 8)) {
          uVar18 = *(undefined4 *)(iVar12 + 4);
          iVar12 = thunk_FUN_01bed842(ppppiVar22,uVar18,iVar16);
          if (iVar12 == 0) {
            FUN_006666fc(&local_c8,uVar18,iVar16);
            iVar21 = iVar21 + uVar11 * -0x14;
            piVar20 = *(int **)(iVar21 + -8);
            do {
              iVar17 = *piVar20;
              bVar7 = (bool)hasExclusiveAccess(piVar20);
            } while (!bVar7);
            *piVar20 = iVar17 + 1;
            if (-1 < iVar17) {
              iVar17 = *(int *)(iVar21 + -4);
              uVar23 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                                    &DAT_004e94a9,6);
              FUN_006666fc(&local_a8,local_c4,local_c0);
              FUN_01bed4e2((uint)&local_b8 | 3,&local_a8,0xc);
              local_a4._4_4_ = CONCAT31(local_a4._5_3_,3);
              local_a4._0_4_ = (undefined2 *)0x1;
              local_a8 = (int ****)0x1;
              FUN_01bed4e2((int)&local_a4 + 5,&local_b8,0xf);
              puVar13 = (undefined4 *)thunk_FUN_01be5118(0x20);
              if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(8,0x20);
              }
              *puVar13 = local_a8;
              puVar13[1] = (undefined2 *)local_a4;
              puVar13[2] = local_a4._4_4_;
              puVar13[3] = (undefined4)local_9c;
              puVar13[4] = local_9c._4_4_;
              puVar13[5] = local_94;
              puVar13[6] = local_90;
              puVar13[7] = local_8c;
              local_a8 = local_c8;
              local_a4._0_4_ = (undefined2 *)local_c4;
              local_a4._4_4_ = local_c0;
              local_94 = puVar13;
              local_90 = piVar20;
              local_8c = iVar17;
              local_9c = uVar23;
              piVar20 = (int *)thunk_FUN_01be5118(0x20);
              if (piVar20 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(4,0x20);
              }
              puVar15 = &DAT_01cfc500;
              *piVar20 = (int)local_a8;
              piVar20[1] = (int)(undefined2 *)local_a4;
              piVar20[2] = local_a4._4_4_;
              *(undefined8 *)(piVar20 + 3) = local_9c;
              piVar20[5] = (int)local_94;
              piVar20[6] = (int)local_90;
              piVar20[7] = local_8c;
              goto LAB_01521d00;
            }
            goto LAB_01522348;
          }
        }
      }
      if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
      local_e8 = local_e8 + 4;
      uVar8 = uVar8 + local_e8;
    }
  }
  switch(iVar16) {
  case 3:
    iVar21 = thunk_FUN_01bed842(ppppiVar22,"iri",3);
    if (iVar21 == 0) {
      if (1 < bVar3) {
        FUN_0159c8ac(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        goto LAB_015222ec;
      }
    }
    else {
      iVar21 = thunk_FUN_01bed842(ppppiVar22,"uri",3);
      if (iVar21 == 0) {
        FUN_0159d154(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        goto LAB_015222ec;
      }
    }
    break;
  case 4:
    if (*ppppiVar22 == (int ***)0x65746164) {
      FUN_0159d990(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
LAB_015222ec:
      *param_1 = 1;
      return;
    }
    if (*ppppiVar22 == (int ***)0x34767069) {
      FUN_0159e320(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
      goto LAB_015222ec;
    }
    if (*ppppiVar22 == (int ***)0x36767069) {
      FUN_0159eb40(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
      goto LAB_015222ec;
    }
    if (*ppppiVar22 == (int ***)0x656d6974) {
      FUN_0159f37c(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
      goto LAB_015222ec;
    }
    if ((*ppppiVar22 == (int ***)0x64697575) && (2 < bVar3)) {
      FUN_0159ffcc(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
      goto LAB_015222ec;
    }
    break;
  case 5:
    iVar21 = thunk_FUN_01bed842(ppppiVar22,"email",5);
    if (iVar21 == 0) {
      FUN_015a082c(param_1 + 1,param_2);
      goto LAB_015222ec;
    }
    iVar21 = thunk_FUN_01bed842(ppppiVar22,"regex",5);
    if (iVar21 == 0) {
      FUN_015a1210(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
      goto LAB_015222ec;
    }
    break;
  case 8:
    iVar21 = thunk_FUN_01bed842(ppppiVar22,&DAT_00570410,8);
    if (iVar21 == 0) {
      if (2 < bVar3) {
        FUN_015a2338(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        goto LAB_015222ec;
      }
    }
    else {
      iVar21 = thunk_FUN_01bed842(ppppiVar22,&DAT_00570b90,8);
      if (iVar21 == 0) {
        if (bVar3 < 2) {
          FUN_015a471c();
        }
        else {
          FUN_015a2d0c(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        }
        goto LAB_015222ec;
      }
    }
    break;
  case 9:
    iVar21 = thunk_FUN_01bed842(ppppiVar22,&DAT_0052d600,9);
    if (iVar21 == 0) {
      FUN_015a1a2c(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
      goto LAB_015222ec;
    }
    iVar21 = thunk_FUN_01bed842(ppppiVar22,"idn-email",9);
    if (iVar21 == 0) {
      FUN_015a3500(param_1 + 1,param_2);
      goto LAB_015222ec;
    }
    break;
  case 0xc:
    iVar21 = thunk_FUN_01bed842(ppppiVar22,"idn-hostname",0xc);
    if (iVar21 == 0) {
      if (1 < bVar3) {
        FUN_015a3e88(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        goto LAB_015222ec;
      }
    }
    else {
      iVar21 = thunk_FUN_01bed842(ppppiVar22,"json-pointer",0xc);
      if (iVar21 == 0) {
        if (bVar3 != 0) {
          FUN_015a4010(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
          goto LAB_015222ec;
        }
      }
      else {
        iVar21 = thunk_FUN_01bed842(ppppiVar22,"uri-template",0xc);
        if ((bVar3 != 0) && (iVar21 == 0)) {
          FUN_015a4198(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
          goto LAB_015222ec;
        }
      }
    }
    break;
  case 0xd:
    iVar21 = thunk_FUN_01bed842(ppppiVar22,"iri-reference",0xd);
    if (iVar21 == 0) {
      if (1 < bVar3) {
        FUN_015a440c(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        goto LAB_015222ec;
      }
    }
    else {
      iVar21 = thunk_FUN_01bed842(ppppiVar22,"uri-reference",0xd);
      if ((iVar21 == 0) && (bVar3 != 0)) {
        FUN_015a4594(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        goto LAB_015222ec;
      }
    }
    break;
  case 0x15:
    iVar21 = thunk_FUN_01bed842(ppppiVar22,&DAT_004a6d10,0x15);
    if ((iVar21 == 0) && (1 < bVar3)) {
      FUN_015a4898(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
      goto LAB_015222ec;
    }
  }
  uVar18 = 0;
  if (*(char *)(iVar17 + 0x1d5) == '\0') {
    local_c8 = ppppiVar22;
    local_c4 = iVar16;
    uVar23 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                          &DAT_004e94a9,6);
    piVar20 = (int *)uVar23;
    do {
      iVar17 = *piVar20;
      bVar7 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar7);
    *piVar20 = iVar17 + 1;
    if (iVar17 < 0) goto LAB_01522348;
    uVar24 = FUN_015321a0();
    local_a4._0_4_ = &DAT_0132b6a0;
    local_a8 = (int ****)&local_c8;
    FUN_00664898(&local_b8,&DAT_005a31af,&local_a8);
    local_78 = local_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    local_50 = 6;
    uVar18 = 1;
    local_88 = 0x80000012;
    local_7c = 0;
    local_80 = 1;
    local_84 = 0;
    local_a8 = (int ****)0x1;
    local_4c = param_4;
    local_30 = uVar23;
    local_38 = uVar24;
    local_a4 = uVar23;
    iVar17 = thunk_FUN_01be5118(0x80);
    if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x80);
    }
    FUN_01bed4e2(iVar17,&local_a8,0x80);
    param_1[1] = 0;
    param_1[2] = iVar17;
  }
  *param_1 = uVar18;
  return;
}

