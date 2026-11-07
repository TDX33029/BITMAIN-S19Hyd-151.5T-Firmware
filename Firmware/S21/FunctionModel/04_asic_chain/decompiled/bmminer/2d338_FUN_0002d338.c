// FUN_0002d338 @ 0002d338  size=868  callers=1
// program: bmminer


void FUN_0002d338(int param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  uint uVar6;
  int extraout_r1;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  float *pfVar13;
  float *pfVar14;
  undefined4 *puVar15;
  int iVar16;
  uint in_fpscr;
  float fVar17;
  byte local_c64 [16];
  int local_c54 [4];
  undefined4 local_c44;
  uint local_c40 [256];
  char acStack_840 [2052];
  
  memset(local_c40,0,0x400);
  local_c64[0] = 0;
  local_c64[1] = 1;
  local_c64[2] = 3;
  local_c64[3] = 4;
  local_c64[4] = 0;
  local_c64[5] = 0;
  local_c64[6] = 0;
  local_c64[7] = 0;
  iVar9 = 0;
  local_c54[0] = 1;
  local_c54[1] = 2;
  local_c54[2] = 3;
  local_c54[3] = 4;
  local_c64[8] = 0;
  local_c64[9] = 0;
  local_c64[10] = 0;
  local_c64[0xb] = 0;
  local_c64[0xc] = 0;
  local_c64[0xd] = 0;
  local_c44 = 5;
  memset(acStack_840,0,0x800);
  puVar8 = (uint *)0xc4894;
  puVar15 = (undefined4 *)0xc4894;
  iVar16 = local_c54[local_c64[param_3]];
  FUN_00081200(param_1,1,param_2,0xb8,iVar16 << 0xd | 0x230c030d);
  FUN_00081200(param_1,1,param_2,0xb9,0x3f014381);
  FUN_00081200(param_1,1,param_2,0xba,0x40010);
  FUN_00081200(param_1,1,param_2,0xbb,0x3340e80);
  iVar2 = FUN_0002a514();
  puVar11 = &DAT_000c4498;
  if (0 < iVar2) {
    do {
      puVar7 = puVar15;
      do {
        puVar7 = puVar7 + 1;
        *puVar7 = 0;
      } while (puVar7 != puVar15 + 9);
      iVar9 = iVar9 + 1;
      *puVar11 = 0;
      iVar2 = FUN_0002a514();
      puVar15 = puVar15 + 10;
      puVar11 = puVar11 + 1;
    } while (iVar9 < iVar2);
  }
  iVar2 = 9;
  do {
    FUN_00081200(param_1,1,param_2,0xb8,iVar16 << 0xd | 0x232c030d);
    usleep(60000);
    FUN_00046048(param_1,0xbd);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar10 = local_c40;
  iVar9 = FUN_0002a514();
  iVar2 = 0;
  puVar12 = puVar10;
  if (0 < iVar9) {
    do {
      iVar9 = 0;
      uVar6 = 0;
      puVar3 = puVar8;
      while( true ) {
        puVar3 = puVar3 + 1;
        if ((iVar9 != 0) && (uVar6 = uVar6 + (*puVar3 & 0x7fff), iVar9 == 8)) break;
        iVar9 = iVar9 + 1;
      }
      iVar2 = iVar2 + 1;
      puVar8 = puVar8 + 10;
      *puVar12 = uVar6 >> 3;
      iVar9 = FUN_0002a514();
      puVar12 = puVar12 + 1;
    } while (iVar2 < iVar9);
  }
  iVar2 = 0;
  pfVar13 = (float *)(&DAT_000c0498 + param_3 + param_1 * 0x400);
  while( true ) {
    iVar9 = FUN_0002a514();
    iVar16 = iVar2 + 1;
    if (iVar9 <= iVar2) break;
    uVar6 = *puVar10;
    puVar10 = puVar10 + 1;
    pfVar14 = pfVar13 + 4;
    local_c64[4] = 0;
    local_c64[5] = 0;
    local_c64[6] = 0;
    local_c64[7] = 0;
    fVar17 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    local_c64[8] = 0;
    local_c64[9] = 0;
    local_c64[10] = 0;
    local_c64[0xb] = 0;
    local_c64[0xc] = 0;
    local_c64[0xd] = 0;
    fVar17 = fVar17 * 0.00048828125 * 0.125 - 1.0;
    if (1 < param_3) {
      fVar17 = fVar17 + fVar17;
    }
    *pfVar13 = fVar17;
    snprintf((char *)(local_c64 + 4),10,"%.3f ",(double)fVar17);
    strcat(acStack_840,(char *)(local_c64 + 4));
    uVar4 = FUN_0002a524();
    FUN_000988ec(iVar16,uVar4);
    iVar2 = iVar16;
    pfVar13 = pfVar14;
    if (extraout_r1 == 0) {
      sVar5 = strlen(acStack_840);
      pcVar1 = acStack_840 + sVar5;
      pcVar1[0] = '\n';
      pcVar1[1] = '\0';
    }
  }
  if (DAT_000c0480 == 0) {
    DAT_000c0480 = FUN_000856dc("bmminer_adc");
  }
  FUN_000875a0(DAT_000c0480,"miner_api/driver-hash-chip.c",0x1c,"adc_get_domain_vol_dv_out_mode_1",
               0x20,0x339,0x14,"chain[%d]  domain %d vol :\n%s\n",param_1,param_3,acStack_840);
  return;
}

