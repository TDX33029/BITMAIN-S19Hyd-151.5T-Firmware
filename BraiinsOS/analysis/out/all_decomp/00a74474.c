// FUN_00a74474 @ 00a74474 size=140 calls_out=0 calls_in=1
// strings: 

void FUN_00a74474(float *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  
  pfVar3 = param_1 + 2;
  iVar2 = 0;
  do {
    fVar8 = *pfVar3;
    if (fVar8 < pfVar3[-2]) {
      fVar7 = pfVar3[1];
      iVar1 = iVar2;
      do {
        iVar5 = iVar1;
        puVar6 = (undefined4 *)((int)param_1 + iVar5);
        puVar6[2] = *puVar6;
        puVar6[3] = puVar6[1];
        if (iVar5 == 0) {
          pfVar4 = param_1;
          goto LAB_00a7448c;
        }
        iVar1 = iVar5 + -8;
      } while (fVar8 < *(float *)((int)param_1 + iVar5 + -8));
      pfVar4 = (float *)((int)param_1 + iVar5);
LAB_00a7448c:
      pfVar4[1] = fVar7;
      *pfVar4 = fVar8;
    }
    pfVar3 = pfVar3 + 2;
    iVar2 = iVar2 + 8;
    if (pfVar3 == param_1 + param_2 * 2) {
      return;
    }
  } while( true );
}

