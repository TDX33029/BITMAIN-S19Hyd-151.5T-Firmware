// FUN_006f6ecc @ 006f6ecc size=956 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006f6ecc(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  undefined4 uVar18;
  int *piVar19;
  int *local_11c;
  int local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac [3];
  undefined4 local_a0;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar10 = *(undefined4 **)(param_2 + 0x20);
  while( true ) {
    FUN_006fb748(&local_fc,param_2);
    iVar4 = local_ec;
    uVar3 = uStack_f0;
    uVar2 = uStack_f4;
    uVar18 = local_f8;
    iVar9 = local_fc;
    if (local_fc == 0) goto LAB_006f71c4;
    uVar8 = FUN_006fb3b4(local_fc,local_ec);
    FUN_006fb414(local_ac,iVar9,uVar18,uVar2,uVar3,iVar4 + 1,uVar8);
    FUN_006fb748(&local_38,local_ac);
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c06240);
    }
    local_50 = local_38;
    uStack_4c = uStack_34;
    uStack_48 = uStack_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    uVar18 = *(undefined4 *)(param_2 + 0x1c);
    FUN_006fc9e8(&local_90,&local_50,uVar18);
    piVar5 = local_80;
    piVar15 = local_84;
    piVar16 = local_88;
    piVar13 = local_8c;
    if (local_90 != (int *)&DAT_00000009) {
      local_11c = local_84;
      piVar12 = local_78;
      piVar13 = local_90;
      piVar14 = local_80;
      piVar15 = local_88;
      piVar16 = local_8c;
      piVar17 = local_74;
      piVar19 = local_7c;
      goto LAB_006f7134;
    }
    FUN_006fb748(&local_38,local_ac);
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c06250);
    }
    local_50 = local_38;
    uStack_4c = uStack_34;
    uStack_48 = uStack_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    FUN_006fcb88(&local_90,&local_50,uVar18);
    piVar11 = local_70;
    piVar7 = local_74;
    piVar6 = local_78;
    piVar17 = local_7c;
    piVar12 = local_80;
    piVar19 = local_84;
    piVar14 = local_88;
    if (local_90 == (int *)&DAT_00000001) break;
    local_c8 = local_6c;
    uStack_c4 = uStack_68;
    uStack_c0 = uStack_64;
    local_bc = local_60;
    uStack_b8 = uStack_5c;
    uStack_b4 = uStack_58;
    uStack_b0 = uStack_54;
    FUN_006f6e98(local_ac[0],local_a0);
    if (piVar11 == (int *)&DAT_80000008) {
      local_11c = piVar5;
      goto LAB_006f7164;
    }
    local_e8 = local_c8;
    uStack_e4 = uStack_c4;
    uStack_e0 = uStack_c0;
    local_dc = local_bc;
    uStack_d8 = uStack_b8;
    uStack_d4 = uStack_b4;
    uStack_d0 = uStack_b0;
    if (piVar11 != (int *)&DAT_80000009) {
      param_1[2] = piVar15;
      param_1[3] = piVar5;
      param_1[5] = piVar19;
      param_1[8] = piVar6;
      param_1[9] = piVar7;
      param_1[6] = piVar12;
      *param_1 = piVar13;
      param_1[1] = piVar16;
      param_1[4] = piVar14;
      param_1[7] = piVar17;
      param_1[0xb] = local_c8;
      param_1[0xc] = uStack_c4;
      param_1[0xd] = uStack_c0;
      param_1[0xe] = local_bc;
      param_1[0xf] = uStack_b8;
      param_1[0x10] = uStack_b4;
      param_1[0x11] = uStack_b0;
LAB_006f71cc:
      param_1[10] = piVar11;
      return;
    }
  }
  local_11c = local_80;
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar15;
    bVar1 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar1);
  *piVar15 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(piVar15,piVar5);
  }
  piVar12 = local_74;
  piVar13 = local_8c;
  piVar14 = local_7c;
  piVar15 = local_84;
  piVar16 = local_88;
  piVar17 = local_70;
  piVar19 = local_78;
LAB_006f7134:
  FUN_006f6e98(local_ac[0],local_a0);
LAB_006f7164:
  FUN_006f6e10(puVar10);
  *puVar10 = piVar13;
  puVar10[1] = piVar16;
  puVar10[5] = piVar19;
  puVar10[6] = piVar12;
  puVar10[2] = piVar15;
  puVar10[3] = local_11c;
  puVar10[4] = piVar14;
  puVar10[7] = piVar17;
LAB_006f71c4:
  piVar11 = (int *)&DAT_80000008;
  goto LAB_006f71cc;
}

