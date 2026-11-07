// FUN_0002500c @ 0002500c  size=536  callers=3
// program: bmminer


void FUN_0002500c(float param_1,uint param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  uint local_2054;
  int local_2050;
  uint local_204c;
  undefined1 local_203c [4];
  undefined4 local_2038;
  undefined4 local_2034;
  
  if (3 < DAT_000be63c) {
    snprintf((char *)&local_2038,0x2000,"chain = %d, start = %d, freq_step = %.2f\n",param_2,param_4
             ,(double)param_1);
    FUN_0004948c(3,&local_2038,0);
  }
  local_2038 = 0;
  local_2034 = 0;
  iVar5 = FUN_0002a514();
  fVar12 = 0.0;
  if (iVar5 != 0) {
    puVar8 = param_3;
    fVar12 = 0.0;
    do {
      uVar13 = *puVar8;
      puVar8 = puVar8 + 1;
      fVar14 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar12) << 0x1f |
              (uint)(fVar14 == fVar12) << 0x1e;
      in_fpscr = uVar1 | (uint)(NAN(fVar14) || NAN(fVar12)) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar12 = fVar14;
      }
    } while (param_3 + iVar5 != puVar8);
  }
  fVar12 = ((param_1 + fVar12) - 1.0) / param_1;
  local_204c = (uint)(0.0 < fVar12) * (int)fVar12;
  if ((local_204c & 1) != 0) {
    local_204c = local_204c + 1;
  }
  if (local_204c != 0) {
    local_2054 = 0;
    local_2050 = 2;
    while( true ) {
      local_2054 = local_2054 + 1;
      fVar12 = (float)VectorUnsignedToFloat(local_2054,(byte)(in_fpscr >> 0x16) & 3);
      iVar5 = FUN_0002a524();
      if (iVar5 != 0) {
        iVar10 = 0;
        do {
          iVar6 = FUN_0002a504();
          if (iVar6 != 0) {
            fVar14 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
            iVar9 = 0;
            do {
              iVar7 = FUN_0002a524();
              iVar7 = iVar9 * iVar7 + iVar10;
              iVar9 = iVar9 + 1;
              fVar11 = (float)VectorUnsignedToFloat(param_3[iVar7],(byte)(in_fpscr >> 0x16) & 3);
              in_fpscr = in_fpscr & 0xfffffff;
              fVar3 = fVar12 * param_1;
              if (fVar11 <= fVar12 * param_1) {
                fVar3 = fVar11;
              }
              FUN_00081ee8(fVar14 + fVar3,&local_2038,local_203c,0);
              local_2034._0_3_ = CONCAT12(local_203c[0],(undefined2)local_2034);
              sVar4 = FUN_0002a584();
              FUN_0002d6b0(param_2,0,(int)sVar4 * (int)(short)iVar7 & 0xff,local_2050,local_2038,
                           local_2034);
            } while (iVar6 != iVar9);
          }
          iVar10 = iVar10 + 1;
          usleep(5000);
        } while (iVar5 != iVar10);
      }
      FUN_0004bf68(param_5);
      FUN_000822e0(param_2 & 0xff,0,local_2050);
      if (local_2054 == local_204c) break;
      if (local_2050 == 0) {
        local_2050 = 2;
      }
      else {
        local_2050 = 0;
      }
    }
  }
  return;
}

