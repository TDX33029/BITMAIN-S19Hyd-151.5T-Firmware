// FUN_01a358e4 @ 01a358e4 size=476 calls_out=2 calls_in=0
// strings: 

void FUN_01a358e4(int *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_54;
  
  uVar1 = FUN_01a308e4(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar6 = uVar1 >> 0x19;
  iVar15 = *param_2;
  uVar9 = param_2[1];
  local_54 = 0;
  while( true ) {
    uVar1 = uVar9 & uVar1;
    uVar2 = *(uint *)(iVar15 + uVar1);
    uVar3 = uVar2 ^ uVar6 * 0x1010101;
    uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
    while (uVar3 != 0) {
      uVar12 = uVar1 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                      (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar9;
      iVar4 = thunk_FUN_01bed842(param_3,iVar15 + -0x30 + uVar12 * -0x30,0x10);
      uVar3 = uVar3 - 1 & uVar3;
      if (iVar4 == 0) {
        iVar4 = ((int)(uVar12 * 0x30) >> 4) * -0x55555555;
        puVar5 = (uint *)(iVar15 + (iVar4 - 4U & uVar9));
        uVar1 = *puVar5;
        uVar6 = *(uint *)(iVar15 + iVar4) & 0x80808080 & *(uint *)(iVar15 + iVar4) << 1;
        uVar6 = ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                               (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) +
                ((uint)LZCOUNT(uVar1 & 0x80808080 & uVar1 << 1) >> 3);
        iVar8 = 0x80;
        if (uVar6 < 4) {
          iVar8 = param_2[2];
        }
        iVar7 = iVar15 + uVar12 * -0x30;
        if (uVar6 < 4) {
          param_2[2] = iVar8 + 1;
          iVar8 = 0xff;
        }
        *(char *)(iVar15 + iVar4) = (char)iVar8;
        iVar15 = param_2[3];
        *(char *)(puVar5 + 1) = (char)iVar8;
        param_2[3] = iVar15 + -1;
        iVar4 = *(int *)(iVar7 + -0x20);
        iVar10 = *(int *)(iVar7 + -0x18);
        iVar13 = *(int *)(iVar7 + -0x14);
        iVar15 = *(int *)(iVar7 + -0x10);
        iVar8 = *(int *)(iVar7 + -0xc);
        iVar11 = *(int *)(iVar7 + -8);
        iVar14 = *(int *)(iVar7 + -4);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          param_1[1] = *(int *)(iVar7 + -0x1c);
          param_1[2] = iVar10;
          param_1[3] = iVar13;
          param_1[4] = iVar15;
          param_1[5] = iVar8;
          param_1[6] = iVar11;
          param_1[7] = iVar14;
        }
        goto LAB_01a35ab4;
      }
    }
    iVar4 = 0;
    if ((uVar2 & 0x80808080 & uVar2 << 1) != 0) break;
    local_54 = local_54 + 4;
    uVar1 = uVar1 + local_54;
  }
LAB_01a35ab4:
  *param_1 = iVar4;
  return;
}

