// FUN_0004f6cc @ 0004f6cc  size=528  callers=1
// program: bmminer


void FUN_0004f6cc(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  double *pdVar11;
  bool bVar12;
  uint in_fpscr;
  undefined4 extraout_s1;
  double dVar13;
  float fVar14;
  double dVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  double local_4040 [1024];
  char acStack_2040 [8196];
  
  iVar6 = 0;
  memset(local_4040,0,0x2000);
  do {
    iVar1 = FUN_0002a6f0(iVar6);
    if (iVar1 != 0) {
      iVar1 = FUN_0002a514();
      FUN_00018c24((int)(short)iVar6,0);
      if (iVar1 != 0) {
        dVar15 = 0.0;
        pdVar7 = local_4040 + iVar6 * 0x100;
        uVar8 = 0;
        iVar9 = 0;
        pdVar11 = pdVar7;
        iVar4 = 0;
        while( true ) {
          iVar2 = FUN_0002a514();
          if (iVar2 <= iVar4) break;
          uVar5 = *(uint *)(&DAT_000cb678 + iVar4 * 4 + iVar6 * 0x400 + 0x10);
          bVar12 = CARRY4(uVar8,uVar5);
          uVar8 = uVar8 + uVar5;
          iVar9 = iVar9 + ((int)uVar5 >> 0x1f) + (uint)bVar12;
          uVar16 = FUN_00027f1c(iVar6,iVar4);
          dVar15 = dVar15 + (double)CONCAT44(extraout_s1,uVar16);
          *pdVar11 = (double)CONCAT44(extraout_s1,uVar16);
          pdVar11 = pdVar11 + 1;
          iVar4 = iVar4 + 1;
        }
        iVar2 = 0;
        dVar13 = (double)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
        dVar15 = dVar15 / dVar13;
        uVar18 = FUN_00098e9c(uVar8,iVar9,iVar1,iVar1 >> 0x1f);
        uVar5 = (uint)uVar18;
        uVar8 = uVar5 * 3;
        iVar4 = ((int)((ulonglong)uVar18 >> 0x20) * 3 - ((int)uVar5 >> 0x1f)) +
                (uint)CARRY4(uVar5 * 2,uVar5);
        uVar10 = iVar4 >> 0x1f & 3;
        iVar4 = iVar4 + (uint)CARRY4(uVar10,uVar8);
        uVar5 = uVar8;
        iVar1 = iVar4;
        while (iVar1 = FUN_0002a514(uVar5,iVar1), iVar2 < iVar1) {
          while( true ) {
            fVar14 = 1.0;
            in_fpscr = in_fpscr & 0xfffffff;
            if (dVar15 != 0.0) {
              fVar14 = (float)(*pdVar7 / dVar15);
              if (4 < DAT_000be63c) {
                snprintf(acStack_2040,0x2000,"test avg_freq:%.f, freq:%.f",dVar15,*pdVar7);
                FUN_0004948c(4,acStack_2040,0);
              }
            }
            iVar9 = iVar2 * 4;
            iVar2 = iVar2 + 1;
            pdVar7 = pdVar7 + 1;
            uVar5 = uVar10 + uVar8 >> 2 | iVar4 * 0x40000000;
            iVar1 = iVar4 >> 2;
            if (param_1 == 0) break;
            uVar16 = *(undefined4 *)(&DAT_000cb678 + iVar9 + iVar6 * 0x400 + 0x10);
            fVar3 = (float)FUN_00098e20();
            fVar17 = (float)VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x16) & 3);
            in_fpscr = in_fpscr & 0xfffffff;
            if (fVar17 < fVar3 * fVar14) {
              DAT_008c7078 = DAT_008c7078 + 1;
            }
            iVar1 = FUN_0002a514();
            if (iVar1 <= iVar2) goto LAB_0004f728;
          }
        }
      }
    }
LAB_0004f728:
    iVar6 = iVar6 + 1;
    if (iVar6 == 4) {
      return;
    }
  } while( true );
}

