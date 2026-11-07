// FUN_012057c8 @ 012057c8 size=484 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_012057c8(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 local_34;
  int local_30;
  undefined1 *local_2c;
  undefined1 local_25;
  
  iVar4 = param_2[1];
  uVar17 = *param_2;
  pcVar12 = *(code **)(iVar4 + 0xc);
  uVar5 = (*pcVar12)(uVar17,&DAT_004144eb,1);
  puVar13 = (uint *)*param_1;
  iVar14 = param_1[3];
  puVar16 = puVar13 + 1;
  uVar8 = param_2[2];
  uVar10 = ~*puVar13 & 0x80808080;
  bVar3 = false;
LAB_01205840:
  do {
    bVar2 = bVar3;
    uVar11 = uVar10;
    if (iVar14 == 0) {
      uVar9 = 1;
      if ((uVar5 & 1) == 0) {
        uVar9 = (*pcVar12)(uVar17,"}",1);
      }
      return uVar9;
    }
    puVar15 = puVar16;
    if (uVar11 == 0) {
      do {
        puVar16 = puVar15 + 1;
        uVar10 = *puVar15;
        puVar13 = puVar13 + -0xc;
        puVar15 = puVar16;
      } while ((uVar10 & 0x80808080) == 0x80808080);
      uVar11 = uVar10 & 0x80808080 ^ 0x80808080;
    }
    iVar14 = iVar14 + -1;
    uVar10 = uVar11 - 1 & uVar11;
    uVar1 = uVar5 & 1;
    uVar5 = 1;
    bVar3 = true;
  } while (uVar1 != 0);
  uVar5 = LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                  uVar11 >> 0x18);
  iVar6 = (uVar5 >> 3) * -2 - (uVar5 >> 3);
  if ((uVar8 & 0x800000) != 0) {
    if (!bVar2) goto code_r0x012058f0;
    goto LAB_01205914;
  }
  if (bVar2) {
    iVar7 = (*pcVar12)(uVar17,&DAT_0041950f,2);
    uVar5 = 1;
    bVar3 = true;
    if (iVar7 != 0) goto LAB_01205840;
  }
  uVar5 = FUN_00faa4e8(puVar13[iVar6 + -2],puVar13[iVar6 + -1],uVar17,iVar4);
  bVar3 = true;
  goto LAB_01205840;
code_r0x012058f0:
  iVar7 = (*pcVar12)(uVar17,&DAT_0041950e,1);
  uVar5 = 1;
  if (iVar7 == 0) {
LAB_01205914:
    local_2c = &local_25;
    local_25 = 1;
    local_34 = uVar17;
    local_30 = iVar4;
    iVar6 = FUN_00faa4e8(puVar13[iVar6 + -2],puVar13[iVar6 + -1],&local_34,&DAT_01880dc4);
    if (iVar6 == 0) {
      uVar5 = FUN_00fb1f64(&local_34,&DAT_00414a81,2);
      bVar3 = true;
    }
    else {
      uVar5 = 1;
      bVar3 = true;
    }
  }
  goto LAB_01205840;
}

