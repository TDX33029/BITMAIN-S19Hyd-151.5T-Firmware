// FUN_01b9d424 @ 01b9d424 size=656 calls_out=2 calls_in=3
// strings: 

uint FUN_01b9d424(int param_1,uint *param_2,int param_3,int *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int local_38;
  uint local_2c;
  
  iVar8 = *(int *)(param_1 + 100);
  iVar12 = *(int *)(param_1 + 4);
  uVar1 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  iVar5 = *(int *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar7 = (int)param_2 - iVar12;
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar7 - uVar3) {
    local_2c = uVar7 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_2c = uVar3;
  }
  iVar11 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x18) != 0) {
    local_2c = uVar3;
  }
  if (uVar1 < uVar7) {
    uVar3 = uVar7 - uVar1;
  }
  else {
    uVar3 = 0;
  }
  iVar14 = *(int *)(param_1 + 0xc0);
  local_38 = 1 << (*(uint *)(param_1 + 0xc4) & 0xff);
  iVar9 = *(int *)(param_1 + 0xdc);
  uVar10 = -iVar14 + 0x40;
  uVar4 = *(uint *)(param_1 + 0x1c);
  do {
    if (uVar7 <= uVar4) break;
    lVar2 = (ulonglong)*(uint *)(iVar12 + uVar4) * 0xbb000000;
    uVar13 = *(int *)(iVar12 + uVar4 + 4) * -0x45000000 + *(uint *)(iVar12 + uVar4) * -0x30e44324 +
             (int)((ulonglong)lVar2 >> 0x20);
    uVar13 = (uint)lVar2 >> (uVar10 & 0xff) | uVar13 << (iVar14 - 0x20U & 0xff) |
             uVar13 >> (0x20U - iVar14 & 0xff);
    *(undefined4 *)(iVar8 + (uVar1 - 1 & uVar4) * 4) = *(undefined4 *)(iVar11 + uVar13 * 4);
    *(uint *)(iVar11 + uVar13 * 4) = uVar4;
    uVar4 = uVar4 + 1;
  } while (iVar9 == 0);
  uVar4 = *param_2;
  *(uint *)(param_1 + 0x1c) = uVar7;
  lVar2 = (ulonglong)uVar4 * 0xbb000000;
  uVar4 = param_2[1] * -0x45000000 + uVar4 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  uVar10 = *(uint *)(iVar11 + ((uint)lVar2 >> (uVar10 & 0xff) | uVar4 << (0x20 - uVar10 & 0xff) |
                              uVar4 >> (-iVar14 + 0x20U & 0xff)) * 4);
  uVar4 = 3;
  do {
    if (local_38 == 0 || uVar10 < local_2c) {
      return uVar4;
    }
    if (uVar10 < uVar6) {
      if (*(uint *)(iVar5 + uVar10) == *param_2) {
        iVar11 = FUN_01b9b970(param_2 + 1,iVar5 + uVar10 + 4,param_3,iVar5 + uVar6,iVar12 + uVar6);
        uVar13 = iVar11 + 4;
        goto LAB_01b9d624;
      }
    }
    else if (*(int *)(iVar12 + uVar10 + (uVar4 - 3)) == *(int *)((int)param_2 + (uVar4 - 3))) {
      uVar13 = FUN_01b9b884(param_2,iVar12 + uVar10,param_3);
LAB_01b9d624:
      if ((uVar4 < uVar13) &&
         (*param_4 = (uVar7 + 3) - uVar10, uVar4 = uVar13, param_3 == (int)param_2 + uVar13)) {
        return uVar13;
      }
    }
    if (uVar10 <= uVar3) {
      return uVar4;
    }
    uVar10 = *(uint *)(iVar8 + (uVar10 & uVar1 - 1) * 4);
    local_38 = local_38 + -1;
  } while( true );
}

