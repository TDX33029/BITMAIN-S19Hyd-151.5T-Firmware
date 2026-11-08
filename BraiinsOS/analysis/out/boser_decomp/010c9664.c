// FUN_010c9664 @ 010c9664 size=692 calls_out=4 calls_in=1
// strings: 

void FUN_010c9664(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_1b0 [72];
  undefined1 auStack_168 [72];
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint local_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined4 *local_c0;
  uint local_bc;
  undefined1 auStack_b8 [72];
  undefined1 auStack_70 [76];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 5)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22478);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22478);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 4)) {
    case 0:
      uVar3 = param_2[2];
      goto LAB_010c97dc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22468);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22468);
    case 3:
      uVar3 = param_2[3];
      goto LAB_010c97e0;
    }
  }
  puVar2 = (uint *)*param_2;
  param_2[1] = puVar2;
  uVar7 = *puVar2;
  uVar11 = puVar2[1];
  uVar4 = puVar2[2];
  uVar12 = puVar2[3];
  uVar8 = puVar2[5];
  *puVar2 = 3;
  puVar2[1] = 0;
  if (uVar7 == 3 && uVar11 == 0) {
    do {
      *(undefined1 *)(param_2 + 4) = 0;
      uVar3 = param_2[1];
      param_2[2] = uVar3;
LAB_010c97dc:
      param_2[3] = uVar3;
LAB_010c97e0:
      puVar5 = param_2 + 4;
      FUN_00fdc24c(&local_d8,uVar3,param_3);
      uVar8 = local_bc;
      puVar6 = local_c0;
      uVar12 = local_c4;
      uVar4 = local_c8;
      uVar11 = local_cc;
      uVar7 = local_d0;
      uVar10 = local_d4;
      uVar9 = local_d8;
      if (local_d8 == 5 && local_d4 == 0) {
        *(undefined1 *)puVar5 = 3;
LAB_010c98ec:
        *param_1 = 4;
        param_1[1] = 0;
        uVar1 = 3;
        goto LAB_010c97cc;
      }
      FUN_01bed4e2(auStack_70,auStack_b8,0x48);
      if ((uVar9 & 7) == 4) {
        uVar7 = 0;
LAB_010c985c:
        *(undefined1 *)puVar5 = 1;
        FUN_01bed4e2(auStack_168,auStack_1b0,0x48);
        uVar11 = 0;
      }
      else {
        if (uVar9 == 3) {
          uVar7 = 1;
          goto LAB_010c985c;
        }
        FUN_01bed4e2(auStack_1b0,auStack_70,0x48);
        *(undefined1 *)puVar5 = 1;
        if (uVar9 == 4 && uVar10 == 0) goto LAB_010c98ec;
        FUN_01bed4e2(auStack_168,auStack_1b0,0x48);
        if (uVar9 != 3 || uVar10 != 0) {
          FUN_01bed4e2(&local_120,auStack_168,0x48);
          goto LAB_010c97a0;
        }
      }
    } while (uVar7 != 0 || uVar11 != 0);
    puVar2 = (uint *)param_2[1];
    uVar7 = *puVar2;
    uVar11 = puVar2[1];
    uVar4 = puVar2[2];
    uVar12 = puVar2[3];
    uVar8 = puVar2[5];
    *puVar2 = 3;
    puVar2[1] = 0;
    if (uVar7 == 3 && uVar11 == 0) {
      uVar7 = 3;
      uVar11 = 0;
      puVar6 = param_2;
      goto LAB_010c9938;
    }
  }
  puVar6 = (undefined4 *)puVar2[4];
  local_120 = puVar2[6];
  uStack_11c = puVar2[7];
  uStack_118 = puVar2[8];
  uStack_114 = puVar2[9];
  uStack_110 = puVar2[10];
  local_10c = puVar2[0xb];
  uStack_108 = puVar2[0xc];
  uStack_104 = puVar2[0xd];
  uStack_100 = puVar2[0xe];
  uStack_fc = puVar2[0xf];
LAB_010c9938:
  uVar10 = 0;
  uVar9 = 3;
LAB_010c97a0:
  param_1[4] = uVar4;
  *param_1 = uVar9;
  param_1[1] = uVar10;
  param_1[2] = uVar7;
  param_1[3] = uVar11;
  param_1[5] = uVar12;
  param_1[6] = (uint)puVar6;
  param_1[7] = uVar8;
  FUN_01bed4e2(param_1 + 8,&local_120,0x48);
  uVar1 = 1;
LAB_010c97cc:
  *(undefined1 *)(param_2 + 5) = uVar1;
  return;
}

