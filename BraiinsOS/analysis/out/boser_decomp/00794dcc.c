// FUN_00794dcc @ 00794dcc size=812 calls_out=7 calls_in=2
// strings: 

void FUN_00794dcc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_6c [5];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_28 = CONCAT31(local_28._1_3_,3);
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_44 = 0;
  local_48 = local_48 & 0xffffff00;
  local_4c = 0;
  local_50 = 0;
  local_40 = 4;
  local_54 = 1;
  local_58 = 1;
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x34);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x34);
  }
  *puVar3 = local_58;
  puVar3[1] = local_54;
  puVar3[2] = local_50;
  puVar3[3] = local_4c;
  puVar3[4] = local_48;
  puVar3[5] = local_44;
  puVar3[6] = local_40;
  puVar3[7] = local_3c;
  puVar3[8] = local_38;
  puVar3[9] = local_34;
  puVar3[10] = local_30;
  puVar3[0xb] = local_2c;
  puVar3[0xc] = local_28;
  local_6c[0] = 0x80000000;
  local_50 = 0x80000000;
  local_54 = 1;
  local_58 = 1;
  puVar4 = (undefined4 *)thunk_FUN_01be5118(0x1c);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x1c);
  }
  *puVar4 = local_58;
  puVar4[1] = local_54;
  puVar4[2] = local_50;
  puVar4[3] = local_4c;
  puVar4[4] = local_48;
  puVar4[5] = local_44;
  puVar4[6] = local_40;
  FUN_007563a0(local_6c);
  local_2c = CONCAT31(local_2c._1_3_,1);
  local_54 = 1;
  local_58 = 1;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 4;
  local_44 = 0;
  local_48 = local_48 & 0xffffff00;
  local_4c = 0;
  local_50 = 0;
  local_30 = puVar4;
  puVar4 = (undefined4 *)thunk_FUN_01be5118(0x30);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x30);
  }
  *puVar4 = local_58;
  puVar4[1] = local_54;
  puVar4[2] = local_50;
  puVar4[3] = local_4c;
  puVar4[4] = local_48;
  puVar4[5] = local_44;
  puVar4[6] = local_40;
  puVar4[7] = local_3c;
  puVar4[8] = local_38;
  puVar4[9] = local_34;
  puVar4[10] = local_30;
  puVar4[0xb] = local_2c;
  piVar5 = (int *)FUN_01664fc4();
  uVar10 = piVar5[0x52];
  piVar11 = piVar5 + 2;
  if (uVar10 < 0x3f) {
    uVar6 = uVar10 + 2;
    piVar5[0x52] = uVar6;
    uVar12 = piVar11[uVar10];
    uVar10 = (piVar11 + uVar10)[1];
  }
  else {
    if (uVar10 == 0x3f) {
      uVar12 = piVar5[0x41];
      FUN_007a4e44(piVar5 + 0x42,piVar11);
      uVar6 = 1;
      uVar10 = piVar5[2];
    }
    else {
      FUN_007a4e44(piVar5 + 0x42,piVar11);
      uVar12 = piVar5[2];
      uVar6 = 2;
      uVar10 = piVar5[3];
    }
    piVar5[0x52] = uVar6;
  }
  uVar15 = (uint)((ulonglong)uVar12 * 0x1f);
  lVar1 = (ulonglong)uVar10 * 0x1f + ((ulonglong)uVar12 * 0x1f >> 0x20);
  uVar14 = (uint)lVar1;
  iVar13 = (int)((ulonglong)lVar1 >> 0x20);
  uVar12 = uVar15 + 0x1e;
  uVar2 = (ulonglong)uVar12;
  uVar10 = uVar14 - ((0xffffffe1 >= uVar15) - 1);
  if (uVar14 + 1 < (uint)(0xffffffe1 < uVar15)) {
    if (uVar6 < 0x3f) {
      piVar5[0x52] = uVar6 + 2;
      uVar10 = piVar11[uVar6];
      uVar6 = (piVar11 + uVar6)[1];
    }
    else {
      if (uVar6 == 0x3f) {
        uVar10 = piVar5[0x41];
        FUN_007a4e44(piVar5 + 0x42,piVar11,uVar12);
        iVar7 = 1;
        uVar6 = piVar5[2];
      }
      else {
        FUN_007a4e44(piVar5 + 0x42,piVar11,uVar12);
        uVar10 = piVar5[2];
        iVar7 = 2;
        uVar6 = piVar5[3];
      }
      piVar5[0x52] = iVar7;
    }
    uVar2 = (ulonglong)uVar10 * 0x1f;
    uVar10 = (uint)((ulonglong)uVar6 * 0x1f >> 0x20);
    iVar13 = iVar13 + (uint)CARRY4(uVar14,(uint)(CARRY4(uVar15,uVar10) ||
                                                CARRY4(uVar15 + uVar10,
                                                       (uint)CARRY4((uint)((ulonglong)uVar6 * 0x1f),
                                                                    (uint)(uVar2 >> 0x20)))));
  }
  iVar7 = *piVar5;
  *piVar5 = iVar7 + -1;
  if (iVar7 + -1 == 0) {
    FUN_01663bac(piVar5,uVar10,(int)uVar2);
  }
  puVar8 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x20);
  }
  puVar8[6] = &DAT_3b9aca00;
  *(undefined1 *)(puVar8 + 2) = 0;
  *puVar8 = 1;
  puVar8[1] = 1;
  puVar9 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  puVar9[3] = iVar13 + 1;
  *puVar9 = 1;
  puVar9[1] = 1;
  puVar9[2] = puVar8;
  FUN_01bed4e2(param_1 + 0x80,param_2,0x5c);
  FUN_01bed4e2(param_1,param_3,0x80);
  *(undefined4 **)(param_1 + 0xdc) = puVar3;
  *(undefined4 **)(param_1 + 0xe0) = puVar4;
  *(undefined4 **)(param_1 + 0xe4) = puVar9;
  *(undefined4 *)(param_1 + 0xe8) = param_4;
  return;
}

