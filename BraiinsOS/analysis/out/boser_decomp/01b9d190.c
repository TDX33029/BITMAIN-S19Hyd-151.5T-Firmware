// FUN_01b9d190 @ 01b9d190 size=652 calls_out=2 calls_in=3
// strings: 

uint FUN_01b9d190(int param_1,uint *param_2,int param_3,int *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int local_38;
  uint local_2c;
  
  iVar7 = *(int *)(param_1 + 100);
  iVar12 = *(int *)(param_1 + 4);
  uVar1 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  iVar4 = *(int *)(param_1 + 8);
  uVar5 = *(uint *)(param_1 + 0xc);
  iVar9 = *(int *)(param_1 + 0xc0);
  uVar6 = *(uint *)(param_1 + 0x10);
  uVar3 = (int)param_2 - iVar12;
  iVar11 = *(int *)(param_1 + 0x5c);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar3 - uVar6) {
    local_2c = uVar3 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_2c = uVar6;
  }
  uVar10 = -iVar9 + 0x40;
  uVar14 = *(uint *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x18) != 0) {
    local_2c = uVar6;
  }
  if (uVar1 < uVar3) {
    uVar6 = uVar3 - uVar1;
  }
  else {
    uVar6 = 0;
  }
  local_38 = 1 << (*(uint *)(param_1 + 0xc4) & 0xff);
  iVar8 = *(int *)(param_1 + 0xdc);
  do {
    if (uVar3 <= uVar14) break;
    lVar2 = (ulonglong)*(uint *)(iVar12 + uVar14) * 0xbf9b0000;
    uVar13 = *(int *)(iVar12 + uVar14 + 4) * -0x40650000 + *(uint *)(iVar12 + uVar14) * -0x30e44324
             + (int)((ulonglong)lVar2 >> 0x20);
    uVar13 = (uint)lVar2 >> (uVar10 & 0xff) | uVar13 << (iVar9 - 0x20U & 0xff) |
             uVar13 >> (0x20U - iVar9 & 0xff);
    *(undefined4 *)(iVar7 + (uVar1 - 1 & uVar14) * 4) = *(undefined4 *)(iVar11 + uVar13 * 4);
    *(uint *)(iVar11 + uVar13 * 4) = uVar14;
    uVar14 = uVar14 + 1;
  } while (iVar8 == 0);
  uVar14 = *param_2;
  *(uint *)(param_1 + 0x1c) = uVar3;
  lVar2 = (ulonglong)uVar14 * 0xbf9b0000;
  uVar14 = param_2[1] * -0x40650000 + uVar14 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  uVar14 = *(uint *)(iVar11 + ((uint)lVar2 >> (uVar10 & 0xff) | uVar14 << (0x20 - uVar10 & 0xff) |
                              uVar14 >> (-iVar9 + 0x20U & 0xff)) * 4);
  uVar10 = 3;
  do {
    if (local_38 == 0 || uVar14 < local_2c) {
      return uVar10;
    }
    if (uVar14 < uVar5) {
      if (*(uint *)(iVar4 + uVar14) == *param_2) {
        iVar9 = FUN_01b9b970(param_2 + 1,iVar4 + uVar14 + 4,param_3,iVar4 + uVar5,iVar12 + uVar5);
        uVar13 = iVar9 + 4;
        goto LAB_01b9d38c;
      }
    }
    else if (*(int *)(iVar12 + uVar14 + (uVar10 - 3)) == *(int *)((int)param_2 + (uVar10 - 3))) {
      uVar13 = FUN_01b9b884(param_2,iVar12 + uVar14,param_3);
LAB_01b9d38c:
      if ((uVar10 < uVar13) &&
         (*param_4 = (uVar3 + 3) - uVar14, uVar10 = uVar13, param_3 == (int)param_2 + uVar13)) {
        return uVar13;
      }
    }
    if (uVar14 <= uVar6) {
      return uVar10;
    }
    uVar14 = *(uint *)(iVar7 + (uVar14 & uVar1 - 1) * 4);
    local_38 = local_38 + -1;
  } while( true );
}

