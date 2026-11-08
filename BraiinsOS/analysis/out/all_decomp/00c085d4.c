// FUN_00c085d4 @ 00c085d4 size=264 calls_out=3 calls_in=1
// strings: BUG: impossible

void FUN_00c085d4(undefined4 *param_1,int *param_2,int param_3,uint param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = *(uint *)(*param_2 + 8);
  if (uVar2 <= param_4) {
    puVar3 = (undefined4 *)param_2[1];
    iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(*param_2 + 4),param_3 + (param_4 - uVar2));
    if (iVar1 == 0) {
      uVar2 = *param_5;
      iVar1 = 0;
      if ((uint)(uVar2 < 2) <= -param_5[1]) {
        iVar1 = uVar2 - 1;
      }
      if ((iVar1 != 0) && (param_5[0x15] != 0)) {
        dVar5 = *(double *)(param_5[0x14] + 0x30);
        dVar4 = **(double **)*puVar3;
        if (NAN(dVar5)) {
          if (!NAN(dVar4)) goto LAB_00c08698;
        }
        else if (dVar4 < dVar5) {
          if (dVar5 < dVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f934);
          }
LAB_00c08698:
          FUN_00c012c8(param_1,param_5,-(param_5[1] + (uint)(uVar2 >= 2)));
          return;
        }
      }
    }
  }
  *param_1 = 4;
  param_1[1] = 0;
  return;
}

