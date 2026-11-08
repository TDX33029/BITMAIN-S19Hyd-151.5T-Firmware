// FUN_015323a8 @ 015323a8 size=568 calls_out=5 calls_in=2
// strings: 

void FUN_015323a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,undefined4 *param_8,int *param_9
                 ,int *param_10)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_4 == 0) {
    iVar7 = 0;
    iVar3 = 1;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(param_4);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
    iVar7 = param_4;
  }
  FUN_016dd1aa(iVar3,param_3,param_4);
  local_30 = *param_8;
  uStack_2c = param_8[1];
  uStack_28 = param_8[2];
  local_34 = (undefined4 *)0x1;
  local_38 = (undefined *)0x1;
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar4 = local_38;
  puVar4[1] = local_34;
  puVar4[2] = local_30;
  puVar4[3] = uStack_2c;
  puVar4[4] = uStack_28;
  iVar12 = *param_9;
  piVar5 = (int *)(iVar12 + 4);
  do {
    iVar6 = *piVar5;
    while (iVar6 != -1) {
      if (iVar6 < 0) {
        local_34 = &DAT_0157d360;
        local_38 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00590e71,&local_38,&DAT_018ae278);
      }
      iVar11 = *piVar5;
      if (iVar11 == iVar6) {
        bVar2 = false;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
        if (bVar1) {
          *piVar5 = iVar6 + 1;
          DataMemoryBarrier(0xb);
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
        ClearExclusiveLocal();
      }
      iVar6 = iVar11;
      if (bVar2) {
        iVar6 = *param_10;
        iVar11 = param_9[1];
        piVar5 = (int *)(iVar6 + 4);
        do {
          iVar8 = *piVar5;
          while (iVar8 != -1) {
            if (iVar8 < 0) {
              local_34 = &DAT_0157d360;
              local_38 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_00590e71,&local_38,&DAT_018ae278);
            }
            iVar9 = *piVar5;
            if (iVar9 == iVar8) {
              bVar1 = (bool)hasExclusiveAccess(piVar5);
              if (bVar1) {
                *piVar5 = iVar8 + 1;
              }
              bVar2 = false;
              if (bVar1) {
                DataMemoryBarrier(0xb);
                bVar2 = true;
              }
            }
            else {
              bVar2 = false;
              ClearExclusiveLocal();
            }
            iVar8 = iVar9;
            if (bVar2) {
              param_1[8] = puVar4;
              param_1[9] = iVar7;
              param_1[10] = iVar3;
              param_1[0xb] = param_4;
              iVar7 = param_10[1];
              uVar10 = 0x93a80;
              if (param_7 < 0x93a80) {
                uVar10 = param_7;
              }
              param_1[1] = param_6;
              param_1[2] = iVar12;
              param_1[3] = iVar11;
              *param_1 = param_5;
              param_1[4] = iVar6;
              param_1[5] = iVar7;
              param_1[6] = uVar10;
              param_1[7] = param_2;
              return;
            }
          }
          HintYield();
        } while( true );
      }
    }
    HintYield();
  } while( true );
}

