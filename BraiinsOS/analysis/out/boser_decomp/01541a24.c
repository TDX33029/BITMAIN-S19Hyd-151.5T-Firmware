// FUN_01541a24 @ 01541a24 size=476 calls_out=3 calls_in=1
// strings: 

void FUN_01541a24(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  uint local_40;
  int local_38;
  
  uVar14 = *(undefined4 *)(param_2 + 4);
  iVar15 = *(int *)(param_2 + 8);
  uVar7 = FUN_01676068(param_1 + 4,uVar14,iVar15);
  if (param_1[2] == 0) {
    FUN_015305b0(param_1,param_1 + 4);
  }
  puVar10 = (uint *)*param_1;
  uVar12 = param_1[1];
  bVar6 = false;
  local_38 = 0;
  uVar13 = uVar7;
  do {
    uVar13 = uVar12 & uVar13;
    uVar11 = *(uint *)((int)puVar10 + uVar13);
    uVar8 = uVar11 ^ (uVar7 >> 0x19) * 0x1010101;
    uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
    while (uVar8 != 0) {
      uVar1 = uVar8 >> 8;
      uVar2 = uVar8 >> 0x10;
      uVar3 = uVar8 >> 0x18;
      uVar4 = uVar8 << 0x18;
      uVar8 = uVar8 - 1 & uVar8;
      if ((iVar15 == *(int *)(puVar10[-1 - (uVar13 + ((uint)LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 |
                                                                    (uVar2 & 0xff) << 8 | uVar3) >>
                                                     3) & uVar12)] + 8)) &&
         (iVar9 = thunk_FUN_01bed842(uVar14,*(undefined4 *)
                                             (puVar10[-1 - (uVar13 + ((uint)LZCOUNT(uVar4 | (uVar1 &
                                                                                            0xff) <<
                                                                                            0x10 |
                                                                                    (uVar2 & 0xff)
                                                                                    << 8 | uVar3) >>
                                                                     3) & uVar12)] + 4),iVar15),
         iVar9 == 0)) {
        return;
      }
    }
    uVar8 = uVar11 & 0x80808080;
    if (bVar6) {
LAB_01541b38:
      if ((uVar8 & uVar11 << 1) != 0) {
        uVar13 = (uint)*(char *)((int)puVar10 + local_40);
        if (-1 < (int)uVar13) {
          uVar13 = *puVar10 & 0x80808080;
          uVar8 = LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                          (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18);
          uVar13 = (uint)*(byte *)((int)puVar10 + (uVar8 >> 3));
          local_40 = uVar8 >> 3;
        }
        iVar15 = param_1[2];
        iVar9 = param_1[3];
        bVar5 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)puVar10 + local_40) = bVar5;
        param_1[2] = iVar15 - (uVar13 & 1);
        param_1[3] = iVar9 + 1;
        *(byte *)((int)puVar10 + (uVar12 & local_40 - 4) + 4) = bVar5;
        puVar10[-1 - local_40] = param_2;
        return;
      }
      bVar6 = true;
    }
    else {
      if (uVar8 != 0) {
        local_40 = uVar13 + ((uint)LZCOUNT((uVar11 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                           (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                   uVar12;
        goto LAB_01541b38;
      }
      bVar6 = false;
    }
    local_38 = local_38 + 4;
    uVar13 = local_38 + uVar13;
  } while( true );
}

