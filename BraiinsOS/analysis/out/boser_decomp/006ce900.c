// FUN_006ce900 @ 006ce900 size=924 calls_out=10 calls_in=0
// strings: variables.struct Request

void FUN_006ce900(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint *puVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  int local_64;
  int local_5c;
  int *local_58;
  code *local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  
  if ((9 < param_3) &&
     (iVar4 = thunk_FUN_01bed842("variables.struct Request",param_2,10), iVar4 == 0)) {
    local_48 = param_3 - 10;
    local_4c = param_2 + 10;
    local_2c = CONCAT22(local_2c._2_2_,1);
    local_38 = CONCAT31(local_38._1_3_,1);
    local_34 = 0;
    local_3c = 0x2e;
    local_44 = 0;
    local_50 = 0x2e;
    local_40 = local_48;
    local_30 = local_48;
    uVar15 = FUN_014379b8(&local_50);
    uVar7 = (uint)((ulonglong)uVar15 >> 0x20);
    if ((int)uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c05f8c);
    }
    iVar4 = *(int *)(param_1 + 0x88);
    if (iVar4 != 0) {
      local_64 = *(int *)(param_1 + 0x8c);
      do {
        piVar14 = (int *)(iVar4 + 0x210);
        uVar2 = *(ushort *)(iVar4 + 0x26e);
        uVar9 = 0xffffffff;
        iVar13 = (uint)uVar2 << 3;
        do {
          if (iVar13 == 0) {
            uVar9 = (uint)uVar2;
            goto LAB_006cea44;
          }
          uVar10 = piVar14[1];
          uVar11 = uVar10;
          if (uVar7 < uVar10) {
            uVar11 = uVar7;
          }
          iVar5 = FUN_01bed842((int)uVar15,*piVar14 + 8,uVar11);
          if (iVar5 == 0) {
            iVar5 = uVar7 - uVar10;
          }
          iVar13 = iVar13 + -8;
          uVar9 = uVar9 + 1;
          piVar14 = piVar14 + 2;
        } while ((char)((0 < iVar5) - (iVar5 < 0)) == '\x01');
        if (0 < iVar5 == iVar5 < 0) {
          puVar12 = (undefined4 *)(iVar4 + uVar9 * 0x30);
          goto LAB_006cea78;
        }
LAB_006cea44:
        if (local_64 == 0) break;
        local_64 = local_64 + -1;
        iVar4 = *(int *)(iVar4 + uVar9 * 4 + 0x270);
      } while( true );
    }
  }
LAB_006ce938:
  FUN_019bb7e0(*param_4,param_4[1]);
  if (param_4[3] != -0x80000000) {
    FUN_019bb7e0(param_4[3],param_4[4]);
  }
                    /* WARNING: Could not recover jumptable at 0x006ced0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4[6] + 0x10))(param_4 + 9,param_4[7],param_4[8]);
  return;
LAB_006cea78:
  uVar16 = FUN_014379b8(&local_50);
  iVar4 = (int)(uVar16 >> 0x20);
  pcVar6 = (char *)uVar16;
  if (pcVar6 == (char *)0x0) {
    local_50 = *param_4;
    local_4c = param_4[1];
    local_48 = param_4[2];
    local_44 = param_4[3];
    local_40 = param_4[4];
    local_3c = param_4[5];
    local_38 = param_4[6];
    local_34 = param_4[7];
    local_30 = param_4[8];
    local_2c = param_4[9];
    iVar4 = *(int *)(param_1 + 0xb4);
    if (iVar4 == *(int *)(param_1 + 0xac)) {
      FUN_00a20cf4();
    }
    puVar8 = (undefined4 *)(*(int *)(param_1 + 0xb0) + iVar4 * 0x28);
    *puVar8 = local_50;
    puVar8[1] = local_4c;
    puVar8[2] = local_48;
    puVar8[3] = local_44;
    puVar8[4] = local_40;
    puVar8[5] = local_3c;
    puVar8[6] = local_38;
    puVar8[7] = local_34;
    puVar8[8] = local_30;
    puVar8[9] = local_2c;
    *(int *)(param_1 + 0xb4) = iVar4 + 1;
    local_58 = &local_5c;
    local_54 = FUN_012fd02c;
    local_5c = iVar4;
    FUN_00664898(&local_50,&DAT_00579f22,&local_58);
    FUN_006ccfc0(puVar12);
    *puVar12 = local_50;
    puVar12[1] = local_4c;
    puVar12[2] = local_48;
    puVar12[3] = local_44;
    puVar12[4] = 0x80000002;
    return;
  }
  uVar7 = 7;
  if ((int)puVar12[4] < 0) {
    uVar7 = puVar12[4] ^ 0x80000000;
  }
  if (uVar7 == 7) {
    uVar16 = FUN_007015e4(puVar12,pcVar6);
    uVar7 = (uint)(uVar16 >> 0x20);
    if ((uVar16 & 1) == 0) goto LAB_006ce938;
    if ((uint)puVar12[6] <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,puVar12[6],&DAT_01d2c094);
    }
    puVar12 = (undefined4 *)(puVar12[5] + uVar7 * 0x40);
    goto LAB_006cea78;
  }
  if (uVar7 != 6) goto LAB_006ce938;
  if (iVar4 == 1) {
    cVar3 = *pcVar6;
    if (cVar3 == '+' || cVar3 == '-') goto LAB_006ce938;
  }
  else {
    if (iVar4 == 0) goto LAB_006ce938;
    cVar3 = *pcVar6;
  }
  uVar7 = 0;
  if (cVar3 == '+') {
    uVar16 = CONCAT44(iVar4 + -1,pcVar6 + 1);
  }
  if (uVar16 < 0x900000000) {
    while( true ) {
      iVar4 = (int)(uVar16 >> 0x20);
      if (iVar4 == 0) break;
      uVar9 = *(byte *)uVar16 - 0x30;
      if (9 < uVar9) goto LAB_006ce938;
      uVar16 = CONCAT44(iVar4 + -1,(byte *)uVar16 + 1);
      uVar7 = uVar9 + uVar7 * 10;
    }
  }
  else {
    while( true ) {
      iVar4 = (int)(uVar16 >> 0x20);
      if (iVar4 == 0) break;
      uVar9 = (uint)((ulonglong)uVar7 * 10);
      if ((int)((ulonglong)uVar7 * 10 >> 0x20) != 0) goto LAB_006ce938;
      uVar11 = *(byte *)uVar16 - 0x30;
      uVar7 = uVar11 + uVar9;
      if ((9 < uVar11) || (uVar16 = CONCAT44(iVar4 + -1,(byte *)uVar16 + 1), CARRY4(uVar11,uVar9)))
      goto LAB_006ce938;
    }
  }
  puVar1 = puVar12 + 2;
  puVar12 = (undefined4 *)(puVar12[1] + uVar7 * 0x30);
  if (*puVar1 <= uVar7) goto LAB_006ce938;
  goto LAB_006cea78;
}

