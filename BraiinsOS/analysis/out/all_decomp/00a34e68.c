// FUN_00a34e68 @ 00a34e68 size=196 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_00a34e68(int *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_1c;
  uint *local_18;
  undefined1 *local_14;
  
  uVar2 = *(uint *)(*param_1 + 8);
  ClearExclusiveLocal();
  if ((uVar2 & *(uint *)(*param_1 + 0xc)) == 0xffffffff) {
    uVar5 = FUN_00ac0588(&DAT_0034df3c,0x19);
LAB_00a34ef4:
    if (*param_2 == 0) {
      return uVar5;
    }
    iVar3 = param_2[1];
  }
  else {
    iVar3 = param_2[1];
    iVar4 = 0;
    do {
      local_1c = uVar2;
      if (param_2[2] * 8 == iVar4) {
        local_18 = &local_1c;
        local_14 = &LAB_00fac484;
        uVar5 = FUN_00a355e4(&DAT_00581015,&local_18);
        goto LAB_00a34ef4;
      }
      puVar1 = (uint *)(iVar3 + iVar4);
      iVar4 = iVar4 + 8;
    } while (*puVar1 != uVar2);
    uVar5 = 0;
    if (*param_2 == 0) {
      return 0;
    }
  }
  thunk_FUN_016d3fb4(iVar3);
  return uVar5;
}

