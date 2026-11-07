// FUN_0002f318 @ 0002f318  size=772  callers=0
// program: bmminer


void FUN_0002f318(int param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  char acStack_2038 [8196];
  
  if (param_1 == 0 || 3 < param_2) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf(acStack_2038,0x2000,"%s: input bad param\n","api_miner_chain_temp_pic");
      FUN_0004948c(3,acStack_2038,0);
    }
    return;
  }
  uVar5 = FUN_0007f548();
  pcVar6 = (char *)FUN_0002a4e4();
  iVar7 = strcmp(pcVar6,"H6HB70601");
  if (iVar7 != 0) {
    pcVar6 = (char *)FUN_0002a4e4();
    iVar7 = strcmp(pcVar6,"H6HB70501");
    if (iVar7 != 0) {
      iVar7 = 0;
      iVar8 = 0;
      goto LAB_0002f4a8;
    }
  }
  fVar15 = 0.0;
  iVar7 = 0;
  fVar16 = fVar15;
  while( true ) {
    iVar8 = FUN_0002a504();
    if (0 < iVar8) {
      iVar10 = 0;
      do {
        iVar9 = FUN_0002af10(iVar7,iVar10);
        fVar15 = fVar15 + *(float *)(&DAT_000ca664 + (param_2 * 0x100 + iVar9 + -1) * 4);
        iVar9 = FUN_0002aee8();
        iVar12 = iVar10 + 1;
        iVar10 = FUN_0002af10((iVar9 - iVar7) + -1,iVar10);
        fVar16 = fVar16 + *(float *)(&DAT_000ca664 + (param_2 * 0x100 + iVar10 + -1) * 4);
        iVar10 = iVar12;
      } while (iVar8 != iVar12);
    }
    if (iVar7 == 1) break;
    iVar7 = 1;
  }
  uVar11 = FUN_0002a504();
  fVar14 = (float)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
  iVar8 = (int)(short)(int)((fVar16 / fVar14) * 0.5);
  uVar11 = FUN_0002a504();
  fVar16 = (float)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
  iVar7 = (int)(short)(int)((fVar15 / fVar16) * 0.5);
LAB_0002f4a8:
  iVar9 = FUN_00019ebc(param_2,1);
  iVar12 = FUN_00019ebc(param_2,0);
  bVar13 = SBORROW4(iVar7,iVar12);
  iVar10 = iVar7 - iVar12;
  if (iVar12 <= iVar7) {
    bVar13 = SBORROW4(iVar8,iVar9);
    iVar10 = iVar8 - iVar9;
  }
  if (iVar10 < 0 != bVar13) {
    iVar8 = iVar9;
    iVar7 = iVar12;
  }
  if (4 < DAT_000be63c) {
    snprintf(acStack_2038,0x2000,
             "inlet_board_temp=%d,outlet_board_temp=%d,inlet_water_temp=%d,outlet_water_temp=%d",
             iVar8,iVar7,iVar9,iVar12);
    FUN_0004948c(4,acStack_2038,0);
  }
  iVar7 = (int)(short)param_2;
  sVar1 = FUN_00018c24(iVar7,7);
  sVar2 = FUN_00018c24(iVar7,2);
  sVar3 = FUN_00018c24(iVar7,3);
  sVar4 = FUN_00018c24(iVar7,4);
  uVar11 = FUN_00080784((int)sVar1,(int)sVar1 >> 0x1f);
  FUN_0007f9e4(uVar5,uVar11);
  uVar11 = FUN_00080784((int)sVar2,(int)sVar2 >> 0x1f);
  FUN_0007f9e4(uVar5,uVar11);
  uVar11 = FUN_00080784((int)sVar3,(int)sVar3 >> 0x1f);
  FUN_0007f9e4(uVar5,uVar11);
  uVar11 = FUN_00080784((int)sVar4,(int)sVar4 >> 0x1f);
  FUN_0007f9e4(uVar5,uVar11);
  FUN_0007ec50(param_1,"temp_pic",uVar5);
  return;
}

