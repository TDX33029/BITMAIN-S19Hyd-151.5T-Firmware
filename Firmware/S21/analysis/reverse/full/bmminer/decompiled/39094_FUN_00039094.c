// FUN_00039094 @ 00039094  size=396  callers=1
// program: bmminer


void FUN_00039094(float param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  uint uVar9;
  float fVar10;
  longlong lVar8;
  undefined1 local_2044 [4];
  undefined4 local_2040;
  undefined4 local_203c;
  char acStack_2038 [8196];
  
  if (param_3 < param_4) {
    iVar5 = param_4 - param_3;
  }
  else {
    iVar5 = param_3 - param_4;
  }
  fVar6 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = ((fVar6 + param_1) - 0.01) / param_1;
  uVar2 = (uint)(0.0 < fVar6) * (int)(longlong)fVar6;
  if (uVar2 != 0) {
    fVar6 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    uVar9 = VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    lVar8 = (ulonglong)uVar9 << 0x20;
    uVar9 = 1;
    do {
      fVar10 = (float)((ulonglong)lVar8 >> 0x20);
      fVar7 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
      local_2040 = 0;
      local_203c = 0;
      if (param_3 < param_4) {
        fVar7 = fVar6 + fVar7 * param_1;
        lVar8 = CONCAT44(fVar10,fVar7);
        in_fpscr = in_fpscr & 0xfffffff;
        if (fVar10 < fVar7) {
          lVar8 = CONCAT44(fVar10,fVar10);
        }
      }
      else {
        fVar7 = fVar6 - fVar7 * param_1;
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar7) << 0x1f |
                (uint)(fVar10 == fVar7) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar10) || NAN(fVar7)) << 0x1c;
        bVar3 = (byte)(uVar1 >> 0x18);
        if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar7 = fVar10;
        }
        lVar8 = CONCAT44(fVar10,fVar7);
      }
      iVar5 = 0;
      do {
        iVar4 = FUN_0002a6f0(iVar5);
        if (iVar4 != 0) {
          FUN_00081ee8((float)lVar8,&local_2040,local_2044,0);
          local_203c._0_3_ = CONCAT12(local_2044[0],(undefined2)local_203c);
          FUN_0002d6b0(iVar5,1,0,param_2,local_2040);
          if (7 < DAT_000be63c) {
            snprintf(acStack_2038,0x2000,"chain = %d set freq to %.2f",iVar5,(double)(float)lVar8);
            FUN_0004948c(7,acStack_2038,0);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 4);
      uVar9 = uVar9 + 1;
      FUN_0004bf68(100);
    } while (uVar9 <= uVar2);
  }
  return;
}

