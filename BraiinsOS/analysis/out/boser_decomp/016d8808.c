// FUN_016d8808 @ 016d8808 size=204 calls_out=3 calls_in=2
// strings: 

void FUN_016d8808(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_3c [7];
  
  iVar3 = *param_2;
  uVar4 = *(uint *)(iVar3 + 0x20);
  if (0x7ffffffe < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d09fd8);
  }
  iVar1 = *(int *)(iVar3 + 0x2c) * 0x98;
  *(uint *)(iVar3 + 0x20) = uVar4 + 1;
  do {
    if (iVar1 == 0) {
      *(uint *)(iVar3 + 0x20) = uVar4;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_004cfde9,0x3b,&DAT_01d09fe8);
    }
    iVar2 = *(int *)(iVar3 + 0x28) + iVar1;
    iVar1 = iVar1 + -0x98;
  } while (*(int *)(iVar2 + -0x98) == 0x110009);
  iVar1 = *(int *)(iVar3 + 0x28) + iVar1;
  local_58 = *(undefined4 *)(iVar1 + 0x58);
  uStack_54 = *(undefined4 *)(iVar1 + 0x5c);
  uStack_50 = *(undefined4 *)(iVar1 + 0x60);
  uStack_4c = *(undefined4 *)(iVar1 + 100);
  uStack_48 = *(undefined4 *)(iVar1 + 0x68);
  uStack_44 = *(undefined4 *)(iVar1 + 0x6c);
  local_3c[0] = 4;
  FUN_016d4540(param_1,param_2[1],param_2[2],&local_58,local_3c);
  *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + -1;
  return;
}

