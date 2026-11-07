// FUN_00aba870 @ 00aba870 size=540 calls_out=1 calls_in=2
// strings: 

void FUN_00aba870(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int local_98;
  int local_88;
  int local_84;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar6 = 0x84222325;
  iVar8 = 0;
  local_84 = param_4;
  local_88 = param_3;
  do {
    pbVar1 = (byte *)((int)&local_88 + iVar8);
    iVar8 = iVar8 + 1;
    uVar6 = (uVar6 ^ *pbVar1) * 0x1b3;
  } while (iVar8 != 8);
  uVar10 = uVar6 >> 0x19;
  uVar9 = param_2[1];
  iVar8 = *param_2;
  local_98 = 0;
  while( true ) {
    uVar6 = uVar9 & uVar6;
    uVar2 = *(uint *)(iVar8 + uVar6);
    uVar5 = uVar2 ^ uVar10 * 0x1010101;
    uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
    while (uVar5 != 0) {
      uVar12 = uVar6 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
      piVar13 = (int *)(iVar8 + -0x60 + uVar12 * -0x60);
      uVar5 = uVar5 - 1 & uVar5;
      if (param_3 == *piVar13 && param_4 == piVar13[1]) {
        iVar3 = ((int)(uVar12 * 0x60) >> 5) * -0x55555555;
        puVar4 = (uint *)(iVar8 + (iVar3 - 4U & uVar9));
        uVar10 = *puVar4;
        uVar6 = *(uint *)(iVar8 + iVar3) & 0x80808080 & *(uint *)(iVar8 + iVar3) << 1;
        uVar6 = ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                               (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) +
                ((uint)LZCOUNT(uVar10 & 0x80808080 & uVar10 << 1) >> 3);
        iVar7 = 0x80;
        if (uVar6 < 4) {
          iVar7 = param_2[2];
        }
        param_2[3] = param_2[3] + -1;
        iVar11 = iVar8 + uVar12 * -0x60;
        if (uVar6 < 4) {
          param_2[2] = iVar7 + 1;
          iVar7 = 0xff;
        }
        *(char *)(iVar8 + iVar3) = (char)iVar7;
        *(char *)(puVar4 + 1) = (char)iVar7;
        local_38 = *(undefined4 *)(iVar11 + -0x60);
        uStack_34 = *(undefined4 *)(iVar11 + -0x5c);
        local_30 = *(undefined4 *)(iVar11 + -0x58);
        local_2c = *(undefined4 *)(iVar11 + -0x54);
        iVar8 = *(int *)(iVar11 + -0x50);
        FUN_01bed4e2(&local_88,iVar11 + -0x4c,0x4c);
        if (iVar8 != 3) {
          *param_1 = local_30;
          param_1[1] = local_2c;
          param_1[2] = iVar8;
          FUN_01bed4e2(param_1 + 3,&local_88,0x4c);
          return;
        }
        goto LAB_00abaa5c;
      }
    }
    if ((uVar2 & 0x80808080 & uVar2 << 1) != 0) break;
    local_98 = local_98 + 4;
    uVar6 = uVar6 + local_98;
  }
LAB_00abaa5c:
  param_1[2] = 3;
  return;
}

