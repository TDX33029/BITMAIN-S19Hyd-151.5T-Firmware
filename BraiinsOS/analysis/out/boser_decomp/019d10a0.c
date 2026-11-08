// FUN_019d10a0 @ 019d10a0 size=508 calls_out=3 calls_in=2
// strings: invalid key | invalid key

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019d10a0(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int local_4c;
  
  if ((char)param_2[0xe] != '\x01') {
LAB_019d11dc:
    if (param_3 < (uint)param_2[0xb]) {
      iVar22 = param_2[0xd];
      piVar12 = (int *)(param_2[10] + param_3 * 0x28);
      iVar23 = *piVar12;
      iVar8 = piVar12[1];
      iVar14 = piVar12[2];
      iVar16 = piVar12[3];
      iVar20 = piVar12[4];
      iVar7 = piVar12[5];
      iVar15 = piVar12[6];
      iVar17 = piVar12[7];
      iVar19 = piVar12[8];
      iVar21 = piVar12[9];
      *piVar12 = 2;
      piVar12[1] = iVar22;
      if (iVar23 != 2) {
        param_1[1] = iVar8;
        param_1[2] = iVar14;
        param_1[3] = iVar16;
        param_1[4] = iVar20;
        param_1[5] = iVar7;
        param_1[6] = iVar15;
        param_1[7] = iVar17;
        param_1[8] = iVar19;
        param_1[9] = iVar21;
        iVar8 = param_2[0xc];
        *param_1 = iVar23;
        param_2[0xc] = iVar8 + -1;
        param_2[0xd] = param_3;
        return;
      }
      piVar12[1] = iVar8;
      piVar12[2] = iVar14;
      piVar12[3] = iVar16;
      piVar12[4] = iVar20;
      piVar12[5] = iVar7;
      piVar12[6] = iVar15;
      piVar12[7] = iVar17;
      piVar12[8] = iVar19;
      piVar12[9] = iVar21;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("invalid key",0xb,&DAT_01d28bc4);
  }
  uVar4 = FUN_01656218(param_2[4],param_2[5],param_2[6],param_2[7]);
  uVar11 = uVar4 >> 0x19;
  iVar8 = *param_2;
  uVar10 = param_2[1];
  local_4c = 0;
  do {
    uVar4 = uVar10 & uVar4;
    uVar5 = *(uint *)(iVar8 + uVar4);
    uVar13 = uVar5 ^ uVar11 * 0x1010101;
    uVar13 = ~uVar13 & 0x80808080 & uVar13 + 0xfefefeff;
    while (uVar13 != 0) {
      uVar18 = uVar13 >> 8;
      uVar1 = uVar13 >> 0x10;
      uVar2 = uVar13 >> 0x18;
      uVar3 = uVar13 << 0x18;
      uVar13 = uVar13 - 1 & uVar13;
      uVar18 = uVar4 + ((uint)LZCOUNT(uVar3 | (uVar18 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                       >> 3) & uVar10;
      if (param_3 == *(uint *)(iVar8 + -8 + uVar18 * -8)) {
        puVar6 = (uint *)(iVar8 + (uVar18 - 4 & uVar10));
        uVar11 = *puVar6;
        uVar4 = *(uint *)(iVar8 + uVar18) & 0x80808080 & *(uint *)(iVar8 + uVar18) << 1;
        uVar9 = 0x80;
        if (((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8
                           | uVar4 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar11 & 0x80808080 & uVar11 << 1) >> 3) < 4) {
          param_2[2] = param_2[2] + 1;
          uVar9 = 0xff;
        }
        *(undefined1 *)(iVar8 + uVar18) = uVar9;
        *(undefined1 *)(puVar6 + 1) = uVar9;
        param_3 = *(uint *)(iVar8 + uVar18 * -8 + -4);
        param_2[3] = param_2[3] + -1;
        goto LAB_019d11dc;
      }
    }
    if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("invalid key",0x17,&DAT_01d28bb4);
    }
    local_4c = local_4c + 4;
    uVar4 = uVar4 + local_4c;
  } while( true );
}

