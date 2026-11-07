// FUN_01a35ac0 @ 01a35ac0 size=512 calls_out=2 calls_in=0
// strings: 

void FUN_01a35ac0(int *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int local_7c;
  
  uVar1 = FUN_01a308e4(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar10 = uVar1 >> 0x19;
  uVar23 = param_2[1];
  iVar26 = *param_2;
  local_7c = 0;
  while( true ) {
    uVar1 = uVar23 & uVar1;
    uVar2 = *(uint *)(iVar26 + uVar1);
    uVar3 = uVar2 ^ uVar10 * 0x1010101;
    uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
    while (uVar3 != 0) {
      uVar17 = uVar1 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                      (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar23;
      uVar3 = uVar3 - 1 & uVar3;
      iVar4 = thunk_FUN_01bed842(param_3,uVar17 * -0x58 + iVar26 + -0x58,0x10);
      if (iVar4 == 0) {
        iVar8 = uVar17 * -0x58 + iVar26;
        iVar4 = ((int)(uVar17 * 0x58) >> 3) * -0x45d1745d;
        puVar5 = (uint *)(iVar26 + (iVar4 - 4U & uVar23));
        uVar10 = *puVar5;
        uVar1 = *(uint *)(iVar26 + iVar4) & 0x80808080 & *(uint *)(iVar26 + iVar4) << 1;
        uVar9 = 0x80;
        iVar21 = param_2[3];
        if (((uint)LZCOUNT(uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8
                           | uVar1 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar10 & 0x80808080 & uVar10 << 1) >> 3) < 4) {
          param_2[2] = param_2[2] + 1;
          uVar9 = 0xff;
        }
        *(undefined1 *)(iVar26 + iVar4) = uVar9;
        *(undefined1 *)(puVar5 + 1) = uVar9;
        iVar24 = *(int *)(iVar8 + -0x48);
        iVar25 = *(int *)(iVar8 + -0x44);
        param_2[3] = iVar21 + -1;
        iVar21 = *(int *)(iVar8 + -0x3c);
        iVar11 = *(int *)(iVar8 + -0x38);
        iVar14 = *(int *)(iVar8 + -0x34);
        iVar18 = *(int *)(iVar8 + -0x30);
        iVar26 = *(int *)(iVar8 + -0x2c);
        iVar6 = *(int *)(iVar8 + -0x28);
        iVar12 = *(int *)(iVar8 + -0x24);
        iVar15 = *(int *)(iVar8 + -0x20);
        iVar19 = *(int *)(iVar8 + -0x1c);
        iVar4 = *(int *)(iVar8 + -0x18);
        iVar7 = *(int *)(iVar8 + -0x14);
        iVar13 = *(int *)(iVar8 + -0x10);
        iVar16 = *(int *)(iVar8 + -0xc);
        iVar20 = *(int *)(iVar8 + -8);
        iVar22 = *(int *)(iVar8 + -4);
        if (iVar24 == 3 && iVar25 == 0) goto LAB_01a35c84;
        param_1[2] = *(int *)(iVar8 + -0x40);
        param_1[3] = iVar21;
        param_1[4] = iVar11;
        param_1[5] = iVar14;
        param_1[6] = iVar18;
        param_1[7] = iVar26;
        param_1[8] = iVar6;
        param_1[9] = iVar12;
        param_1[10] = iVar15;
        param_1[0xb] = iVar19;
        param_1[0xc] = iVar4;
        param_1[0xd] = iVar7;
        param_1[0xe] = iVar13;
        param_1[0xf] = iVar16;
        param_1[0x10] = iVar20;
        param_1[0x11] = iVar22;
        goto LAB_01a35cb4;
      }
    }
    if ((uVar2 & 0x80808080 & uVar2 << 1) != 0) break;
    local_7c = local_7c + 4;
    uVar1 = uVar1 + local_7c;
  }
LAB_01a35c84:
  iVar25 = 0;
  iVar24 = 3;
LAB_01a35cb4:
  *param_1 = iVar24;
  param_1[1] = iVar25;
  return;
}

