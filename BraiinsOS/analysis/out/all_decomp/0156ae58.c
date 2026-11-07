// FUN_0156ae58 @ 0156ae58 size=280 calls_out=3 calls_in=3
// strings: 

void FUN_0156ae58(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == 0) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x18);
      return;
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x10);
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar3 = uVar6 - *(uint *)(param_1 + 8);
    if (uVar6 < *(uint *)(param_1 + 8)) {
      uVar3 = uVar6;
    }
    uVar3 = *(uint *)(*(int *)(param_1 + 0xc) + uVar3 * 0xc + 8);
    if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar1,uVar3,uVar3,&DAT_018a8b58);
    }
    if (param_2 <= uVar3 - uVar1) {
      uVar1 = *(uint *)(param_1 + 8);
      iVar7 = *(int *)(param_1 + 0xc);
      param_2 = *(int *)(param_1 + 0x18) + param_2;
      uVar3 = *(uint *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x18) = param_2;
      do {
        iVar4 = iVar4 + -1;
        uVar6 = uVar3 - uVar1;
        if (uVar3 < uVar1) {
          uVar6 = uVar3;
        }
        uVar6 = *(uint *)(iVar7 + uVar6 * 0xc + 8);
        if (param_2 < uVar6) {
          return;
        }
        param_2 = param_2 - uVar6;
        uVar5 = uVar3 + 1;
        puVar2 = (uint *)(iVar7 + uVar3 * 0xc);
        uVar6 = *puVar2;
        uVar3 = uVar5 - *(uint *)(param_1 + 8);
        if (uVar5 < *(uint *)(param_1 + 8)) {
          uVar3 = uVar5;
        }
        *(uint *)(param_1 + 0x18) = param_2;
        *(int *)(param_1 + 0x14) = iVar4;
        *(uint *)(param_1 + 0x10) = uVar3;
        if ((uVar6 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(puVar2[1]);
        }
      } while (iVar4 != 0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00565930,0x41,&DAT_018a8b48);
}

