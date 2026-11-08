// FUN_01791c40 @ 01791c40 size=444 calls_out=7 calls_in=3
// strings: 

undefined8 FUN_01791c40(int param_1,int param_2)

{
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar1;
  undefined4 *puVar2;
  int local_18;
  uint local_10;
  
  FUN_0184606c(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
  FUN_016dd606(param_1 + 0xd8 + extraout_r1,0,*(int *)(param_1 + 0xcc) - extraout_r1);
  *(undefined1 *)(param_1 + extraout_r1 + 0xd8) = 6;
  *(byte *)(param_1 + *(int *)(param_1 + 0xcc) + 0xd7) =
       ~((byte)~(byte)(((uint)*(byte *)(param_1 + *(int *)(param_1 + 0xcc) + 0xd7) << 0x19) >> 0x18)
        >> 1);
  FUN_017919ec(param_1,param_1 + 0xd8);
  FUN_01791880(param_1);
  uVar1 = extraout_r1_00;
  local_18 = param_2;
  for (local_10 = 0; local_10 < *(uint *)(param_1 + 0xd4) >> 3; local_10 = local_10 + 1) {
    puVar2 = (undefined4 *)(param_1 + local_10 * 8);
    FUN_0178facc(local_18,uVar1,*puVar2,puVar2[1]);
    local_18 = local_18 + 8;
    uVar1 = extraout_r1_01;
  }
  if ((*(uint *)(param_1 + 0xd4) & 7) != 0) {
    FUN_0178fa40(local_18,*(undefined4 *)(param_1 + local_10 * 8));
  }
  FUN_016dd606(param_1 + 0xd8,0,*(undefined4 *)(param_1 + 0xcc));
  FUN_0179190c(param_1);
  return 0;
}

