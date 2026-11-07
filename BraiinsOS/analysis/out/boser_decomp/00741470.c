// FUN_00741470 @ 00741470 size=196 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_00741470(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 unaff_r5;
  bool bVar3;
  ulonglong uVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_2c [3];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 9)) {
  case 0:
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    local_48 = *param_1;
    uStack_44 = param_1[1];
    unaff_r5 = param_1[2];
    uStack_3c = param_1[3];
    uStack_38 = param_1[4];
    uStack_34 = param_1[5];
    local_2c[0] = 0x80000000;
    uStack_40 = unaff_r5;
    uVar1 = FUN_0073b7e0(param_1[6],&local_48,local_2c);
    puVar2 = &DAT_01c07f28;
    param_1[7] = uVar1;
    param_1[8] = &DAT_01c07f28;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c07f18);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c07f18);
  case 3:
    uVar1 = param_1[7];
    puVar2 = (undefined *)param_1[8];
  }
  uVar4 = (**(code **)(puVar2 + 0xc))(uVar1,param_2);
  uVar1 = (undefined4)(uVar4 >> 0x20);
  bVar3 = (uVar4 & 1) == 0;
  if (bVar3) {
    FUN_01139b38(param_1[7],param_1[8]);
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 9) = 3;
    uVar1 = unaff_r5;
  }
  return CONCAT44(uVar1,(uint)!bVar3);
}

