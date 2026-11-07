// FUN_00b5dc40 @ 00b5dc40 size=312 calls_out=1 calls_in=1
// strings: BUG: impossible | BUG: impossible

void FUN_00b5dc40(undefined4 *param_1,int param_2)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  pdVar2 = (double *)(param_1 + 2);
  iVar1 = 0;
  do {
    dVar6 = *pdVar2;
    if (!NAN(dVar6)) {
      dVar5 = pdVar2[-1];
      if (NAN(dVar5)) {
LAB_00b5dcb0:
        puVar4 = (undefined4 *)((int)param_1 + iVar1);
        *(double *)(puVar4 + 2) = dVar5;
        local_20 = SUB84(dVar6,0);
        uStack_1c = (undefined4)((ulonglong)dVar6 >> 0x20);
        iVar3 = iVar1;
        while (iVar3 != 0) {
          if (NAN(dVar6)) goto LAB_00b5dd34;
          dVar5 = *(double *)(puVar4 + -2);
          if (!NAN(dVar5)) {
            if (dVar5 < dVar6) {
              puVar4 = (undefined4 *)((int)param_1 + iVar3);
              if (dVar6 < dVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
              }
              goto LAB_00b5dd34;
            }
            if (dVar5 <= dVar6) goto LAB_00b5dd34;
          }
          iVar3 = iVar3 + -8;
          puVar4 = (undefined4 *)((int)param_1 + iVar3);
          *(double *)(puVar4 + 2) = dVar5;
        }
        puVar4 = param_1;
LAB_00b5dd34:
        *puVar4 = local_20;
        puVar4[1] = uStack_1c;
      }
      else if (dVar5 < dVar6) {
        if (dVar6 < dVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
        }
      }
      else if (dVar6 < dVar5) goto LAB_00b5dcb0;
    }
    pdVar2 = pdVar2 + 1;
    iVar1 = iVar1 + 8;
    if (pdVar2 == (double *)(param_1 + param_2 * 2)) {
      return;
    }
  } while( true );
}

