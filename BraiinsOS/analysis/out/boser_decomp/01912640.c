// FUN_01912640 @ 01912640 size=408 calls_out=7 calls_in=1
// strings: Expected transcript

void FUN_01912640(int *param_1,int *param_2,undefined4 param_3,code *param_4,code *param_5,
                 undefined4 param_6)

{
  undefined2 uVar1;
  undefined2 extraout_r1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_190;
  int iStack_18c;
  int iStack_188;
  undefined2 local_118;
  undefined4 local_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  undefined2 local_104;
  undefined2 local_102;
  int local_a8 [4];
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  
  iVar5 = *param_2;
  iVar3 = param_2[1];
  iVar4 = param_2[2];
  *param_2 = -0x80000000;
  if (iVar5 == -0x80000000) {
    iVar3 = thunk_FUN_01be5118(0x13);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x13);
    }
    FUN_01bed4e2(iVar3,"Expected transcript",0x13);
    param_1[2] = iVar3;
    *param_1 = (int)&DAT_80000020;
    param_1[1] = 0x13;
    param_1[3] = 0x13;
  }
  else {
    uVar1 = (*param_5)(param_3);
    (*param_4)(local_a8,param_3,iVar3,iVar4);
    piVar2 = (int *)((uint)local_a8 | 4);
    local_190 = *piVar2;
    iStack_18c = piVar2[1];
    iStack_188 = piVar2[2];
    if (local_a8[0] == -0x7fffffd7) {
      local_114 = 0x8000000a;
      local_110 = local_190;
      iStack_10c = iStack_18c;
      iStack_108 = iStack_188;
      local_104 = uVar1;
      local_102 = extraout_r1;
      FUN_0191d7c0(local_a8);
      local_118 = 4;
      FUN_01bed4e2(&local_190,local_a8,0x78);
      FUN_0191e124(param_2,&local_190);
      FUN_01bed4e2(local_a8,&local_190,0x7c);
      FUN_018f1fc4(param_6,local_a8,0);
      *param_1 = -0x7fffffd7;
    }
    else {
      param_1[4] = local_98;
      param_1[5] = iStack_94;
      param_1[6] = iStack_90;
      param_1[7] = iStack_8c;
      param_1[1] = local_190;
      param_1[2] = iStack_18c;
      param_1[3] = iStack_188;
      *param_1 = local_a8[0];
    }
    FUN_0134bd64(iVar5,iVar3);
  }
  return;
}

