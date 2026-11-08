// FUN_010974f0 @ 010974f0 size=672 calls_out=8 calls_in=2
// strings: 

uint * FUN_010974f0(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                   int *param_5)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int local_28;
  
  iVar2 = FUN_0106fc6c();
  local_28 = iVar2;
  piVar3 = (int *)FUN_01097034(param_1);
  iVar13 = *param_5;
  piVar6 = piVar3;
  while( true ) {
    uVar12 = piVar6[1] - 1;
    uVar11 = uVar12 & param_3;
    if (piVar6[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar11,0,&DAT_01883b60);
    }
    iVar4 = *piVar6;
    uVar14 = *(uint *)(iVar4 + uVar11 * 4);
    if ((uVar14 & 1) == 0) break;
LAB_010976a8:
    piVar7 = (int *)FUN_01072ee0(piVar6,&local_28,*param_2,param_2[1],param_2[2],param_2[3],0);
    if (piVar7 != (int *)0x0) {
      piVar6 = piVar7;
    }
  }
  piVar7 = (int *)(uVar14 & 0xfffffff8);
  puVar8 = (uint *)0x0;
  if (piVar7 != (int *)0x0) {
    iVar9 = *piVar7;
    iVar5 = FUN_0103cf5c(iVar9 + 8,iVar13);
    uVar11 = uVar11 + 1;
    uVar10 = uVar12;
    if (((((iVar5 == 0) || (*(short *)(iVar9 + 0x50) != *(short *)(iVar13 + 0x48))) ||
         ((*(short *)(iVar9 + 0x50) == 0x24 &&
          (*(short *)(iVar9 + 0x52) != *(short *)(iVar13 + 0x4a))))) ||
        ((uint)*(ushort *)(iVar9 + 0x4c) != (uint)*(ushort *)(iVar13 + 0x44))) ||
       ((*(ushort *)(iVar9 + 0x4c) - 5 < 2 &&
        (*(short *)(iVar9 + 0x4e) != *(short *)(iVar13 + 0x46))))) {
      do {
        if (uVar10 == 0) {
LAB_010976e0:
          puVar8 = (uint *)0x0;
          goto LAB_010976e4;
        }
        uVar14 = *(uint *)(iVar4 + (uVar11 & uVar12) * 4);
        if ((uVar14 & 1) != 0) goto LAB_010976a8;
        piVar7 = (int *)(uVar14 & 0xfffffff8);
        if (piVar7 == (int *)0x0) goto LAB_010976e0;
        iVar9 = *piVar7;
        iVar5 = FUN_0103cf5c(iVar9 + 8,iVar13);
        if ((((iVar5 != 0) && (*(short *)(iVar9 + 0x50) == *(short *)(iVar13 + 0x48))) &&
            ((*(short *)(iVar9 + 0x50) != 0x24 ||
             (*(short *)(iVar9 + 0x52) == *(short *)(iVar13 + 0x4a))))) &&
           (((uint)*(ushort *)(iVar9 + 0x4c) == (uint)*(ushort *)(iVar13 + 0x44) &&
            ((1 < *(ushort *)(iVar9 + 0x4c) - 5 ||
             (*(short *)(iVar9 + 0x4e) == *(short *)(iVar13 + 0x46))))))) break;
        uVar11 = uVar11 + 1;
        uVar10 = uVar10 - 1;
      } while( true );
    }
    puVar8 = (uint *)0x0;
    if ((uVar14 & 2) == 0) {
      puVar8 = (uint *)piVar7[1];
      do {
        uVar11 = *puVar8;
        bVar1 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar1);
      *puVar8 = uVar11 + 1;
      if (0x7fffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_015bef44();
      }
    }
  }
LAB_010976e4:
  FUN_0109717c(param_1,iVar2,piVar3,piVar6);
  if ((iVar2 != 0) &&
     (iVar13 = *(int *)(iVar2 + 0x40c) + -1, *(int *)(iVar2 + 0x40c) = iVar13, iVar13 == 0)) {
    DataMemoryBarrier(0xb);
    *(undefined4 *)(iVar2 + 0x420) = 0;
    if (*(int *)(iVar2 + 0x410) == 0) {
      FUN_00fbb698(iVar2);
      return puVar8;
    }
  }
  return puVar8;
}

