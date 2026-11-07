// FUN_0073b6c0 @ 0073b6c0 size=196 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_0073b6c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 unaff_r5;
  bool bVar3;
  ulonglong uVar4;
  undefined4 local_40 [6];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
    *(undefined1 *)((int)param_1 + 0x19) = 0;
    unaff_r5 = *param_1;
    uStack_24 = param_1[1];
    uStack_20 = param_1[2];
    local_40[0] = 0x80000001;
    local_28 = unaff_r5;
    uVar1 = FUN_0073b7e0(param_1[3],local_40);
    puVar2 = &DAT_01c07f28;
    param_1[4] = uVar1;
    param_1[5] = &DAT_01c07f28;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c07ed8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c07ed8);
  case 3:
    uVar1 = param_1[4];
    puVar2 = (undefined *)param_1[5];
  }
  uVar4 = (**(code **)(puVar2 + 0xc))(uVar1,param_2);
  uVar1 = (undefined4)(uVar4 >> 0x20);
  bVar3 = (uVar4 & 1) == 0;
  if (bVar3) {
    FUN_01139b38(param_1[4],param_1[5]);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 6) = 3;
    uVar1 = unaff_r5;
  }
  return CONCAT44(uVar1,(uint)!bVar3);
}

