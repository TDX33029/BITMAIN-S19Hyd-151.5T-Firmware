// FUN_00a67da8 @ 00a67da8 size=380 calls_out=2 calls_in=3
// strings: 

void FUN_00a67da8(uint *param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  (**(code **)(param_3 + 0x3c))(&local_2c);
  uVar2 = local_28;
  uVar1 = local_2c;
  if (local_2c != 0x80000000) {
    if ((local_24 == 5) && (iVar3 = thunk_FUN_016dd50a(local_28,&DAT_0034e521,5), iVar3 == 0)) {
      if (uVar1 != 0) {
        thunk_FUN_016d3fb4(uVar2);
      }
      *param_1 = 0x80000000;
      return;
    }
    if (uVar1 != 0) {
      thunk_FUN_016d3fb4(local_28);
    }
  }
  (**(code **)(param_3 + 0x18))(&local_44,param_2);
  (**(code **)(param_3 + 0x28))(&local_38,param_2);
  (**(code **)(param_3 + 0x30))(&local_2c,param_2);
  if ((local_44 != 0x80000000 && local_38 != 0x80000000) && (local_2c != 0x80000000)) {
    param_1[1] = local_40;
    param_1[2] = local_3c;
    *(undefined1 *)(param_1 + 9) = param_4;
    param_1[8] = local_24;
    *param_1 = local_44;
    param_1[3] = local_38;
    param_1[4] = local_34;
    param_1[5] = local_30;
    param_1[6] = local_2c;
    param_1[7] = local_28;
    return;
  }
  *param_1 = 0x80000000;
  if ((local_44 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4();
  }
  if ((local_38 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_34);
  }
  if ((local_2c & 0x7fffffff) == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_28);
  return;
}

