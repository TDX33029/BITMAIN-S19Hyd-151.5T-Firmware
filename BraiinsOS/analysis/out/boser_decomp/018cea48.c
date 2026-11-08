// FUN_018cea48 @ 018cea48 size=604 calls_out=5 calls_in=1
// strings: Attempting client auth | rustls::client::common | rustls::client::common | Client auth requested but no cert/sigscheme available | rustls::client::common | rustls::client::common

void FUN_018cea48(undefined4 *param_1,undefined4 param_2,code *param_3,int param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  uint local_48;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  undefined *local_28;
  
  bVar9 = param_4 == 0;
  if (bVar9) {
    param_4 = 4;
  }
  uVar8 = 0;
  if (bVar9) {
    param_5 = 0;
  }
  bVar10 = 0x1ffffffe < param_5;
  bVar9 = param_5 == 0x1fffffff;
  uVar5 = param_5 * 8;
  if (param_5 < 0x20000000) {
    bVar10 = 0x7ffffffb < uVar5;
    bVar9 = uVar5 == 0x7ffffffc;
  }
  if (bVar10 && !bVar9) {
LAB_018cea84:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar8,uVar5);
  }
  if (uVar5 == 0) {
    iVar1 = 4;
    local_48 = 0;
  }
  else {
    uVar8 = 4;
    iVar1 = FUN_01298504(uVar5,4);
    local_48 = param_5;
    if (iVar1 == 0) goto LAB_018cea84;
  }
  uVar5 = 0;
  if (param_5 != 0) {
    puVar2 = (undefined4 *)(iVar1 + 4);
    puVar6 = (undefined4 *)(param_4 + 4);
    uVar5 = param_5;
    do {
      uVar7 = *puVar6;
      uVar5 = uVar5 - 1;
      uVar8 = puVar6[1];
      puVar6 = puVar6 + 3;
      puVar2[-1] = uVar7;
      *puVar2 = uVar8;
      puVar2 = puVar2 + 2;
    } while (uVar5 != 0);
    uVar5 = param_5;
  }
  piVar3 = (int *)(*param_3)(param_2,iVar1,uVar5,param_6,param_7);
  if (piVar3 != (int *)0x0) {
    uVar11 = (**(code **)(piVar3[0xc] + 0xc))
                       (piVar3[0xb] + (*(int *)(piVar3[0xc] + 8) - 1U & 0xfffffff8) + 8,param_6,
                        param_7);
    if ((int)uVar11 != 0) {
      if (3 < DAT_01d51b00) {
        local_2c = 0x16;
        local_34 = 0x16;
        local_28 = &DAT_01d22d3c;
        local_30 = "rustls::client::common";
        local_38 = "rustls::client::common";
        FUN_0193b350("Attempting client auth",0x2d,4,&local_38);
      }
      uVar8 = param_8[1];
      uVar7 = param_8[2];
      *param_1 = *param_8;
      param_1[1] = uVar8;
      param_1[2] = uVar7;
      param_1[3] = piVar3;
      *(undefined8 *)(param_1 + 4) = uVar11;
      goto LAB_018cec8c;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018bcd50(piVar3);
    }
  }
  if (3 < DAT_01d51b00) {
    local_2c = 0x16;
    local_34 = 0x16;
    local_28 = &DAT_01d22d4c;
    local_30 = "rustls::client::common";
    local_38 = "rustls::client::common";
    FUN_0193b350("Client auth requested but no cert/sigscheme available",0x6b,4,&local_38);
  }
  uVar8 = param_8[1];
  uVar7 = param_8[2];
  param_1[1] = *param_8;
  param_1[2] = uVar8;
  param_1[3] = uVar7;
  *param_1 = 0x80000001;
LAB_018cec8c:
  FUN_0134aee0(local_48,iVar1,4,8);
  return;
}

