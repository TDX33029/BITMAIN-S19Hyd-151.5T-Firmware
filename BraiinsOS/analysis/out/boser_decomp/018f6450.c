// FUN_018f6450 @ 018f6450 size=304 calls_out=6 calls_in=2
// strings: 

void FUN_018f6450(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,undefined4 *param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_4 == 0) {
    iVar7 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_01298504(param_4,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_4);
    }
    iVar7 = param_4;
  }
  FUN_01bed4e2(iVar1,param_3,param_4);
  uVar3 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x14);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = uVar3;
  puVar2[3] = uVar5;
  puVar2[4] = uVar6;
  uVar8 = FUN_018f9d7c(param_9);
  uVar9 = FUN_018f9d7c(param_10);
  param_1[7] = param_2;
  param_1[9] = iVar7;
  param_1[10] = iVar1;
  param_1[0xb] = param_4;
  uVar4 = 0x93a80;
  if (param_7 < 0x93a80) {
    uVar4 = param_7;
  }
  param_1[1] = param_6;
  *param_1 = param_5;
  param_1[8] = puVar2;
  *(undefined8 *)(param_1 + 4) = uVar9;
  param_1[6] = uVar4;
  *(undefined8 *)(param_1 + 2) = uVar8;
  return;
}

