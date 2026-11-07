// FUN_010bcee4 @ 010bcee4 size=2472 calls_out=11 calls_in=3
// strings: Date format should be valid HeaderValue | all times should be after the epoch | date must be before year 9999

void FUN_010bcee4(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  bool bVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  short sVar16;
  char cVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  char local_90;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 local_68;
  code *local_64;
  undefined4 *local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 *local_40;
  code *local_3c;
  undefined4 *local_38;
  uint local_34;
  uint local_30;
  
  uStack_70 = param_5;
  local_64 = (code *)0x0;
  local_68 = (undefined4 *)0x0;
  local_60 = (undefined4 *)0x0;
  local_78 = param_3;
  uStack_74 = param_4;
  FUN_015f3c24(&local_40,&local_78,&local_68);
  uVar10 = local_30;
  puVar4 = local_40;
  uStack_48 = param_5;
  param_1[9] = 0;
  local_64 = (code *)0x0;
  local_68 = (undefined4 *)0x0;
  local_60 = (undefined4 *)0x0;
  local_50 = param_3;
  uStack_4c = param_4;
  FUN_015f3c24(&local_40,&local_50,&local_68);
  puVar12 = local_38;
  if (((uint)local_40 & 1) != 0) {
    local_38 = (undefined4 *)local_30;
    local_3c = (code *)local_34;
    local_40 = puVar12;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("all times should be after the epoch",0x23,&local_40,&DAT_018845cc,&DAT_0188461c);
  }
  if (0x39 < local_34 && (uint)(local_38 < (undefined4 *)0xfff44180) <= 0x3a - local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("date must be before year 9999",0x3b,&DAT_0188462c);
  }
  iVar5 = FUN_01846088(local_38,local_34,0x15180,0);
  uVar15 = (iVar5 + -0x2b09) % 0x23ab1;
  uVar9 = uVar15 + 0x23ab1;
  uVar13 = ((int)uVar15 >> 0x1f) + (uint)(0xfffdc54e < uVar15);
  if (-1 < (int)uVar15) {
    uVar9 = uVar15;
    uVar13 = (int)uVar15 >> 0x1f;
  }
  uVar19 = FUN_01846088(uVar9,uVar13,0x8eac,0);
  if (uVar13 == uVar9 < 0x23ab0 && (uint)(0x8eab < uVar9 - 0x23ab0) <= uVar13 - (uVar9 < 0x23ab0)) {
    uVar19 = 3;
  }
  lVar3 = (uVar19 & 0xffffffff) * 0xffff7154;
  uVar8 = (uint)lVar3;
  uVar14 = uVar8 + uVar9;
  uVar13 = (int)(uVar19 >> 0x20) * -0x8eac + ((int)((ulonglong)lVar3 >> 0x20) - (int)uVar19) +
           uVar13 + (uint)CARRY4(uVar8,uVar9);
  uVar20 = FUN_01846048(uVar14,uVar13,0x5b5,0);
  if (uVar13 == uVar14 < 0x8ead && (uint)(0x5b4 < uVar14 - 0x8ead) <= uVar13 - (uVar14 < 0x8ead)) {
    uVar20 = 0x18;
  }
  lVar3 = (uVar20 & 0xffffffff) * 0xfffffa4b;
  uVar9 = (uint)lVar3;
  uVar8 = uVar9 + uVar14;
  uVar14 = (int)(uVar20 >> 0x20) * -0x5b5 + ((int)((ulonglong)lVar3 >> 0x20) - (int)uVar20) + uVar13
           + (uint)CARRY4(uVar9,uVar14);
  uVar21 = FUN_01846048(uVar8,uVar14,0x16d,0);
  iVar6 = (int)((ulonglong)uVar21 >> 0x20);
  uVar9 = (uint)uVar21;
  uVar13 = (uint)(uVar8 < 0x5b4);
  bVar1 = (uint)(0x16c < uVar8 - 0x5b4) <= uVar14 - uVar13;
  if (uVar14 == uVar13 && bVar1) {
    uVar9 = 3;
  }
  uVar11 = (uint)((ulonglong)uVar9 * 0xfffffe93);
  if (uVar14 == uVar13 && bVar1) {
    iVar6 = 0;
  }
  uVar18 = uVar11 + uVar8;
  uVar13 = iVar6 * -0x16d + ((int)((ulonglong)uVar9 * 0xfffffe93 >> 0x20) - uVar9) + uVar14 +
           (uint)CARRY4(uVar11,uVar8);
  if ((int)uVar13 < (int)(uint)(uVar18 < 0x1f)) {
    local_90 = '\0';
LAB_010bd1d8:
    cVar17 = (char)uVar18;
    sVar16 = 0;
  }
  else {
    if (uVar13 == 0 && (0x3c < uVar18) <= uVar13) {
      uVar18 = uVar18 - 0x1f;
      local_90 = '\x01';
      goto LAB_010bd1d8;
    }
    if (uVar13 == 0 && (0x5b < uVar18) <= uVar13) {
      uVar18 = uVar18 - 0x3d;
      local_90 = '\x02';
      goto LAB_010bd1d8;
    }
    if (uVar13 == 0 && (0x79 < uVar18) <= uVar13) {
      uVar18 = uVar18 - 0x5c;
      local_90 = '\x03';
      goto LAB_010bd1d8;
    }
    if (uVar13 == 0 && (0x98 < uVar18) <= uVar13) {
      uVar18 = uVar18 - 0x7a;
      local_90 = '\x04';
      goto LAB_010bd1d8;
    }
    if (uVar13 == 0 && (0xb7 < uVar18) <= uVar13) {
      uVar18 = uVar18 + 0x67;
      local_90 = '\x05';
      goto LAB_010bd1d8;
    }
    if (uVar13 == 0 && (0xd5 < uVar18) <= uVar13) {
      uVar18 = uVar18 + 0x48;
      local_90 = '\x06';
      goto LAB_010bd1d8;
    }
    if (uVar13 == 0 && (0xf4 < uVar18) <= uVar13) {
      uVar18 = uVar18 + 0x2a;
      local_90 = '\a';
      goto LAB_010bd1d8;
    }
    if (uVar13 == 0 && (0x112 < uVar18) <= uVar13) {
      uVar18 = uVar18 + 0xb;
      local_90 = '\b';
      goto LAB_010bd1d8;
    }
    if (uVar13 >> 1 == 0 &&
        (uint)(0x98 < ((uint)((byte)uVar13 & 1) << 0x1f | uVar18 >> 1)) <= uVar13 >> 1) {
      uVar18 = uVar18 - 0x13;
      local_90 = '\t';
      goto LAB_010bd1d8;
    }
    if (uVar13 == 0 && (0x150 < uVar18) <= uVar13) {
      cVar17 = (char)uVar18 + -0x32;
      local_90 = '\n';
    }
    else {
      cVar17 = -0x6e;
      local_90 = '\v';
      if (uVar13 >> 1 == 0 &&
          (uint)(0xb6 < ((uint)((byte)uVar13 & 1) << 0x1f | uVar18 >> 1)) <= uVar13 >> 1) {
        cVar17 = -0x51;
      }
      cVar17 = cVar17 + (char)uVar18;
    }
    sVar16 = 1;
  }
  puVar12 = puVar12 + iVar5 * -0x5460;
  cVar7 = '\x03';
  if (sVar16 != 0) {
    cVar7 = -9;
  }
  uVar13 = iVar5 - 0x2b06;
  iVar6 = (int)(((ulonglong)uVar13 << 0x20) + (longlong)(int)uVar13 * -0x6db6db6d >> 0x20);
  iVar6 = uVar13 + ((iVar6 >> 2) - (iVar6 >> 0x1f)) * -7;
  if (iVar6 < 1) {
    iVar6 = iVar6 + 7;
  }
  local_64 = (code *)CONCAT13((char)iVar6,
                              CONCAT21(CONCAT11(local_90 + cVar7,cVar17 + '\x01'),
                                       (char)((uint)puVar12 / 0xe10)));
  local_3c = FUN_010a7fc0;
  local_68 = (undefined4 *)
             CONCAT13((char)(((uint)puVar12 % 0xe10) / 0x3c),
                      CONCAT12((char)puVar12 +
                               ((char)((uint)puVar12 / 0x3c) * '\x10' - (char)((uint)puVar12 / 0x3c)
                               ) * -4,((short)((iVar5 + -0x2b09) / 0x23ab1) +
                                      (short)((int)uVar15 >> 0x1f)) * 400 + (short)uVar19 * 100 +
                                      (short)uVar20 * 4 + (short)uVar9 + sVar16 + 2000));
  local_40 = &local_68;
  FUN_00fa948c(param_1,&DAT_01884b5c,&DAT_00590e71,&local_40);
  bVar2 = (byte)param_1[10];
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x29);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x2a);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x2b);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = (byte)param_1[0xb];
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x2d);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x2e);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x2f);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = (byte)param_1[0xc];
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x31);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x32);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x33);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = (byte)param_1[0xd];
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x35);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x36);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x37);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = (byte)param_1[0xe];
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x39);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x3a);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x3b);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = (byte)param_1[0xf];
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x3d);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x3e);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x3f);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = (byte)param_1[0x10];
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x41);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x42);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = *(byte *)((int)param_1 + 0x43);
  if (bVar2 < 0x20) {
    if (bVar2 != 9) goto LAB_010bd758;
  }
  else if (bVar2 == 0x7f) goto LAB_010bd758;
  bVar2 = (byte)param_1[0x11];
  if (bVar2 < 0x20) {
    if (bVar2 == 9) goto LAB_010bd698;
  }
  else if (bVar2 != 0x7f) {
LAB_010bd698:
    iVar5 = thunk_FUN_016d4a50(0x1d);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x1d);
    }
    local_68 = (undefined4 *)0x1d;
    local_64 = (code *)iVar5;
    FUN_016dd1aa(iVar5,param_1 + 10,0x1d);
    local_60 = (undefined4 *)0x1d;
    FUN_00f5ef18(&local_40,&local_68);
    local_30 = local_30 & 0xffffff00;
    local_68 = local_40;
    local_64 = local_3c;
    local_60 = local_38;
    uStack_5c = local_34;
    uStack_58 = local_30;
    (**(code **)(param_1[4] + 0x10))(param_1 + 7,param_1[5],param_1[6]);
    param_1[4] = (uint)local_68;
    param_1[5] = (uint)local_64;
    param_1[6] = (uint)local_60;
    param_1[7] = uStack_5c;
    param_1[8] = uStack_58;
    uVar13 = param_4 + (0xfffffffe < param_3);
    if ((int)((param_4 ^ uVar13) & ~param_4) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab620);
    }
    if (((uint)puVar4 & 1) == 0) {
      param_5 = param_5 - uVar10;
    }
    if (-1 < (int)param_5) {
      *param_1 = param_3 + 1;
      param_1[1] = uVar13;
      param_1[2] = param_5;
      return;
    }
    uVar10 = uVar13 - (param_3 + 1 == 0);
    if ((int)(uVar13 & (uVar13 ^ uVar10)) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410f07,0x2f,&DAT_018ab630);
    }
    *param_1 = param_3;
    param_1[1] = uVar10;
    param_1[2] = (uint)(&DAT_3b9aca00 + param_5);
    return;
  }
LAB_010bd758:
  local_30 = CONCAT31(local_30._1_3_,2);
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8("Date format should be valid HeaderValue",0x27,&local_50,&DAT_018a62f4,&DAT_01884b4c)
  ;
}

