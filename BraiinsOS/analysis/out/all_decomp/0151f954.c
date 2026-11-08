// FUN_0151f954 @ 0151f954 size=608 calls_out=10 calls_in=1
// strings: 

void FUN_0151f954(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint local_28;
  
  piVar1 = (int *)param_2[3];
  uVar5 = 0;
  iVar7 = piVar1[1];
  uVar6 = *(uint *)(*piVar1 + 0xc);
  local_28 = uVar6;
  if ((int)uVar6 < 0) {
LAB_0151f994:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,uVar6);
  }
  if (uVar6 == 0) {
    iVar2 = 1;
    uVar4 = 0;
  }
  else {
    uVar5 = 1;
    iVar2 = FUN_016d38c8(uVar6,1);
    uVar4 = uVar6;
    if (iVar2 == 0) goto LAB_0151f994;
  }
  iVar7 = FUN_0173b2c8(iVar7,0);
  if (iVar7 != 0) {
    iVar3 = FUN_0173bf84(iVar7,iVar2,&local_28,param_3,param_4);
    if (iVar3 == 1) {
      if (local_28 < uVar6) {
        uVar6 = local_28;
      }
      if (local_28 < uVar4) {
        if (uVar6 != 0) {
          iVar2 = thunk_FUN_016d4ea4(iVar2,uVar6);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,uVar6);
          }
          FUN_01739f80(iVar7);
          goto LAB_0151faf8;
        }
        thunk_FUN_016d3fb4(iVar2);
        FUN_01739f80(iVar7);
        uVar4 = 0;
        iVar2 = 1;
        iVar7 = 1;
      }
      else {
        FUN_01739f80(iVar7);
        if (uVar6 == 0) {
          iVar7 = 1;
          uVar4 = 0;
        }
        else {
LAB_0151faf8:
          iVar7 = thunk_FUN_016d4a50(uVar6);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,uVar6);
          }
          uVar4 = uVar6;
        }
      }
      FUN_016dd1aa(iVar7,iVar2,uVar6);
      *param_1 = 0x80000029;
      param_1[1] = uVar4;
      param_1[2] = iVar7;
      param_1[3] = uVar6;
      param_1[4] = 0;
      if (uVar6 != 0) {
        uVar4 = 0;
        do {
          *(undefined1 *)(iVar2 + uVar4) = 0;
          uVar4 = uVar4 + 1;
        } while (uVar6 != uVar4);
        thunk_FUN_016d3fb4(iVar2);
        piVar1 = (int *)param_2[3];
      }
      goto LAB_0151faa8;
    }
    FUN_01739f80(iVar7);
  }
  if (uVar4 != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &DAT_8000001c;
  param_1[1] = 0x1a;
  param_1[2] = 0;
LAB_0151faa8:
  FUN_01739ee4(piVar1[1]);
  thunk_FUN_016d3fb4(piVar1);
  if (*param_2 != 0) {
    thunk_FUN_016d3fb4(param_2[1]);
  }
  thunk_FUN_016d3fb4(param_2);
  return;
}

