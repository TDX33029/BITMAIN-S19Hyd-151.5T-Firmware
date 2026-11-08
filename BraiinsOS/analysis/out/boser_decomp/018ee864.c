// FUN_018ee864 @ 018ee864 size=244 calls_out=3 calls_in=2
// strings: 

void FUN_018ee864(int *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_78 [16];
  int *local_68;
  ushort local_48 [20];
  
  if (*param_1 == -0x80000000) {
    local_48[0] = 0xdfe;
    if ((short)param_1[4] != 0) {
      local_48[0] = (ushort)(((uint)*(ushort *)((int)param_1 + 0x12) << 0x18) >> 0x10) |
                    *(ushort *)((int)param_1 + 0x12) >> 8;
    }
    FUN_01ac6cbc(param_2,local_48,2);
    uVar4 = param_1[3];
    iVar2 = param_1[2];
    local_48[0] = (ushort)((uVar4 & 0xff) << 8) | (ushort)(uVar4 >> 8) & 0xff;
    FUN_01ac6cbc(param_2,local_48,2);
    FUN_01ac6cbc(param_2,iVar2,uVar4);
    return;
  }
  local_48[0] = 0xdfe;
  FUN_01ac6cbc(param_2,local_48,2);
  local_48[0] = CONCAT11(local_48[0]._1_1_,0x19);
  FUN_01931148(auStack_78,local_48,param_2);
  iVar2 = param_1[7];
  iVar3 = local_68[2];
  if (iVar3 == *local_68) {
    FUN_006666a0(local_68);
  }
  uVar1 = *(ushort *)(param_1 + 6);
  *(char *)(local_68[1] + iVar3) = (char)iVar2;
  local_68[2] = iVar3 + 1;
                    /* WARNING: Could not recover jumptable at 0x018ee954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_018ee958 + *(int *)(&LAB_018ee958 + (uint)uVar1 * 4)))(0x10);
  return;
}

