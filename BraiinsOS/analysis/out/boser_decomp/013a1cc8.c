// FUN_013a1cc8 @ 013a1cc8 size=780 calls_out=6 calls_in=2
// strings: assertion failed: self.ids.insert(id; index).is_none()Deque

void FUN_013a1cc8(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint local_60;
  int local_2c;
  int local_28;
  
  uVar4 = FUN_013ba558(param_2 + 0xc,param_4);
  uVar5 = FUN_013b2a64(*param_2,param_2[1],param_2[2],param_2[3],param_3);
  iVar6 = param_2[5];
  uVar9 = param_2[6];
  if (param_2[9] == 0) {
    FUN_0137c2a8(param_2 + 7,iVar6);
  }
  puVar12 = (uint *)param_2[7];
  uVar14 = param_2[8];
  bVar2 = false;
  iVar13 = 0;
  bVar3 = false;
  uVar7 = uVar5;
  do {
    uVar7 = uVar14 & uVar7;
    uVar15 = *(uint *)((int)puVar12 + uVar7);
    uVar10 = uVar15 ^ (uVar5 >> 0x19) * 0x1010101;
    uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
    while (uVar10 != 0) {
      uVar11 = puVar12[-1 - (uVar7 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                                    (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18)
                                     >> 3) & uVar14)];
      if (uVar9 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar11,uVar9,&DAT_01d307c8);
      }
      uVar10 = uVar10 - 1 & uVar10;
      if (param_3 == *(int *)(iVar6 + uVar11 * 0xc + 4)) {
        if ((uint)param_2[6] <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar11,param_2[6],&DAT_01d307d8);
        }
        iVar13 = param_2[5] + uVar11 * 0xc;
        iVar6 = *(int *)(iVar13 + 8);
        *(undefined4 *)(iVar13 + 8) = uVar4;
        local_28 = 1;
        piVar8 = &local_2c;
        goto LAB_013a1ed8;
      }
    }
    if (bVar2) {
      if (bVar3) goto LAB_013a1e18;
      bVar2 = true;
      bVar3 = false;
    }
    else {
      uVar10 = uVar15 & 0x80808080;
      if (uVar10 == 0) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        local_60 = uVar7 + ((uint)LZCOUNT((uVar15 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                   uVar14;
LAB_013a1e18:
        if ((uVar15 & 0x80808080 & uVar15 << 1) != 0) {
          uVar9 = (uint)*(char *)((int)puVar12 + local_60);
          if (-1 < (int)uVar9) {
            uVar9 = *puVar12 & 0x80808080;
            uVar7 = LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                            (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18);
            uVar9 = (uint)*(byte *)((int)puVar12 + (uVar7 >> 3));
            local_60 = uVar7 >> 3;
          }
          iVar6 = param_2[10];
          param_2[9] = param_2[9] - (uVar9 & 1);
          uVar9 = param_2[6];
          bVar1 = (byte)(uVar5 >> 0x19);
          *(byte *)((int)puVar12 + local_60) = bVar1;
          *(byte *)((int)puVar12 + (uVar14 & local_60 - 4) + 4) = bVar1;
          puVar12[-1 - local_60] = uVar9;
          param_2[10] = iVar6 + 1;
          FUN_013b1240(param_2 + 4,uVar5,param_3,uVar4);
          piVar8 = &local_28;
          iVar6 = 0;
LAB_013a1ed8:
          *piVar8 = iVar6;
          if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("assertion failed: self.ids.insert(id, index).is_none()Deque",0x36,
                         &DAT_01cede5c);
          }
          *param_1 = param_2;
          param_1[1] = uVar4;
          param_1[2] = param_3;
          return;
        }
        bVar2 = true;
        bVar3 = true;
      }
    }
    iVar13 = iVar13 + 4;
    uVar7 = uVar7 + iVar13;
  } while( true );
}

