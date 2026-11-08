// FUN_0104af1c @ 0104af1c size=164 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_0104af1c(short *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  short *psVar2;
  uint uVar3;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*param_1 == 1) {
    psVar2 = *(short **)(param_1 + 4);
    uVar3 = *(uint *)(param_1 + 6);
  }
  else {
    uVar3 = (uint)(ushort)param_1[1];
    if (0x18 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar3,0x18,&DAT_01883538);
    }
    psVar2 = param_1 + 2;
  }
  FUN_006008c8(&local_1c,psVar2,uVar3);
  uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,local_18,local_14);
  if ((local_1c & 0x7fffffff) == 0) {
    return uVar1;
  }
  thunk_FUN_016d3fb4(local_18);
  return uVar1;
}

