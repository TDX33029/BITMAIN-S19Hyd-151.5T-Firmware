// FUN_0178dc84 @ 0178dc84 size=420 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_0178dc84(undefined8 *param_1,uint param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  
  local_28 = 0;
  uStack_24 = 0;
  if (param_1 == (undefined8 *)0x0) {
    uVar3 = 0xfffffff5;
  }
  else {
    uVar5 = *param_1;
    for (local_34 = 1; uStack_2c = (undefined4)((ulonglong)uVar5 >> 0x20),
        local_30 = (undefined4)uVar5, local_34 < param_2; local_34 = local_34 + 1) {
      uVar1 = *(uint *)((int)(param_1 + local_34) + 4);
      uVar4 = *(uint *)((int)(param_1 + local_34 + 0x1fffffff) + 4);
      if (uVar4 < uVar1 ||
          uVar1 - uVar4 <
          (uint)(*(uint *)(param_1 + local_34 + 0x1fffffff) <= *(uint *)(param_1 + local_34))) {
        uVar4 = *(uint *)(param_1 + local_34);
        uVar2 = *(uint *)(param_1 + local_34 + 0x1fffffff);
        uVar1 = uVar4 - uVar2;
        uStack_24 = uStack_24 +
                    (*(uint *)((int)(param_1 + local_34) + 4) -
                    (*(uint *)((int)(param_1 + local_34 + 0x1fffffff) + 4) + (uint)(uVar4 < uVar2)))
                    + (uint)CARRY4(local_28,uVar1);
      }
      else {
        uVar4 = *(uint *)(param_1 + local_34 + 0x1fffffff);
        uVar2 = *(uint *)(param_1 + local_34);
        uVar1 = uVar4 - uVar2;
        uStack_24 = uStack_24 +
                    (*(uint *)((int)(param_1 + local_34 + 0x1fffffff) + 4) -
                    (*(uint *)((int)(param_1 + local_34) + 4) + (uint)(uVar4 < uVar2))) +
                    (uint)CARRY4(local_28,uVar1);
      }
      local_28 = local_28 + uVar1;
      uVar5 = FUN_0178dbe8(*(undefined4 *)(param_1 + local_34),
                           *(undefined4 *)((int)(param_1 + local_34) + 4),local_30,uStack_2c);
    }
    *param_3 = uVar5;
    *param_4 = local_28;
    param_4[1] = uStack_24;
    uVar3 = 0;
  }
  return uVar3;
}

