// FUN_014f55c8 @ 014f55c8 size=320 calls_out=4 calls_in=2
// strings: 

void FUN_014f55c8(int *param_1,uint *param_2)

{
  uint uVar1;
  int unaff_r4;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_1f8 [224];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int local_108;
  int local_104;
  undefined1 auStack_100 [220];
  
  uVar2 = *param_2;
  uVar1 = 0x15;
  iVar3 = 4;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  if (uVar1 != 0x10) {
    if (uVar1 == 0x11) {
      puVar4 = (undefined4 *)param_2[1];
      local_118 = *puVar4;
      uStack_114 = puVar4[1];
      uStack_110 = puVar4[2];
      uStack_10c = puVar4[3];
      FUN_014f5730(&local_108);
      iVar3 = 5;
      if (local_108 != 4) {
        FUN_01bed4e2(auStack_1f8,auStack_100,0xdc);
        iVar3 = local_108;
      }
      thunk_FUN_01be4678(puVar4);
      unaff_r4 = local_104;
    }
    else if (uVar1 != 0x12) {
      FUN_014f5730(&local_108,param_2);
      unaff_r4 = local_104;
      iVar3 = 5;
      if (local_108 != 4) {
        FUN_01bed4e2(auStack_1f8,auStack_100,0xdc);
        iVar3 = local_108;
      }
      goto LAB_014f56a4;
    }
  }
  if (uVar2 != 0x80000011) {
    FUN_014c81b0(param_2);
  }
LAB_014f56a4:
  if (iVar3 == 5) {
    *param_1 = 5;
    param_1[1] = unaff_r4;
  }
  else {
    if (iVar3 == 3) {
      iVar3 = 4;
    }
    else if (iVar3 == 4) {
      iVar3 = 3;
    }
    else {
      FUN_01bed4e2(&local_108,auStack_1f8,0xdc);
    }
    *param_1 = iVar3;
    param_1[1] = unaff_r4;
    FUN_01bed4e2(param_1 + 2,&local_108,0xdc);
  }
  return;
}

