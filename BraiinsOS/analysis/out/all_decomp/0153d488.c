// FUN_0153d488 @ 0153d488 size=476 calls_out=7 calls_in=1
// strings: Expected transcript

void FUN_0153d488(int *param_1,int *param_2,undefined4 param_3,code *param_4,code *param_5,
                 undefined4 param_6)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 extraout_r1;
  int iVar3;
  int iVar4;
  int local_198;
  int local_194;
  int local_190;
  undefined2 local_120;
  undefined4 local_118;
  int local_114;
  int iStack_110;
  int iStack_10c;
  undefined2 local_108;
  undefined2 local_106;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  
  iVar4 = *param_2;
  iVar3 = param_2[2];
  iVar2 = param_2[1];
  *param_2 = -0x80000000;
  if (iVar4 != -0x80000000) {
    uVar1 = (*param_5)(param_3);
    (*param_4)(&local_a8,param_3,iVar2,iVar3);
    if (local_a8 == -0x7fffffd7) {
      local_114 = iStack_a4;
      iStack_110 = iStack_a0;
      iStack_10c = iStack_9c;
      local_118 = 0x8000000a;
      local_190 = 0;
      local_194 = 1;
      local_198 = 0;
      local_108 = uVar1;
      local_106 = extraout_r1;
      FUN_0150e524(&local_118,&local_198,0x80000000);
      local_a8 = local_198;
      iStack_a4 = local_194;
      iStack_a0 = local_190;
      FUN_016dd1aa(&iStack_9c,&local_118,0x6c);
      local_120 = 4;
      FUN_016dd1aa(&local_198,&local_a8,0x78);
      FUN_0151eddc(param_2,&local_198);
      FUN_016dd1aa(&local_a8,&local_198,0x7c);
      FUN_01525ed4(param_6,&local_a8,0);
      *param_1 = -0x7fffffd7;
    }
    else {
      *param_1 = local_a8;
      param_1[1] = iStack_a4;
      param_1[2] = iStack_a0;
      param_1[3] = iStack_9c;
      param_1[4] = local_98;
      param_1[5] = local_94;
      param_1[6] = iStack_90;
      param_1[7] = iStack_8c;
      local_198 = iStack_a4;
      local_194 = iStack_a0;
      local_190 = iStack_9c;
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
    return;
  }
  iVar2 = thunk_FUN_016d4a50(0x13);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x13);
  }
  FUN_016dd1aa(iVar2,"Expected transcript",0x13);
  param_1[2] = iVar2;
  *param_1 = -0x7fffffe0;
  param_1[1] = 0x13;
  param_1[3] = 0x13;
  return;
}

