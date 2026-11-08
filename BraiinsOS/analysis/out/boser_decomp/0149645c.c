// FUN_0149645c @ 0149645c size=240 calls_out=5 calls_in=18
// strings: 

void FUN_0149645c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  int local_320;
  int iStack_31c;
  int iStack_318;
  int local_314;
  int local_310;
  int iStack_30c;
  int local_308;
  int iStack_304;
  int iStack_300;
  undefined4 local_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198 [94];
  
  iVar1 = FUN_01298504(param_4,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_4);
  }
  FUN_01bed4e2(iVar1,param_3,param_4);
  local_314 = param_5[3];
  local_310 = param_5[4];
  iStack_30c = param_5[5];
  local_308 = param_5[6];
  iStack_304 = param_5[7];
  iStack_300 = param_5[8];
  local_320 = *param_5;
  iStack_31c = param_5[1];
  iStack_318 = param_5[2];
  piVar2 = (int *)((uint)local_198 | 4);
  *piVar2 = local_320;
  piVar2[1] = iStack_31c;
  piVar2[2] = iStack_318;
  piVar2[3] = local_314;
  piVar2[4] = local_310;
  piVar2[5] = iStack_30c;
  piVar2[6] = local_308;
  piVar2[7] = iStack_304;
  piVar2[8] = iStack_300;
  local_198[0] = 7;
  local_1a4 = param_4;
  iStack_1a0 = iVar1;
  uStack_19c = param_4;
  FUN_01494648(&local_320,param_2 + 0x160,&local_1a4);
  if (local_320 != 8) {
    FUN_01497614(&local_320);
  }
  FUN_01bed4e2(param_1,param_2,0x178);
  return;
}

