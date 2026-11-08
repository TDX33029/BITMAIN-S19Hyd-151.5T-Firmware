// FUN_016a5cfc @ 016a5cfc size=164 calls_out=1 calls_in=1
// strings: 

void FUN_016a5cfc(int param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *puVar1;
  undefined4 unaff_r6;
  int iVar2;
  undefined4 unaff_r7;
  int iVar3;
  int iVar4;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  iVar2 = *(int *)(param_1 + 8);
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = *(int *)(param_1 + 0xc); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134aee0(puVar1[-1],*puVar1,4,8);
    puVar1 = puVar1 + 5;
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 4),iVar2,4,0x14);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x20);
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    puVar1 = (undefined4 *)(iVar3 + iVar2 * 0x10);
    FUN_0134aee0(*puVar1,puVar1[1],4,8,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r11,unaff_lr);
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x18),iVar3,4,0x10);
  return;
}

