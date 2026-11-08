// FUN_00f85f70 @ 00f85f70 size=760 calls_out=11 calls_in=3
// strings: model | generatorstruct BosminerModelstruct FormatHeaderstruct BosminerConfig | internal error: entered unreachable code: datetimes should only be serialized as structs; not maps

void FUN_00f85f70(undefined4 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *local_248;
  undefined4 local_244;
  undefined4 local_240;
  int local_1f4;
  int local_1e0;
  undefined1 auStack_1dc [68];
  undefined4 local_198 [2];
  undefined1 auStack_190 [104];
  undefined1 *local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int local_118;
  undefined1 auStack_114 [100];
  undefined1 *local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  int local_90;
  undefined1 auStack_8c [104];
  
  FUN_00644720(&local_a0,param_2,&DAT_004e94a9,6);
  if (local_a0 != &DAT_80000005) {
    *param_1 = local_a0;
    param_1[1] = local_9c;
    param_1[2] = local_98;
    if ((undefined1 *)*param_1 != &DAT_80000005) {
      return;
    }
  }
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: datetimes should only be serialized as structs, not maps"
                 ,0xc5,&DAT_01d2bdec);
  }
  iVar6 = param_3[2];
  iVar5 = param_3[5];
  iVar3 = *param_3;
  uVar1 = (uint)(iVar6 != -0x80000000);
  if (iVar5 != -0x80000000) {
    uVar1 = uVar1 + 1;
  }
  iVar4 = uVar1 + iVar3;
  iVar2 = param_3[8];
  if (iVar2 != -0x80000000) {
    iVar4 = iVar4 + 1;
  }
  FUN_01a4c5c8(&local_a0,iVar4);
  if (local_90 == -0x7fffffff) {
    local_248 = local_a0;
    local_244 = local_9c;
    local_240 = local_98;
  }
  else {
    local_b0 = local_a0;
    uStack_ac = local_9c;
    uStack_a8 = local_98;
    uStack_a4 = uStack_94;
    FUN_01bed4e2(auStack_114,auStack_8c,100);
    local_128 = local_b0;
    uStack_124 = uStack_ac;
    uStack_120 = uStack_a8;
    uStack_11c = uStack_a4;
    local_118 = local_90;
    if (((((iVar6 == -0x80000000) ||
          (FUN_00644f7c(&local_a0,&local_128,&DAT_00520eda,7,param_3 + 2), local_a0 == &DAT_80000005
          )) && ((iVar5 == -0x80000000 ||
                 (FUN_00644f7c(&local_a0,&local_128,"model",5,param_3 + 5),
                 local_a0 == &DAT_80000005)))) &&
        ((iVar2 == -0x80000000 ||
         (FUN_00644f7c(&local_a0,&local_128,
                       "generatorstruct BosminerModelstruct FormatHeaderstruct BosminerConfig",9,
                       param_3 + 8), local_a0 == &DAT_80000005)))) &&
       ((iVar3 == 0 ||
        (FUN_00644e90(&local_a0,&local_128,&DAT_004c1920,9,iVar3,param_3[1]),
        local_a0 == &DAT_80000005)))) {
      FUN_01bed4e2(&local_a0,&local_128,0x78);
      FUN_01a4aaf4(&local_248,&local_a0);
      if (local_1f4 != 8) {
        local_1e0 = *(int *)(param_2 + 0x30);
        *(undefined4 *)(param_2 + 0x30) = 0x80000000;
        if (local_1e0 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2bdfc);
        }
        FUN_01bed4e2(auStack_1dc,param_2 + 0x34,0x44);
        FUN_01bed4e2(auStack_190,&local_248,0x68);
        local_198[0] = 1;
        FUN_01a4b734(&local_a0,param_2,&local_1e0,local_198);
        if (local_a0 != (undefined1 *)0x4) {
          FUN_005f6530(&local_a0);
        }
        goto LAB_00f86224;
      }
    }
    else {
      local_244 = local_9c;
      local_240 = local_98;
      local_248 = local_a0;
      FUN_005f8054(&local_128);
    }
  }
  if (local_248 != &DAT_80000005) {
    *param_1 = local_248;
    param_1[1] = local_244;
    param_1[2] = local_240;
    return;
  }
LAB_00f86224:
  *param_1 = &DAT_80000005;
  return;
}

