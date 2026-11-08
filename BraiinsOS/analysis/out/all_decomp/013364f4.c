// FUN_013364f4 @ 013364f4 size=508 calls_out=3 calls_in=2
// strings: 

void FUN_013364f4(undefined4 *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_40;
  
  uVar6 = FUN_01333c64(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
  if (param_1[2] == 0) {
    FUN_013366f0(param_1,param_1 + 4);
  }
  puVar12 = (uint *)*param_1;
  uVar14 = param_1[1];
  bVar5 = false;
  iVar7 = 0;
  uVar13 = uVar6;
  do {
    uVar13 = uVar14 & uVar13;
    uVar11 = *(uint *)((int)puVar12 + uVar13);
    uVar8 = uVar11 ^ (uVar6 >> 0x19) * 0x1010101;
    uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
    while (uVar8 != 0) {
      uVar9 = uVar8 >> 8;
      uVar1 = uVar8 >> 0x10;
      uVar2 = uVar8 >> 0x18;
      uVar3 = uVar8 << 0x18;
      uVar8 = uVar8 - 1 & uVar8;
      uVar9 = uVar13 + ((uint)LZCOUNT(uVar3 | (uVar9 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                       >> 3) & uVar14;
      if ((param_3 == puVar12[uVar9 * -3 + -2]) &&
         (iVar10 = thunk_FUN_016dd50a(param_2,puVar12[uVar9 * -3 + -3],param_3), iVar10 == 0))
      goto LAB_013366a4;
    }
    uVar8 = uVar11 & 0x80808080;
    if (bVar5) goto LAB_01336610;
    if (uVar8 == 0) {
      bVar5 = false;
    }
    else {
      local_40 = uVar13 + ((uint)LZCOUNT((uVar11 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                         (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar14
      ;
LAB_01336610:
      if ((uVar8 & uVar11 << 1) != 0) {
        uVar13 = (uint)*(char *)((int)puVar12 + local_40);
        if (-1 < (int)uVar13) {
          uVar13 = *puVar12 & 0x80808080;
          uVar8 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                          (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18);
          uVar13 = (uint)*(byte *)((int)puVar12 + (uVar8 >> 3));
          local_40 = uVar8 >> 3;
        }
        param_1[2] = param_1[2] - (uVar13 & 1);
        param_1[3] = param_1[3] + 1;
        bVar4 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar12 + local_40) = bVar4;
        *(byte *)((int)puVar12 + (uVar14 & local_40 - 4) + 4) = bVar4;
        puVar12[local_40 * -3 + -3] = param_2;
        puVar12[local_40 * -3 + -2] = param_3;
        uVar9 = local_40;
LAB_013366a4:
        puVar12[uVar9 * -3 + -1] = param_4;
        return;
      }
      bVar5 = true;
    }
    iVar7 = iVar7 + 4;
    uVar13 = iVar7 + uVar13;
  } while( true );
}

