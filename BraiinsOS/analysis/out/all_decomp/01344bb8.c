// FUN_01344bb8 @ 01344bb8 size=648 calls_out=8 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01344bb8(int *param_1,int *param_2,char *param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int local_80;
  int *local_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  if ((param_4 != 0) && (*param_3 == '#')) {
    do {
      iVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar2 + 1;
    if (iVar2 < 0) {
      software_udf(0xfdee,0x1344c08);
      return;
    }
    *param_1 = -0x7ffffff6;
    param_1[1] = (int)param_2;
    return;
  }
  local_48 = param_2[3];
  local_44 = param_2[4];
  local_40 = param_2[5];
  iStack_3c = param_2[6];
  iStack_38 = param_2[7];
  local_34 = param_2[8];
  iStack_30 = param_2[9];
  iStack_2c = param_2[10];
  iStack_28 = param_2[0xb];
  FUN_0134ef4c(&local_80,param_5,&local_48,param_3,param_4);
  if (local_80 != -0x7ffffff6) {
    param_1[2] = local_78;
    param_1[3] = iStack_74;
    param_1[4] = iStack_70;
    param_1[5] = iStack_6c;
    param_1[6] = iStack_68;
    param_1[7] = iStack_64;
    param_1[8] = local_60;
    param_1[9] = iStack_5c;
    param_1[10] = iStack_58;
    param_1[0xb] = iStack_54;
    param_1[0xc] = iStack_50;
    param_1[0xd] = iStack_4c;
    *param_1 = local_80;
    param_1[1] = (int)local_7c;
    return;
  }
  uVar14 = local_7c[4];
  iVar2 = local_7c[3];
  if (uVar14 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(uVar14);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar14);
    }
  }
  FUN_016dd1aa(iVar3,iVar2,uVar14);
  iVar10 = local_7c[5];
  uVar15 = local_7c[6];
  iVar2 = local_7c[9];
  iVar7 = local_7c[10];
  iVar8 = local_7c[0xb];
  iVar11 = local_7c[7];
  uVar13 = local_7c[8];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *local_7c;
    bVar1 = (bool)hasExclusiveAccess(local_7c);
  } while (!bVar1);
  *local_7c = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013532e4(local_7c);
  }
  uVar5 = uVar13;
  if (uVar13 == 0) {
    uVar5 = uVar15;
  }
  uVar12 = uVar14;
  if (uVar5 != uVar14) {
    uVar9 = uVar5 + 1;
    if ((uVar14 < uVar9) ||
       (((uVar9 != 0 && (uVar9 < uVar14)) && (*(char *)(iVar3 + uVar9) < -0x40)))) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar3,uVar14,uVar9,uVar14,&DAT_018821a4);
    }
    if (((uVar14 == uVar9) && (uVar5 <= uVar14)) &&
       ((uVar12 = uVar5, uVar5 != 0 && ((uVar5 < uVar14 && (*(char *)(iVar3 + uVar5) < -0x40)))))) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00418707,0x30,&DAT_01882184);
    }
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x30);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x30);
  }
  *puVar6 = 1;
  puVar6[9] = iVar2;
  puVar6[10] = iVar7;
  puVar6[0xb] = iVar8;
  puVar6[1] = 1;
  puVar6[2] = uVar14;
  puVar6[3] = iVar3;
  puVar6[4] = uVar12;
  puVar6[5] = iVar10;
  puVar6[6] = uVar15;
  puVar6[7] = iVar11;
  puVar6[8] = uVar13;
  *param_1 = -0x7ffffff6;
  param_1[1] = (int)puVar6;
  return;
}

