// FUN_015941ec @ 015941ec size=352 calls_out=6 calls_in=1
// strings: 

int FUN_015941ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_8) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    local_a8 = *param_8;
    local_a4 = param_8[1];
    local_a0 = param_8[2];
    uStack_9c = param_8[3];
    uStack_98 = param_8[4];
    uStack_94 = param_8[5];
    goto LAB_015942c0;
  case 2:
    local_a0 = param_8[2];
    uStack_9c = param_8[3];
    uStack_98 = param_8[4];
    uStack_94 = param_8[5];
    uVar1 = 2;
    break;
  case 3:
    FUN_006666fc((uint)&local_a8 | 4,param_8[2],param_8[3]);
    uVar1 = 3;
    break;
  case 4:
    FUN_014fcef8((uint)&local_a8 | 4,param_8 + 1);
    uVar1 = 4;
    break;
  case 5:
    FUN_0156aa80((uint)&local_a8 | 4,param_8 + 1);
    uVar1 = 5;
  }
  local_a8 = CONCAT31(local_a8._1_3_,uVar1);
LAB_015942c0:
  puVar3 = (undefined4 *)((uint)&local_c8 | 4);
  *puVar3 = local_a8;
  puVar3[1] = local_a4;
  puVar3[2] = local_a0;
  puVar3[3] = uStack_9c;
  puVar3[4] = uStack_98;
  puVar3[5] = uStack_94;
  local_50 = 6;
  local_88 = 0x80000013;
  local_4c = param_7;
  local_84 = local_c8;
  uStack_80 = uStack_c4;
  uStack_7c = uStack_c0;
  local_78 = local_bc;
  uStack_74 = uStack_b8;
  uStack_70 = uStack_b4;
  uStack_6c = uStack_b0;
  local_a8 = 1;
  local_34 = param_6;
  local_38 = param_5;
  local_a4 = param_3;
  local_a0 = param_4;
  local_30 = param_1;
  local_2c = param_2;
  iVar2 = thunk_FUN_01be5118(0x80);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar2,&local_a8,0x80);
  return iVar2;
}

