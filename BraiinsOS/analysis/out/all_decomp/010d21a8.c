// FUN_010d21a8 @ 010d21a8 size=172 calls_out=3 calls_in=0
// strings: 

void FUN_010d21a8(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint local_18;
  undefined4 local_14;
  
  FUN_01266d58(&local_18);
  if ((char)local_18 == '\x05') {
    iVar1 = FUN_016e034e(*(undefined4 *)(param_2 + 0xc),param_4,param_5);
    if (iVar1 != -1) {
LAB_010d2218:
      *param_1 = 4;
      return;
    }
    puVar2 = (undefined4 *)FUN_016d2bc8();
    local_14 = *puVar2;
    uVar3 = 0;
    local_18 = 0;
  }
  else if ((local_18 & 0xff) == 4) {
    local_18 = 0;
    uVar3 = 4;
  }
  else {
    if ((local_18 & 0xff) == 5) goto LAB_010d2218;
    uVar3 = local_18 >> 8;
  }
  *(undefined4 *)(param_1 + 4) = local_14;
  *(short *)(param_1 + 1) = (short)uVar3;
  *param_1 = (char)local_18;
  param_1[3] = (char)(uVar3 >> 0x10);
  return;
}

