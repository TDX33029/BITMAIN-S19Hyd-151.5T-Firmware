// FUN_01a49e20 @ 01a49e20 size=228 calls_out=4 calls_in=2
// strings: 

void FUN_01a49e20(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_e0 [112];
  undefined1 auStack_70 [72];
  undefined4 local_28;
  
  iVar3 = param_1[2];
  if (iVar3 == *param_1) {
    uVar2 = 0xaaaaaa;
    if ((uint)(param_1[5] + param_1[6]) < 0xaaaaaa) {
      uVar2 = param_1[5] + param_1[6];
    }
    if (1 < uVar2 - iVar3) {
      iVar1 = FUN_01a54c4c(param_1,iVar3,uVar2 - iVar3,0xc0);
      iVar3 = param_1[2];
      if (iVar1 == -0x7fffffff) goto LAB_01a49ea0;
    }
    FUN_01a54c38(param_1,iVar3,1,0xc0);
    iVar3 = param_1[2];
  }
LAB_01a49ea0:
  FUN_01bed4e2(auStack_70,param_3,0x48);
  FUN_01bed4e2(auStack_e0,param_4,0x70);
  local_28 = param_2;
  if (iVar3 == *param_1) {
    FUN_01a54c08(param_1);
  }
  FUN_01bed4e2(param_1[1] + iVar3 * 0xc0,auStack_e0,0xc0);
  param_1[2] = iVar3 + 1;
  return;
}

