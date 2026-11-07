// FUN_00d56ab8 @ 00d56ab8 size=128 calls_out=1 calls_in=1
// strings: 

void FUN_00d56ab8(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_2 + 0x588);
  uVar4 = *(uint *)(param_2 + 0x58c);
  if (-uVar4 < (uint)(uVar3 < 5)) {
    uVar2 = *(uint *)(param_2 + 0x590);
    uVar5 = *(uint *)(param_2 + 0x594);
    uVar6 = *(uint *)(param_2 + 0x598);
    param_1[5] = *(uint *)(param_2 + 0x59c);
    param_1[2] = uVar2;
    param_1[3] = uVar5;
    param_1[4] = uVar6;
    puVar1 = (undefined4 *)FUN_00c70f88(&DAT_00357399,0x40);
    puVar1 = (undefined4 *)*puVar1;
    *param_1 = uVar3;
    param_1[1] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00d56b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)();
    return;
  }
  uVar3 = FUN_00c70f88(&DAT_00357399,0x40);
  *param_1 = 5;
  param_1[1] = 0;
  param_1[2] = uVar3;
  return;
}

