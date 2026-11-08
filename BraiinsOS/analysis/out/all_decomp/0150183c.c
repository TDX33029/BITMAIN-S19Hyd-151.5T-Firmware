// FUN_0150183c @ 0150183c size=524 calls_out=5 calls_in=1
// strings: unknown

void FUN_0150183c(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int local_2c;
  
  uVar11 = 0x80000003;
  if (param_3[3] == 0) {
LAB_01501a10:
    *param_1 = uVar11;
    return;
  }
  uVar5 = FUN_015023d0(param_3[4],param_3[5],param_3[6],param_3[7],param_2,0xb);
  uVar1 = uVar5 >> 0x19;
  iVar12 = *param_3;
  uVar13 = param_3[1];
  local_2c = 0;
  do {
    uVar5 = uVar13 & uVar5;
    uVar14 = *(uint *)(iVar12 + uVar5);
    uVar6 = uVar14 ^ uVar1 * 0x1010101;
    uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
    while (uVar6 != 0) {
      uVar15 = uVar6 >> 8;
      uVar2 = uVar6 >> 0x10;
      uVar3 = uVar6 >> 0x18;
      uVar4 = uVar6 << 0x18;
      uVar6 = uVar6 - 1 & uVar6;
      uVar15 = uVar5 + ((uint)LZCOUNT(uVar4 | (uVar15 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3)
                       >> 3) & uVar13;
      puVar7 = (undefined4 *)(iVar12 + -0x10 + uVar15 * -0x10);
      if ((puVar7[1] == 0xb) && (iVar8 = thunk_FUN_016dd50a(param_2,*puVar7,0xb), iVar8 == 0)) {
        iVar12 = iVar12 + uVar15 * -0x10;
        uVar11 = *(undefined4 *)(iVar12 + -8);
        iVar12 = *(int *)(iVar12 + -4);
        if (iVar12 == 7) {
          iVar8 = thunk_FUN_016dd50a(uVar11,"unknown",7);
          if (iVar8 != 0) {
            iVar9 = thunk_FUN_016d4a50(7);
            if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,7);
            }
            iVar8 = 7;
            goto LAB_015019ec;
          }
          iVar12 = -0x80000000;
          iVar10 = 4;
        }
        else {
          if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,iVar12);
          }
          if (iVar12 == 0) {
            iVar8 = 0;
            iVar9 = 1;
          }
          else {
            iVar9 = thunk_FUN_016d4a50(iVar12);
            if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar12);
            }
            iVar8 = iVar12;
          }
LAB_015019ec:
          FUN_016dd1aa(iVar9,uVar11,iVar12);
          iVar10 = 0xc;
          param_1[1] = iVar8;
          param_1[2] = iVar9;
        }
        uVar11 = 0x80000007;
        *(int *)((int)param_1 + iVar10) = iVar12;
        goto LAB_01501a10;
      }
    }
    if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) {
      *param_1 = 0x80000003;
      return;
    }
    local_2c = local_2c + 4;
    uVar5 = uVar5 + local_2c;
  } while( true );
}

