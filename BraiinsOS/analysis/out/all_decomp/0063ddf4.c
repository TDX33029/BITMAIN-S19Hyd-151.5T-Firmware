// FUN_0063ddf4 @ 0063ddf4 size=856 calls_out=8 calls_in=2
// strings: 

void FUN_0063ddf4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_48;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_28 = CONCAT31(local_28._1_3_,3);
  uVar8 = local_48 >> 8;
  local_48 = uVar8 << 8;
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x34);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x34);
  }
  *puVar4 = 1;
  puVar4[1] = 1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = local_48;
  puVar4[5] = 0;
  puVar4[6] = 4;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = local_30;
  puVar4[0xb] = local_2c;
  puVar4[0xc] = local_28;
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x1c);
  }
  *puVar5 = 1;
  puVar5[1] = 1;
  puVar5[2] = 0x80000000;
  puVar5[3] = 0;
  puVar5[4] = local_48;
  puVar5[5] = 0;
  puVar5[6] = 4;
  local_48 = uVar8 << 8;
  local_2c = CONCAT31(local_2c._1_3_,1);
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x30);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x30);
  }
  *puVar6 = 1;
  puVar6[1] = 1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = local_48;
  puVar6[5] = 0;
  puVar6[6] = 4;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = puVar5;
  puVar6[0xb] = local_2c;
  iVar7 = thunk_FUN_016de0ee();
  puVar5 = (undefined4 *)(iVar7 + 0x228);
  if ((*(char *)(iVar7 + 0x22c) != '\x01') &&
     (puVar5 = (undefined4 *)FUN_0133ef14(), puVar5 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_015f853c(&DAT_018ae900);
  }
  puVar13 = (uint *)*puVar5;
  uVar8 = *puVar13;
  *puVar13 = uVar8 + 1;
  if (0xfffffffe < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x63e15c);
    (*pcVar1)();
  }
  uVar8 = puVar13[0x52];
  puVar11 = puVar13 + 2;
  if (uVar8 < 0x3f) {
    uVar9 = uVar8 + 2;
    puVar13[0x52] = uVar9;
    uVar14 = puVar11[uVar8];
    uVar8 = (puVar11 + uVar8)[1];
  }
  else {
    if (uVar8 == 0x3f) {
      uVar14 = puVar13[0x41];
      FUN_01074b6c(puVar13 + 0x42,puVar11);
      uVar9 = 1;
      uVar8 = puVar13[2];
    }
    else {
      FUN_01074b6c(puVar13 + 0x42,puVar11);
      uVar14 = puVar13[2];
      uVar9 = 2;
      uVar8 = puVar13[3];
    }
    puVar13[0x52] = uVar9;
  }
  uVar16 = (uint)((ulonglong)uVar14 * 0x1f);
  lVar2 = (ulonglong)uVar8 * 0x1f + ((ulonglong)uVar14 * 0x1f >> 0x20);
  uVar15 = (uint)lVar2;
  iVar7 = (int)((ulonglong)lVar2 >> 0x20);
  uVar14 = uVar16 + 0x1e;
  uVar3 = (ulonglong)uVar14;
  uVar8 = uVar15 - ((0xffffffe1 >= uVar16) - 1);
  if (uVar15 + 1 < (uint)(0xffffffe1 < uVar16)) {
    if (uVar9 < 0x3f) {
      puVar13[0x52] = uVar9 + 2;
      uVar12 = puVar11[uVar9];
      uVar9 = (puVar11 + uVar9)[1];
    }
    else {
      if (uVar9 == 0x3f) {
        uVar12 = puVar13[0x41];
        FUN_01074b6c(puVar13 + 0x42,puVar11,uVar14);
        uVar8 = 1;
        uVar9 = puVar13[2];
      }
      else {
        FUN_01074b6c(puVar13 + 0x42,puVar11,uVar14);
        uVar12 = puVar13[2];
        uVar8 = 2;
        uVar9 = puVar13[3];
      }
      puVar13[0x52] = uVar8;
    }
    uVar3 = (ulonglong)uVar12 * 0x1f;
    uVar8 = (uint)((ulonglong)uVar9 * 0x1f >> 0x20);
    iVar7 = iVar7 + (uint)CARRY4(uVar15,(uint)(CARRY4(uVar16,uVar8) ||
                                              CARRY4(uVar16 + uVar8,
                                                     (uint)CARRY4((uint)((ulonglong)uVar9 * 0x1f),
                                                                  (uint)(uVar3 >> 0x20)))));
  }
  uVar9 = *puVar13;
  *puVar13 = uVar9 - 1;
  if (uVar9 - 1 == 0) {
    FUN_0133db64(puVar13,uVar8,(int)uVar3);
  }
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[6] = &DAT_3b9aca00;
  *puVar5 = 1;
  puVar5[1] = 1;
  puVar10 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  puVar10[3] = iVar7 + 1;
  *puVar10 = 1;
  puVar10[1] = 1;
  puVar10[2] = puVar5;
  FUN_016dd1aa(param_1 + 0x80,param_2,0x5c);
  FUN_016dd1aa(param_1,param_3,0x80);
  *(undefined4 **)(param_1 + 0xdc) = puVar4;
  *(undefined4 **)(param_1 + 0xe0) = puVar6;
  *(undefined4 **)(param_1 + 0xe4) = puVar10;
  *(undefined4 *)(param_1 + 0xe8) = param_4;
  return;
}

