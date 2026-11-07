// FUN_015277ec @ 015277ec size=168 calls_out=1 calls_in=2
// strings: 

void FUN_015277ec(uint *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined2 local_28;
  
  uVar1 = *param_3;
  iVar2 = 0xb;
  if (0x80000012 < uVar1) {
    iVar2 = uVar1 + 0x7fffffed;
  }
  if (iVar2 == 0xb) {
    uVar3 = 0xe;
    if ((int)uVar1 < 0) {
      uVar3 = uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x01527840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01527844 + *(int *)(&DAT_01527844 + uVar3 * 4)))();
    return;
  }
  local_9c = 0x60001;
  if (iVar2 == 9) {
    local_9c = 0xd0001;
  }
  local_a0 = 0x80000001;
  local_28 = 4;
  FUN_01525ed4(param_2,&local_a0,*(char *)(param_2 + 0x31) == '\x02');
  *(undefined1 *)(param_2 + 0x255) = 1;
  uVar1 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  uVar1 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  return;
}

