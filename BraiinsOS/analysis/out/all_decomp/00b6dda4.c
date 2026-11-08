// FUN_00b6dda4 @ 00b6dda4 size=464 calls_out=2 calls_in=2
// strings: BUG: impossible

/* WARNING: Removing unreachable block (ram,0x00b6df68) */
/* WARNING: Removing unreachable block (ram,0x00b6df24) */

double * FUN_00b6dda4(double *param_1,double *param_2,double *param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (7 < param_4) {
    uVar1 = param_4 >> 3;
    iVar5 = uVar1 * 8 - (param_4 >> 3);
    param_1 = (double *)FUN_00b6dda4(param_1,param_1 + uVar1 * 4,param_1 + iVar5,uVar1);
    param_2 = (double *)FUN_00b6dda4(param_2,param_2 + uVar1 * 4,param_2 + iVar5,uVar1);
    param_3 = (double *)FUN_00b6dda4(param_3,param_3 + uVar1 * 4,param_3 + iVar5,uVar1);
  }
  dVar8 = *param_1;
  dVar6 = *param_2;
  if (NAN(dVar8)) {
    dVar7 = *param_3;
    bVar2 = NAN(dVar7);
  }
  else {
    bVar4 = 0xff;
    bVar3 = 1;
    if (!NAN(dVar6)) {
      if (dVar8 <= dVar6) {
        bVar3 = 0;
        if (dVar8 < dVar6) {
          bVar3 = 1;
        }
      }
      else {
        bVar3 = 1;
        if (dVar8 < dVar6) goto LAB_00b6def0;
      }
    }
    dVar7 = *param_3;
    bVar2 = NAN(dVar7);
    if (!bVar2) {
      if (dVar8 <= dVar7) {
        bVar4 = 0;
        if (dVar8 < dVar7) {
          bVar4 = 0xff;
        }
      }
      else {
        bVar4 = 1;
        if (dVar8 < dVar7) goto LAB_00b6def0;
      }
    }
    if ((char)(bVar4 ^ bVar3) < '\0') {
      return param_1;
    }
  }
  if ((((NAN(dVar6)) || (bVar2)) || (dVar6 <= dVar7)) || (dVar7 <= dVar6)) {
    return param_2;
  }
LAB_00b6def0:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
}

