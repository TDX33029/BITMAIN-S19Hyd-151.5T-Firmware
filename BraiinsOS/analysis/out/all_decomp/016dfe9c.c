// FUN_016dfe9c @ 016dfe9c size=234 calls_out=1 calls_in=1
// strings: 

int FUN_016dfe9c(int param_1,uint param_2,uint *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  if (param_1 == 3) {
    return 0x16;
  }
  uVar2 = *param_3;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar3 = uVar2;
  if (uVar4 + (0x7fffffff < uVar2) == 0) {
LAB_016dfec6:
    local_38 = uVar3;
    local_34 = uVar5;
    if (param_1 == 0 && param_2 == 0) {
      iVar1 = thunk_FUN_016dde14(0xa2,&local_38,&local_38,0,0,0,0);
      if (param_4 == (int *)0x0 || iVar1 != -4) goto LAB_016dff70;
    }
    else {
      iVar1 = thunk_FUN_016dde14(0x109,param_1,param_2,&local_38,&local_38,0,0);
      if (param_4 == (int *)0x0 || iVar1 != -4) goto LAB_016dff70;
      if ((param_2 & 1) != 0) {
        return 4;
      }
    }
    iVar1 = 4;
    param_4[2] = local_34;
    *param_4 = local_38 + (uVar2 - uVar3);
    param_4[1] = ((uVar4 - ((int)uVar3 >> 0x1f)) - (uint)(uVar2 < uVar3)) +
                 ((int)local_38 >> 0x1f) + (uint)CARRY4(local_38,uVar2 - uVar3);
  }
  else {
    local_2c = (int)uVar5 >> 0x1f;
    local_38 = uVar2;
    local_34 = uVar4;
    local_30 = uVar5;
    iVar1 = thunk_FUN_016dde14(0x197,param_1,param_2,&local_38,param_4,0,0);
    if (iVar1 == -0x26) {
      uVar3 = 0x7fffffff - ((int)uVar4 >> 0x1f);
      goto LAB_016dfec6;
    }
LAB_016dff70:
    iVar1 = -iVar1;
  }
  return iVar1;
}

