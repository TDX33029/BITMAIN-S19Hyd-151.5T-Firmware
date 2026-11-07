// FUN_00039228 @ 00039228  size=832  callers=1
// program: bmminer


void FUN_00039228(float param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int param3;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar13;
  longlong lVar12;
  uint local_306c;
  uint local_3064;
  undefined1 local_3044 [4];
  undefined4 local_3040;
  undefined4 local_303c;
  float afStack_3038 [1024];
  char acStack_2038 [8196];
  
  if (param_3 < param_4) {
    iVar7 = param_4 - param_3;
  }
  else {
    iVar7 = param_3 - param_4;
  }
  fVar9 = (float)VectorUnsignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = ((fVar9 + param_1) - 0.01) / param_1;
  uVar2 = (uint)(0.0 < fVar9) * (int)(longlong)fVar9;
  memset(afStack_3038,param_3,0x1000);
  iVar7 = FUN_0002a504();
  uVar4 = FUN_0002a524();
  if (uVar2 != 0) {
    uVar13 = VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    lVar12 = (ulonglong)uVar13 << 0x20;
    fVar9 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    local_306c = 1;
    do {
      fVar11 = (float)((ulonglong)lVar12 >> 0x20);
      fVar10 = (float)VectorUnsignedToFloat(local_306c,(byte)(in_fpscr >> 0x16) & 3);
      if (param_3 < param_4) {
        fVar10 = fVar10 * param_1 + fVar9;
        lVar12 = CONCAT44(fVar11,fVar10);
        uVar13 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar11) << 0x1f |
                 (uint)(fVar10 == fVar11) << 0x1e;
        in_fpscr = uVar13 | (uint)(NAN(fVar10) || NAN(fVar11)) << 0x1c;
        bVar3 = (byte)(uVar13 >> 0x18);
        if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          lVar12 = CONCAT44(fVar11,fVar11);
        }
      }
      else {
        fVar10 = fVar9 - fVar10 * param_1;
        in_fpscr = in_fpscr & 0xfffffff;
        if (fVar10 < fVar11) {
          fVar10 = fVar11;
        }
        lVar12 = CONCAT44(fVar11,fVar10);
      }
      param3 = 0;
      do {
        iVar5 = FUN_0002a6f0(param3);
        if ((iVar5 != 0) && (uVar4 != 0)) {
          local_3064 = 0;
          do {
            if (iVar7 != 0) {
              iVar5 = 0;
              pfVar8 = afStack_3038 + param3 * 0x100 + local_3064;
              uVar13 = local_3064;
              do {
                iVar6 = FUN_00027e60(param3,uVar13);
                fVar10 = (float)VectorSignedToFloat((uint)(param_5 * (iVar6 + 5)) / 100,
                                                    (byte)(in_fpscr >> 0x16) & 3);
                fVar11 = (float)lVar12;
                uVar1 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar11) << 0x1f;
                in_fpscr = uVar1 | (uint)(NAN(fVar10) || NAN(fVar11)) << 0x1c;
                if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
                  local_3040 = 0;
                  local_303c = 0;
                  FUN_0002cef8(param3,0,(uVar13 & 0x7f) << 1,param_2);
                  FUN_00081ee8(fVar11,&local_3040,local_3044,0);
                  fVar10 = (float)VectorSignedToFloat((int)fVar11,(byte)(in_fpscr >> 0x16) & 3);
                  local_303c._0_3_ = CONCAT12(local_3044[0],(undefined2)local_303c);
                  *pfVar8 = fVar10;
                  iVar6 = FUN_0002a584();
                  FUN_0002d6b0(param3,0,iVar6 * (uVar13 & 0xff) & 0xff,param_2,local_3040,local_303c
                              );
                  if (7 < DAT_000be63c) {
                    snprintf(acStack_2038,0x2000,"adjust middle chain = %d asic=%d set freq to %.2f"
                             ,param3,uVar13,(double)*pfVar8);
                    FUN_0004948c(7,acStack_2038,0);
                  }
                }
                else {
                  if (local_306c == 1) {
                    *pfVar8 = fVar9;
                  }
                  if (7 < DAT_000be63c) {
                    snprintf(acStack_2038,0x2000,"adjust end chain=%d asic=%d set end freq %.2f",
                             param3,uVar13,(double)*pfVar8);
                    FUN_0004948c(7,acStack_2038,0);
                  }
                }
                iVar5 = iVar5 + 1;
                uVar13 = uVar13 + uVar4;
                pfVar8 = pfVar8 + uVar4;
              } while (iVar7 != iVar5);
            }
            local_3064 = local_3064 + 1;
          } while (uVar4 != local_3064);
        }
        param3 = param3 + 1;
      } while (param3 != 4);
      local_306c = local_306c + 1;
      FUN_0004bf68(100);
    } while (local_306c <= uVar2);
  }
  return;
}

