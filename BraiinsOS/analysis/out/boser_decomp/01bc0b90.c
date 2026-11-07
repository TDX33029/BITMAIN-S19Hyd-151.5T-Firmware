// FUN_01bc0b90 @ 01bc0b90 size=916 calls_out=4 calls_in=13
// strings: 

void FUN_01bc0b90(int param_1,uint *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int local_54;
  int local_50;
  uint local_48;
  uint *local_3c;
  uint local_38;
  uint local_30;
  uint local_2c;
  
  iVar12 = *(int *)(param_1 + 0x5c);
  iVar1 = *(int *)(param_1 + 0xc0);
  local_2c = DAT_01d53560;
  switch(param_5) {
  case 5:
    uVar2 = *param_2;
    uVar13 = 0xbb000000;
    uVar3 = param_2[1];
    break;
  case 6:
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar13 = 0xbf9b0000;
    break;
  case 7:
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar13 = 0xbfa56300;
    break;
  case 8:
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar13 = 0xb7a56463;
    break;
  default:
    uVar13 = *param_2 * -0x61c8864f >> (0x20U - iVar1 & 0xff);
    goto LAB_01bc0c10;
  }
  uVar3 = uVar13 * uVar3 + uVar2 * -0x30e44324 + (int)((ulonglong)uVar13 * (ulonglong)uVar2 >> 0x20)
  ;
  uVar13 = (uint)((ulonglong)uVar13 * (ulonglong)uVar2) >> (0x40U - iVar1 & 0xff) |
           uVar3 << (iVar1 - 0x20U & 0xff) | uVar3 >> (0x20U - iVar1 & 0xff);
LAB_01bc0c10:
  uVar2 = *(uint *)(param_1 + 100);
  uVar10 = *(uint *)(iVar12 + uVar13 * 4);
  iVar1 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar3 = ~(-1 << (*(int *)(param_1 + 0xbc) - 1U & 0xff));
  uVar11 = (int)param_2 - iVar1;
  if (uVar3 < uVar11) {
    uVar7 = uVar11 - uVar3;
  }
  else {
    uVar7 = 0;
  }
  puVar14 = (uint *)(uVar2 + (uVar3 & uVar11) * 8);
  local_3c = puVar14 + 1;
  uVar15 = FUN_01bc079c(param_1,param_4,*(undefined4 *)(param_1 + 0xb8));
  uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
  local_50 = uVar11 + 9;
  uVar8 = *(uint *)(param_1 + 0xc4);
  *(uint *)(iVar12 + uVar13 * 4) = uVar11;
  uVar13 = 8;
  local_54 = 1 << (uVar8 & 0xff);
  local_48 = 0;
  local_38 = 0;
  do {
    if (uVar10 < (uint)uVar15 || local_54 == 0) {
LAB_01bc0cfc:
      uVar2 = 0;
      *local_3c = 0;
      *puVar14 = 0;
      if ((0x180 < uVar13) && (uVar2 = uVar13 - 0x180, 0xbf < uVar2)) {
        uVar2 = 0xc0;
      }
      uVar13 = (local_50 - uVar11) - 8;
      if (uVar13 < uVar2) {
        uVar13 = uVar2;
      }
      if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4(uVar13,uVar4,local_2c ^ DAT_01d53560,0);
      }
      return;
    }
    if (local_38 < local_48) {
      uVar8 = local_38;
    }
    else {
      uVar8 = local_48;
    }
    if ((param_6 == 0) || (uVar6 <= uVar10 + uVar8)) {
      iVar12 = iVar1 + uVar10;
      uVar16 = FUN_01bc0a2c((int)param_2 + uVar8,iVar12 + uVar8,param_3);
      uVar4 = (uint)((ulonglong)uVar16 >> 0x20);
      uVar8 = uVar8 + (int)uVar16;
    }
    else {
      iVar12 = iVar5 + uVar10;
      uVar16 = FUN_01bc0b18((int)param_2 + uVar8,iVar12 + uVar8,param_3,iVar5 + uVar6,iVar1 + uVar6)
      ;
      uVar4 = (uint)((ulonglong)uVar16 >> 0x20);
      uVar8 = uVar8 + (int)uVar16;
      if (uVar6 <= uVar10 + uVar8) {
        iVar12 = iVar1 + uVar10;
      }
    }
    if ((uVar13 < uVar8) && (uVar13 = uVar8, local_50 - uVar10 < uVar8)) {
      local_50 = uVar10 + uVar8;
    }
    if ((int)param_2 + uVar8 == param_3) goto LAB_01bc0cfc;
    uVar4 = (uint)*(byte *)((int)param_2 + uVar8);
    puVar9 = (uint *)(uVar2 + (uVar10 & uVar3) * 8);
    if (*(byte *)(iVar12 + uVar8) < uVar4) {
      *puVar14 = uVar10;
      if (uVar10 <= uVar7) {
        puVar14 = &local_30;
        goto LAB_01bc0cfc;
      }
      uVar10 = puVar9[1];
      puVar14 = puVar9 + 1;
      local_38 = uVar8;
    }
    else {
      *local_3c = uVar10;
      if (uVar10 <= uVar7) {
        local_3c = &local_30;
        uVar4 = uVar7;
        goto LAB_01bc0cfc;
      }
      uVar10 = *(uint *)(uVar2 + (uVar10 & uVar3) * 8);
      uVar4 = uVar2;
      local_48 = uVar8;
      local_3c = puVar9;
    }
    local_54 = local_54 + -1;
  } while( true );
}

