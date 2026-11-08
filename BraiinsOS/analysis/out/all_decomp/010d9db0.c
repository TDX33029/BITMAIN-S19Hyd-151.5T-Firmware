// FUN_010d9db0 @ 010d9db0 size=640 calls_out=4 calls_in=1
// strings: capacity overflow

void FUN_010d9db0(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint *puVar10;
  uint uVar11;
  byte *pbVar12;
  uint *puVar13;
  uint *local_70;
  uint local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  pbVar8 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  puVar10 = (uint *)(param_1 + 0x3f8);
  uVar11 = *puVar10;
  uVar4 = (int)pbVar12 - (int)pbVar8;
  puVar7 = (uint *)param_2[2];
  uVar6 = uVar11;
  uVar2 = 0xfd;
  if (0xfd < uVar11) {
    uVar6 = *(uint *)(param_1 + 4);
    uVar2 = uVar11;
  }
  if (uVar2 - uVar6 < uVar4) {
    if (CARRY4(uVar6,uVar4)) {
LAB_010da018:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("capacity overflow",0x11,&DAT_0188b950);
    }
    uVar2 = 0xffffffff >> LZCOUNT((uVar6 + uVar4) - 1);
    if (uVar6 + uVar4 < 2) {
      uVar2 = 0;
    }
    if (0xfffffffe < uVar2) goto LAB_010da018;
    iVar1 = FUN_010da038(param_1,uVar2 + 1);
    if (iVar1 != -0x7fffffff) {
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874();
      }
      goto LAB_010da018;
    }
    uVar11 = *puVar10;
  }
  puVar13 = (uint *)(param_1 + 4);
  if (uVar11 < 0xfe) {
    uVar6 = 0xfd;
    puVar3 = puVar10;
    uVar2 = uVar11;
    local_70 = puVar13;
    if (0xfc < uVar11) goto LAB_010d9e58;
  }
  else {
    uVar2 = *(uint *)(param_1 + 4);
    puVar3 = puVar13;
    local_70 = *(uint **)(param_1 + 8);
    uVar6 = uVar11;
    if (uVar11 <= uVar2) {
LAB_010d9e58:
      *puVar3 = uVar2;
      goto joined_r0x010d9f30;
    }
  }
  do {
    if (pbVar8 == pbVar12) {
      *puVar3 = uVar2;
      return;
    }
    pbVar9 = pbVar8 + 1;
    uVar4 = (uint)*pbVar8;
    local_48[0] = *puVar7;
    local_48[1] = puVar7[1];
    local_48[2] = puVar7[2];
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_48[3] = puVar7[3];
    if ((local_48[(uVar4 & 0x7f) >> 5] >> (uVar4 & 0x1f) & 1) == 0) {
      uVar11 = uVar4;
    }
    else {
      uVar11 = 0xfffd;
      if (uVar4 - 0x41 < 0x1a) {
        uVar11 = uVar4 | 0x20;
      }
    }
    local_70[uVar2] = uVar11;
    uVar2 = uVar2 + 1;
    pbVar8 = pbVar9;
  } while (uVar6 != uVar2);
  *puVar3 = uVar6;
joined_r0x010d9f30:
  do {
    if (pbVar8 == pbVar12) {
      return;
    }
    uVar2 = (uint)*pbVar8;
    local_68[0] = *puVar7;
    local_68[1] = puVar7[1];
    local_68[2] = puVar7[2];
    local_68[3] = puVar7[3];
    local_4c = 0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    if ((local_68[(uVar2 & 0x7f) >> 5] >> (uVar2 & 0x1f) & 1) == 0) {
      uVar4 = *puVar10;
      uVar6 = uVar4;
      if (0xfd < uVar4) goto LAB_010d9f90;
LAB_010d9fb0:
      uVar6 = 0xfd;
      puVar3 = puVar13;
      puVar5 = puVar10;
    }
    else {
      uVar11 = 0xfffd;
      if (uVar2 - 0x41 < 0x1a) {
        uVar11 = uVar2 | 0x20;
      }
      uVar4 = *puVar10;
      uVar6 = uVar4;
      uVar2 = uVar11;
      if (uVar4 < 0xfe) goto LAB_010d9fb0;
LAB_010d9f90:
      uVar4 = *(uint *)(param_1 + 4);
      puVar3 = *(uint **)(param_1 + 8);
      puVar5 = puVar13;
    }
    if (uVar4 == uVar6) {
      FUN_010da1f8(param_1);
      uVar4 = *(uint *)(param_1 + 4);
      puVar3 = *(uint **)(param_1 + 8);
      puVar5 = puVar13;
    }
    puVar3[uVar4] = uVar2;
    *puVar5 = *puVar5 + 1;
    pbVar8 = pbVar8 + 1;
  } while( true );
}

