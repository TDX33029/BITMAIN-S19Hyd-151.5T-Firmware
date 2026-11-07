// FUN_0167ea40 @ 0167ea40 size=236 calls_out=2 calls_in=3
// strings: 

void FUN_0167ea40(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_1a0 [24];
  uint local_188;
  int local_184;
  int local_180;
  int local_158 [77];
  
  FUN_016dd1aa(auStack_1a0,param_4,0x48);
  FUN_016dd1aa(local_158,param_4 + 0x48,0x70);
  uVar1 = *(uint *)(param_2 + 0xc0);
  iVar2 = *(int *)(param_2 + 0xc4);
  iVar4 = *(int *)(param_2 + 200);
  *(undefined4 *)(param_2 + 0xc0) = 0;
  if (local_188 == 0x80000003) {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0x80000000;
    }
    else {
      uVar3 = 0x80000002;
      if (iVar2 == iVar4) {
        uVar3 = 0x80000000;
      }
    }
    goto LAB_0167eaf8;
  }
  if ((uVar1 & 1) == 0) {
    if (0x80000001 < local_188) {
      iVar2 = local_184;
      iVar4 = local_180;
      goto LAB_0167eadc;
    }
    uVar3 = 0x80000000;
  }
  else {
    if (0x80000001 < local_188) {
      iVar4 = local_180;
    }
LAB_0167eadc:
    uVar3 = 0x80000002;
    if (iVar2 == iVar4) {
      uVar3 = 0x80000000;
    }
  }
  if (0 < (int)local_188) {
    thunk_FUN_016d3fb4(local_184);
  }
LAB_0167eaf8:
                    /* WARNING: Could not recover jumptable at 0x0167eb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  local_188 = uVar3;
  local_184 = iVar2;
  local_180 = iVar4;
  (*(code *)(&LAB_0167eb1c + *(int *)(&LAB_0167eb1c + local_158[0] * 4)))
            (*(int *)(&LAB_0167eb1c + local_158[0] * 4),param_2 + 0x60,
             *(undefined4 *)(param_2 + 0xb0),*(undefined4 *)(param_2 + 0xb4));
  return;
}

