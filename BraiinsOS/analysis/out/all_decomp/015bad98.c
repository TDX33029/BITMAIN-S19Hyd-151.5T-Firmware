// FUN_015bad98 @ 015bad98 size=236 calls_out=2 calls_in=1
// strings: 

void FUN_015bad98(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [68];
  
  FUN_016dd606(auStack_a8,0,0x80);
  iVar4 = *(int *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar1 = (**(code **)(iVar4 + 0x14))(uVar3);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x40,&DAT_018aa5b8);
  }
  (**(code **)(iVar4 + 0x28))(uVar3,param_1 + 0x61,uVar1,1,0,2,auStack_a8,0x40,auStack_68,0x40,1,0);
  (**(code **)(param_2[1] + 0x10))(*param_2,auStack_a8,0x20);
  uVar3 = *param_3;
  pcVar2 = *(code **)(param_3[1] + 0x10);
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined1 *)(param_2 + 4) = 1;
  (*pcVar2)(uVar3,auStack_68,0x20);
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)(param_3 + 4) = 1;
  return;
}

